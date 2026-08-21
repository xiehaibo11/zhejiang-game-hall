
void FUN_00dec60c(long param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  if (0 < param_4) {
    do {
      (*DAT_01d544c0)(param_1,param_3,param_5);
      param_4 = param_4 + -1;
      param_1 = param_1 + param_2;
    } while (param_4 != 0);
  }
  return;
}

