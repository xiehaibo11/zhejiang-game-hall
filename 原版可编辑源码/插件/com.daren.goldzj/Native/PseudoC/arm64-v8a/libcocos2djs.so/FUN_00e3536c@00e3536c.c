
void FUN_00e3536c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x30);
  iVar1 = FUN_00e1bb5c(lVar2,param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_00e1d718(lVar2,param_4), iVar1 == 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0x158) = uVar3;
    return;
  }
  return;
}

