
void FUN_008f9dd0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 008f9dd8 to 009f9def has its CatchHandler @ 008f9e78 */
  *param_2 = &PTR_FUN_0169bd98;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

