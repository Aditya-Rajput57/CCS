import hashlib
from secrets import token_bytes

salt = token_bytes(16)
data = b"Welcome To The Sanjivani!"


sha_hash = hashlib.sha1()
sha_hash.update(salt + data)

digest = sha_hash.digest()

sha_value = "{SHA}" + salt.hex() + digest.hex()

print("Your SHA Hash Value is:", sha_value)
