
void FUN_00dda4f0(void)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 00dda24c with catch @ 00dda4f0 */
                    /* catch() { ... } // from try @ 00dda22c with catch @ 00dda4f4 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_016e2728;
  return;
}

