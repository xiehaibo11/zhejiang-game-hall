
void cpConstraintSetCollideBodies(long param_1,undefined1 param_2)

{
  cpBodyActivate(*(undefined8 *)(param_1 + 0x10));
  cpBodyActivate(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  return;
}

