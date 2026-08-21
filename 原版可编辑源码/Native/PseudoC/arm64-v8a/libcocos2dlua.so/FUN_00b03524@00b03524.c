
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00b03524(undefined8 param_1,long param_2,ulong *param_3,long *param_4,uint *param_5,
            byte *param_6,long *param_7)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  ushort *puVar16;
  ulong *puVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong local_68;
  
  local_68 = 0;
  uVar7 = (uint)*param_6;
  if (uVar7 != 0) {
    uVar19 = 0;
    uVar13 = 0;
    uVar22 = 0;
    iVar5 = 0;
    param_6 = param_6 + 1;
    uVar20 = 0xffffffff;
LAB_00b03f08:
    do {
      if ((param_2 == 0) && (*param_3 <= local_68)) goto LAB_00b03f38;
      switch(uVar13) {
      case 0:
        if (uVar7 == 0x25) {
          bVar2 = *param_6;
          uVar13 = 1;
          break;
        }
        iVar4 = FUN_00b040d8(param_1,param_2,&local_68,param_3);
        uVar13 = 0;
        if (iVar4 == 0) {
          return 0;
        }
                    /* try { // try from 00b03720 to 00c0378b has its CatchHandler @ 00b03684 */
        uVar7 = (uint)*param_6;
        param_6 = param_6 + 1;
      default:
switchD_00b03f30_default:
joined_r0x00b03780:
        if (uVar7 == 0) goto switchD_00b03f30_caseD_7;
        goto LAB_00b03f08;
      case 1:
        uVar13 = 2;
        switch(uVar7) {
        case 0x20:
          bVar2 = *param_6;
          uVar22 = uVar22 | 4;
          break;
        default:
          goto switchD_00b03f30_default;
        case 0x23:
          bVar2 = *param_6;
          uVar22 = uVar22 | 8;
          break;
        case 0x2b:
          bVar2 = *param_6;
          uVar22 = uVar22 | 2;
          break;
        case 0x2d:
          bVar2 = *param_6;
          uVar22 = uVar22 | 1;
          break;
        case 0x30:
          bVar2 = *param_6;
          uVar22 = uVar22 | 0x10;
        }
        uVar13 = 1;
        break;
      case 2:
        if (uVar7 - 0x30 < 10) {
          bVar2 = *param_6;
          uVar19 = (uVar7 - 0x30) + uVar19 * 10;
          uVar13 = 2;
        }
        else {
          if (uVar7 != 0x2a) {
            uVar13 = 3;
            goto joined_r0x00b03780;
          }
          iVar4 = (int)param_7[3];
          if ((iVar4 < 0) && (*(int *)(param_7 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
            puVar9 = (uint *)(param_7[1] + (long)iVar4);
          }
          else {
            puVar9 = (uint *)*param_7;
            *param_7 = (long)(puVar9 + 2);
          }
          uVar19 = *puVar9;
          bVar2 = *param_6;
          uVar13 = 3;
                    /* catch() { ... } // from try @ 00b036f8 with catch @ 00b03770 */
        }
        break;
      case 3:
        if (uVar7 == 0x2e) {
          bVar2 = *param_6;
          uVar13 = 4;
          break;
        }
        uVar13 = 5;
        goto joined_r0x00b03780;
      case 4:
        if (uVar7 - 0x30 < 10) {
          bVar2 = *param_6;
          uVar20 = (uVar7 - 0x30) + (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) * 10;
          uVar13 = 4;
        }
        else {
          if (uVar7 != 0x2a) {
            uVar13 = 5;
            goto joined_r0x00b03780;
          }
          iVar4 = (int)param_7[3];
          if ((iVar4 < 0) && (*(int *)(param_7 + 3) = iVar4 + 8, iVar4 + 8 < 1)) {
            puVar9 = (uint *)(param_7[1] + (long)iVar4);
          }
          else {
            puVar9 = (uint *)*param_7;
            *param_7 = (long)(puVar9 + 2);
          }
          uVar20 = *puVar9;
          bVar2 = *param_6;
          uVar13 = 5;
        }
        break;
      case 5:
        uVar13 = 6;
                    /* try { // try from 00b03684 to 00c036f7 has its CatchHandler @ 00b03684
                       catch() { ... } // from try @ 00b03684 with catch @ 00b03684
                       catch() { ... } // from try @ 00b03720 with catch @ 00b03684 */
        iVar4 = 4;
        pbVar18 = param_6;
        switch(uVar7) {
        case 0x4c:
          iVar4 = 3;
          break;
        default:
          goto switchD_00b03f30_default;
        case 0x68:
          iVar4 = 1;
          break;
        case 0x6c:
          iVar4 = 4;
          pbVar18 = param_6 + 1;
          if (*param_6 != 0x6c) {
            iVar4 = 2;
            pbVar18 = param_6;
          }
          break;
        case 0x71:
          break;
        }
        bVar2 = *pbVar18;
        uVar13 = 6;
        iVar5 = iVar4;
        param_6 = pbVar18;
        break;
      case 6:
        switch(uVar7) {
        case 0x45:
          uVar22 = uVar22 | 0x20;
        case 0x65:
          iVar5 = *(int *)((long)param_7 + 0x1c);
          if ((iVar5 < 0) && (*(int *)((long)param_7 + 0x1c) = iVar5 + 0x10, iVar5 + 0x10 < 1)) {
            puVar10 = (undefined8 *)(param_7[2] + (long)iVar5);
          }
          else {
            puVar10 = (undefined8 *)*param_7;
            *param_7 = (long)(puVar10 + 1);
          }
          uVar23 = *puVar10;
          uVar6 = 1;
          goto LAB_00b03918;
        case 0x47:
          uVar22 = uVar22 | 0x20;
        case 0x67:
          iVar5 = *(int *)((long)param_7 + 0x1c);
          if ((iVar5 < 0) && (*(int *)((long)param_7 + 0x1c) = iVar5 + 0x10, iVar5 + 0x10 < 1)) {
            puVar10 = (undefined8 *)(param_7[2] + (long)iVar5);
          }
          else {
            puVar10 = (undefined8 *)*param_7;
            *param_7 = (long)(puVar10 + 1);
          }
          uVar23 = *puVar10;
          uVar6 = 2;
LAB_00b03918:
          uVar6 = FUN_00b044b0(uVar23,param_1,param_2,&local_68,param_3,uVar19,uVar20,uVar22,uVar6);
          iVar5 = (int)uVar6;
joined_r0x00b03eb0:
          if (iVar5 == 0) {
            return uVar6;
          }
          break;
        case 0x58:
          uVar22 = uVar22 | 0x20;
        case 0x6f:
        case 0x75:
        case 0x78:
          uVar22 = uVar22 | 0x40;
          if ((iVar5 == 4) || (iVar5 == 2)) {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              uVar12 = *(ulong *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar17 = (ulong *)*param_7;
              *param_7 = (long)(puVar17 + 1);
              uVar12 = *puVar17;
            }
          }
          else if (iVar5 == 1) {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              uVar12 = (ulong)*(ushort *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar16 = (ushort *)*param_7;
              *param_7 = (long)(puVar16 + 4);
              uVar12 = (ulong)*puVar16;
            }
          }
          else {
                    /* catch() { ... } // from try @ 00b03ac0 with catch @ 00b03ba0 */
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              puVar9 = (uint *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar9 = (uint *)*param_7;
              *param_7 = (long)(puVar9 + 2);
            }
            uVar12 = (ulong)*puVar9;
          }
          uVar15 = 10;
          if (uVar7 != 0x75) {
            uVar15 = 0x10;
          }
          uVar13 = 8;
          if (uVar7 != 0x6f) {
            uVar13 = uVar15;
          }
          goto LAB_00b03e98;
        case 99:
          iVar5 = (int)param_7[3];
          if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
            puVar9 = (uint *)(param_7[1] + (long)iVar5);
          }
          else {
            puVar9 = (uint *)*param_7;
            *param_7 = (long)(puVar9 + 2);
          }
          uVar7 = *puVar9;
        case 0x25:
          uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,uVar7);
          iVar5 = (int)uVar6;
          goto joined_r0x00b03eb0;
        case 100:
        case 0x69:
          if ((iVar5 == 4) || (iVar5 == 2)) {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              uVar12 = *(ulong *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar17 = (ulong *)*param_7;
              *param_7 = (long)(puVar17 + 1);
              uVar12 = *puVar17;
            }
          }
          else if (iVar5 == 1) {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              uVar12 = (ulong)*(short *)(param_7[1] + (long)iVar5);
            }
            else {
              psVar8 = (short *)*param_7;
              *param_7 = (long)(psVar8 + 4);
              uVar12 = (ulong)*psVar8;
                    /* try { // try from 00b036f8 to 00c0371f has its CatchHandler @ 00b03770 */
            }
          }
          else {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              piVar11 = (int *)(param_7[1] + (long)iVar5);
            }
            else {
              piVar11 = (int *)*param_7;
              *param_7 = (long)(piVar11 + 2);
            }
            uVar12 = (ulong)*piVar11;
          }
          uVar13 = 10;
          goto LAB_00b03e98;
        case 0x66:
          iVar5 = *(int *)((long)param_7 + 0x1c);
          if ((iVar5 < 0) && (*(int *)((long)param_7 + 0x1c) = iVar5 + 0x10, iVar5 + 0x10 < 1)) {
            puVar10 = (undefined8 *)(param_7[2] + (long)iVar5);
          }
          else {
            puVar10 = (undefined8 *)*param_7;
            *param_7 = (long)(puVar10 + 1);
          }
          uVar23 = *puVar10;
          uVar6 = 0;
          goto LAB_00b03918;
        case 0x6e:
          if ((iVar5 == 4) || (iVar5 == 2)) {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              puVar10 = (undefined8 *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar10 = (undefined8 *)*param_7;
              *param_7 = (long)(puVar10 + 1);
            }
            *(ulong *)*puVar10 = local_68;
          }
          else if (iVar5 == 1) {
            iVar5 = (int)param_7[3];
                    /* try { // try from 00b03a4c to 00c03abf has its CatchHandler @ 00b03a4c
                       catch() { ... } // from try @ 00b03a4c with catch @ 00b03a4c
                       catch() { ... } // from try @ 00b03b50 with catch @ 00b03a4c */
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              puVar10 = (undefined8 *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar10 = (undefined8 *)*param_7;
              *param_7 = (long)(puVar10 + 1);
            }
            *(short *)*puVar10 = (short)local_68;
          }
          else {
            iVar5 = (int)param_7[3];
            if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
              puVar10 = (undefined8 *)(param_7[1] + (long)iVar5);
            }
            else {
              puVar10 = (undefined8 *)*param_7;
              *param_7 = (long)(puVar10 + 1);
            }
            *(int *)*puVar10 = (int)local_68;
          }
          break;
        case 0x70:
          iVar5 = (int)param_7[3];
          if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
            puVar17 = (ulong *)(param_7[1] + (long)iVar5);
          }
          else {
            puVar17 = (ulong *)*param_7;
            *param_7 = (long)(puVar17 + 1);
          }
          uVar12 = *puVar17;
          uVar22 = uVar22 | 8;
          uVar13 = 0x10;
