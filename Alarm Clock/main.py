while(True):
    hour = input()
    hour_stripped = hour.replace(" ",",")

    normal_hour = [x.strip() for x in hour_stripped.split(',')]

    iniHour = int(normal_hour[0])
    iniMin = int(normal_hour[1])

    finalHour = int(normal_hour[2])
    finalMin = int(normal_hour[3])

    count = 0

    hour = iniHour  * 60 + iniMin
    hour2 = finalHour * 60 + finalMin

    count = ((hour2 - hour) if (hour != hour2) else (''))

    if count != '':
        if count < 0:
            count = 1440 + count
            print(count)
        else:
            print(count)
    else:
        break
