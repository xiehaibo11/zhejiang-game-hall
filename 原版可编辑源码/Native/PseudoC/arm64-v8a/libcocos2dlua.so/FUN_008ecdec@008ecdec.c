
void FUN_008ecdec(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 008ecdf0 to 009ecdf7 has its CatchHandler @ 008ece0c */
                    /* try { // try from 008ecdf8 to 009ece2b has its CatchHandler @ 008ecce0 */
  puVar1 = operator_new(0x10);
                    /* catch() { ... } // from try @ 008ecd4c with catch @ 008ece0c
                       catch() { ... } // from try @ 008ecdf0 with catch @ 008ece0c */
  *puVar1 = &PTR_FUN_0169b9c8;
                    /* catch() { ... } // from try @ 008ecd30 with catch @ 008ece10
                       catch() { ... } // from try @ 008ecda0 with catch @ 008ece10 */
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

