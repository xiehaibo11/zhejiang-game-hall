
undefined8 FUN_00a3f10c(long param_1,long *param_2,size_t *param_3,undefined1 *param_4)

{
  size_t *psVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  undefined8 uVar6;
  char *pcVar7;
  size_t __n;
  long lVar8;
  long *plVar9;
  
                    /* catch() { ... } // from try @ 00a3ef6c with catch @ 00a3f11c */
                    /* catch() { ... } // from try @ 00a3ef60 with catch @ 00a3f120 */
                    /* catch() { ... } // from try @ 00a3ef40 with catch @ 00a3f124 */
                    /* catch() { ... } // from try @ 00a3ef78 with catch @ 00a3f134 */
  if (param_2[0xc3] == 0) {
                    /* try { // try from 00a3f18c to 00b3f1eb has its CatchHandler @ 00a3f18c
                       catch() { ... } // from try @ 00a3f18c with catch @ 00a3f18c
                       catch() { ... } // from try @ 00a3f5d8 with catch @ 00a3f18c */
    __n = *param_3;
    plVar9 = (long *)(param_1 + 0xf8);
LAB_00a3f194:
    pcVar7 = (char *)*plVar9;
    while (0 < (long)__n) {
      if (*pcVar7 != '$') goto LAB_00a3f2d0;
      if ((long)__n < 5) {
LAB_00a3f268:
        *param_4 = 1;
        goto LAB_00a3f270;
      }
      *(uint *)(param_2 + 0xc5) = (uint)(byte)pcVar7[1];
      lVar4 = (ulong)CONCAT11(pcVar7[2],pcVar7[3]) + 4;
      sVar3 = __n - lVar4;
      if ((long)__n < lVar4) goto LAB_00a3f268;
      lVar8 = *param_2;
                    /* try { // try from 00a3f1ec to 00b3f203 has its CatchHandler @ 00a3f700 */
      puVar2 = (undefined8 *)(lVar8 + 0x2c0);
      if (*(long *)(lVar8 + 0x2c0) == 0) {
        puVar2 = (undefined8 *)(lVar8 + 0x2b0);
      }
      lVar5 = (*(code *)*puVar2)(pcVar7,1,lVar4,*(undefined8 *)(lVar8 + 600));
                    /* try { // try from 00a3f20c to 00b3f217 has its CatchHandler @ 00a3f6fc */
      if (lVar5 == 0x10000001) {
        pcVar7 = "Cannot pause RTP";
LAB_00a3f320:
        FUN_00a23020(lVar8,pcVar7);
                    /* try { // try from 00a3f328 to 00b3f34f has its CatchHandler @ 00a3f6a8 */
        FUN_00a23020(param_1,"Got an error writing an RTP packet");
        *param_4 = 0;
        (*(code *)PTR_free_01d1b748)(param_2[0xc3]);
        param_2[0xc3] = 0;
        param_3 = (size_t *)(param_2 + 0xc4);
        uVar6 = 0x17;
        goto LAB_00a3f380;
      }
                    /* try { // try from 00a3f218 to 00b3f223 has its CatchHandler @ 00a3f6f8 */
      if (lVar5 != lVar4) {
        pcVar7 = "Failed writing RTP data";
        goto LAB_00a3f320;
      }
      pcVar7 = pcVar7 + lVar4;
                    /* try { // try from 00a3f224 to 00b3f2b7 has its CatchHandler @ 00a3f710 */
      __n = sVar3;
      if (*(int *)(param_1 + 0x87c) == 0xb) {
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
      }
    }
    if (__n != 0) {
LAB_00a3f270:
      if (*pcVar7 == '$') {
        __dest = (void *)(*(code *)PTR_malloc_01d1b740)(__n);
        if (__dest != (void *)0x0) {
          memcpy(__dest,pcVar7,__n);
          (*(code *)PTR_free_01d1b748)(param_2[0xc3]);
          uVar6 = 0;
          param_2[0xc3] = (long)__dest;
          param_2[0xc4] = __n;
          goto LAB_00a3f380;
        }
        (*(code *)PTR_free_01d1b748)(param_2[0xc3]);
        param_2[0xc3] = 0;
        goto LAB_00a3f37c;
      }
    }
LAB_00a3f2d0:
                    /* try { // try from 00a3f2e8 to 00b3f2ef has its CatchHandler @ 00a3f6a4 */
    *(size_t *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + (*param_3 - __n);
    *param_3 = __n;
    (*(code *)PTR_free_01d1b748)(param_2[0xc3]);
    uVar6 = 0;
    param_2[0xc3] = 0;
    param_3 = (size_t *)(param_2 + 0xc4);
                    /* try { // try from 00a3f308 to 00b3f30f has its CatchHandler @ 00a3f664 */
  }
  else {
    plVar9 = param_2 + 0xc3;
    psVar1 = (size_t *)(param_2 + 0xc4);
    lVar4 = FUN_00a379b0(param_2[0xc3],*param_3 + param_2[0xc4]);
    if (lVar4 != 0) {
      *plVar9 = lVar4;
      memcpy((void *)(lVar4 + *psVar1),*(void **)(param_1 + 0xf8),*param_3);
      __n = *psVar1 + *param_3;
      *psVar1 = __n;
      goto LAB_00a3f194;
    }
    *plVar9 = 0;
LAB_00a3f37c:
    param_3 = (size_t *)(param_2 + 0xc4);
    uVar6 = 0x1b;
  }
LAB_00a3f380:
  *param_3 = 0;
  return uVar6;
}

