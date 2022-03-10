import socket

HOST = "127.0.0.1"
PORT = 65432

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen(5)
    conn, addr = s.accept()
    with conn:
        print("Connected with the address", addr)
        while True:
            send_data = input("Enter the message to be sent to the client: ")
            if send_data == "q" or send_data == "Q":
                conn.sendall(send_data.encode())
                s.close()
                break
            else:
                conn.sendall(send_data.encode())
                recv_data = conn.recv(1024)
                recv_data = recv_data.decode()
                if recv_data == 'q' or recv_data == 'Q':
                    s.close()
                    break
                else:
                    print("Data received from the client: ", recv_data)
