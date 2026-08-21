
void FUN_00a0f584(long param_1)

{
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8cb8));
                    /* catch() { ... } // from try @ 00a0f3d4 with catch @ 00a0f5b0 */
  *(undefined8 *)(param_1 + 0x8cc0) = 0;
  *(undefined8 *)(param_1 + 0x8cb8) = 0;
  FUN_00a23f44(param_1);
                    /* catch() { ... } // from try @ 00a0f3e0 with catch @ 00a0f5b8 */
  FUN_00a23b54(param_1);
                    /* catch() { ... } // from try @ 00a0f3f4 with catch @ 00a0f5c0 */
  memset((void *)(param_1 + 0x220),0,0x6e8);
  FUN_00a23f88((void *)(param_1 + 0x220));
                    /* try { // try from 00a0f5dc to 00b0f627 has its CatchHandler @ 00a0f5dc
                       catch() { ... } // from try @ 00a0f5dc with catch @ 00a0f5dc
                       catch() { ... } // from try @ 00a0f6e4 with catch @ 00a0f5dc */
  memset((void *)(param_1 + 0x940),0,400);
  FUN_00a31288(param_1);
  *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) | 0x10;
  *(undefined8 *)(param_1 + 0x8b10) = 0xffffffffffffffff;
  return;
}

