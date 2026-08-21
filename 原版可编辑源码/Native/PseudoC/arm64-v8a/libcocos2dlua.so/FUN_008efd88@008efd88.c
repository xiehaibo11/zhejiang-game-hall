
void FUN_008efd88(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169bb78;
                    /* catch() { ... } // from try @ 008efd14 with catch @ 008efdac */
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* catch() { ... } // from try @ 008efd2c with catch @ 008efdb0 */
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

