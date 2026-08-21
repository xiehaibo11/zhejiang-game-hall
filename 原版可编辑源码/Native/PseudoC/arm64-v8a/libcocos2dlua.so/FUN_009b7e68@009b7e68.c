
void FUN_009b7e68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0169ebf8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
                    /* catch() { ... } // from try @ 009b7d74 with catch @ 009b7e7c */
  return;
}

