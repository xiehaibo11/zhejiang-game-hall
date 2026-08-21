
undefined8 FUN_00c2c464(long param_1)

{
  FUN_00c29ac0(param_1,1);
  FUN_00c29ac0(param_1,2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + 0x18;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  FUN_00c298e0(param_1,FUN_00c2d7b0,0x55,3);
  return 1;
}

