
void FUN_010b7d24(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_2 + 0x27);
  uVar1 = *(uint *)(*param_2 + 0x2f);
  uVar2 = FUN_010b8cdc(param_4);
  *(undefined4 *)(lVar3 + (ulong)uVar1 + param_3 * 4) = uVar2;
  return;
}

