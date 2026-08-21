
void FUN_010077d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_01725498;
  uVar1 = *(undefined8 *)(param_1 + 8);
                    /* catch() { ... } // from try @ 01007784 with catch @ 010077e8 */
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

