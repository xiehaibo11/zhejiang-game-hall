
void FUN_0100773c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 01007740 to 01107783 has its CatchHandler @ 01007740
                       catch() { ... } // from try @ 01007740 with catch @ 01007740
                       catch() { ... } // from try @ 010077bc with catch @ 01007740 */
  *param_2 = &PTR_FUN_01725418;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

