
undefined8 FUN_010e7d48(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x7b;
  (**(code **)(lVar1 + 8))(param_1,0xffffffff);
  puVar2 = (undefined8 *)param_1[5];
  *puVar2 = &DAT_01476b5c;
  puVar2[1] = 2;
  return 1;
}

