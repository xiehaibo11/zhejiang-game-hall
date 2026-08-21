
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a33af0(long *param_1,byte *param_2,long param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  char *pcStack_68;
  
                    /* try { // try from 00a33af4 to 00b33b37 has its CatchHandler @ 00a33c50 */
  lVar10 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar10 + 0x650) == '\0') || (*(char *)(lVar10 + 0x1e9) != '\0')) ||
     (iVar3 = FUN_00a23808(param_1,1,param_2,param_3), iVar3 == 0)) {
    if (param_3 != 0) {
                    /* try { // try from 00a33b3c to 00b33b7f has its CatchHandler @ 00a33c4c */
LAB_00a33cec:
      uVar8 = (undefined4)param_1[4];
switchD_00a33d10_default:
      switch(uVar8) {
      case 0:
        bVar7 = *param_2;
                    /* try { // try from 00a33d2c to 00b33d43 has its CatchHandler @ 00a33f28 */
        if ((bVar7 - 0x30 < 10) ||
           ((uVar2 = bVar7 - 0x41, uVar2 < 0x26 &&
            ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
          if (0xf < *(int *)((long)param_1 + 0x1c)) {
            return 1;
          }
          *(byte *)((long)param_1 + (long)*(int *)((long)param_1 + 0x1c) + 8) = bVar7;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          goto joined_r0x00a33c7c;
        }
        if (*(int *)((long)param_1 + 0x1c) != 0) {
                    /* try { // try from 00a33d4c to 00b33d57 has its CatchHandler @ 00a33f24 */
                    /* try { // try from 00a33d58 to 00b33d63 has its CatchHandler @ 00a33f20 */
          *(undefined1 *)((long)param_1 + (long)*(int *)((long)param_1 + 0x1c) + 8) = 0;
          lVar4 = strtol((char *)(param_1 + 1),&pcStack_68,0x10);
                    /* try { // try from 00a33d64 to 00b33eab has its CatchHandler @ 00a33f38 */
          param_1[5] = lVar4;
          if ((lVar4 != 0x7fffffffffffffff) || (piVar5 = (int *)__errno(), *piVar5 != 0x22)) {
            uVar8 = 1;
            *(undefined4 *)(param_1 + 4) = 1;
            goto switchD_00a33d10_default;
          }
        }
        return 2;
      case 1:
        goto switchD_00a33d10_caseD_1;
      case 2:
        lVar4 = param_1[5];
        if (param_3 <= param_1[5]) {
          lVar4 = param_3;
        }
        lVar4 = FUN_00a16d14(lVar4);
        if (*(char *)(*param_1 + 0x651) == '\0') {
          iVar3 = *(int *)(lVar10 + 0x148);
          if (iVar3 == 2) {
            *(byte **)(lVar10 + 0xf8) = param_2;
            iVar3 = FUN_00a34cd0(param_1,lVar10 + 0x78,lVar4);
          }
          else {
            if (iVar3 != 1) {
              if (iVar3 != 0) {
                    /* catch() { ... } // from try @ 00a33d64 with catch @ 00a33f38 */
                FUN_00a23020(*param_1,
                             "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                            );
                return 5;
              }
              goto LAB_00a33e7c;
            }
            *(byte **)(lVar10 + 0xf8) = param_2;
            iVar3 = FUN_00a349e4(param_1,lVar10 + 0x78,lVar4);
                    /* try { // try from 00a33bd4 to 00b33cd7 has its CatchHandler @ 00a33900 */
          }
joined_r0x00a33bb8:
          if (iVar3 != 0) goto LAB_00a33b70;
        }
        else {
LAB_00a33e7c:
          if ((*(char *)(lVar10 + 0x1e9) == '\0') && (*(char *)(lVar10 + 0x650) == '\0')) {
            iVar3 = FUN_00a23808(param_1,1,param_2,lVar4);
            goto joined_r0x00a33bb8;
          }
        }
        param_2 = param_2 + lVar4;
        param_3 = param_3 - lVar4;
        *param_4 = *param_4 + lVar4;
        lVar9 = param_1[5];
        param_1[5] = lVar9 - lVar4;
        if (lVar9 - lVar4 == 0) {
          *(undefined4 *)(param_1 + 4) = 3;
        }
        goto joined_r0x00a33c7c;
      case 3:
                    /* try { // try from 00a33eac to 00b33f8f has its CatchHandler @ 00a33cd8 */
        if (*param_2 == 0xd) goto LAB_00a33ed8;
        if (*param_2 == 10) {
          *(undefined8 *)((long)param_1 + 0x1c) = 0;
          param_1[6] = 0;
          goto LAB_00a33ed8;
        }
        break;
      case 4:
        if (*param_2 == 10) {
          lVar10 = FUN_00a16d14(param_3 + -1);
          param_1[6] = lVar10;
          return 0xffffffff;
        }
        break;
      case 5:
        bVar7 = *param_2;
        if ((bVar7 != 0xd) && (bVar7 != 10)) {
                    /* catch() { ... } // from try @ 00a33ab8 with catch @ 00a33c4c
                       catch() { ... } // from try @ 00a33b3c with catch @ 00a33c4c */
          iVar3 = *(int *)((long)param_1 + 0x614);
                    /* catch() { ... } // from try @ 00a33a10 with catch @ 00a33c50
                       catch() { ... } // from try @ 00a33aa8 with catch @ 00a33c50
                       catch() { ... } // from try @ 00a33af4 with catch @ 00a33c50 */
          iVar1 = (int)param_1[0xc2];
          if (iVar3 < iVar1) {
            lVar4 = param_1[0xc1];
          }
          else {
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0xc2) = 0x80;
              lVar4 = (*(code *)PTR_malloc_01d1b740)(0x83);
            }
            else {
              *(int *)(param_1 + 0xc2) = (int)((long)iVar1 * 2);
              lVar4 = (*(code *)PTR_realloc_01d1b750)(param_1[0xc1],(long)iVar1 * 2 + 3);
            }
            if (lVar4 == 0) {
              return 6;
            }
            param_1[0xc1] = lVar4;
            bVar7 = *param_2;
                    /* try { // try from 00a33cd8 to 00b33d2b has its CatchHandler @ 00a33cd8
                       catch() { ... } // from try @ 00a33cd8 with catch @ 00a33cd8
                       catch() { ... } // from try @ 00a33eac with catch @ 00a33cd8 */
            iVar3 = *(int *)((long)param_1 + 0x614);
          }
          *(int *)((long)param_1 + 0x614) = iVar3 + 1;
          *(byte *)(lVar4 + iVar3) = bVar7;
          goto LAB_00a33ed8;
        }
        iVar3 = *(int *)((long)param_1 + 0x614);
        if (iVar3 == 0) {
          uVar8 = 7;
          *(undefined4 *)(param_1 + 4) = 7;
        }
        else {
          *(int *)((long)param_1 + 0x614) = iVar3 + 1;
          *(undefined1 *)(param_1[0xc1] + (long)iVar3) = 0xd;
          iVar3 = *(int *)((long)param_1 + 0x614);
          *(int *)((long)param_1 + 0x614) = iVar3 + 1;
          *(undefined1 *)(param_1[0xc1] + (long)iVar3) = 10;
          *(undefined1 *)(param_1[0xc1] + (long)*(int *)((long)param_1 + 0x614)) = 0;
          if ((*(char *)(lVar10 + 0x650) == '\0') &&
             (iVar3 = FUN_00a23808(param_1,2,param_1[0xc1],(long)*(int *)((long)param_1 + 0x614)),
             iVar3 != 0)) goto LAB_00a33b70;
          uVar8 = 6;
          *(undefined4 *)((long)param_1 + 0x614) = 0;
          *(undefined4 *)(param_1 + 4) = 6;
          if (*param_2 != 10) goto LAB_00a33ed8;
        }
        goto switchD_00a33d10_default;
      case 6:
        if (*param_2 == 10) {
          *(undefined4 *)(param_1 + 4) = 7;
          goto LAB_00a33ed8;
        }
        break;
      case 7:
        bVar7 = *param_2;
        if ((bVar7 != 10) && (bVar7 != 0xd)) goto LAB_00a33cf4;
                    /* catch() { ... } // from try @ 00a33984 with catch @ 00a33c68 */
                    /* catch() { ... } // from try @ 00a33978 with catch @ 00a33c6c */
        *(undefined4 *)(param_1 + 4) = 4;
                    /* catch() { ... } // from try @ 00a33958 with catch @ 00a33c70 */
        if (bVar7 == 0xd) {
          param_2 = param_2 + 1;
        }
        param_3 = param_3 - (ulong)(bVar7 == 0xd);
        goto joined_r0x00a33c7c;
      default:
        goto switchD_00a33d10_default;
      }
      return 3;
    }
LAB_00a33ee4:
    uVar6 = 0;
  }
  else {
LAB_00a33b70:
    uVar6 = 4;
  }
                    /* catch() { ... } // from try @ 00a33d58 with catch @ 00a33f20 */
                    /* catch() { ... } // from try @ 00a33d4c with catch @ 00a33f24 */
                    /* catch() { ... } // from try @ 00a33d2c with catch @ 00a33f28 */
  return uVar6;
LAB_00a33cf4:
  uVar8 = 5;
  *(undefined4 *)(param_1 + 4) = 5;
  goto switchD_00a33d10_default;
switchD_00a33d10_caseD_1:
  if (*param_2 == 10) {
    if (param_1[5] == 0) {
                    /* try { // try from 00a33b98 to 00b33bd3 has its CatchHandler @ 00a33c80 */
      *(undefined4 *)(param_1 + 4) = 5;
      *(undefined4 *)((long)param_1 + 0x614) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
LAB_00a33ed8:
  param_2 = param_2 + 1;
  param_3 = param_3 + -1;
joined_r0x00a33c7c:
  if (param_3 == 0) goto LAB_00a33ee4;
  goto LAB_00a33cec;
}

