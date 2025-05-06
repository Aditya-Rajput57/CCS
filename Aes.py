
from Crypto.Cipher import AES

key = b'C&F)H@McQf9TjWnZr'

cipher = AES.new(key, AES.MODE_EAX)

data = "Welcome to copyassignment.com!".encode()

nonce = cipher.nonce
# encrypt the data
ciphertext = cipher.encrypt(data)

print("Cipher text:", ciphertext)
# generate new instance with the key and nonce same as encryption cipher
cipher = AES.new(key, AES.MODE_EAX, nonce=nonce)
# decrypt the data
plaintext = cipher.decrypt(ciphertext)
print("Plain text:", plaintext)