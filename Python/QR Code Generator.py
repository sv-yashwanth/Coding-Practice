# QR Code
import qrcode
text = input("Enter a text or URL : ")
img = qrcode.make(text)
img.save('qrcode.jpg')
print("QR Code generated successfully.")