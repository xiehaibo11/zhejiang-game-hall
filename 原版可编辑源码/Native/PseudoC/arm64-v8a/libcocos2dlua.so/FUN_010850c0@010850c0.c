
void FUN_010850c0(long *param_1,long param_2,long param_3,undefined8 *param_4,uint param_5,
                 char param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint *puVar29;
  uint uVar30;
  byte *pbVar31;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
                    /* catch() { ... } // from try @ 01085090 with catch @ 010850c8 */
                    /* catch() { ... } // from try @ 01085118 with catch @ 010850cc */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar22 = *param_1;
                    /* try { // try from 0108510c to 01185117 has its CatchHandler @ 0108513c */
                    /* try { // try from 01085118 to 0118513f has its CatchHandler @ 010850cc */
  if ((param_6 == '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    local_a0 = *param_4;
    uStack_78 = 0;
    local_80 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    FUN_010850c0(param_1[1],param_2,param_3,&local_a0,param_5,1);
    cVar2 = *(char *)(param_4 + 1);
  }
  else {
    cVar2 = *(char *)(param_4 + 1);
  }
  if (cVar2 == '\0') {
    uVar28 = *(long *)(param_3 + 0x28) + *(long *)(param_2 + 0x28);
    if (0x60 < uVar28) {
      piVar15 = (int *)*param_4;
      if ((piVar15 != (int *)0x0) && (*piVar15 == 0)) {
        *piVar15 = 0x12;
      }
      goto LAB_01085c24;
    }
    uVar24 = uVar28 + 7 >> 3;
    param_4[2] = uVar28;
    param_4[3] = uVar24;
    *(undefined2 *)(param_4 + 1) = 0x101;
    if (uVar28 != 0) {
      if (uVar24 == 0) {
        lVar13 = -1;
      }
      else {
        uVar24 = 0;
        do {
          *(undefined1 *)((long)param_4 + uVar24 + 0x20) = 0xff;
          uVar24 = uVar24 + 1;
        } while (uVar24 < (ulong)param_4[3]);
        lVar13 = param_4[3] - 1;
      }
      *(byte *)((long)param_4 + lVar13 + 0x20) =
           (byte)(-1 << (ulong)(-(int)uVar28 & 7)) & *(byte *)((long)param_4 + lVar13 + 0x20);
      if (*(char *)(param_4 + 1) == '\0') goto LAB_01085c24;
    }
  }
  param_1[4] = 0;
  uStack_78 = param_4[5];
  local_80 = param_4[4];
  uStack_88 = param_4[3];
  local_90 = param_4[2];
                    /* catch() { ... } // from try @ 0108510c with catch @ 0108513c */
  uStack_98 = param_4[1];
  local_a0 = *param_4;
                    /* catch() { ... } // from try @ 0108518c with catch @ 01085140 */
  uVar28 = *(ulong *)(param_2 + 0x28);
  if (uVar28 <= (ulong)param_4[2]) {
    pbVar10 = (byte *)&local_80;
    if (*(char *)(lVar22 + 0xf9) != '\0') {
      uStack_b8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_b0 = 0;
      FUN_010869a0(param_1,lVar22 + 0x130,&local_c0);
                    /* try { // try from 01085184 to 0118518b has its CatchHandler @ 010851b0 */
                    /* try { // try from 0108518c to 011851b3 has its CatchHandler @ 01085140 */
      FUN_010869a0(param_1,&local_c0,lVar22 + 0x110);
    }
    if (uVar28 != 0) {
      uVar24 = 0;
      uVar21 = 0x80;
                    /* catch() { ... } // from try @ 01085184 with catch @ 010851b0 */
                    /* catch() { ... } // from try @ 01085200 with catch @ 010851b4 */
      pbVar31 = pbVar10;
LAB_010851c0:
      if ((uVar21 & *pbVar31) != 0) {
        uVar27 = *(uint *)((long)param_1 + 0x1c);
        uVar8 = *(ulong *)(param_2 + 0x28);
        uVar11 = uVar24;
        if (uVar8 <= uVar24) {
          piVar15 = *(int **)(param_2 + 8);
          if ((piVar15 == (int *)0x0) || (*piVar15 != 0)) {
                    /* try { // try from 010851f8 to 011851ff has its CatchHandler @ 01085224 */
            uVar11 = 0;
          }
          else {
                    /* try { // try from 01085200 to 01185227 has its CatchHandler @ 010851b4 */
            uVar11 = 0;
            *piVar15 = 0x82;
          }
        }
        pcVar12 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar11);
        iVar5 = *(int *)(pcVar12 + 8);
        iVar6 = iVar5 - *(int *)(pcVar12 + 4);
                    /* catch() { ... } // from try @ 010851f8 with catch @ 01085224 */
                    /* catch() { ... } // from try @ 01085274 with catch @ 01085228 */
        if (iVar6 == -0x150000) {
          uVar26 = 1;
LAB_01085264:
          uVar23 = iVar5 + param_5;
                    /* try { // try from 01085268 to 01185273 has its CatchHandler @ 01085298 */
          local_c0 = (ulong)uVar26;
                    /* try { // try from 01085274 to 0118529b has its CatchHandler @ 01085228 */
          local_a8 = (ulong)uVar27;
          uStack_b8 = uVar24;
          if (*pcVar12 == '\0') goto LAB_01085298;
          iVar5 = *(int *)(pcVar12 + 0xc);
          uVar27 = uVar26 | 0x10;
          local_c0 = (ulong)uVar26 | 0x10;
          local_b0 = CONCAT44(iVar5,uVar23);
        }
        else {
          if (iVar6 != -0x140000) {
            if (-1 < iVar6) {
              iVar5 = *(int *)(pcVar12 + 4);
            }
            uVar26 = 4;
            goto LAB_01085264;
          }
          uVar26 = 0;
          local_c0 = 0;
          uVar23 = param_5;
LAB_01085298:
          local_b0 = (ulong)uVar23;
          local_a8 = (ulong)uVar27;
                    /* catch() { ... } // from try @ 01085268 with catch @ 01085298 */
                    /* catch() { ... } // from try @ 010852f0 with catch @ 0108529c */
          uStack_b8 = uVar24;
          iVar5 = FT_MulFix((long)(int)uVar23,(long)(int)uVar27);
          local_b0 = CONCAT44(iVar5,(undefined4)local_b0);
          uVar8 = *(ulong *)(param_2 + 0x28);
          uVar27 = uVar26;
        }
        uVar26 = *(uint *)((long)param_1 + 0x1c);
        uVar11 = uVar24;
        if (uVar8 <= uVar24) {
          piVar15 = *(int **)(param_2 + 8);
          if ((piVar15 == (int *)0x0) || (*piVar15 != 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
                    /* try { // try from 010852e4 to 011852ef has its CatchHandler @ 01085314 */
            *piVar15 = 0x82;
          }
        }
                    /* try { // try from 010852f0 to 01185317 has its CatchHandler @ 0108529c */
        pcVar12 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar11);
        iVar6 = *(int *)(pcVar12 + 4);
        iVar3 = *(int *)(pcVar12 + 8) - iVar6;
        uStack_d8 = uVar24;
        if (iVar3 == -0x140000) {
          uVar30 = 2;
LAB_01085340:
          local_e0 = (ulong)uVar30;
          local_c8 = (ulong)uVar26;
          uVar20 = iVar6 + *(int *)(lVar22 + 0xe8) * 2 + param_5;
                    /* try { // try from 01085360 to 01185367 has its CatchHandler @ 0108538c */
          local_d0 = (ulong)uVar20;
                    /* try { // try from 01085368 to 0118538f has its CatchHandler @ 01085318 */
          if (*pcVar12 == '\0') goto LAB_0108537c;
          iVar6 = *(int *)(pcVar12 + 0x10);
          uVar26 = uVar30 | 0x10;
          local_e0 = (ulong)uVar30 | 0x10;
        }
        else {
          if (iVar3 != -0x150000) {
            if (-1 < iVar3) {
              iVar6 = *(int *)(pcVar12 + 8);
            }
            uVar30 = 8;
            goto LAB_01085340;
          }
                    /* catch() { ... } // from try @ 010852e4 with catch @ 01085314 */
          uVar30 = 0;
                    /* catch() { ... } // from try @ 01085368 with catch @ 01085318 */
          local_e0 = 0;
          local_d0 = (ulong)param_5;
          uVar20 = param_5;
LAB_0108537c:
          local_c8 = (ulong)uVar26;
          iVar6 = FT_MulFix((long)(int)uVar20,(long)(int)uVar26);
          uVar26 = uVar30;
        }
        local_d0 = CONCAT44(iVar6,(undefined4)local_d0);
                    /* catch() { ... } // from try @ 01085360 with catch @ 0108538c */
        if ((uVar27 | uVar26) >> 4 == 0) {
          uVar11 = (ulong)*(uint *)(lVar22 + 0xf4);
          if (*(uint *)(lVar22 + 0xf4) != 0) {
            iVar3 = *(int *)(lVar22 + 0x104);
            if ((uVar27 & 5) == 0) {
              if ((uVar26 & 10) != 0) {
                uVar8 = 0;
                pcVar12 = (char *)(lVar22 + 0x160);
                do {
                    /* try { // try from 01085430 to 0118543b has its CatchHandler @ 01085460 */
                    /* try { // try from 0108543c to 01185463 has its CatchHandler @ 010853f4 */
                  if (((*pcVar12 == '\0') &&
                      (iVar14 = *(int *)(pcVar12 + -0x10), iVar14 - iVar3 <= (int)uVar20)) &&
                     ((int)uVar20 <= *(int *)(pcVar12 + -0xc) + iVar3)) goto LAB_010854cc;
                  uVar8 = uVar8 + 1;
                  pcVar12 = pcVar12 + 0x14;
                    /* catch() { ... } // from try @ 01085430 with catch @ 01085460 */
                } while (uVar8 < uVar11);
              }
            }
            else if ((uVar26 & 10) == 0) {
              uVar8 = 0;
              pcVar12 = (char *)(lVar22 + 0x160);
              do {
                if (((*pcVar12 != '\0') && (*(int *)(pcVar12 + -0x10) - iVar3 <= (int)uVar23)) &&
                   (iVar14 = *(int *)(pcVar12 + -0xc), (int)uVar23 <= iVar14 + iVar3))
                goto LAB_010854ac;
                uVar8 = uVar8 + 1;
                pcVar12 = pcVar12 + 0x14;
                    /* try { // try from 010854a4 to 011854ab has its CatchHandler @ 010854d0 */
              } while (uVar8 < uVar11);
            }
            else {
              uVar8 = 0;
              piVar15 = (int *)(lVar22 + 0x150);
              do {
                iVar14 = *piVar15;
                if ((char)piVar15[4] == '\0') {
                    /* catch() { ... } // from try @ 0108543c with catch @ 010853f4 */
                  if ((iVar14 - iVar3 <= (int)uVar20) && ((int)uVar20 <= piVar15[1] + iVar3))
                  goto LAB_010854cc;
                }
                else if ((iVar14 - iVar3 <= (int)uVar23) &&
                        (iVar14 = piVar15[1], (int)uVar23 <= iVar14 + iVar3)) goto LAB_010854ac;
                uVar8 = uVar8 + 1;
                piVar15 = piVar15 + 5;
              } while (uVar8 < uVar11);
            }
          }
          goto LAB_010855ac;
        }
        goto LAB_01085588;
      }
      goto LAB_010855ac;
    }
LAB_010855d0:
    if (param_6 == '\0') {
      if (uVar28 != 0) {
        uVar24 = 0;
        uVar21 = 0x80;
        do {
          if ((uVar21 & *pbVar10) != 0) {
            uVar27 = *(uint *)((long)param_1 + 0x1c);
            uVar8 = *(ulong *)(param_2 + 0x28);
            uVar11 = uVar24;
            if (uVar8 <= uVar24) {
              piVar15 = *(int **)(param_2 + 8);
              if ((piVar15 == (int *)0x0) || (*piVar15 != 0)) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                *piVar15 = 0x82;
              }
            }
            pcVar12 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar11);
            iVar5 = *(int *)(pcVar12 + 8);
            iVar6 = iVar5 - *(int *)(pcVar12 + 4);
            uStack_b8 = uVar24;
            if (iVar6 == -0x150000) {
              uVar26 = 1;
LAB_010856dc:
              uVar23 = iVar5 + param_5;
              local_c0 = (ulong)uVar26;
              local_a8 = (ulong)uVar27;
              if (*pcVar12 == '\0') goto LAB_01085710;
              local_c0 = (ulong)uVar26 | 0x10;
              local_b0 = CONCAT44(*(undefined4 *)(pcVar12 + 0xc),uVar23);
            }
            else {
              if (iVar6 != -0x140000) {
                if (-1 < iVar6) {
                  iVar5 = *(int *)(pcVar12 + 4);
                }
                uVar26 = 4;
                goto LAB_010856dc;
              }
              local_c0 = 0;
              uVar23 = param_5;
LAB_01085710:
              local_b0 = (ulong)uVar23;
              local_a8 = (ulong)uVar27;
              uVar7 = FT_MulFix((long)(int)uVar23,(long)(int)uVar27);
              local_b0 = CONCAT44(uVar7,(undefined4)local_b0);
              uVar8 = *(ulong *)(param_2 + 0x28);
            }
            uVar27 = *(uint *)((long)param_1 + 0x1c);
            uVar11 = uVar24;
            if (uVar8 <= uVar24) {
              piVar15 = *(int **)(param_2 + 8);
              if ((piVar15 == (int *)0x0) || (*piVar15 != 0)) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                *piVar15 = 0x82;
              }
            }
            pcVar12 = (char *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar11);
            iVar5 = *(int *)(pcVar12 + 4);
            iVar6 = *(int *)(pcVar12 + 8) - iVar5;
            uStack_d8 = uVar24;
            if (iVar6 == -0x140000) {
              uVar26 = 2;
LAB_010857b0:
              local_e0 = (ulong)uVar26;
              local_c8 = (ulong)uVar27;
              uVar23 = iVar5 + *(int *)(lVar22 + 0xe8) * 2 + param_5;
              if (*pcVar12 == '\0') goto LAB_010857f0;
              local_e0 = (ulong)uVar26 | 0x10;
              local_d0 = CONCAT44(*(undefined4 *)(pcVar12 + 0x10),uVar23);
            }
            else {
              if (iVar6 != -0x150000) {
                if (-1 < iVar6) {
                  iVar5 = *(int *)(pcVar12 + 8);
                }
                uVar26 = 8;
                goto LAB_010857b0;
              }
              local_e0 = 0;
              uVar23 = param_5;
LAB_010857f0:
              local_d0 = (ulong)uVar23;
              local_c8 = (ulong)uVar27;
              uVar7 = FT_MulFix((long)(int)uVar23,(long)(int)uVar27);
              local_d0 = CONCAT44(uVar7,(undefined4)local_d0);
            }
            FUN_010869a0(param_1,&local_c0,&local_e0);
          }
          uVar11 = uVar24 & 7;
          uVar21 = uVar21 >> 1;
          uVar24 = uVar24 + 1;
          if (uVar11 == 7) {
            pbVar10 = pbVar10 + 1;
            uVar21 = 0x80;
          }
        } while (uVar28 != uVar24);
      }
    }
    else if ((((int)param_1[4] == 0) || (0 < (int)param_1[7])) ||
            ((int)param_1[(ulong)((int)param_1[4] - 1) * 4 + 7] < 0)) {
      uStack_b8 = 0;
      local_b0 = 0;
      local_c0 = 0x31;
      uStack_d8 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_a8 = (ulong)*(uint *)((long)param_1 + 0x1c);
      FUN_010869a0(param_1,&local_c0,&local_e0);
    }
    *(undefined8 *)(param_1[2] + 0x28) = 0;
    uVar28 = (ulong)*(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) != 0) {
      uVar24 = 0;
      do {
        uVar21 = *(uint *)(param_1 + uVar24 * 4 + 5);
        uVar11 = uVar24;
        if ((uVar21 & 0xc) != 0) {
          uVar11 = uVar24 + 1;
        }
        if ((uVar21 >> 4 & 1) == 0) {
          puVar29 = (uint *)((long)param_1 + uVar24 * 0x20 + 0x3c);
          uVar30 = *puVar29;
          puVar25 = (uint *)((long)param_1 + uVar11 * 0x20 + 0x3c);
          uVar20 = *puVar25;
          uVar27 = uVar30 & 0xffff;
          uVar23 = -(uVar20 & 0xffff);
          uVar26 = 0;
          if ((uVar30 & 0xffff) != 0) {
            uVar26 = 0x10000 - uVar27;
          }
          uVar1 = 0;
          if ((uVar20 & 0xffff) != 0) {
            uVar1 = 0x10000 - (uVar20 & 0xffff);
          }
          if (uVar1 <= uVar26) {
            uVar26 = uVar1;
          }
          if ((int)uVar23 < (int)-uVar27) {
            uVar23 = -uVar27;
          }
          if ((uVar11 < (int)uVar28 - 1) &&
             (*(int *)((long)param_1 + (uVar11 + 1) * 0x20 + 0x3c) < (int)(uVar20 + uVar26 + 0x8000)
             )) {
            if ((uVar24 == 0) ||
               (*(int *)((long)param_1 + uVar24 * 0x20 + 0x1c) <= (int)(uVar30 + uVar23 + -0x8000)))
            {
              uVar27 = uVar23;
              if ((int)-uVar23 <= (int)uVar26) goto LAB_01085a34;
            }
            else {
              uVar23 = 0;
            }
            uVar27 = uVar23;
            if ((*(byte *)(param_1 + (uVar11 + 1) * 4 + 5) >> 4 & 1) == 0) {
              uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar26 - uVar23);
              local_c0 = uVar11;
              FUN_01085c80(param_1[2],&local_c0);
              uVar30 = *puVar29;
            }
          }
          else if (((uVar24 == 0) ||
                   (uVar27 = uVar26,
                   *(int *)((long)param_1 + uVar24 * 0x20 + 0x1c) <=
                   (int)(uVar30 + uVar23 + -0x8000))) &&
                  (uVar27 = uVar23, (int)uVar26 <= (int)-uVar23)) {
            uVar27 = uVar26;
          }
LAB_01085a34:
          *puVar29 = uVar27 + uVar30;
          if ((uVar21 & 0xc) != 0) {
            *puVar25 = *puVar25 + uVar27;
          }
        }
        if (uVar24 != 0) {
          lVar22 = uVar24 - 1;
          iVar5 = (int)param_1[uVar24 * 4 + 7] - (int)param_1[lVar22 * 4 + 7];
          if (iVar5 != 0) {
            uVar7 = FT_DivFix((long)*(int *)((long)param_1 + uVar24 * 0x20 + 0x3c) -
                              (long)*(int *)((long)param_1 + lVar22 * 0x20 + 0x3c),(long)iVar5);
            *(undefined4 *)(param_1 + lVar22 * 4 + 8) = uVar7;
          }
        }
        if ((uVar21 & 0xc) != 0) {
          lVar22 = uVar11 - 1;
          uVar24 = uVar24 + 1;
          iVar5 = (int)param_1[uVar11 * 4 + 7] - (int)param_1[lVar22 * 4 + 7];
          if (iVar5 != 0) {
            uVar7 = FT_DivFix((long)*(int *)((long)param_1 + uVar11 * 0x20 + 0x3c) -
                              (long)*(int *)((long)param_1 + lVar22 * 0x20 + 0x3c),(long)iVar5);
            *(undefined4 *)(param_1 + lVar22 * 4 + 8) = uVar7;
          }
        }
        uVar28 = (ulong)*(uint *)(param_1 + 4);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar28);
      lVar22 = param_1[2];
      uVar28 = *(ulong *)(lVar22 + 0x28);
      if (uVar28 != 0) {
        lVar13 = *(long *)(lVar22 + 0x38);
        lVar16 = *(long *)(lVar22 + 0x10);
        uVar24 = uVar28 - 1;
        do {
          uVar11 = uVar24;
          if (uVar28 <= uVar24) {
            piVar15 = *(int **)(lVar22 + 8);
            if ((piVar15 == (int *)0x0) || (*piVar15 != 0)) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              *piVar15 = 0x82;
            }
          }
          plVar19 = (long *)(lVar13 + uVar11 * lVar16);
          lVar18 = *plVar19;
          piVar15 = (int *)((long)param_1 + lVar18 * 0x20 + 0x3c);
          iVar6 = (int)plVar19[1];
          iVar5 = iVar6 + *piVar15;
          if ((iVar5 + 0x8000 <= *(int *)((long)param_1 + lVar18 * 0x20 + 0x5c)) &&
             (*piVar15 = iVar5, (*(byte *)(param_1 + lVar18 * 4 + 5) & 0xc) != 0)) {
            *(int *)((long)param_1 + lVar18 * 0x20 + 0x1c) =
                 *(int *)((long)param_1 + lVar18 * 0x20 + 0x1c) + iVar6;
          }
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0xffffffffffffffff);
      }
    }
    if ((param_6 == '\0') && (uVar21 = *(uint *)(param_1 + 4), uVar21 != 0)) {
      uVar28 = 0;
      puVar25 = (uint *)(param_1 + 5);
      do {
        uVar27 = *puVar25;
        if ((uVar27 >> 5 & 1) == 0) {
          uVar24 = *(ulong *)(puVar25 + 2);
          if (*(ulong *)(param_2 + 0x28) <= uVar24) {
            piVar15 = *(int **)(param_2 + 8);
            uVar24 = 0;
            if (piVar15 != (int *)0x0) {
              if (*piVar15 == 0) {
                *piVar15 = 0x82;
                uVar27 = *puVar25;
              }
              uVar24 = 0;
            }
          }
          puVar17 = (undefined1 *)(*(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10) * uVar24);
          puVar29 = (uint *)(puVar17 + 0x10);
          if ((uVar27 & 10) == 0) {
            puVar29 = (uint *)(puVar17 + 0xc);
          }
          *puVar29 = puVar25[5];
          *puVar17 = 1;
          uVar21 = *(uint *)(param_1 + 4);
        }
        uVar28 = uVar28 + 1;
        puVar25 = puVar25 + 8;
      } while (uVar28 < uVar21);
    }
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((long)param_4 + 9) = 0;
  }
