
byte * trim(byte *param_1)

{
  int iVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = param_1;
  if ((param_1 != (byte *)0x0) && (sVar2 = strlen((char *)param_1), sVar2 != 0)) {
    pbVar3 = param_1 + sVar2;
    if (0 < (long)sVar2) {
      do {
        iVar1 = isspace((uint)*param_1);
        if (iVar1 == 0) break;
        param_1 = param_1 + 1;
      } while (param_1 < pbVar3);
    }
    if (param_1 != pbVar3) {
      do {
        pbVar4 = pbVar3;
        if (pbVar4 <= param_1) break;
        iVar1 = isspace((uint)pbVar4[-1]);
        pbVar3 = pbVar4 + -1;
      } while (iVar1 != 0);
      *pbVar4 = 0;
      pbVar3 = param_1;
    }
  }
  return pbVar3;
}

