
void FUN_00c07a40(undefined8 param_1)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  char *__s;
  long lVar4;
  
  lVar4 = 0;
  do {
    __s = (&PTR_DAT_016971e0)[lVar4];
    sVar2 = strlen(__s);
    lVar3 = FUN_00bfba1c(param_1,__s,sVar2);
    cVar1 = (char)lVar4;
    lVar4 = lVar4 + 1;
    *(char *)(lVar3 + 10) = cVar1 + '\x01';
    *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 0x20;
  } while (lVar4 != 0x16);
  return;
}

