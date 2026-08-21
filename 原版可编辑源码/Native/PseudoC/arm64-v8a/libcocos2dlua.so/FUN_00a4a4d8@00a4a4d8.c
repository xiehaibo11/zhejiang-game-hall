
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a4a4d8(long *param_1,byte *param_2,long param_3,long *param_4)

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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4a4bc with catch @ 00a4a4ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4a454 with catch @ 00a4a4f0
                        */
  lVar10 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar10 + 0x650) == '\0') || (*(char *)(lVar10 + 0x1e9) != '\0')) ||
     (iVar3 = FUN_00a391f0(param_1,1,param_2,param_3), iVar3 == 0)) {
    if (param_3 != 0) {
LAB_00a4a6d4:
      uVar8 = (undefined4)param_1[4];
switchD_00a4a6f8_default:
      switch(uVar8) {
      case 0:
        bVar7 = *param_2;
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
          goto joined_r0x00a4a664;
        }
        if (*(int *)((long)param_1 + 0x1c) != 0) {
          *(undefined1 *)((long)param_1 + (long)*(int *)((long)param_1 + 0x1c) + 8) = 0;
          lVar4 = strtol((char *)(param_1 + 1),&pcStack_68,0x10);
          param_1[5] = lVar4;
          if ((lVar4 != 0x7fffffffffffffff) || (piVar5 = (int *)__errno(), *piVar5 != 0x22)) {
            uVar8 = 1;
            *(undefined4 *)(param_1 + 4) = 1;
            goto switchD_00a4a6f8_default;
          }
        }
        return 2;
      case 1:
        goto switchD_00a4a6f8_caseD_1;
      case 2:
        lVar4 = param_1[5];
        if (param_3 <= param_1[5]) {
          lVar4 = param_3;
        }
        lVar4 = FUN_00a2c6fc(lVar4);
        if (*(char *)(*param_1 + 0x651) == '\0') {
          iVar3 = *(int *)(lVar10 + 0x148);
          if (iVar3 == 2) {
            *(byte **)(lVar10 + 0xf8) = param_2;
            iVar3 = FUN_00a4b6b8(param_1,lVar10 + 0x78,lVar4);
          }
          else {
            if (iVar3 != 1) {
              if (iVar3 != 0) {
                    /* try { // try from 00a4a92c to 00b4a943 has its CatchHandler @ 00a4aaa8 */
                FUN_00a38a08(*param_1,
                             "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                            );
                return 5;
              }
              goto LAB_00a4a864;
            }
            *(byte **)(lVar10 + 0xf8) = param_2;
            iVar3 = FUN_00a4b3cc(param_1,lVar10 + 0x78,lVar4);
          }
joined_r0x00a4a5a0:
          if (iVar3 != 0) goto LAB_00a4a558;
        }
        else {
LAB_00a4a864:
          if ((*(char *)(lVar10 + 0x1e9) == '\0') && (*(char *)(lVar10 + 0x650) == '\0')) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4a80c with catch @ 00a4a87c
                        */
            iVar3 = FUN_00a391f0(param_1,1,param_2,lVar4);
            goto joined_r0x00a4a5a0;
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
        goto joined_r0x00a4a664;
      case 3:
                    /* try { // try from 00a4a890 to 00b4a893 has its CatchHandler @ 00a4a8c0 */
                    /* try { // try from 00a4a894 to 00b4a8d7 has its CatchHandler @ 00a4a798 */
        if (*param_2 == 0xd) goto LAB_00a4a8c0;
        if (*param_2 == 10) {
          *(undefined8 *)((long)param_1 + 0x1c) = 0;
          param_1[6] = 0;
          goto LAB_00a4a8c0;
        }
        break;
      case 4:
                    /* try { // try from 00a4a8d8 to 00b4a92b has its CatchHandler @ 00a4a8d8
                       catch() { ... } // from try @ 00a4a8d8 with catch @ 00a4a8d8
                       catch() { ... } // from try @ 00a4a98c with catch @ 00a4a8d8 */
        if (*param_2 == 10) {
          lVar10 = FUN_00a2c6fc(param_3 + -1);
          param_1[6] = lVar10;
          return 0xffffffff;
        }
        break;
      case 5:
        bVar7 = *param_2;
        if ((bVar7 != 0xd) && (bVar7 != 10)) {
          iVar3 = *(int *)((long)param_1 + 0x614);
          iVar1 = (int)param_1[0xc2];
          if (iVar3 < iVar1) {
            lVar4 = param_1[0xc1];
          }
          else {
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0xc2) = 0x80;
              lVar4 = (*(code *)PTR_malloc_017699f8)(0x83);
            }
            else {
              *(int *)(param_1 + 0xc2) = (int)((long)iVar1 * 2);
              lVar4 = (*(code *)PTR_realloc_01769a08)(param_1[0xc1],(long)iVar1 * 2 + 3);
            }
            if (lVar4 == 0) {
              return 6;
            }
            param_1[0xc1] = lVar4;
            bVar7 = *param_2;
            iVar3 = *(int *)((long)param_1 + 0x614);
          }
          *(int *)((long)param_1 + 0x614) = iVar3 + 1;
          *(byte *)(lVar4 + iVar3) = bVar7;
          goto LAB_00a4a8c0;
        }
        iVar3 = *(int *)((long)param_1 + 0x614);
        if (iVar3 == 0) {
          uVar8 = 7;
          *(undefined4 *)(param_1 + 4) = 7;
        }
        else {
          *(int *)((long)param_1 + 0x614) = iVar3 + 1;
                    /* try { // try from 00a4a798 to 00b4a80b has its CatchHandler @ 00a4a798
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4a798 with catch @ 00a4a798
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4a82c with catch @ 00a4a798
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4a894 with catch @ 00a4a798
                        */
          *(undefined1 *)(param_1[0xc1] + (long)iVar3) = 0xd;
          iVar3 = *(int *)((long)param_1 + 0x614);
          *(int *)((long)param_1 + 0x614) = iVar3 + 1;
          *(undefined1 *)(param_1[0xc1] + (long)iVar3) = 10;
          *(undefined1 *)(param_1[0xc1] + (long)*(int *)((long)param_1 + 0x614)) = 0;
          if ((*(char *)(lVar10 + 0x650) == '\0') &&
             (iVar3 = FUN_00a391f0(param_1,2,param_1[0xc1],(long)*(int *)((long)param_1 + 0x614)),
             iVar3 != 0)) goto LAB_00a4a558;
          uVar8 = 6;
          *(undefined4 *)((long)param_1 + 0x614) = 0;
          *(undefined4 *)(param_1 + 4) = 6;
          if (*param_2 != 10) goto LAB_00a4a8c0;
        }
        goto switchD_00a4a6f8_default;
      case 6:
        if (*param_2 == 10) {
          *(undefined4 *)(param_1 + 4) = 7;
          goto LAB_00a4a8c0;
        }
        break;
      case 7:
        bVar7 = *param_2;
                    /* try { // try from 00a4a80c to 00b4a817 has its CatchHandler @ 00a4a87c */
        if ((bVar7 != 10) && (bVar7 != 0xd)) goto LAB_00a4a6dc;
        *(undefined4 *)(param_1 + 4) = 4;
        if (bVar7 == 0xd) {
          param_2 = param_2 + 1;
        }
        param_3 = param_3 - (ulong)(bVar7 == 0xd);
        goto joined_r0x00a4a664;
      default:
        goto switchD_00a4a6f8_default;
      }
      return 3;
    }
LAB_00a4a8cc:
    uVar6 = 0;
  }
  else {
LAB_00a4a558:
    uVar6 = 4;
  }
  return uVar6;
LAB_00a4a6dc:
  uVar8 = 5;
  *(undefined4 *)(param_1 + 4) = 5;
  goto switchD_00a4a6f8_default;
switchD_00a4a6f8_caseD_1:
                    /* try { // try from 00a4a828 to 00b4a82b has its CatchHandler @ 00a4a8c4 */
                    /* try { // try from 00a4a82c to 00b4a88f has its CatchHandler @ 00a4a798 */
  if (*param_2 == 10) {
    if (param_1[5] == 0) {
      *(undefined4 *)(param_1 + 4) = 5;
      *(undefined4 *)((long)param_1 + 0x614) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
LAB_00a4a8c0:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4a890 with catch @ 00a4a8c0
                        */
  param_2 = param_2 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4a828 with catch @ 00a4a8c4
                        */
  param_3 = param_3 + -1;
joined_r0x00a4a664:
  if (param_3 == 0) goto LAB_00a4a8cc;
  goto LAB_00a4a6d4;
}

