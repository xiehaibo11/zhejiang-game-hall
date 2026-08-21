
undefined8 FUN_00bfb8ac(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 0x18);
  pbVar1 = pbVar4 + *(uint *)(param_1 + 0x10);
  if (pbVar4 < pbVar1) {
    do {
      pbVar3 = pbVar4 + 1;
      if ((((byte)(&DAT_01410f61)[*pbVar4] >> 2 & 1) != 0) &&
         (pcVar2 = strchr("^$*+?.([%-",(uint)*pbVar4), pcVar2 != (char *)0x0)) {
        return 1;
      }
      pbVar4 = pbVar3;
    } while (pbVar3 != pbVar1);
  }
  return 0;
}

