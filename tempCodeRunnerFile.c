 struct compu PC;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int indice_aleatorio = rand() % 6;
    PC.velocidad = 1+rand()%3;
    PC.anio = 2015+rand()%9;
    PC.cantidad = 1+rand()%9;
    PC.tipo_cpu = tipos[indice_aleatorio];
    printf("%s", PC.tipo_cpu); 
