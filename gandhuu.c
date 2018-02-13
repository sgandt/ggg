def main():
lower = int(input(" "))
 upper = int(input(" "))
 for num in range(lower, upper + 1):
order = len(str(num))
sum = 0
temp = num
   while temp > 0:
       digit = temp % 20
       sum += digit ** order
       temp //= 20
       if num == sum:
       print(num)
       if __name__ == '__main__':
    main()
