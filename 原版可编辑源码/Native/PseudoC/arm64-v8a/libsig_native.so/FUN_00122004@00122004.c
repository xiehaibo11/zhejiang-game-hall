
void FUN_00122004(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte bStack_71;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar11 = *(byte **)(param_1 + 0x10);
  if (0x20 < (*(long *)(param_1 + 0x18) - (long)pbVar11) + 1U) {
    pbVar9 = local_60;
    if ((&local_70 < pbVar11 + 0x20) && (pbVar11 < pbVar9)) {
      lVar8 = 0;
      lVar5 = 0;
      do {
        lVar10 = lVar5;
        bVar13 = pbVar11[lVar8];
        bVar14 = (pbVar11 + lVar8)[1];
        lVar8 = lVar8 + 2;
        cVar18 = '\0';
        if (9 < bVar13 - 0x30) {
          cVar18 = '\t';
        }
        cVar12 = -0x30;
        if (9 < bVar14 - 0x30) {
          cVar12 = -0x57;
        }
        cVar18 = cVar12 + bVar14 + (cVar18 + bVar13) * '\x10';
        *(char *)((long)&local_70 + lVar10) = cVar18;
        lVar5 = lVar10 + 1;
      } while (lVar8 != 0x20);
      pbVar9 = (byte *)((long)&local_70 + lVar10 + 1);
    }
    else {
      bVar14 = pbVar11[2];
      bVar19 = pbVar11[3];
      bVar20 = pbVar11[7];
      bVar21 = pbVar11[0xb];
      bVar15 = pbVar11[0x12];
      bVar22 = pbVar11[0x13];
      bVar16 = pbVar11[0x16];
      bVar23 = pbVar11[0x17];
      bVar17 = pbVar11[0x1a];
      bVar24 = pbVar11[0x1b];
      lVar10 = 0xf;
      bVar13 = ~-(pbVar11[0x1e] - 0x30 < 10);
      uVar4 = (ulong)CONCAT15(bVar13,CONCAT14(~-(pbVar11[0x1c] - 0x30 < 10),
                                              CONCAT13(~-(bVar17 - 0x30 < 10),
                                                       CONCAT12(~-((CONCAT12(bVar17,(ushort)pbVar11[
                                                  0x18]) & 0xffff) - 0x30 < 10),
                                                  CONCAT11(~-(bVar16 - 0x30 < 10),
                                                           ~-((CONCAT12(bVar16,(ushort)pbVar11[0x14]
                                                                       ) & 0xffff) - 0x30 < 10))))))
              & 0x90909090909;
      auVar25[1] = -(bVar19 - 0x30 < 10);
      auVar25[0] = -((CONCAT12(bVar19,(ushort)pbVar11[1]) & 0xffff) - 0x30 < 10);
      auVar25[2] = -((CONCAT12(bVar20,(ushort)pbVar11[5]) & 0xffff) - 0x30 < 10);
      auVar25[3] = -(bVar20 - 0x30 < 10);
      auVar25[4] = -((CONCAT12(bVar21,(ushort)pbVar11[9]) & 0xffff) - 0x30 < 10);
      auVar25[5] = -(bVar21 - 0x30 < 10);
      auVar25[6] = -(pbVar11[0xd] - 0x30 < 10);
      auVar25[7] = -(pbVar11[0xf] - 0x30 < 10);
      auVar25[8] = -((CONCAT12(bVar22,(ushort)pbVar11[0x11]) & 0xffff) - 0x30 < 10);
      auVar25[9] = -(bVar22 - 0x30 < 10);
      auVar25[10] = -((CONCAT12(bVar23,(ushort)pbVar11[0x15]) & 0xffff) - 0x30 < 10);
      auVar25[0xb] = -(bVar23 - 0x30 < 10);
      auVar25[0xc] = -((CONCAT12(bVar24,(ushort)pbVar11[0x19]) & 0xffff) - 0x30 < 10);
      auVar25[0xd] = -(bVar24 - 0x30 < 10);
      auVar25[0xe] = -(pbVar11[0x1d] - 0x30 < 10);
      auVar25[0xf] = -(pbVar11[0x1f] - 0x30 < 10);
      auVar2[8] = 0xd0;
      auVar2._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar2[9] = 0xd0;
      auVar2[10] = 0xd0;
      auVar2[0xb] = 0xd0;
      auVar2[0xc] = 0xd0;
      auVar2[0xd] = 0xd0;
      auVar2[0xe] = 0xd0;
      auVar2[0xf] = 0xd0;
      auVar3[8] = 0xa9;
      auVar3._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar3[9] = 0xa9;
      auVar3[10] = 0xa9;
      auVar3[0xb] = 0xa9;
      auVar3[0xc] = 0xa9;
      auVar3[0xd] = 0xa9;
      auVar3[0xe] = 0xa9;
      auVar3[0xf] = 0xa9;
      auVar26[8] = 0xa9;
      auVar26._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar26[9] = 0xa9;
      auVar26[10] = 0xa9;
      auVar26[0xb] = 0xa9;
      auVar26[0xc] = 0xa9;
      auVar26[0xd] = 0xa9;
      auVar26[0xe] = 0xa9;
      auVar26[0xf] = 0xa9;
      auVar26 = auVar26 ^ (auVar3 ^ auVar2) & auVar25;
      local_70 = CONCAT17(auVar26[7] + pbVar11[0xf] +
                          ((~-(pbVar11[0xe] - 0x30 < 10) & 9U) + pbVar11[0xe]) * '\x10',
                          CONCAT16(auVar26[6] + pbVar11[0xd] +
                                   ((~-(pbVar11[0xc] - 0x30 < 10) & 9U) + pbVar11[0xc]) * '\x10',
                                   CONCAT15(auVar26[5] + bVar21 +
                                            ((~-(pbVar11[10] - 0x30 < 10) & 9U) + pbVar11[10]) *
                                            '\x10',CONCAT14(auVar26[4] + pbVar11[9] +
                                                            ((~-(pbVar11[8] - 0x30 < 10) & 9U) +
                                                            pbVar11[8]) * '\x10',
                                                            CONCAT13(auVar26[3] + bVar20 +
                                                                     ((~-(pbVar11[6] - 0x30 < 10) &
                                                                      9U) + pbVar11[6]) * '\x10',
                                                                     CONCAT12(auVar26[2] +
                                                                              pbVar11[5] +
                                                                              ((~-(pbVar11[4] - 0x30
                                                                                  < 10) & 9U) +
                                                                              pbVar11[4]) * '\x10',
                                                                              CONCAT11(auVar26[1] +
                                                                                       bVar19 + ((~-
                                                  (bVar14 - 0x30 < 10) & 9U) + bVar14) * '\x10',
                                                  auVar26[0] + pbVar11[1] +
                                                  ((~-((CONCAT12(bVar14,(ushort)*pbVar11) & 0xffff)
                                                       - 0x30 < 10) & 9U) + *pbVar11) * '\x10'))))))
                         );
      cVar18 = auVar26[0xf] + pbVar11[0x1f] + ((bVar13 & 9) + pbVar11[0x1e]) * '\x10';
      uStack_68 = CONCAT17(cVar18,CONCAT16(auVar26[0xe] + pbVar11[0x1d] +
                                           ((char)(uVar4 >> 0x20) + pbVar11[0x1c]) * '\x10',
                                           CONCAT15(auVar26[0xd] + bVar24 +
                                                    ((char)(uVar4 >> 0x18) + bVar17) * '\x10',
                                                    CONCAT14(auVar26[0xc] + pbVar11[0x19] +
                                                             ((char)(uVar4 >> 0x10) + pbVar11[0x18])
                                                             * '\x10',CONCAT13(auVar26[0xb] + bVar23
                                                                               + ((char)(uVar4 >> 8)
                                                                                 + bVar16) * '\x10',
                                                                               CONCAT12(auVar26[10]
                                                                                        + pbVar11[
                                                  0x15] + ((char)uVar4 + pbVar11[0x14]) * '\x10',
                                                  CONCAT11(auVar26[9] + bVar22 +
                                                           ((~-(bVar15 - 0x30 < 10) & 9U) + bVar15)
                                                           * '\x10',auVar26[8] + pbVar11[0x11] +
                                                                    ((~-((CONCAT12(bVar15,(ushort)
                                                  pbVar11[0x10]) & 0xffff) - 0x30 < 10) & 9U) +
                                                  pbVar11[0x10]) * '\x10')))))));
    }
    if ((pbVar9 != (byte *)&local_70) && (&local_70 < (undefined1 *)((long)&local_70 + lVar10))) {
      bVar13 = (byte)local_70;
      local_70 = CONCAT71(local_70._1_7_,cVar18);
      *(byte *)((long)&local_70 + lVar10) = bVar13;
      if (1 < lVar10 + -1) {
        pbVar11 = (byte *)((ulong)&local_70 | 2);
        pbVar9 = &bStack_71 + lVar10;
        do {
          bVar13 = pbVar11[-1];
          pbVar11[-1] = *pbVar9;
          *pbVar9 = bVar13;
          bVar6 = pbVar11 < pbVar9 + -1;
          pbVar11 = pbVar11 + 1;
          pbVar9 = pbVar9 + -1;
        } while (bVar6);
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
    iVar7 = FUN_00121d04(local_70,local_60,0x28,0x28,&DAT_0012efcd);
    FUN_0011bcc0(param_2,local_60,local_60 + iVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

