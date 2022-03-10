import os 

host = input("Enter the domain name/ ip address")
os.system("nslookup " + host)
