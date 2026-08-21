
void FUN_01007d54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_01725918;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
                    /* catch() { ... } // from try @ 01007d30 with catch @ 01007d68 */
  return;
}

