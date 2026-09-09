"""Number gussing game"""

import random

comp = random.randint(1,10)

print('welcome to game guessing game')

while True:
    user=int (input('enter any no 1-10:'))
    print(f"computer no: {comp}")
    if comp ==user:
        print ('you guessed it right!!')
        break
    else:
         print('oopps, computer gor another no!!!')
        

              


      



