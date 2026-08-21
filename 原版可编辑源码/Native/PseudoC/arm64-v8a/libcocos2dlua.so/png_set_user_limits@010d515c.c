
void png_set_user_limits(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x494) = param_2;
    *(undefined4 *)(param_1 + 0x498) = param_3;
  }
  return;
}