LAB_01085c24:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_010854cc:
                    /* catch() { ... } // from try @ 010854a4 with catch @ 010854d0 */
                    /* catch() { ... } // from try @ 01085524 with catch @ 010854d4 */
  if (*(char *)(lVar22 + 0xf8) == '\0') {
                    /* try { // try from 01085524 to 0118554b has its CatchHandler @ 010854d4 */
    uVar30 = iVar6 + 0x8000U & 0xffff0000;
                    /* catch() { ... } // from try @ 01085518 with catch @ 01085548 */
                    /* catch() { ... } // from try @ 01085598 with catch @ 0108554c */
    if ((*(int *)(lVar22 + 0x100) <= (int)(uVar20 - iVar14)) &&
       (uVar23 = *(int *)(lVar22 + uVar8 * 0x14 + 0x15c) + 0x10000, (int)uVar30 <= (int)uVar23)) {
      uVar30 = uVar23;
    }
  }
  else {
    uVar30 = *(uint *)(lVar22 + uVar8 * 0x14 + 0x15c);
  }
  puVar9 = &local_e0;
  goto LAB_01085554;
LAB_010854ac:
                    /* try { // try from 010854ac to 011854d3 has its CatchHandler @ 01085464 */
  if (*(char *)(lVar22 + 0xf8) == '\0') {
    uVar30 = iVar5 + 0x8000U & 0xffff0000;
    if ((*(int *)(lVar22 + 0x100) <= (int)(iVar14 - uVar23)) &&
       (uVar23 = *(int *)(lVar22 + uVar8 * 0x14 + 0x15c) - 0x10000, (int)uVar23 <= (int)uVar30)) {
      uVar30 = uVar23;
    }
                    /* try { // try from 01085518 to 01185523 has its CatchHandler @ 01085548 */
    puVar9 = &local_c0;
  }
  else {
    uVar30 = *(uint *)(lVar22 + uVar8 * 0x14 + 0x15c);
    puVar9 = &local_c0;
  }
