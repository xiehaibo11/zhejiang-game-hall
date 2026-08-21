
undefined4 cpShapePointQuery(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  puVar1 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0x7f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  if (param_2 != (undefined8 *)0x0) {
    param_2[3] = (ulong)uStack_24 << 0x20;
    param_2[2] = 0x7f800000;
    param_2[1] = 0;
    *param_2 = 0;
    puVar1 = param_2;
  }
  (**(code **)(*param_1 + 0x18))(param_1,puVar1);
  return *(undefined4 *)(puVar1 + 2);
}

