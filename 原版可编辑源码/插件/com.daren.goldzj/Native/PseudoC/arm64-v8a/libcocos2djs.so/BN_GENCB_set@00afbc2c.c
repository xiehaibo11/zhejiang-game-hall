
void BN_GENCB_set(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}

