
void png_read_filter_row_sub4_neon(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if (0 < *(long *)(param_1 + 8)) {
    puVar1 = (undefined4 *)((long)param_2 + *(long *)(param_1 + 8));
    uVar15 = 0;
    do {
      uVar16 = *param_2;
      uVar17 = param_2[1];
      uVar18 = param_2[2];
      uVar19 = param_2[3];
      cVar2 = (char)uVar15 + (char)uVar16;
      cVar3 = (char)(uVar15 >> 8) + (char)((uint)uVar16 >> 8);
      cVar4 = (char)(uVar15 >> 0x10) + (char)((uint)uVar16 >> 0x10);
      cVar5 = (char)(uVar15 >> 0x18) + (char)((uint)uVar16 >> 0x18);
      cVar6 = cVar2 + (char)uVar17;
      cVar7 = cVar3 + (char)((uint)uVar17 >> 8);
      cVar8 = cVar4 + (char)((uint)uVar17 >> 0x10);
      cVar9 = cVar5 + (char)((uint)uVar17 >> 0x18);
      cVar10 = cVar6 + (char)uVar18;
      cVar11 = cVar7 + (char)((uint)uVar18 >> 8);
      cVar12 = cVar8 + (char)((uint)uVar18 >> 0x10);
      cVar13 = cVar9 + (char)((uint)uVar18 >> 0x18);
      uVar14 = CONCAT13(cVar13 + (char)((uint)uVar19 >> 0x18),
                        CONCAT12(cVar12 + (char)((uint)uVar19 >> 0x10),
                                 CONCAT11(cVar11 + (char)((uint)uVar19 >> 8),cVar10 + (char)uVar19))
                       );
      uVar15 = (ulong)uVar14;
      *param_2 = CONCAT13(cVar5,CONCAT12(cVar4,CONCAT11(cVar3,cVar2)));
      param_2[1] = CONCAT13(cVar9,CONCAT12(cVar8,CONCAT11(cVar7,cVar6)));
      param_2[2] = CONCAT13(cVar13,CONCAT12(cVar12,CONCAT11(cVar11,cVar10)));
      param_2[3] = uVar14;
      param_2 = param_2 + 4;
    } while (param_2 < puVar1);
  }
  return;
}

