
void __emutls_register_common(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  if (*param_1 < param_2) {
    *param_1 = param_2;
    param_1[3] = 0;
  }
  if (param_1[1] < param_3) {
    param_1[1] = param_3;
  }
  if ((param_4 != 0) && (param_2 == *param_1)) {
    param_1[3] = param_4;
  }
  return;
}

