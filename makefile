OBJ = main.o eval.o getscore.o classify.o output.o
APPNAME = score.a

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c
	gcc -c -o $@ $<

clean :
	rm $(OBJ) $(APPNAME)

tar :
	tar cf project.tar *

backup :
	scp project.tar e1700684@shell.puv.fi:.
