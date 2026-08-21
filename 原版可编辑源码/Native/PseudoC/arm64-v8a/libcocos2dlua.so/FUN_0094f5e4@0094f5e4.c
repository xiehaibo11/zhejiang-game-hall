
void FUN_0094f5e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 0094f5b8 with catch @ 0094f5f0 */
  puVar1 = operator_new(0x18);
                    /* try { // try from 0094f604 to 00a4f71b has its CatchHandler @ 0094f604
                       catch() { ... } // from try @ 0094f604 with catch @ 0094f604
                       catch() { ... } // from try @ 0094f79c with catch @ 0094f604 */
  *puVar1 = &PTR_FUN_0169d200;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

