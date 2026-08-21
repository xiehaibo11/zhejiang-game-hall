
ulong FT_Bitmap_Embolden(undefined8 *param_1,ulong *param_2,long param_3,long param_4)

{
  bool bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  byte *__s;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  ulong __n;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  undefined8 uVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
                    /* try { // try from 010bb89c to 011bb8a3 has its CatchHandler @ 010bb904 */
                    /* try { // try from 010bb8a4 to 011bb94f has its CatchHandler @ 010bb838 */
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((((param_2 != (ulong *)0x0) && (param_2[2] != 0)) && (param_3 + 0x20 >> 6 < 0x80000000)) &&
     (param_4 + 0x20 >> 6 < 0x80000000)) {
    uVar7 = (uint)(param_3 + 0x20);
    uVar19 = (uint)(param_4 + 0x20);
    iVar26 = (int)(uVar19 | uVar7) >> 6;
    if (iVar26 == 0) {
      return 0;
    }
    if (-1 < iVar26) {
      uVar17 = (uint)*(byte *)((long)param_2 + 0x1a);
      iVar26 = (int)uVar7 >> 6;
      uVar19 = (int)uVar19 >> 6;
                    /* catch() { ... } // from try @ 010bb86c with catch @ 010bb934 */
                    /* try { // try from 010bb950 to 011bb983 has its CatchHandler @ 010bb950
                       catch() { ... } // from try @ 010bb950 with catch @ 010bb950
                       catch() { ... } // from try @ 010bb9bc with catch @ 010bb950 */
      switch(*(byte *)((long)param_2 + 0x1a)) {
      case 1:
                    /* try { // try from 010bb9bc to 011bba67 has its CatchHandler @ 010bb950 */
        if (7 < iVar26) {
          iVar26 = 8;
        }
        uVar17 = 1;
        break;
      case 3:
      case 4:
        local_68 = 0;
        uStack_70 = 0;
        local_78 = 0;
        uStack_80 = 0;
        local_88 = 0;
        uVar7 = FT_Bitmap_Convert(param_1,param_2,&local_88,1);
        if (uVar7 != 0) {
          return (ulong)uVar7;
        }
                    /* try { // try from 010bb984 to 011bb997 has its CatchHandler @ 010bba4c */
        ft_mem_free(*param_1,param_2[2]);
        param_2[4] = local_68;
        param_2[3] = uStack_70;
        param_2[2] = local_78;
        uVar17 = (uint)*(byte *)((long)param_2 + 0x1a);
        param_2[1] = uStack_80;
        *param_2 = local_88;
        break;
      case 5:
        iVar26 = iVar26 * 3;
        uVar17 = 5;
        break;
      case 6:
        uVar19 = uVar19 * 3;
        uVar17 = 6;
        break;
      case 7:
        return 0;
      }
      uVar25 = (uint)param_2[1];
      uVar7 = -uVar25;
      if (-1 < (int)uVar25) {
        uVar7 = uVar25;
      }
      if (5 < uVar17 - 1) {
        return 0x12;
      }
      uVar23 = *param_1;
      uVar25 = (uint)*param_2;
      uVar10 = *(uint *)((long)param_2 + 4);
      switch(uVar17) {
      case 1:
        uVar17 = iVar26 + uVar10 + 7 >> 3;
        iVar27 = 1;
        break;
      default:
        uVar17 = uVar10 + iVar26;
        iVar27 = 8;
                    /* catch() { ... } // from try @ 010bb9b4 with catch @ 010bba1c */
        break;
      case 3:
                    /* catch() { ... } // from try @ 010bb984 with catch @ 010bba4c */
        uVar17 = iVar26 + uVar10 + 3 >> 2;
        iVar27 = 2;
        break;
      case 4:
        uVar17 = iVar26 + uVar10 + 1 >> 1;
                    /* try { // try from 010bba68 to 011bba9b has its CatchHandler @ 010bba68
                       catch() { ... } // from try @ 010bba68 with catch @ 010bba68
                       catch() { ... } // from try @ 010bbad4 with catch @ 010bba68 */
        iVar27 = 4;
      }
      if ((uVar19 == 0) && ((int)uVar17 <= (int)uVar7)) {
        uVar17 = iVar27 * (uVar10 + iVar26);
        if ((uVar17 < uVar7 << 3) && (uVar25 != 0)) {
          pbVar16 = (byte *)param_2[2];
                    /* try { // try from 010bba9c to 011bbaaf has its CatchHandler @ 010bbb64 */
          if ((uVar17 & 7) == 0) {
            do {
              pbVar2 = pbVar16 + (int)uVar7;
              pbVar16 = pbVar16 + (uVar17 >> 3);
              if (pbVar16 < pbVar2) {
                memset(pbVar16,0,(long)pbVar2 - (long)pbVar16);
              }
              uVar25 = uVar25 - 1;
              pbVar16 = pbVar2;
            } while (uVar25 != 0);
          }
          else {
            do {
              pbVar2 = pbVar16 + (uVar17 >> 3);
              pbVar16 = pbVar16 + (int)uVar7;
              __s = pbVar2 + 1;
              *pbVar2 = (byte)(0xff00 >> (ulong)(uVar17 & 7)) & *pbVar2;
              if (__s < pbVar16) {
                    /* try { // try from 010bbacc to 011bbad3 has its CatchHandler @ 010bbb34 */
                memset(__s,0,(long)pbVar16 - (long)__s);
              }
              uVar25 = uVar25 - 1;
                    /* try { // try from 010bbad4 to 011bbb7f has its CatchHandler @ 010bba68 */
            } while (uVar25 != 0);
          }
        }
        uVar7 = (uint)param_2[1];
      }
      else {
        uVar8 = ft_mem_qrealloc(uVar23,uVar25 + uVar19,0,(long)(int)uVar17,0,&local_88);
        if ((int)local_88 != 0) {
          return local_88 & 0xffffffff;
        }
        __n = (ulong)(iVar27 * uVar10 + 7 >> 3);
                    /* catch() { ... } // from try @ 010bbd98 with catch @ 010bbe00 */
        if ((int)(uint)param_2[1] < 1) {
          if ((uint)*param_2 != 0) {
            uVar22 = 0;
            uVar10 = 0;
            uVar25 = 0;
            do {
              memcpy((void *)(uVar8 + uVar22),(void *)(param_2[2] + (ulong)uVar10),__n);
              uVar25 = uVar25 + 1;
              uVar10 = uVar10 + uVar7;
              uVar22 = uVar22 + uVar17;
            } while (uVar25 < (uint)*param_2);
          }
        }
        else if ((uint)*param_2 != 0) {
          uVar10 = 0;
          uVar25 = 0;
          uVar22 = uVar19 * uVar17;
          do {
            memcpy((void *)(uVar8 + uVar22),(void *)(param_2[2] + (ulong)uVar10),__n);
                    /* catch() { ... } // from try @ 010bbd6c with catch @ 010bbe30 */
            uVar25 = uVar25 + 1;
            uVar10 = uVar10 + uVar7;
            uVar22 = uVar22 + uVar17;
          } while (uVar25 < (uint)*param_2);
        }
        ft_mem_free(uVar23,param_2[2]);
        param_2[2] = uVar8;
        uVar7 = -uVar17;
        if (-1 < (int)(uint)param_2[1]) {
          uVar7 = uVar17;
        }
        *(uint *)(param_2 + 1) = uVar7;
      }
      if ((int)uVar7 < 1) {
        uVar17 = (uint)*param_2;
        uVar25 = -uVar7;
        puVar18 = (undefined8 *)(param_2[2] + (ulong)-(uVar7 * (uVar17 - 1)));
      }
      else {
        uVar17 = (uint)*param_2;
        puVar18 = (undefined8 *)(param_2[2] + (long)(int)(uVar7 * uVar19));
        uVar25 = uVar7;
      }
      if (uVar17 == 0) {
        uVar10 = 0;
LAB_010bbed0:
        *(uint *)param_2 = uVar10 + uVar19;
        *(uint *)((long)param_2 + 4) = *(uint *)((long)param_2 + 4) + iVar26;
        return 0;
      }
      lVar20 = (long)(int)uVar25;
      uVar8 = (ulong)uVar25;
                    /* catch() { ... } // from try @ 010bbacc with catch @ 010bbb34 */
      uVar17 = 0;
      lVar21 = uVar8 - (uVar25 & 0x1f);
LAB_010bbb54:
      if (0 < (int)uVar25) {
        lVar9 = (long)puVar18 + lVar20;
                    /* catch() { ... } // from try @ 010bba9c with catch @ 010bbb64 */
        lVar11 = lVar20 + -2;
        lVar12 = lVar20;
LAB_010bbb68:
        lVar13 = lVar12 + -1;
        if (0 < iVar26) {
          bVar4 = *(byte *)((long)puVar18 + lVar13);
          uVar7 = (uint)bVar4;
          if (lVar12 < 2) {
            lVar14 = 0;
            lVar24 = lVar11;
            do {
                    /* try { // try from 010bbc1c to 011bbc53 has its CatchHandler @ 010bbc1c
                       catch() { ... } // from try @ 010bbc1c with catch @ 010bbc1c
                       catch() { ... } // from try @ 010bbc88 with catch @ 010bbc1c */
              if (*(char *)((long)param_2 + 0x1a) == '\x01') {
                uVar7 = (uint)(bVar4 >> (ulong)((int)lVar14 + 1U & 0x1f)) | uVar7 & 0xff;
                *(char *)((long)puVar18 + lVar13) = (char)uVar7;
              }
              else {
                if (lVar24 < 0) break;
                uVar5 = (ushort)param_2[3];
                uVar7 = (uint)*(byte *)((long)puVar18 + lVar24) + (uVar7 & 0xff);
                    /* try { // try from 010bbc54 to 011bbc63 has its CatchHandler @ 010bbd18 */
                if (uVar5 <= uVar7) goto LAB_010bbc84;
                *(char *)((long)puVar18 + lVar13) = (char)uVar7;
                if ((uVar7 & 0xff) == (ushort)param_2[3] - 1) break;
              }
              lVar14 = lVar14 + 1;
              lVar24 = lVar24 + -1;
            } while (lVar14 < iVar26);
          }
          else {
            lVar14 = 0;
            lVar24 = -2;
            do {
              if (*(char *)((long)param_2 + 0x1a) == '\x01') {
                uVar7 = (uint)*(byte *)((long)puVar18 + lVar12 + -2) <<
                        (ulong)((int)lVar24 + 9U & 0x1f) |
                        (uint)(bVar4 >> (ulong)((int)lVar14 + 1U & 0x1f)) | uVar7 & 0xff;
                *(char *)((long)puVar18 + lVar13) = (char)uVar7;
              }
              else {
                if (lVar12 + lVar24 < 0) break;
                uVar5 = (ushort)param_2[3];
                uVar7 = (uint)*(byte *)(lVar9 + lVar24) + (uVar7 & 0xff);
                if (uVar5 <= uVar7) goto LAB_010bbc84;
                *(char *)((long)puVar18 + lVar13) = (char)uVar7;
                if ((uVar7 & 0xff) == (ushort)param_2[3] - 1) break;
              }
              lVar14 = lVar14 + 1;
              lVar24 = lVar24 + -1;
            } while (lVar14 < iVar26);
          }
        }
        goto LAB_010bbc8c;
      }
      goto LAB_010bbca0;
    }
  }
                    /* catch() { ... } // from try @ 010bb89c with catch @ 010bb904 */
  return 6;
LAB_010bbc84:
                    /* try { // try from 010bbc88 to 011bbd33 has its CatchHandler @ 010bbc1c */
  *(char *)((long)puVar18 + lVar13) = (char)uVar5 + -1;
LAB_010bbc8c:
  lVar11 = lVar11 + -1;
  lVar9 = lVar9 + -1;
  bVar1 = lVar12 < 2;
  lVar12 = lVar13;
  if (bVar1) goto code_r0x010bbc9c;
  goto LAB_010bbb68;
code_r0x010bbc9c:
  uVar7 = (uint)param_2[1];
LAB_010bbca0:
  if (0 < (int)uVar19) {
    if ((int)uVar25 < 1) {
      uVar10 = uVar19 & 0xfffffffe;
      if (uVar19 < 2) {
        uVar10 = 1;
      }
      else {
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
        uVar10 = uVar19 | 1;
        if (uVar19 == (uVar19 & 0xfffffffe)) goto LAB_010bbda4;
      }
                    /* try { // try from 010bbd98 to 011bbd9f has its CatchHandler @ 010bbe00 */
      iVar27 = (uVar19 + 1) - uVar10;
      do {
        iVar27 = iVar27 + -1;
                    /* try { // try from 010bbda0 to 011bbe4b has its CatchHandler @ 010bbd34 */
      } while (iVar27 != 0);
    }
    else {
      iVar27 = 1;
      do {
        iVar6 = uVar7 * iVar27;
        lVar9 = 0;
        if ((uVar25 < 0x20) || (lVar21 == 0)) {
LAB_010bbd30:
                    /* try { // try from 010bbd34 to 011bbd6b has its CatchHandler @ 010bbd34
                       catch() { ... } // from try @ 010bbd34 with catch @ 010bbd34
                       catch() { ... } // from try @ 010bbda0 with catch @ 010bbd34 */
          pbVar16 = (byte *)((long)puVar18 + lVar9);
          lVar9 = uVar8 - lVar9;
          do {
            lVar9 = lVar9 + -1;
            pbVar16[-(long)iVar6] = pbVar16[-(long)iVar6] | *pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (lVar9 != 0);
        }
        else {
                    /* catch() { ... } // from try @ 010bbc80 with catch @ 010bbce8 */
          if (((ulong)((long)puVar18 - (long)iVar6) < (long)puVar18 + uVar8) &&
             (puVar18 < (undefined8 *)(((long)puVar18 + uVar8) - (long)iVar6))) {
            lVar9 = 0;
            goto LAB_010bbd30;
          }
          lVar9 = lVar21;
          puVar15 = puVar18;
          do {
            puVar3 = (undefined8 *)((long)puVar15 - (long)iVar6);
            uVar28 = puVar15[1];
            uVar23 = *puVar15;
            uVar30 = puVar15[3];
            uVar29 = puVar15[2];
            uVar32 = puVar3[1];
            uVar31 = *puVar3;
            uVar34 = puVar3[3];
            uVar33 = puVar3[2];
            lVar9 = lVar9 + -0x20;
            puVar15 = puVar15 + 4;
                    /* catch() { ... } // from try @ 010bbc54 with catch @ 010bbd18 */
            puVar3[1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) | (byte)((ulong)uVar28 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar32 >> 0x30) |
                                          (byte)((ulong)uVar28 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar32 >> 0x28) |
                                                   (byte)((ulong)uVar28 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar32 >> 0x20) |
                                                            (byte)((ulong)uVar28 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar32 >> 0x18) |
                                                                     (byte)((ulong)uVar28 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar32
                                                                                    >> 0x10) |
                                                                              (byte)((ulong)uVar28
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar32 >> 8) | (byte)((ulong)uVar28 >> 8),
                                                  (byte)uVar32 | (byte)uVar28)))))));
            *puVar3 = CONCAT17((byte)((ulong)uVar31 >> 0x38) | (byte)((ulong)uVar23 >> 0x38),
                               CONCAT16((byte)((ulong)uVar31 >> 0x30) |
                                        (byte)((ulong)uVar23 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar31 >> 0x28) |
                                                 (byte)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar31 >> 0x20) |
                                                          (byte)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar31 >> 0x18) |
                                                                   (byte)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar31 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) | (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar31 | (byte)uVar23)))))));
            puVar3[3] = CONCAT17((byte)((ulong)uVar34 >> 0x38) | (byte)((ulong)uVar30 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar34 >> 0x30) |
                                          (byte)((ulong)uVar30 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar34 >> 0x28) |
                                                   (byte)((ulong)uVar30 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar34 >> 0x20) |
                                                            (byte)((ulong)uVar30 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar34 >> 0x18) |
                                                                     (byte)((ulong)uVar30 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar34
                                                                                    >> 0x10) |
                                                                              (byte)((ulong)uVar30
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar34 >> 8) | (byte)((ulong)uVar30 >> 8),
                                                  (byte)uVar34 | (byte)uVar30)))))));
            puVar3[2] = CONCAT17((byte)((ulong)uVar33 >> 0x38) | (byte)((ulong)uVar29 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar33 >> 0x30) |
                                          (byte)((ulong)uVar29 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar33 >> 0x28) |
                                                   (byte)((ulong)uVar29 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar33 >> 0x20) |
                                                            (byte)((ulong)uVar29 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar33 >> 0x18) |
                                                                     (byte)((ulong)uVar29 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar33
                                                                                    >> 0x10) |
                                                                              (byte)((ulong)uVar29
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar33 >> 8) | (byte)((ulong)uVar29 >> 8),
                                                  (byte)uVar33 | (byte)uVar29)))))));
          } while (lVar9 != 0);
          lVar9 = lVar21;
          if ((uVar25 & 0x1f) != 0) goto LAB_010bbd30;
        }
        uVar7 = (uint)param_2[1];
        iVar27 = iVar27 + 1;
      } while (iVar27 != uVar19 + 1);
    }
  }
LAB_010bbda4:
  uVar10 = (uint)*param_2;
  uVar17 = uVar17 + 1;
  puVar18 = (undefined8 *)((long)puVar18 + (long)(int)uVar7);
  if (uVar10 <= uVar17) goto LAB_010bbed0;
  goto LAB_010bbb54;
}

