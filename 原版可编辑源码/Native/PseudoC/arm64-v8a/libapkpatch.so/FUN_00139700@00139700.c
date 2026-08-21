
int FUN_00139700(undefined8 param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      uVar1 = *param_2;
      uVar3 = FUN_0013c9ec(param_1,uVar1);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0013d560(param_1,uVar1);
        iVar4 = iVar2 + iVar4;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return iVar4;
}

