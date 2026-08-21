
undefined8 FUN_00a23524(long *param_1,uint param_2,void *param_3,size_t param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  
                    /* try { // try from 00a23524 to 00b2352b has its CatchHandler @ 00a235f0 */
                    /* try { // try from 00a2352c to 00b23533 has its CatchHandler @ 00a235e8 */
  if (param_4 != 0) {
    lVar9 = *param_1;
    if ((*(byte *)(lVar9 + 0x1e4) >> 4 & 1) != 0) {
      if (*(uint *)(lVar9 + 0x8b50) != param_2) {
        return 0x38;
      }
      plVar1 = (long *)(lVar9 + 0x8b48);
                    /* try { // try from 00a2358c to 00b235a3 has its CatchHandler @ 00a235f8 */
      lVar8 = *plVar1;
                    /* try { // try from 00a235a4 to 00b2361b has its CatchHandler @ 00a234e0 */
      lVar4 = (*(code *)PTR_realloc_01d1b750)(*(long *)(lVar9 + 0x8b40),lVar8 + param_4);
      if (lVar4 == 0) {
        return 0x1b;
      }
      memcpy((void *)(lVar4 + *plVar1),param_3,param_4);
      *(long *)(lVar9 + 0x8b40) = lVar4;
      *plVar1 = lVar8 + param_4;
      return 0;
    }
    if ((param_2 & 1) == 0) {
      pcVar11 = (code *)0x0;
    }
    else {
      pcVar11 = *(code **)(lVar9 + 0x2b0);
    }
                    /* try { // try from 00a23664 to 00b2366b has its CatchHandler @ 00a237ac */
                    /* try { // try from 00a2366c to 00b23673 has its CatchHandler @ 00a237a4 */
    if (((param_2 >> 1 & 1) == 0) ||
       ((*(long *)(lVar9 + 0x2b8) == 0 && (*(long *)(lVar9 + 0x250) == 0)))) {
                    /* catch() { ... } // from try @ 00a2352c with catch @ 00a235e8 */
      pcVar10 = (code *)0x0;
    }
    else {
                    /* try { // try from 00a23674 to 00b2367b has its CatchHandler @ 00a2379c */
                    /* try { // try from 00a2367c to 00b23683 has its CatchHandler @ 00a23794 */
      puVar3 = (undefined8 *)(lVar9 + 0x2b8);
      if (*(long *)(lVar9 + 0x2b8) == 0) {
        puVar3 = (undefined8 *)(lVar9 + 0x2b0);
      }
      pcVar10 = (code *)*puVar3;
    }
    if (pcVar11 == (code *)0x0) {
      if (pcVar10 != (code *)0x0) {
        while( true ) {
          uVar2 = param_4;
          if (0x3fff < param_4) {
            uVar2 = 0x4000;
          }
          uVar5 = (*pcVar10)(param_3,1,uVar2,*(undefined8 *)(lVar9 + 0x250));
          if (uVar5 == 0x10000001) break;
                    /* try { // try from 00a236b8 to 00b236ff has its CatchHandler @ 00a237c8 */
          if (uVar5 != uVar2) goto LAB_00a23724;
          param_4 = param_4 - uVar2;
          param_3 = (void *)((long)param_3 + uVar2);
          if (param_4 == 0) {
            return 0;
          }
        }
LAB_00a236d4:
        pvVar6 = (void *)(*(code *)PTR_malloc_01d1b740)(param_4);
        if (pvVar6 == (void *)0x0) {
          return 0x1b;
        }
        memcpy(pvVar6,param_3,param_4);
                    /* try { // try from 00a23704 to 00b23717 has its CatchHandler @ 00a237c4 */
        *(void **)(lVar9 + 0x8b40) = pvVar6;
                    /* try { // try from 00a23718 to 00b2371f has its CatchHandler @ 00a23790 */
        *(size_t *)(lVar9 + 0x8b48) = param_4;
        *(undefined4 *)(lVar9 + 0x8b50) = 2;
                    /* try { // try from 00a23720 to 00b23737 has its CatchHandler @ 00a237b4 */
LAB_00a23784:
        *(uint *)(lVar9 + 0x1e4) = *(uint *)(lVar9 + 0x1e4) | 0x10;
        return 0;
                    /* catch() { ... } // from try @ 00a23718 with catch @ 00a23790 */
      }
      do {
        uVar2 = param_4;
                    /* catch() { ... } // from try @ 00a23704 with catch @ 00a237c4 */
        if (0x3fff < param_4) {
          uVar2 = 0x4000;
        }
                    /* catch() { ... } // from try @ 00a236b8 with catch @ 00a237c8 */
        param_4 = param_4 - uVar2;
      } while (param_4 != 0);
    }
    else {
      do {
                    /* catch() { ... } // from try @ 00a2358c with catch @ 00a235f8 */
        uVar2 = param_4;
        if (0x3fff < param_4) {
          uVar2 = 0x4000;
        }
        uVar5 = (*pcVar11)(param_3,1,uVar2,*(undefined8 *)(lVar9 + 0x240));
        if (uVar5 == 0x10000001) {
                    /* try { // try from 00a23738 to 00b237fb has its CatchHandler @ 00a2361c */
          if ((*(byte *)(param_1[0x80] + 0x7c) >> 4 & 1) != 0) {
            pcVar7 = "Write callback asked for PAUSE when not supported!";
            goto LAB_00a237f8;
          }
          pvVar6 = (void *)(*(code *)PTR_malloc_01d1b740)(param_4);
          if (pvVar6 == (void *)0x0) {
            return 0x1b;
          }
          memcpy(pvVar6,param_3,param_4);
          *(void **)(lVar9 + 0x8b40) = pvVar6;
          *(size_t *)(lVar9 + 0x8b48) = param_4;
          *(uint *)(lVar9 + 0x8b50) = param_2;
          goto LAB_00a23784;
        }
                    /* try { // try from 00a2361c to 00b23663 has its CatchHandler @ 00a2361c
                       catch() { ... } // from try @ 00a2361c with catch @ 00a2361c
                       catch() { ... } // from try @ 00a23738 with catch @ 00a2361c */
        if (uVar5 != uVar2) {
                    /* catch() { ... } // from try @ 00a23674 with catch @ 00a2379c */
                    /* catch() { ... } // from try @ 00a2366c with catch @ 00a237a4 */
                    /* catch() { ... } // from try @ 00a23664 with catch @ 00a237ac */
          FUN_00a23020(lVar9,"Failed writing body (%zu != %zu)",uVar5,uVar2);
          return 0x17;
                    /* catch() { ... } // from try @ 00a23720 with catch @ 00a237b4 */
        }
        if (pcVar10 != (code *)0x0) {
          uVar5 = (*pcVar10)(param_3,1,uVar2,*(undefined8 *)(lVar9 + 0x250));
          if (uVar5 == 0x10000001) goto LAB_00a236d4;
          if (uVar5 != uVar2) goto LAB_00a23724;
        }
        param_4 = param_4 - uVar2;
        param_3 = (void *)((long)param_3 + uVar2);
      } while (param_4 != 0);
    }
  }
  return 0;
LAB_00a23724:
  pcVar7 = "Failed writing header";
LAB_00a237f8:
  FUN_00a23020(lVar9,pcVar7);
  return 0x17;
}

