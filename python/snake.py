import turtle
turtle.setup(1000,400,180,280)
turtle.penup()
turtle.fd(-250)
turtle.pendown()
turtle.pensize(25)
turtle.color("purple")
turtle.seth(-40)
for i in range(4):
    turtle.circle(100,80)
    turtle.circle(-100,80)
turtle.circle(40,40)
turtle.fd(40)
turtle.circle(16,180)
turtle.fd(40* 2/3)
turtle.done()
