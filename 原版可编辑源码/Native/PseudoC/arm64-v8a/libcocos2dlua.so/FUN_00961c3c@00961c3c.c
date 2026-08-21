
void FUN_00961c3c(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00961c3c to 00a61c3f has its CatchHandler @ 00961c74 */
                    /* try { // try from 00961c40 to 00a61c87 has its CatchHandler @ 00961bf0 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_0169da00;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

