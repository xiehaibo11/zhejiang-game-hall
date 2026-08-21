
void FT_GlyphLoader_Done(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (param_1[4] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[5] = 0;
    if (param_1[6] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[6] = 0;
    if (param_1[8] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[8] = 0;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    memcpy(param_1 + 0xc,param_1 + 3,0x48);
                    /* WARNING: Could not recover jumptable at 0x0105b120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    return;
  }
  return;
}

