
void FUN_01007df0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 01007df4 to 01107e03 has its CatchHandler @ 01007e14 */
  *param_2 = &PTR_FUN_01725998;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

