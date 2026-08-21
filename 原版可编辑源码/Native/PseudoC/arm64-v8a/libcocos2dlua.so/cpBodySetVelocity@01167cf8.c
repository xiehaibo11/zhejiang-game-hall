
void cpBodySetVelocity(undefined4 param_1,undefined4 param_2,long param_3)

{
  cpBodyActivate();
  *(undefined4 *)(param_3 + 0x30) = param_1;
  *(undefined4 *)(param_3 + 0x34) = param_2;
  return;
}

