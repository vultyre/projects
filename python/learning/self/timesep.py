hourminsec = int(input("Please enter the time in HHMMSS: "))

seconds = str(hourminsec % 100)
hourmin = hourminsec // 100

minutes = str(hourmin % 100)
hours = str(hourmin // 100)

print("The current time is " + hours + ":" + minutes + ":" + seconds + ".")
