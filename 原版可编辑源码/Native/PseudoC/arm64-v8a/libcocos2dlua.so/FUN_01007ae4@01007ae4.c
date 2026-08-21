
void FUN_01007ae4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 01007a68 with catch @ 01007ae4 */
  *param_2 = &PTR_FUN_01725718;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}

