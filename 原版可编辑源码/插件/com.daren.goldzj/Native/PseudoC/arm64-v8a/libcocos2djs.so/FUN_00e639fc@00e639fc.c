
void FUN_00e639fc(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    param_1[9] = 0;
    if ((long *)param_1[10] != param_1 + 0xe) {
      FUN_00e139fc(lVar1);
      param_1[10] = 0;
    }
    param_1[0xb] = 0;
    if ((long *)param_1[0xc] != param_1 + 0xc2) {
      FUN_00e139fc(lVar1);
      param_1[0xc] = 0;
    }
    param_1[0x146] = 0;
    if ((long *)param_1[0x147] != param_1 + 0x14b) {
      FUN_00e139fc(lVar1);
      param_1[0x147] = 0;
    }
    param_1[0x148] = 0;
    if ((long *)param_1[0x149] != param_1 + 0x1ff) {
      FUN_00e139fc(lVar1);
      param_1[0x149] = 0;
    }
    if ((long *)param_1[8] != param_1 + 0x287) {
      FUN_00e139fc(lVar1);
      param_1[8] = 0;
    }
    param_1[7] = 0;
    if ((long *)param_1[6] != param_1 + 0x28f) {
      FUN_00e139fc(lVar1);
      param_1[6] = 0;
    }
    param_1[5] = 0;
    *param_1 = 0;
  }
  return;
}

