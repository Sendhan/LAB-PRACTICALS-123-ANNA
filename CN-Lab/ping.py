import os

def myping(ip_addr):
    os.system("ping -c 4 " + ip_addr)
    
ip = input("Enter the IP address/domain name : ")
myping(ip)