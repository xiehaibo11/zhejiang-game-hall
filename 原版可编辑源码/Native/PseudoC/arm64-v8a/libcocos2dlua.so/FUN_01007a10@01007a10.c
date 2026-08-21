
void FUN_01007a10(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 01007a78 with catch @ 01007a1c */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_01725698;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

