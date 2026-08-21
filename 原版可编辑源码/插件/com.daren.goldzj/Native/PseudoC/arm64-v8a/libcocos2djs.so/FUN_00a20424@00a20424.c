
void * FUN_00a20424(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  void *__dest;
  uint uVar5;
  byte *__s;
  
  do {
    __s = param_1;
    bVar1 = *__s;
    if (bVar1 == 0x3a) break;
    param_1 = __s + 1;
  } while (bVar1 != 0);
  if (bVar1 != 0) {
    __s = __s + 1;
  }
  uVar5 = (uint)*__s;
  if (*__s != 0) {
    do {
      iVar2 = isspace(uVar5);
      if (iVar2 == 0) break;
      __s = __s + 1;
      uVar5 = (uint)*__s;
    } while (uVar5 != 0);
  }
  pbVar3 = (byte *)strchr((char *)__s,0xd);
  if ((pbVar3 == (byte *)0x0) && (pbVar3 = (byte *)strchr((char *)__s,10), pbVar3 == (byte *)0x0)) {
    sVar4 = strlen((char *)__s);
    pbVar3 = __s + sVar4;
    if (pbVar3 == (byte *)0x0) {
      return (void *)0x0;
    }
  }
  while ((__s < pbVar3 && (iVar2 = isspace((uint)*pbVar3), iVar2 != 0))) {
    pbVar3 = pbVar3 + -1;
  }
  __dest = (void *)(*(code *)PTR_malloc_01d1b740)(pbVar3 + (2 - (long)__s));
  if (__dest != (void *)0x0) {
    memcpy(__dest,__s,(size_t)(pbVar3 + (1 - (long)__s)));
    *(byte *)((long)__dest + (long)(pbVar3 + (1 - (long)__s))) = 0;
  }
  return __dest;
}

