import hashlib
from secrets import token_bytes

key = token_bytes(16)
data = b"Konichwa Minasan!"

md5_hash = hashlib.md5()
md5_hash.update(data)
digest = md5_hash.hexdigest()

print("Your Hash Value is:", digest)
