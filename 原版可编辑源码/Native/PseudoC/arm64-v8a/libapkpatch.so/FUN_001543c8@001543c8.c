
void FUN_001543c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  char cVar12;
  size_t __n;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  ulong uVar27;
  byte bStack_71;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar11 = *(byte **)(param_1 + 0x10);
  if (0x20 < (*(long *)(param_1 + 0x18) - (long)pbVar11) + 1U) {
    pbVar8 = local_60;
    if ((&local_70 < pbVar11 + 0x20) && (pbVar11 < pbVar8)) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        bVar13 = pbVar11[lVar7];
        bVar14 = (pbVar11 + lVar7)[1];
        lVar7 = lVar7 + 2;
        cVar19 = '\t';
        if (bVar13 - 0x30 < 10) {
          cVar19 = '\0';
        }
        cVar12 = -0x57;
        if (bVar14 - 0x30 < 10) {
          cVar12 = -0x30;
        }
        cVar19 = cVar12 + bVar14 + (cVar19 + bVar13) * '\x10';
        *(char *)((long)&local_70 + uVar10) = cVar19;
        uVar9 = uVar10 + 1;
      } while (lVar7 != 0x20);
      pbVar8 = (byte *)((long)&local_70 + uVar10 + 1);
    }
    else {
      bVar13 = pbVar11[2];
      bVar20 = pbVar11[3];
      bVar21 = pbVar11[5];
      bVar14 = pbVar11[6];
      bVar15 = pbVar11[10];
      bVar22 = pbVar11[0xb];
      bVar16 = pbVar11[0x12];
      bVar23 = pbVar11[0x13];
      bVar24 = pbVar11[0x15];
      bVar17 = pbVar11[0x16];
      bVar18 = pbVar11[0x1a];
      bVar25 = pbVar11[0x1b];
      uVar10 = 0xf;
      auVar2[1] = -(9 < bVar20 - 0x30);
      auVar2[0] = -(9 < (CONCAT12(bVar21,CONCAT11(bVar20,pbVar11[1])) & 0xff) - 0x30);
      auVar26[8] = 0xd0;
      auVar26._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar26[9] = 0xd0;
      auVar26[10] = 0xd0;
      auVar26[0xb] = 0xd0;
      auVar26[0xc] = 0xd0;
      auVar26[0xd] = 0xd0;
      auVar26[0xe] = 0xd0;
      auVar26[0xf] = 0xd0;
      uVar9 = CONCAT71((int7)(((ulong)CONCAT15(-(9 < pbVar11[0x1e] - 0x30),
                                               CONCAT14(-(9 < pbVar11[0x1c] - 0x30),
                                                        CONCAT13(-(9 < bVar18 - 0x30),
                                                                 CONCAT12(-(9 < (CONCAT12(bVar18,(
                                                  ushort)pbVar11[0x18]) & 0xffff) - 0x30),
                                                  CONCAT11(-(9 < bVar17 - 0x30),
                                                           -(9 < (CONCAT12(bVar17,(ushort)pbVar11[
                                                  0x14]) & 0xffff) - 0x30)))))) << 0x10) >> 8),
                       -(9 < (CONCAT12(bVar16,(ushort)pbVar11[0x10]) & 0xffff) - 0x30)) &
              0xffffffffffffff09;
      uVar27 = CONCAT62((int6)(uVar9 >> 0x10),CONCAT11(-(9 < bVar16 - 0x30),(char)uVar9)) &
               0xffffffffffff09ff;
      uVar9 = CONCAT53((int5)(uVar27 >> 0x18),CONCAT12((char)(uVar9 >> 0x10),(short)uVar27)) &
              0xffffffffff09ffff;
      uVar27 = CONCAT44((int)(uVar9 >> 0x20),CONCAT13((char)(uVar27 >> 0x18),(int3)uVar9)) &
               0xffffffff09ffffff;
      uVar9 = CONCAT35((int3)(uVar27 >> 0x28),CONCAT14((char)(uVar9 >> 0x20),(int)uVar27)) &
              0xffffff09ffffffff;
      uVar27 = CONCAT26((short)(uVar9 >> 0x30),CONCAT15((char)(uVar27 >> 0x28),(int5)uVar9)) &
               0xffff09ffffffffff;
      uVar9 = CONCAT17((char)(uVar27 >> 0x38),CONCAT16((char)(uVar9 >> 0x30),(int6)uVar27)) &
              0x909ffffffffffff;
      auVar3[8] = 0xa9;
      auVar3._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar3[9] = 0xa9;
      auVar3[10] = 0xa9;
      auVar3[0xb] = 0xa9;
      auVar3[0xc] = 0xa9;
      auVar3[0xd] = 0xa9;
      auVar3[0xe] = 0xa9;
      auVar3[0xf] = 0xa9;
      auVar2[2] = -(9 < bVar21 - 0x30);
      auVar2[3] = -(9 < pbVar11[7] - 0x30);
      auVar2[4] = -(9 < (CONCAT12(bVar22,(ushort)pbVar11[9]) & 0xffff) - 0x30);
      auVar2[5] = -(9 < bVar22 - 0x30);
      auVar2[6] = -(9 < pbVar11[0xd] - 0x30);
      auVar2[7] = -(9 < pbVar11[0xf] - 0x30);
      auVar2[8] = -(9 < (CONCAT12(bVar24,CONCAT11(bVar23,pbVar11[0x11])) & 0xff) - 0x30);
      auVar2[9] = -(9 < bVar23 - 0x30);
      auVar2[10] = -(9 < bVar24 - 0x30);
      auVar2[0xb] = -(9 < pbVar11[0x17] - 0x30);
      auVar2[0xc] = -(9 < (CONCAT12(bVar25,(ushort)pbVar11[0x19]) & 0xffff) - 0x30);
      auVar2[0xd] = -(9 < bVar25 - 0x30);
      auVar2[0xe] = -(9 < pbVar11[0x1d] - 0x30);
      auVar2[0xf] = -(9 < pbVar11[0x1f] - 0x30);
      auVar26 = auVar26 ^ (auVar26 ^ auVar3) & auVar2;
      local_70 = CONCAT17(auVar26[7] + pbVar11[0xf] +
                          ((-(9 < pbVar11[0xe] - 0x30) & 9U) + pbVar11[0xe]) * '\x10',
                          CONCAT16(auVar26[6] + pbVar11[0xd] +
                                   ((-(9 < pbVar11[0xc] - 0x30) & 9U) + pbVar11[0xc]) * '\x10',
                                   CONCAT15(auVar26[5] + bVar22 +
                                            ((-(9 < bVar15 - 0x30) & 9U) + bVar15) * '\x10',
                                            CONCAT14(auVar26[4] + pbVar11[9] +
                                                     ((-(9 < (CONCAT12(bVar15,(ushort)pbVar11[8]) &
                                                             0xffff) - 0x30) & 9U) + pbVar11[8]) *
                                                     '\x10',CONCAT13(auVar26[3] + pbVar11[7] +
                                                                     ((-(9 < bVar14 - 0x30) & 9U) +
                                                                     bVar14) * '\x10',
                                                                     CONCAT12(auVar26[2] + bVar21 +
                                                                              ((-(9 < (CONCAT12(
                                                  bVar14,(ushort)pbVar11[4]) & 0xffff) - 0x30) & 9U)
                                                  + pbVar11[4]) * '\x10',
                                                  CONCAT11(auVar26[1] + bVar20 +
                                                           ((-(9 < bVar13 - 0x30) & 9U) + bVar13) *
                                                           '\x10',auVar26[0] + pbVar11[1] +
                                                                  ((-(9 < (CONCAT12(bVar13,(ushort)*
                                                  pbVar11) & 0xffff) - 0x30) & 9U) + *pbVar11) *
                                                  '\x10')))))));
      cVar19 = auVar26[0xf] + pbVar11[0x1f] + ((char)(uVar9 >> 0x38) + pbVar11[0x1e]) * '\x10';
      uStack_68 = CONCAT17(cVar19,CONCAT16(auVar26[0xe] + pbVar11[0x1d] +
                                           ((char)(uVar9 >> 0x30) + pbVar11[0x1c]) * '\x10',
                                           CONCAT15(auVar26[0xd] + bVar25 +
                                                    ((char)(uVar9 >> 0x28) + bVar18) * '\x10',
                                                    CONCAT14(auVar26[0xc] + pbVar11[0x19] +
                                                             ((char)(uVar9 >> 0x20) + pbVar11[0x18])
                                                             * '\x10',CONCAT13(auVar26[0xb] +
                                                                               pbVar11[0x17] +
                                                                               ((char)(uVar9 >> 0x18
                                                                                      ) + bVar17) *
                                                                               '\x10',CONCAT12(
                                                  auVar26[10] + bVar24 +
                                                  ((char)(uVar9 >> 0x10) + pbVar11[0x14]) * '\x10',
                                                  CONCAT11(auVar26[9] + bVar23 +
                                                           ((char)(uVar9 >> 8) + bVar16) * '\x10',
                                                           auVar26[8] + pbVar11[0x11] +
                                                           ((char)uVar9 + pbVar11[0x10]) * '\x10')))
                                                  ))));
    }
    if ((pbVar8 != (byte *)&local_70) && (&local_70 < (undefined1 *)((long)&local_70 + uVar10))) {
      bVar13 = (byte)local_70;
      local_70 = CONCAT71(local_70._1_7_,cVar19);
      *(byte *)((long)&local_70 + uVar10) = bVar13;
      if (2 < uVar10) {
        pbVar11 = (byte *)((ulong)&local_70 | 2);
        pbVar8 = &bStack_71 + uVar10;
        do {
          bVar13 = pbVar11[-1];
          pbVar11[-1] = *pbVar8;
          *pbVar8 = bVar13;
          bVar4 = pbVar11 < pbVar8 + -1;
          pbVar11 = pbVar11 + 1;
          pbVar8 = pbVar8 + -1;
        } while (bVar4);
      }
    }
    local_60[0x20] = 0;
    local_60[0x21] = 0;
    local_60[0x22] = 0;
    local_60[0x23] = 0;
    local_60[0x24] = 0;
    local_60[0x25] = 0;
    local_60[0x26] = 0;
    local_60[0x27] = 0;
    local_60[8] = 0;
    local_60[9] = 0;
    local_60[10] = 0;
    local_60[0xb] = 0;
    local_60[0xc] = 0;
    local_60[0xd] = 0;
    local_60[0xe] = 0;
    local_60[0xf] = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    local_60[0x18] = 0;
    local_60[0x19] = 0;
    local_60[0x1a] = 0;
    local_60[0x1b] = 0;
    local_60[0x1c] = 0;
    local_60[0x1d] = 0;
    local_60[0x1e] = 0;
    local_60[0x1f] = 0;
    local_60[0x10] = 0;
    local_60[0x11] = 0;
    local_60[0x12] = 0;
    local_60[0x13] = 0;
    local_60[0x14] = 0;
    local_60[0x15] = 0;
    local_60[0x16] = 0;
    local_60[0x17] = 0;
    iVar5 = FUN_00154108(local_70,local_60,0x28,0x28,&DAT_00115fc7);
    if (iVar5 != 0) {
      lVar7 = param_2[1];
      __n = (size_t)iVar5;
      uVar10 = lVar7 + __n;
      if (uVar10 < (ulong)param_2[2]) {
        pvVar6 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        param_2[2] = uVar10;
        pvVar6 = realloc((void *)*param_2,uVar10);
        *param_2 = pvVar6;
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = param_2[1];
      }
      memmove((void *)((long)pvVar6 + lVar7),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

