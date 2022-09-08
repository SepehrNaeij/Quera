def game(number):
    a = number//10
    b = number - ( a*10 )
    if  b>=a :
        result = b -a
    else:
        result = a - b
    return result        