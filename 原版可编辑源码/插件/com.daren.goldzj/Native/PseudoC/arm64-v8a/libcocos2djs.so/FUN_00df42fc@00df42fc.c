
void FUN_00df42fc(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (0 < (int)(param_2 & 0xfffffffc)) {
    puVar1 = (ulong *)((long)param_1 + (long)(int)(param_2 & 0xfffffffc) * 4);
    puVar2 = puVar1;
    if (puVar1 <= param_1 + 2) {
      puVar2 = param_1 + 2;
    }
    puVar8 = param_1;
    do {
      uVar5 = puVar8[1];
      cVar10 = (char)(uVar5 >> 8);
      cVar11 = (char)(uVar5 >> 0x10);
      cVar12 = (char)(uVar5 >> 0x18);
      cVar13 = (char)(uVar5 >> 0x20);
      cVar14 = (char)(uVar5 >> 0x28);
      cVar15 = (char)(uVar5 >> 0x30);
      cVar16 = (char)(uVar5 >> 0x38);
      uVar4 = *puVar8;
      auVar18[9] = cVar10;
      auVar18._0_9_ = *(unkbyte9 *)puVar8;
      auVar18[10] = cVar11;
      auVar18[0xb] = cVar12;
      auVar18[0xc] = cVar13;
      auVar18[0xd] = cVar14;
      auVar18[0xe] = cVar15;
      auVar18[0xf] = cVar16;
      auVar3[9] = cVar10;
      auVar3._0_9_ = *(unkbyte9 *)puVar8;
      auVar3[10] = cVar11;
      auVar3[0xb] = cVar12;
      auVar3[0xc] = cVar13;
      auVar3[0xd] = cVar14;
      auVar3[0xe] = cVar15;
      auVar3[0xf] = cVar16;
      auVar18 = NEON_ext(auVar18,auVar3,8,1);
      auVar19._0_8_ = auVar18._0_8_;
      auVar19._8_8_ = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar4;
      uVar7 = a64_TBL(ZEXT816(0),auVar6,0xff05ff05ff01ff01);
      uVar17 = a64_TBL(ZEXT816(0),auVar19,0xff05ff05ff01ff01);
      puVar9 = puVar8 + 2;
      puVar8[1] = CONCAT17((char)((ulong)uVar17 >> 0x38) + cVar16,
                           CONCAT16((char)((ulong)uVar17 >> 0x30) + cVar15,
                                    CONCAT15((char)((ulong)uVar17 >> 0x28) + cVar14,
                                             CONCAT14((char)((ulong)uVar17 >> 0x20) + cVar13,
                                                      CONCAT13((char)((ulong)uVar17 >> 0x18) +
                                                               cVar12,CONCAT12((char)((ulong)uVar17
                                                                                     >> 0x10) +
                                                                               cVar11,CONCAT11((char
                                                  )((ulong)uVar17 >> 8) + cVar10,
                                                  (char)uVar17 + (char)uVar5)))))));
      *puVar8 = CONCAT17((char)((ulong)uVar7 >> 0x38) + (char)(uVar4 >> 0x38),
                         CONCAT16((char)((ulong)uVar7 >> 0x30) + (char)(uVar4 >> 0x30),
                                  CONCAT15((char)((ulong)uVar7 >> 0x28) + (char)(uVar4 >> 0x28),
                                           CONCAT14((char)((ulong)uVar7 >> 0x20) +
                                                    (char)(uVar4 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar7 >> 0x18) +
                                                             (char)(uVar4 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar7 >> 0x10) +
                                                                      (char)(uVar4 >> 0x10),
                                                                      CONCAT11((char)((ulong)uVar7
                                                                                     >> 8) +
                                                                               (char)(uVar4 >> 8),
                                                                               (char)uVar7 +
                                                                               (char)uVar4)))))));
      puVar8 = puVar9;
    } while (puVar9 < puVar1);
    param_1 = (ulong *)((long)param_1 +
                       (((long)puVar2 + ~(ulong)param_1 >> 2 & 0x3ffffffffffffffc) + 4) * 4);
  }
  FUN_00df2b6c(param_1,param_2 & 3);
  return;
}

