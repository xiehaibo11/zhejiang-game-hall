
void FUN_009a64a0(long param_1)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 009a6300 with catch @ 009a64b4 */
  puVar1 = operator_new(0x10);
                    /* catch() { ... } // from try @ 009a62f4 with catch @ 009a64b8 */
                    /* catch() { ... } // from try @ 009a62d4 with catch @ 009a64bc */
  *puVar1 = &PTR_FUN_01c6a800;
                    /* catch() { ... } // from try @ 009a630c with catch @ 009a64cc */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

