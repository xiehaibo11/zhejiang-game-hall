
void FUN_00ded4a8(short *param_1,long param_2)

{
  if (*param_1 != 0) {
    (*DAT_01d545d8)(param_1,param_2);
  }
  if (param_1[0x10] != 0) {
    (*DAT_01d545d8)(param_1 + 0x10,param_2 + 4);
  }
  if (param_1[0x20] != 0) {
    (*DAT_01d545d8)(param_1 + 0x20,param_2 + 0x80);
  }
  if (param_1[0x30] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ded530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_01d545d8)(param_1 + 0x30,param_2 + 0x84);
    return;
  }
  return;
}

