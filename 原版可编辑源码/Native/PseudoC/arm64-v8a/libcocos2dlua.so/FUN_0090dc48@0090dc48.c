
void FUN_0090dc48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
                    /* catch() { ... } // from try @ 0090dbc8 with catch @ 0090dc64 */
                    /* catch() { ... } // from try @ 0090db94 with catch @ 0090dc68
                       catch() { ... } // from try @ 0090dc10 with catch @ 0090dc68 */
  *puVar1 = &PTR_FUN_0169c060;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

