
void FUN_008b75f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 008b75f8 to 009b760f has its CatchHandler @ 008b7660 */
  *param_2 = &PTR_FUN_0169a710;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

