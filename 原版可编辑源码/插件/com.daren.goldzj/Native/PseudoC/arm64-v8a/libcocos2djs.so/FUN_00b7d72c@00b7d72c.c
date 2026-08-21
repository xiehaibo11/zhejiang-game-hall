
undefined8 FUN_00b7d72c(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong local_48;
  
  if (param_2 != 0) {
    if (param_3 == 0x1001) {
      do {
        local_48 = (ulong)*param_1;
        if ((param_4 != (code *)0x0) && (uVar6 = (*param_4)(local_48,param_5), (int)uVar6 < 1)) {
          return uVar6;
        }
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    else {
      do {
        if (param_3 == 0x1004) {
          bVar4 = *param_1;
          param_2 = param_2 + -4;
          pbVar1 = param_1 + 1;
          pbVar2 = param_1 + 2;
          pbVar3 = param_1 + 3;
          param_1 = param_1 + 4;
          local_48 = (ulong)bVar4 << 0x18 | (ulong)*pbVar1 << 0x10 | (ulong)*pbVar2 << 8 |
                     (ulong)*pbVar3;
        }
        else if (param_3 == 0x1002) {
          bVar4 = *param_1;
          param_2 = param_2 + -2;
          pbVar1 = param_1 + 1;
          param_1 = param_1 + 2;
          local_48 = (ulong)CONCAT11(bVar4,*pbVar1);
        }
        else {
          iVar5 = UTF8_getc(param_1,param_2,&local_48);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          param_2 = param_2 - iVar5;
          param_1 = param_1 + iVar5;
        }
        if ((param_4 != (code *)0x0) && (uVar6 = (*param_4)(local_48,param_5), (int)uVar6 < 1)) {
          return uVar6;
        }
      } while (param_2 != 0);
    }
  }
  return 1;
}

