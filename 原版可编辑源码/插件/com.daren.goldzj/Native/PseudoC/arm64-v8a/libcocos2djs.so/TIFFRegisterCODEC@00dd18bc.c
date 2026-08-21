
long TIFFRegisterCODEC(undefined2 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  long lVar3;
  
  sVar1 = strlen(param_2);
  puVar2 = _TIFFmalloc(sVar1 + 0x29);
  if (puVar2 == (undefined8 *)0x0) {
    TIFFErrorExt(0,"TIFFRegisterCODEC","No space to register compression scheme %s",param_2);
    lVar3 = 0;
  }
  else {
    puVar2[1] = puVar2 + 2;
    puVar2[2] = puVar2 + 5;
    strcpy((char *)(puVar2 + 5),param_2);
    lVar3 = puVar2[1];
    *(undefined2 *)(lVar3 + 8) = param_1;
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    *puVar2 = DAT_01d3e8b8;
    DAT_01d3e8b8 = puVar2;
  }
  return lVar3;
}

