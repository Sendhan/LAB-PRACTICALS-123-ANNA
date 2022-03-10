import socket
host='127.0.0.1'
port=65421
with socket.socket(socket.AF_INET,socket.SOCK_STREAM)as s:
    s.connect((host,port))
    while True:
        # print("\nEnter Message to server(q or Q to exit): ")
        send_data=input("\nEnter Message to server(q or Q to exit): ")
        s.sendall(send_data.encode())
        if(send_data=='q' or send_data=='Q'):
            s.close()
            exit(0)
        while True:
            recv_data=s.recv(1024)
            if(recv_data=='q' or recv_data=='Q'):
                s.close()
                exit(0)
            elif(recv_data==b"timeout"): #dont forget to add tis b
                print("Ack is not received\nResend Message: ",send_data)
                s.sendall(send_data.encode())
            else:
                print("\nReceived ack is: ",recv_data)
                break
