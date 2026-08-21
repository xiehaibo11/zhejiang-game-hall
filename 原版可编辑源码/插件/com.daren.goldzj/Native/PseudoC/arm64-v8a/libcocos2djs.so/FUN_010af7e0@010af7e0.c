
void FUN_010af7e0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_2 + 0x27);
  uVar1 = *(uint *)(*param_2 + 0x2f);
  uVar2 = FUN_010b0908(param_4);
  *(undefined1 *)(lVar3 + (ulong)uVar1 + param_3) = uVar2;
  return;
}

