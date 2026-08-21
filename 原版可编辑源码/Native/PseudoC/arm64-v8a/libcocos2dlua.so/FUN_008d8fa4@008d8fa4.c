
void FUN_008d8fa4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 008d8fac to 009d8fb7 has its CatchHandler @ 008d9100 */
  *param_2 = &PTR_FUN_0169b528;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

