
undefined8 FUN_010a1e74(long param_1,long param_2)

{
  *(long *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x28);
  return 0;
}

