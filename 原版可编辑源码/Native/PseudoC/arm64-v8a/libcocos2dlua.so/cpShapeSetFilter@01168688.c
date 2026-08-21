
void cpShapeSetFilter(long param_1,undefined8 param_2,undefined8 param_3)

{
  cpBodyActivate(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}

