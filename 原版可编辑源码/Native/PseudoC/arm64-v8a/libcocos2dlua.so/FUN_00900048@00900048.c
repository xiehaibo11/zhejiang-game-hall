
void FUN_00900048(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 00900050 to 00a0009f has its CatchHandler @ 00900160 */
  *param_2 = &PTR_FUN_0169bf40;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

