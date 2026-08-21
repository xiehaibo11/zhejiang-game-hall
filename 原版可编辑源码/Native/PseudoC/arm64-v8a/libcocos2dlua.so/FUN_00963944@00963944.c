
void FUN_00963944(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 00963948 to 00a639ff has its CatchHandler @ 00963948
                       catch() { ... } // from try @ 00963948 with catch @ 00963948
                       catch() { ... } // from try @ 00963a80 with catch @ 00963948 */
  *param_2 = &PTR_FUN_0169df80;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

