
void FUN_01007be4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
                    /* catch() { ... } // from try @ 01007c6c with catch @ 01007c04 */
  *puVar1 = &PTR_FUN_01725818;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

