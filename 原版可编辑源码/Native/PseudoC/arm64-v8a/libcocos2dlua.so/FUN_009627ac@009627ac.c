
void FUN_009627ac(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009627b0 to 00a627c3 has its CatchHandler @ 00962848 */
  puVar1 = operator_new(0x10);
                    /* try { // try from 009627c8 to 00a627fb has its CatchHandler @ 0096284c */
  *puVar1 = &PTR_FUN_0169dcc0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

