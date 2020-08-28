hour = input()
hour_stripped = hour.replace(" ",",")

normal_hour = [x.strip() for x in hour_stripped.split(',')]

hi = int(normal_hour[0])
mi = int(normal_hour[1])

hf = int(normal_hour[2])
mf = int(normal_hour[3])


m = (hf*60 + mf) - (hi*60 + mi)
if ( m <= 0 ):
    m += 1440 
h =int(m/60) 
m %= 60

if(h == 24 & m > 0):
    h = 0
print("O JOGO DUROU",h,"HORAS(S) E",m,"MINUTO(S)")
