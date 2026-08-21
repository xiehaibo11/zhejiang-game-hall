
void FUN_0114f0e4(char *param_1,ulong *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar14;
  ulong uVar12;
  ulong uVar15;
  uint uVar17;
  ulong uVar16;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong uVar13;
  
  if (0 < (int)param_3) {
    cVar1 = *param_1;
    cVar2 = param_1[1];
    cVar3 = param_1[2];
    iVar4 = (int)cVar1;
    iVar5 = (int)cVar2;
    iVar6 = (int)cVar3;
    if (param_3 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulong)param_3 - (ulong)(param_3 & 3);
      if (lVar8 != 0) {
        lVar7 = lVar8;
        puVar10 = param_2;
        do {
          uVar15 = puVar10[1];
          uVar11 = *puVar10;
          lVar7 = lVar7 + -4;
          uVar14 = (uint)(uVar11 >> 0x20);
          uVar17 = (uint)(uVar15 >> 0x20);
          iVar18 = (int)((uint)uVar11 << 0x10) >> 0x18;
          iVar19 = (int)(uVar14 << 0x10) >> 0x18;
          iVar20 = (int)((uint)uVar15 << 0x10) >> 0x18;
          iVar21 = (int)(uVar17 << 0x10) >> 0x18;
          iVar22 = ((uint)(iVar18 * cVar1) >> 5) + ((uint)uVar11 >> 0x10);
          iVar23 = ((uint)(iVar19 * cVar1) >> 5) + (uVar14 >> 0x10);
          iVar24 = ((uint)(iVar20 * iVar4) >> 5) + ((uint)uVar15 >> 0x10);
          iVar25 = ((uint)(iVar21 * iVar4) >> 5) + (uVar17 >> 0x10);
          uVar12 = uVar11 & 0xffffffffffffff00;
          uVar13 = CONCAT44((int)(uVar12 >> 0x20),CONCAT22((short)(uVar11 >> 0x10),(short)uVar12)) &
                   0xffffffffff00ffff;
          uVar12 = CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar13)) &
                   0xff00ff00ffffffff;
          uVar13 = uVar15 & 0xffffffffffffff00;
          uVar16 = CONCAT44((int)(uVar13 >> 0x20),CONCAT22((short)(uVar15 >> 0x10),(short)uVar13)) &
                   0xffffffffff00ffff;
          uVar13 = CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar16)) &
                   0xff00ff00ffffffff;
          puVar10[1] = CONCAT17((char)(uVar13 >> 0x38),
                                CONCAT16((char)iVar25,
                                         CONCAT15((char)(uVar13 >> 0x28),
                                                  CONCAT14((char)(uVar15 >> 0x20) +
                                                           (char)((uint)(iVar21 * iVar5) >> 5) +
                                                           (char)((uint)((iVar25 * 0x1000000 >> 0x18
                                                                         ) * iVar6) >> 5),
                                                           CONCAT13((char)(uVar13 >> 0x18),
                                                                    CONCAT12((char)iVar24,
                                                                             CONCAT11((char)(uVar13 
                                                  >> 8),(char)uVar15 +
                                                        (char)((uint)(iVar20 * iVar5) >> 5) +
                                                        (char)((uint)((iVar24 * 0x1000000 >> 0x18) *
                                                                     iVar6) >> 5))))))));
          *puVar10 = CONCAT17((char)(uVar12 >> 0x38),
                              CONCAT16((char)iVar23,
                                       CONCAT15((char)(uVar12 >> 0x28),
                                                CONCAT14((char)(uVar11 >> 0x20) +
                                                         (char)((uint)(iVar19 * cVar2) >> 5) +
                                                         (char)((uint)((iVar23 * 0x1000000 >> 0x18)
                                                                      * (int)cVar3) >> 5),
                                                         CONCAT13((char)(uVar12 >> 0x18),
                                                                  CONCAT12((char)iVar22,
                                                                           CONCAT11((char)(uVar12 >>
                                                                                          8),(char)
                                                  uVar11 + (char)((uint)(iVar18 * cVar2) >> 5) +
                                                  (char)((uint)((iVar22 * 0x1000000 >> 0x18) *
                                                               (int)cVar3) >> 5))))))));
          puVar10 = puVar10 + 2;
        } while (lVar7 != 0);
        if ((param_3 & 3) == 0) {
          return;
        }
      }
    }
    lVar7 = (ulong)param_3 - lVar8;
    puVar9 = (uint *)((long)param_2 + lVar8 * 4);
    do {
      uVar17 = *puVar9;
      lVar7 = lVar7 + -1;
      iVar18 = (int)(uVar17 << 0x10) >> 0x18;
      uVar14 = ((uint)(iVar18 * iVar4) >> 5) + (uVar17 >> 0x10);
      *puVar9 = uVar17 & 0xff000000 | uVar17 & 0xff00 | (uVar14 & 0xff) << 0x10 |
                uVar17 + ((uint)(iVar18 * iVar5) >> 5) + ((uint)((char)uVar14 * iVar6) >> 5) & 0xff;
      puVar9 = puVar9 + 1;
    } while (lVar7 != 0);
  }
  return;
}