LAB_01085554:
  iVar5 = uVar30 - *(int *)((long)puVar9 + 0x14);
  if (uVar27 != 0) {
    local_c0 = CONCAT44(local_c0._4_4_,uVar27) | 0x10;
    local_b0 = CONCAT44(local_b0._4_4_ + iVar5,(undefined4)local_b0);
  }
  if (uVar26 != 0) {
    local_d0 = CONCAT44(iVar6 + iVar5,(undefined4)local_d0);
    local_e0 = CONCAT44(local_e0._4_4_,uVar26) | 0x10;
  }
LAB_01085588:
                    /* try { // try from 01085590 to 01185597 has its CatchHandler @ 010855bc */
  FUN_010869a0(param_1,&local_c0,&local_e0);
                    /* try { // try from 01085598 to 011855bf has its CatchHandler @ 0108554c */
  *pbVar31 = *pbVar31 & ((byte)uVar21 ^ 0xff);
LAB_010855ac:
  uVar11 = uVar24 & 7;
  uVar21 = uVar21 >> 1;
  uVar24 = uVar24 + 1;
                    /* catch() { ... } // from try @ 01085590 with catch @ 010855bc */
  if (uVar11 == 7) {
    pbVar31 = pbVar31 + 1;
    uVar21 = 0x80;
  }
  if (uVar24 == uVar28) goto LAB_010855d0;
  goto LAB_010851c0;
}

