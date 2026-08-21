
byte * trim(byte *param_1)

{
  int iVar1;
  size_t sVar2;
  byte *pbVar3;
  
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  sVar2 = strlen((char *)param_1);
  pbVar3 = param_1 + sVar2;
  if (param_1 == pbVar3) {
    return param_1;
  }
  if (param_1 < pbVar3) {
    while (iVar1 = isspace((uint)*param_1), iVar1 != 0) {
      param_1 = param_1 + 1;
      if (param_1 == pbVar3) {
        return pbVar3;
      }
    }
    if (pbVar3 == param_1) {
      return pbVar3;
    }
    if (param_1 <= pbVar3) {
      do {
        iVar1 = isspace((uint)pbVar3[-1]);
        if (iVar1 == 0) break;
        pbVar3 = pbVar3 + -1;
      } while (pbVar3 != param_1);
    }
  }
  *pbVar3 = 0;
  return param_1;
}

