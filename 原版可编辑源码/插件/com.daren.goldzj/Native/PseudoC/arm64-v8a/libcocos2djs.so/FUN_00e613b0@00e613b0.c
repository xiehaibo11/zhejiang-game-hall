
void FUN_00e613b0(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2[5];
  FUN_00e65c2c(param_1,param_2,0);
  FUN_00e65c2c(param_1,param_2,1);
  return;
}

