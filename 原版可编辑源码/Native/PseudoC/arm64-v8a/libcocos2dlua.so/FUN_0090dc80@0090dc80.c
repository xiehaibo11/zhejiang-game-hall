
void FUN_0090dc80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 0090dc84 to 00a0dcd7 has its CatchHandler @ 0090dc84
                       catch() { ... } // from try @ 0090dc84 with catch @ 0090dc84
                       catch() { ... } // from try @ 0090dd6c with catch @ 0090dc84
                       catch() { ... } // from try @ 0090ddb4 with catch @ 0090dc84 */
  *param_2 = &PTR_FUN_0169c060;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

