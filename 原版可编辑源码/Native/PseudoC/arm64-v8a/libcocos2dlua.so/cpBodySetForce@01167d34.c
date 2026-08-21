
void cpBodySetForce(undefined4 param_1,undefined4 param_2,long param_3)

{
  cpBodyActivate();
  *(undefined4 *)(param_3 + 0x38) = param_1;
  *(undefined4 *)(param_3 + 0x3c) = param_2;
  return;
}

