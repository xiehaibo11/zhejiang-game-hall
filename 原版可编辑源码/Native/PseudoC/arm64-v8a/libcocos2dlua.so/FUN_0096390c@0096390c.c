
void FUN_0096390c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169df80;
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* catch() { ... } // from try @ 009638ec with catch @ 00963934 */
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

