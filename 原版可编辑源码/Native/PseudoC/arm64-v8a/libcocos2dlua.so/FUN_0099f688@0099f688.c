
void FUN_0099f688(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
                    /* catch() { ... } // from try @ 0099f65c with catch @ 0099f6a8 */
  *puVar1 = &PTR_FUN_0169e610;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

