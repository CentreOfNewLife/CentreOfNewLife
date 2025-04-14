def decrypt():
    key =  # The sacred number
    encrypted = [1, 67, 68, 74, 79, 79, 10, 104, 79, 95, 69, 69]
    message = ''.join([chr(c ^ key) for c in encrypted])
    return message
  
if __name__ == "__main__":
    print("Decoding the sacred message...")
    print(":bulle_de_parole:", decrypt())  # Output: Kinder Bueno
