import os

def mytrace(ip_addr):
    os.system("traceroute " + ip_addr)

ip = input("Enter the IP address/domain name : ")
mytrace(ip)