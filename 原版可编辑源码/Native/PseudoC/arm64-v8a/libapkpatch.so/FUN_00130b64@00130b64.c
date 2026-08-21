
undefined8 FUN_00130b64(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_00130b1c();
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  uVar2 = FUN_00130a90(param_1);
  return uVar2;
}

