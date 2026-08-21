
void FUN_009b7e30(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
                    /* catch() { ... } // from try @ 009b7df0 with catch @ 009b7e48 */
                    /* catch() { ... } // from try @ 009b7d9c with catch @ 009b7e4c */
  *puVar1 = &PTR_FUN_0169ebf8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

