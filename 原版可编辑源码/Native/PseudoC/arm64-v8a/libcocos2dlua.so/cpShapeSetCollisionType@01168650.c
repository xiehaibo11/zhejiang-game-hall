
void cpShapeSetCollisionType(long param_1,undefined8 param_2)

{
  cpBodyActivate(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}

