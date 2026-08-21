
void FUN_0090e1e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 0090e150 with catch @ 0090e1ec */
                    /* catch() { ... } // from try @ 0090e0d4 with catch @ 0090e1f0
                       catch() { ... } // from try @ 0090e198 with catch @ 0090e1f0 */
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169c180;
                    /* try { // try from 0090e20c to 00a0e247 has its CatchHandler @ 0090e20c
                       catch() { ... } // from try @ 0090e20c with catch @ 0090e20c
                       catch() { ... } // from try @ 0090e2d8 with catch @ 0090e20c
                       catch() { ... } // from try @ 0090e320 with catch @ 0090e20c */
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

