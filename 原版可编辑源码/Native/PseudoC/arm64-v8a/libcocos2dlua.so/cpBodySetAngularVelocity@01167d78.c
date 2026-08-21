
void cpBodySetAngularVelocity(undefined4 param_1,long param_2)

{
  cpBodyActivate();
  *(undefined4 *)(param_2 + 0x44) = param_1;
  return;
}

