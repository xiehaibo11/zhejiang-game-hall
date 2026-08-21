
byte * FUN_00bfc354(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  byte *local_8;
  
  if (param_1 != (byte *)0x0) {
    uVar7 = (uint)*param_1;
    uVar5 = 0;
    pbVar4 = param_1;
    iVar2 = param_3;
    if (6 < *param_1) goto LAB_00bfc3e8;
    while (uVar7 != 0) {
      local_8 = param_1 + 1;
      iVar2 = FUN_00c1b56c(&local_8);
      uVar5 = uVar5 + iVar2;
      iVar2 = param_3;
      while( true ) {
        if (param_2 < uVar5) {
          return (byte *)0x0;
        }
        iVar3 = FUN_00c1b56c(&local_8);
        param_3 = iVar2;
        if ((param_2 < iVar3 + uVar5) && (param_3 = iVar2 + -1, iVar2 == 0)) {
          if (uVar7 < 7) {
            pcVar6 = "(for index)";
            while (uVar7 = uVar7 - 1, pbVar4 = (byte *)pcVar6, uVar7 != 0) {
              do {
                pcVar6 = (char *)(pbVar4 + 1);
                bVar1 = *pbVar4;
                pbVar4 = (byte *)pcVar6;
              } while (bVar1 != 0);
            }
            return (byte *)pcVar6;
          }
          return param_1;
        }
        uVar7 = (uint)*local_8;
        param_1 = local_8;
        pbVar4 = local_8;
        iVar2 = param_3;
        if (uVar7 < 7) break;
LAB_00bfc3e8:
        do {
          local_8 = pbVar4;
          pbVar4 = local_8 + 1;
        } while (*pbVar4 != 0);
        local_8 = local_8 + 2;
        iVar3 = FUN_00c1b56c(&local_8);
        uVar5 = uVar5 + iVar3;
      }
    }
  }
  return (byte *)0x0;
}

