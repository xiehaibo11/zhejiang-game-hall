
void FUN_01842c1c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  void *pvVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  char *pcVar14;
  char cVar15;
  char cVar16;
  size_t __n;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60 [40];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (0x20 < (ulong)((*(long *)(param_1 + 0x18) + 1) - (long)pbVar2)) {
    if ((&local_70 < pbVar2 + 0x20) && (pbVar2 < local_60)) {
      lVar12 = 0;
      pcVar14 = (char *)&local_70;
      do {
        bVar17 = pbVar2[lVar12];
        bVar18 = (pbVar2 + lVar12)[1];
        lVar12 = lVar12 + 2;
        cVar15 = '\0';
        if (9 < bVar17 - 0x30) {
          cVar15 = '\t';
        }
        cVar16 = -0x30;
        if (9 < bVar18 - 0x30) {
          cVar16 = -0x57;
        }
        *pcVar14 = cVar16 + bVar18 + (cVar15 + bVar17) * '\x10';
        pcVar14 = pcVar14 + 1;
      } while (lVar12 != 0x20);
    }
    else {
      bVar18 = pbVar2[2];
      bVar22 = pbVar2[3];
      bVar23 = pbVar2[7];
      bVar24 = pbVar2[0xb];
      bVar19 = pbVar2[0x12];
      bVar25 = pbVar2[0x13];
      bVar20 = pbVar2[0x16];
      bVar26 = pbVar2[0x17];
      bVar21 = pbVar2[0x1a];
      bVar27 = pbVar2[0x1b];
      bVar17 = ~-(pbVar2[0x1e] - 0x30 < 10);
      uVar1 = (ulong)CONCAT15(bVar17,CONCAT14(~-(pbVar2[0x1c] - 0x30 < 10),
                                              CONCAT13(~-(bVar21 - 0x30 < 10),
                                                       CONCAT12(~-((CONCAT12(bVar21,(ushort)pbVar2[
                                                  0x18]) & 0xffff) - 0x30 < 10),
                                                  CONCAT11(~-(bVar20 - 0x30 < 10),
                                                           ~-((CONCAT12(bVar20,(ushort)pbVar2[0x14])
                                                              & 0xffff) - 0x30 < 10)))))) &
              0x90909090909;
      auVar28[1] = -(bVar22 - 0x30 < 10);
      auVar28[0] = -((CONCAT12(bVar22,(ushort)pbVar2[1]) & 0xffff) - 0x30 < 10);
      auVar28[2] = -((CONCAT12(bVar23,(ushort)pbVar2[5]) & 0xffff) - 0x30 < 10);
      auVar28[3] = -(bVar23 - 0x30 < 10);
      auVar28[4] = -((CONCAT12(bVar24,(ushort)pbVar2[9]) & 0xffff) - 0x30 < 10);
      auVar28[5] = -(bVar24 - 0x30 < 10);
      auVar28[6] = -(pbVar2[0xd] - 0x30 < 10);
      auVar28[7] = -(pbVar2[0xf] - 0x30 < 10);
      auVar28[8] = -((CONCAT12(bVar25,(ushort)pbVar2[0x11]) & 0xffff) - 0x30 < 10);
      auVar28[9] = -(bVar25 - 0x30 < 10);
      auVar28[10] = -((CONCAT12(bVar26,(ushort)pbVar2[0x15]) & 0xffff) - 0x30 < 10);
      auVar28[0xb] = -(bVar26 - 0x30 < 10);
      auVar28[0xc] = -((CONCAT12(bVar27,(ushort)pbVar2[0x19]) & 0xffff) - 0x30 < 10);
      auVar28[0xd] = -(bVar27 - 0x30 < 10);
      auVar28[0xe] = -(pbVar2[0x1d] - 0x30 < 10);
      auVar28[0xf] = -(pbVar2[0x1f] - 0x30 < 10);
      auVar5[8] = 0xd0;
      auVar5._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar5[9] = 0xd0;
      auVar5[10] = 0xd0;
      auVar5[0xb] = 0xd0;
      auVar5[0xc] = 0xd0;
      auVar5[0xd] = 0xd0;
      auVar5[0xe] = 0xd0;
      auVar5[0xf] = 0xd0;
      auVar6[8] = 0xa9;
      auVar6._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar6[9] = 0xa9;
      auVar6[10] = 0xa9;
      auVar6[0xb] = 0xa9;
      auVar6[0xc] = 0xa9;
      auVar6[0xd] = 0xa9;
      auVar6[0xe] = 0xa9;
      auVar6[0xf] = 0xa9;
      auVar29[8] = 0xa9;
      auVar29._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar29[9] = 0xa9;
      auVar29[10] = 0xa9;
      auVar29[0xb] = 0xa9;
      auVar29[0xc] = 0xa9;
      auVar29[0xd] = 0xa9;
      auVar29[0xe] = 0xa9;
      auVar29[0xf] = 0xa9;
      auVar29 = auVar29 ^ (auVar6 ^ auVar5) & auVar28;
      local_70 = CONCAT17(auVar29[7] + pbVar2[0xf] +
                          ((~-(pbVar2[0xe] - 0x30 < 10) & 9U) + pbVar2[0xe]) * '\x10',
                          CONCAT16(auVar29[6] + pbVar2[0xd] +
                                   ((~-(pbVar2[0xc] - 0x30 < 10) & 9U) + pbVar2[0xc]) * '\x10',
                                   CONCAT15(auVar29[5] + bVar24 +
                                            ((~-(pbVar2[10] - 0x30 < 10) & 9U) + pbVar2[10]) *
                                            '\x10',CONCAT14(auVar29[4] + pbVar2[9] +
                                                            ((~-(pbVar2[8] - 0x30 < 10) & 9U) +
                                                            pbVar2[8]) * '\x10',
                                                            CONCAT13(auVar29[3] + bVar23 +
                                                                     ((~-(pbVar2[6] - 0x30 < 10) &
                                                                      9U) + pbVar2[6]) * '\x10',
                                                                     CONCAT12(auVar29[2] + pbVar2[5]
                                                                              + ((~-(pbVar2[4] -
                                                                                     0x30 < 10) & 9U
                                                                                 ) + pbVar2[4]) *
                                                                                '\x10',CONCAT11(
                                                  auVar29[1] + bVar22 +
                                                  ((~-(bVar18 - 0x30 < 10) & 9U) + bVar18) * '\x10',
                                                  auVar29[0] + pbVar2[1] +
                                                  ((~-((CONCAT12(bVar18,(ushort)*pbVar2) & 0xffff) -
                                                       0x30 < 10) & 9U) + *pbVar2) * '\x10')))))));
      uStack_68 = CONCAT17(auVar29[0xf] + pbVar2[0x1f] + ((bVar17 & 9) + pbVar2[0x1e]) * '\x10',
                           CONCAT16(auVar29[0xe] + pbVar2[0x1d] +
                                    ((char)(uVar1 >> 0x20) + pbVar2[0x1c]) * '\x10',
                                    CONCAT15(auVar29[0xd] + bVar27 +
                                             ((char)(uVar1 >> 0x18) + bVar21) * '\x10',
                                             CONCAT14(auVar29[0xc] + pbVar2[0x19] +
                                                      ((char)(uVar1 >> 0x10) + pbVar2[0x18]) *
                                                      '\x10',CONCAT13(auVar29[0xb] + bVar26 +
                                                                      ((char)(uVar1 >> 8) + bVar20)
                                                                      * '\x10',CONCAT12(auVar29[10]
                                                                                        + pbVar2[
                                                  0x15] + ((char)uVar1 + pbVar2[0x14]) * '\x10',
                                                  CONCAT11(auVar29[9] + bVar25 +
                                                           ((~-(bVar19 - 0x30 < 10) & 9U) + bVar19)
                                                           * '\x10',auVar29[8] + pbVar2[0x11] +
                                                                    ((~-((CONCAT12(bVar19,(ushort)
                                                  pbVar2[0x10]) & 0xffff) - 0x30 < 10) & 9U) +
                                                  pbVar2[0x10]) * '\x10')))))));
    }
    puVar13 = (undefined1 *)((ulong)&local_70 | 1);
    puVar10 = (undefined1 *)((ulong)&local_70 | 0xf);
    do {
      uVar3 = puVar13[-1];
      puVar13[-1] = *puVar10;
      *puVar10 = uVar3;
      bVar7 = puVar13 < puVar10 + -1;
      puVar13 = puVar13 + 1;
      puVar10 = puVar10 + -1;
    } while (bVar7);
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
    iVar8 = snprintf((char *)local_60,0x28,"%LaL",local_70);
    if (iVar8 != 0) {
      lVar12 = param_2[1];
      __n = (size_t)iVar8;
      uVar1 = lVar12 + __n;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar9 = (void *)*param_2;
      }
      else {
        uVar11 = param_2[2] << 1;
        if (uVar1 <= uVar11) {
          uVar1 = uVar11;
        }
        param_2[2] = uVar1;
        pvVar9 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar9;
        if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar12 = param_2[1];
      }
      memmove((void *)((long)pvVar9 + lVar12),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

