
undefined8 FUN_00c2c4bc(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_00c29ac0(param_1,1);
  FUN_00c29cf0(param_1,2);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = FUN_00c29da0(param_1,3,0xffffffff);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x14) = 0xfff90000;
  return 0;
}

