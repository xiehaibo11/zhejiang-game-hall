
void closeElfInfoParser(void)

{
  void *__ptr;
  long lVar1;
  void *pvVar2;
  
  pvVar2 = DAT_0013edc0;
  do {
    DAT_0013edc0 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    while( true ) {
      pvVar2 = *(void **)((long)DAT_0013edc0 + 0x10);
      if (*(long **)((long)DAT_0013edc0 + 8) != (long *)0x0) break;
      free(DAT_0013edc0);
      DAT_0013edc0 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    lVar1 = **(long **)((long)DAT_0013edc0 + 8);
    if (lVar1 != 0) {
      freeSymbolTable(lVar1);
    }
    __ptr = DAT_0013edc0;
    free(*(void **)((long)DAT_0013edc0 + 8));
    free(__ptr);
  } while( true );
}

