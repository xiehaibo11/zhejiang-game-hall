
void cpBodySetCenterOfGravity(undefined4 param_1,undefined4 param_2,long param_3)

{
  cpBodyActivate();
  *(undefined4 *)(param_3 + 0x20) = param_1;
  *(undefined4 *)(param_3 + 0x24) = param_2;
  return;
}

