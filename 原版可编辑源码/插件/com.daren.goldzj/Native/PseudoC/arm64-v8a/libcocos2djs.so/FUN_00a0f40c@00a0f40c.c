
long FUN_00a0f40c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 00a0f424 to 00b0f42f has its CatchHandler @ 00a0f568 */
  lVar2 = (*(code *)PTR_calloc_01d1b760)(1,0x8e68);
                    /* try { // try from 00a0f430 to 00b0f443 has its CatchHandler @ 00a0f558 */
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = (*(code *)PTR_malloc_01d1b740)(0x100);
  *(long *)(lVar2 + 0xaf8) = lVar3;
  if (lVar3 != 0) {
                    /* try { // try from 00a0f450 to 00b0f45b has its CatchHandler @ 00a0f554 */
                    /* try { // try from 00a0f45c to 00b0f46f has its CatchHandler @ 00a0f550 */
    *(undefined8 *)(lVar2 + 0xb00) = 0x100;
    iVar1 = FUN_00a23be4(lVar2,param_1);
    if (iVar1 == 0) {
      *(undefined8 *)(lVar2 + 0xad0) = 0;
      *(undefined8 *)(lVar2 + 0xaf0) = 0;
      *(undefined4 *)(lVar2 + 0x978) = *(undefined4 *)(param_1 + 0x978);
      *(undefined1 *)(lVar2 + 0x970) = *(undefined1 *)(param_1 + 0x970);
      if (*(long *)(param_1 + 0x938) != 0) {
        lVar3 = FUN_00a1b9e8(param_1,*(undefined8 *)(*(long *)(param_1 + 0x938) + 8),
                             *(undefined8 *)(lVar2 + 0x938),*(undefined1 *)(param_1 + 0x3d1));
        *(long *)(lVar2 + 0x938) = lVar3;
        if (lVar3 == 0) goto LAB_00a0f468;
      }
      if (*(long *)(param_1 + 0x928) != 0) {
        lVar3 = FUN_00a16b58();
        *(long *)(lVar2 + 0x928) = lVar3;
        if (lVar3 == 0) goto LAB_00a0f468;
      }
      if (*(long *)(param_1 + 0x908) != 0) {
        lVar3 = (*(code *)PTR_strdup_01d1b758)();
                    /* catch() { ... } // from try @ 00a0f490 with catch @ 00a0f534 */
        *(long *)(lVar2 + 0x908) = lVar3;
        if (lVar3 == 0) goto LAB_00a0f468;
        *(undefined1 *)(lVar2 + 0x910) = 1;
      }
      if (*(long *)(param_1 + 0x918) != 0) {
                    /* catch() { ... } // from try @ 00a0f484 with catch @ 00a0f54c */
                    /* catch() { ... } // from try @ 00a0f45c with catch @ 00a0f550 */
                    /* catch() { ... } // from try @ 00a0f450 with catch @ 00a0f554 */
        lVar3 = (*(code *)PTR_strdup_01d1b758)();
                    /* catch() { ... } // from try @ 00a0f430 with catch @ 00a0f558 */
        *(long *)(lVar2 + 0x918) = lVar3;
        if (lVar3 == 0) goto LAB_00a0f468;
        *(undefined1 *)(lVar2 + 0x920) = 1;
      }
                    /* catch() { ... } // from try @ 00a0f424 with catch @ 00a0f568 */
                    /* catch() { ... } // from try @ 00a0f4a4 with catch @ 00a0f56c */
      FUN_00a31288(lVar2);
      *(undefined4 *)(lVar2 + 0x8e60) = 0xc0dedbad;
      return lVar2;
    }
  }
LAB_00a0f468:
  FUN_00a16c3c(*(undefined8 *)(lVar2 + 0x928));
  *(undefined8 *)(lVar2 + 0x928) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar2 + 0xaf8));
                    /* try { // try from 00a0f484 to 00b0f48f has its CatchHandler @ 00a0f54c */
  *(undefined8 *)(lVar2 + 0xaf8) = 0;
                    /* try { // try from 00a0f490 to 00b0f49b has its CatchHandler @ 00a0f534 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar2 + 0x908));
  *(undefined8 *)(lVar2 + 0x908) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar2 + 0x918));
                    /* try { // try from 00a0f4a4 to 00b0f4bb has its CatchHandler @ 00a0f56c */
  *(undefined8 *)(lVar2 + 0x918) = 0;
  FUN_00a23b54(lVar2);
  (*(code *)PTR_free_01d1b748)(lVar2);
                    /* try { // try from 00a0f4bc to 00b0f5db has its CatchHandler @ 00a0f380 */
  return 0;
}

