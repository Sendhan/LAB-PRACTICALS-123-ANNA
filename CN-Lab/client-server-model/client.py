import socket

HOST = "127.0.0.1"
PORT = 65432

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    while True:
        recv_data = s.recv(1024)
        recv_data = recv_data.decode()
        if recv_data == 'q' or recv_data == 'Q':
            s.close()
            break
        else:
            print("Message received from server: ", recv_data)
            send_data = input("Enter the message to be sent to the server: ")
            if send_data == 'q' or send_data == 'Q':
                s.sendall(send_data.encode())
                s.close()
                break
            else:
                s.sendall(send_data.encode())