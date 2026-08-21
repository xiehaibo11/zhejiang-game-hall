
uint FUN_0010e398(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (byte *)0x0) {
    uVar3 = (uint)(param_2 != (byte *)0x0);
  }
  else if (param_2 == (byte *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)*param_1;
    iVar1 = tolower((uint)*param_1);
    iVar2 = tolower((uint)*param_2);
    if (iVar1 == iVar2) {
      do {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if (uVar3 == 0) {
          return 0;
        }
        uVar3 = (uint)*param_1;
        iVar1 = tolower(uVar3);
        iVar2 = tolower((uint)*param_2);
      } while (iVar1 == iVar2);
    }
    uVar3 = iVar1 - iVar2;
  }
  return uVar3;
}

