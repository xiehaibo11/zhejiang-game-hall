
void FUN_009629f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_0169dd50;
                    /* try { // try from 00962a1c to 00a62a1f has its CatchHandler @ 00962a64 */
                    /* try { // try from 00962a20 to 00a62a77 has its CatchHandler @ 009629d0 */
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

