
undefined8 FUN_00a38f0c(long *param_1,uint param_2,void *param_3,size_t param_4)

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
  
                    /* try { // try from 00a38f0c to 00b38f3b has its CatchHandler @ 00a38fa8 */
  if (param_4 != 0) {
    lVar9 = *param_1;
                    /* try { // try from 00a38f40 to 00b38f67 has its CatchHandler @ 00a38fa4 */
    if ((*(byte *)(lVar9 + 0x1e4) >> 4 & 1) != 0) {
      if (*(uint *)(lVar9 + 0x8b50) != param_2) {
        return 0x38;
      }
                    /* try { // try from 00a38f6c to 00b38f73 has its CatchHandler @ 00a38fac */
      plVar1 = (long *)(lVar9 + 0x8b48);
      lVar8 = *plVar1;
                    /* try { // try from 00a38f88 to 00b38f8f has its CatchHandler @ 00a38fa4 */
                    /* try { // try from 00a38f90 to 00b38fcf has its CatchHandler @ 00a38d70 */
      lVar4 = (*(code *)PTR_realloc_01769a08)(*(long *)(lVar9 + 0x8b40),lVar8 + param_4);
      if (lVar4 == 0) {
        return 0x1b;
      }
                    /* catch() { ... } // from try @ 00a38f40 with catch @ 00a38fa4
                       catch() { ... } // from try @ 00a38f88 with catch @ 00a38fa4 */
                    /* catch() { ... } // from try @ 00a38e48 with catch @ 00a38fa8
                       catch() { ... } // from try @ 00a38f0c with catch @ 00a38fa8 */
                    /* catch() { ... } // from try @ 00a38dd8 with catch @ 00a38fac
                       catch() { ... } // from try @ 00a38f6c with catch @ 00a38fac */
      memcpy((void *)(lVar4 + *plVar1),param_3,param_4);
                    /* catch() { ... } // from try @ 00a38e1c with catch @ 00a38fb0 */
                    /* catch() { ... } // from try @ 00a38dbc with catch @ 00a38fb4 */
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
                    /* catch() { ... } // from try @ 00a3901c with catch @ 00a39054 */
    if (((param_2 >> 1 & 1) == 0) ||
       ((*(long *)(lVar9 + 0x2b8) == 0 && (*(long *)(lVar9 + 0x250) == 0)))) {
                    /* try { // try from 00a38fd0 to 00b3901b has its CatchHandler @ 00a38fd0
                       catch() { ... } // from try @ 00a38fd0 with catch @ 00a38fd0
                       catch() { ... } // from try @ 00a39020 with catch @ 00a38fd0 */
      pcVar10 = (code *)0x0;
    }
    else {
      puVar3 = (undefined8 *)(lVar9 + 0x2b8);
                    /* try { // try from 00a39068 to 00b3932f has its CatchHandler @ 00a39068
                       catch() { ... } // from try @ 00a39068 with catch @ 00a39068
                       catch() { ... } // from try @ 00a393b0 with catch @ 00a39068 */
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
          if (uVar5 != uVar2) goto LAB_00a3910c;
          param_4 = param_4 - uVar2;
          param_3 = (void *)((long)param_3 + uVar2);
          if (param_4 == 0) {
            return 0;
          }
        }
LAB_00a390bc:
        pvVar6 = (void *)(*(code *)PTR_malloc_017699f8)(param_4);
        if (pvVar6 == (void *)0x0) {
          return 0x1b;
        }
        memcpy(pvVar6,param_3,param_4);
        *(void **)(lVar9 + 0x8b40) = pvVar6;
        *(size_t *)(lVar9 + 0x8b48) = param_4;
        *(undefined4 *)(lVar9 + 0x8b50) = 2;
LAB_00a3916c:
        *(uint *)(lVar9 + 0x1e4) = *(uint *)(lVar9 + 0x1e4) | 0x10;
        return 0;
      }
      do {
        uVar2 = param_4;
        if (0x3fff < param_4) {
          uVar2 = 0x4000;
        }
        param_4 = param_4 - uVar2;
      } while (param_4 != 0);
    }
    else {
      do {
        uVar2 = param_4;
        if (0x3fff < param_4) {
          uVar2 = 0x4000;
        }
        uVar5 = (*pcVar11)(param_3,1,uVar2,*(undefined8 *)(lVar9 + 0x240));
        if (uVar5 == 0x10000001) {
          if ((*(byte *)(param_1[0x80] + 0x7c) >> 4 & 1) != 0) {
            pcVar7 = "Write callback asked for PAUSE when not supported!";
            goto LAB_00a391e0;
          }
          pvVar6 = (void *)(*(code *)PTR_malloc_017699f8)(param_4);
          if (pvVar6 == (void *)0x0) {
            return 0x1b;
          }
          memcpy(pvVar6,param_3,param_4);
          *(void **)(lVar9 + 0x8b40) = pvVar6;
          *(size_t *)(lVar9 + 0x8b48) = param_4;
          *(uint *)(lVar9 + 0x8b50) = param_2;
          goto LAB_00a3916c;
        }
        if (uVar5 != uVar2) {
          FUN_00a38a08(lVar9,"Failed writing body (%zu != %zu)",uVar5,uVar2);
          return 0x17;
        }
        if (pcVar10 != (code *)0x0) {
                    /* try { // try from 00a3901c to 00b3901f has its CatchHandler @ 00a39054 */
                    /* try { // try from 00a39020 to 00b39067 has its CatchHandler @ 00a38fd0 */
          uVar5 = (*pcVar10)(param_3,1,uVar2,*(undefined8 *)(lVar9 + 0x250));
          if (uVar5 == 0x10000001) goto LAB_00a390bc;
          if (uVar5 != uVar2) goto LAB_00a3910c;
        }
        param_4 = param_4 - uVar2;
        param_3 = (void *)((long)param_3 + uVar2);
      } while (param_4 != 0);
    }
  }
  return 0;
LAB_00a3910c:
  pcVar7 = "Failed writing header";
LAB_00a391e0:
  FUN_00a38a08(lVar9,pcVar7);
  return 0x17;
}

