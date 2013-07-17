start = int(input("What is the current hour? "))
timer = int(input("In how long would you like the alarm to sound? "))
end = start + timer

days = end // 24
hours = end % 24

print("Your alarm will sound in",days,"days at",hours)
