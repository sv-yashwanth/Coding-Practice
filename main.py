import socket

website = input("Enter website (eg : google.com):")
ip = socket.gethostbyname(website)

print(f"IP Adress of {website}: {ip}")