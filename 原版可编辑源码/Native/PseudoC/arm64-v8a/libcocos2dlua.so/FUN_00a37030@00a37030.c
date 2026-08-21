
undefined8 FUN_00a37030(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *__s;
  ulong uVar6;
  
  sVar2 = strlen(param_2);
  uVar3 = FUN_00a4a220(param_1,param_2,sVar2);
  if ((int)uVar3 != 0) {
    __s = (byte *)(param_1 + sVar2);
    uVar5 = (uint)*__s;
    if (*__s != 0) {
      do {
        iVar1 = isspace(uVar5);
        if (iVar1 == 0) break;
        __s = __s + 1;
        uVar5 = (uint)*__s;
      } while (uVar5 != 0);
    }
    pbVar4 = (byte *)strchr((char *)__s,0xd);
    if ((pbVar4 == (byte *)0x0) && (pbVar4 = (byte *)strchr((char *)__s,10), pbVar4 == (byte *)0x0))
    {
      sVar2 = strlen((char *)__s);
      pbVar4 = __s + sVar2;
    }
    sVar2 = strlen(param_3);
    for (uVar6 = (long)pbVar4 - (long)__s; sVar2 <= uVar6; uVar6 = uVar6 - 1) {
                    /* try { // try from 00a370d4 to 00b3712f has its CatchHandler @ 00a370d4
                       catch() { ... } // from try @ 00a370d4 with catch @ 00a370d4
                       catch() { ... } // from try @ 00a37248 with catch @ 00a370d4
                       catch() { ... } // from try @ 00a372fc with catch @ 00a370d4 */
      iVar1 = FUN_00a4a220(__s,param_3,sVar2);
      if (iVar1 != 0) {
        return 1;
      }
      __s = __s + 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}

