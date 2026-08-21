
undefined8 FUN_00a55af4(long param_1,long *param_2,size_t *param_3,undefined1 *param_4)

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
  
  if (param_2[0xc3] == 0) {
    __n = *param_3;
    plVar9 = (long *)(param_1 + 0xf8);
LAB_00a55b7c:
    pcVar7 = (char *)*plVar9;
    while (0 < (long)__n) {
      if (*pcVar7 != '$') goto LAB_00a55cb8;
      if ((long)__n < 5) {
LAB_00a55c50:
        *param_4 = 1;
        goto LAB_00a55c58;
      }
      *(uint *)(param_2 + 0xc5) = (uint)(byte)pcVar7[1];
      lVar4 = (ulong)CONCAT11(pcVar7[2],pcVar7[3]) + 4;
      sVar3 = __n - lVar4;
      if ((long)__n < lVar4) goto LAB_00a55c50;
      lVar8 = *param_2;
      puVar2 = (undefined8 *)(lVar8 + 0x2c0);
      if (*(long *)(lVar8 + 0x2c0) == 0) {
        puVar2 = (undefined8 *)(lVar8 + 0x2b0);
      }
      lVar5 = (*(code *)*puVar2)(pcVar7,1,lVar4,*(undefined8 *)(lVar8 + 600));
      if (lVar5 == 0x10000001) {
        pcVar7 = "Cannot pause RTP";
LAB_00a55d08:
        FUN_00a38a08(lVar8,pcVar7);
        FUN_00a38a08(param_1,"Got an error writing an RTP packet");
        *param_4 = 0;
                    /* try { // try from 00a55d34 to 00b55d87 has its CatchHandler @ 00a55d34
                       catch() { ... } // from try @ 00a55d34 with catch @ 00a55d34
                       catch() { ... } // from try @ 00a55e2c with catch @ 00a55d34
                       catch() { ... } // from try @ 00a55e8c with catch @ 00a55d34 */
        (*(code *)PTR_free_01769a00)(param_2[0xc3]);
        param_2[0xc3] = 0;
        param_3 = (size_t *)(param_2 + 0xc4);
        uVar6 = 0x17;
        goto LAB_00a55d68;
      }
      if (lVar5 != lVar4) {
        pcVar7 = "Failed writing RTP data";
        goto LAB_00a55d08;
      }
      pcVar7 = pcVar7 + lVar4;
      __n = sVar3;
      if (*(int *)(param_1 + 0x87c) == 0xb) {
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
      }
    }
    if (__n != 0) {
LAB_00a55c58:
      if (*pcVar7 == '$') {
        __dest = (void *)(*(code *)PTR_malloc_017699f8)(__n);
        if (__dest != (void *)0x0) {
          memcpy(__dest,pcVar7,__n);
          (*(code *)PTR_free_01769a00)(param_2[0xc3]);
          uVar6 = 0;
          param_2[0xc3] = (long)__dest;
          param_2[0xc4] = __n;
          goto LAB_00a55d68;
        }
        (*(code *)PTR_free_01769a00)(param_2[0xc3]);
        param_2[0xc3] = 0;
        goto LAB_00a55d64;
      }
    }
LAB_00a55cb8:
    *(size_t *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + (*param_3 - __n);
    *param_3 = __n;
    (*(code *)PTR_free_01769a00)(param_2[0xc3]);
    uVar6 = 0;
    param_2[0xc3] = 0;
    param_3 = (size_t *)(param_2 + 0xc4);
  }
  else {
    plVar9 = param_2 + 0xc3;
    psVar1 = (size_t *)(param_2 + 0xc4);
    lVar4 = FUN_00a4e398(param_2[0xc3],*param_3 + param_2[0xc4]);
    if (lVar4 != 0) {
      *plVar9 = lVar4;
      memcpy((void *)(lVar4 + *psVar1),*(void **)(param_1 + 0xf8),*param_3);
      __n = *psVar1 + *param_3;
      *psVar1 = __n;
      goto LAB_00a55b7c;
    }
    *plVar9 = 0;
LAB_00a55d64:
    param_3 = (size_t *)(param_2 + 0xc4);
    uVar6 = 0x1b;
  }
LAB_00a55d68:
  *param_3 = 0;
  return uVar6;
}