LAB_00b03e98:
          uVar6 = FUN_00b0422c(param_1,param_2,&local_68,param_3,uVar12,uVar13,uVar19,uVar20,uVar22)
          ;
          iVar5 = (int)uVar6;
          goto joined_r0x00b03eb0;
        case 0x73:
          iVar5 = (int)param_7[3];
                    /* try { // try from 00b03ac0 to 00c03b4f has its CatchHandler @ 00b03ba0 */
          if ((iVar5 < 0) && (*(int *)(param_7 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
            puVar10 = (undefined8 *)(param_7[1] + (long)iVar5);
          }
          else {
            puVar10 = (undefined8 *)*param_7;
            *param_7 = (long)(puVar10 + 1);
          }
          if (((int)uVar20 < 0) && (uVar20 = 0x7fffffff, param_2 == 0)) {
            uVar20 = (uint)*param_3;
          }
          lVar14 = (long)(int)uVar20;
          pcVar21 = "<NULL>";
          if ((char *)*puVar10 != (char *)0x0) {
            pcVar21 = (char *)*puVar10;
          }
          if (lVar14 < 0) {
            lVar14 = -1;
          }
          lVar14 = OPENSSL_strnlen(pcVar21,lVar14);
          uVar3 = uVar19 - (int)lVar14;
          uVar7 = 0;
          if (-1 < (int)(uVar19 | uVar3)) {
            uVar7 = uVar3;
          }
          uVar19 = uVar20;
          if ((-1 < (int)uVar20) &&
             (uVar19 = uVar7 + uVar20, (int)(0x7fffffff - uVar7) <= (int)uVar20)) {
            uVar19 = 0x7fffffff;
          }
                    /* try { // try from 00b03b50 to 00c03bbb has its CatchHandler @ 00b03a4c */
          uVar20 = -uVar7;
          if ((uVar22 & 1) == 0) {
            uVar20 = uVar7;
          }
          if ((int)uVar20 < 1) {
            iVar5 = 0;
            uVar7 = uVar20;
          }
          else if ((int)uVar19 < 0) {
            iVar5 = 0;
            do {
              uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,0x20);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              iVar5 = iVar5 + -1;
              uVar7 = uVar20 + iVar5;
            } while (1 < (int)(uVar7 + 1));
            iVar5 = -iVar5;
          }
          else {
            iVar5 = 0;
            do {
              uVar7 = uVar20;
              if ((int)uVar19 <= iVar5) break;
              uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,0x20);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              uVar7 = uVar20 - 1;
              iVar5 = iVar5 + 1;
              bVar1 = 0 < (int)uVar20;
              uVar20 = uVar7;
            } while (uVar7 != 0 && bVar1);
          }
          if (lVar14 != 0) {
            if ((int)uVar19 < 0) {
              do {
                uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,*pcVar21);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                pcVar21 = pcVar21 + 1;
                lVar14 = lVar14 + -1;
                iVar5 = iVar5 + 1;
              } while (lVar14 != 0);
            }
            else {
              do {
                if ((int)uVar19 <= iVar5) break;
                uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,*pcVar21);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                pcVar21 = pcVar21 + 1;
                lVar14 = lVar14 + -1;
                iVar5 = iVar5 + 1;
              } while (lVar14 != 0);
            }
          }
          if ((int)uVar7 < 0) {
            if ((int)uVar19 < 0) {
              iVar5 = uVar7 - 1;
              do {
                uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,0x20);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < -1);
            }
            else {
              iVar4 = uVar7 - 1;
              do {
                if ((int)uVar19 <= iVar5) break;
                uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,0x20);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                iVar4 = iVar4 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar4 < -1);
            }
          }
          break;
        case 0x77:
          param_6 = param_6 + 1;
        }
        bVar2 = *param_6;
        iVar5 = 0;
        uVar22 = 0;
        uVar13 = 0;
        uVar19 = 0;
        uVar20 = 0xffffffff;
        break;
      case 7:
        goto switchD_00b03f30_caseD_7;
      }
      uVar7 = (uint)bVar2;
      param_6 = param_6 + 1;
    } while (bVar2 != 0);
  }
switchD_00b03f30_caseD_7:
  if (param_2 == 0) {
LAB_00b03f38:
    uVar12 = *param_3 - 1;
    *param_5 = (uint)(uVar12 < local_68);
    if (uVar12 < local_68) {
      local_68 = uVar12;
    }
  }
  uVar6 = FUN_00b040d8(param_1,param_2,&local_68,param_3,0);
  if ((int)uVar6 != 0) {
    uVar6 = 1;
    *param_4 = local_68 - 1;
  }
  return uVar6;
}

