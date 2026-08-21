
void FUN_009e70c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 009e706c with catch @ 009e70cc */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_016a0988;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

