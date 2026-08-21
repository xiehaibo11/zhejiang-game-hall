
void cpShapeSetSurfaceVelocity(undefined4 param_1,undefined4 param_2,long param_3)

{
  cpBodyActivate(*(undefined8 *)(param_3 + 0x10));
  *(undefined4 *)(param_3 + 0x48) = param_1;
  *(undefined4 *)(param_3 + 0x4c) = param_2;
  return;
}

