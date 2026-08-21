
void FUN_009bc880(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009bc88c to 00abc903 has its CatchHandler @ 009bc59c */
  puVar1 = operator_new(0x10);
                    /* catch() { ... } // from try @ 009bc61c with catch @ 009bc894 */
                    /* catch() { ... } // from try @ 009bc610 with catch @ 009bc898 */
  *puVar1 = &PTR_FUN_01c6afb8;
                    /* catch() { ... } // from try @ 009bc5f0 with catch @ 009bc89c */
  return;
}

