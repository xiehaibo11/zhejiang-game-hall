
void FUN_00a2d4b4(long param_1)

{
                    /* catch() { ... } // from try @ 00a2d494 with catch @ 00a2d4cc */
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* try { // try from 00a2d4e0 to 00b2d5df has its CatchHandler @ 00a2d4e0
                       catch() { ... } // from try @ 00a2d4e0 with catch @ 00a2d4e0
                       catch() { ... } // from try @ 00a2d660 with catch @ 00a2d4e0 */
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

