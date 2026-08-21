
void FUN_00a02e40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_016a1a60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
                    /* try { // try from 00a02e54 to 00b02e9f has its CatchHandler @ 00a02e54
                       catch() { ... } // from try @ 00a02e54 with catch @ 00a02e54
                       catch() { ... } // from try @ 00a02ea4 with catch @ 00a02e54 */
  return;
}

