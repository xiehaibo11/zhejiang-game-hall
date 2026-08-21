
void FUN_0094f408(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0094f408 to 00a4f483 has its CatchHandler @ 0094f1d0 */
                    /* catch() { ... } // from try @ 0094f2d0 with catch @ 0094f410
                       catch() { ... } // from try @ 0094f400 with catch @ 0094f410 */
                    /* catch() { ... } // from try @ 0094f2b4 with catch @ 0094f414 */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169d080;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

