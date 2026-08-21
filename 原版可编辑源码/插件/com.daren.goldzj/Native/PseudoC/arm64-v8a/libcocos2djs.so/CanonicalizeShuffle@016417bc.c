
/* v8::internal::compiler::InstructionSelector::CanonicalizeShuffle(bool, unsigned char*, bool*,
   bool*) */

void v8::internal::compiler::InstructionSelector::CanonicalizeShuffle
               (bool param_1,uchar *param_2,bool *param_3,bool *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar20;
  ulong uVar19;
  ulong uVar21;
  
  *param_3 = false;
  if (!param_1) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    bVar4 = param_2[2];
    bVar5 = param_2[3];
    bVar1 = 0xf < (bVar2 | bVar3);
    bVar6 = param_2[4];
    bVar7 = param_2[5];
    bVar8 = param_2[6];
    bVar9 = param_2[7];
    bVar10 = param_2[8];
    bVar11 = param_2[9];
    bVar12 = param_2[10];
    bVar13 = param_2[0xb];
    bVar14 = param_2[0xc];
    bVar15 = param_2[0xd];
    bVar16 = param_2[0xe];
    bVar17 = param_2[0xf];
    if (((((((((((((((bVar1 || 0xf < bVar4) || 0xf < bVar5) || 0xf < bVar6) || 0xf < bVar7) ||
                 0xf < bVar8) || 0xf < bVar9) || 0xf < bVar10) || 0xf < bVar11) || 0xf < bVar12) ||
            0xf < bVar13) || 0xf < bVar14) || 0xf < bVar15) || 0xf < bVar16) || 0xf < bVar17) ||
       (((((((((((((((bVar2 >= 0x10 && bVar3 >= 0x10) && bVar4 >= 0x10) && bVar5 >= 0x10) &&
                  bVar6 >= 0x10) && bVar7 >= 0x10) && bVar8 >= 0x10) && bVar9 >= 0x10) &&
              bVar10 >= 0x10) && bVar11 >= 0x10) && bVar12 >= 0x10) && bVar13 >= 0x10) &&
          bVar14 >= 0x10) && bVar15 >= 0x10) && bVar16 >= 0x10) && 0xf < bVar17)) {
      if ((((((((((((((((bVar2 < 0x10 || bVar3 < 0x10) || bVar4 < 0x10) || bVar5 < 0x10) ||
                     bVar6 < 0x10) || bVar7 < 0x10) || bVar8 < 0x10) || bVar9 < 0x10) ||
                 bVar10 < 0x10) || bVar11 < 0x10) || bVar12 < 0x10) || bVar13 < 0x10) ||
             bVar14 < 0x10) || bVar15 < 0x10) || bVar16 < 0x10) || 0xf >= bVar17) ||
          (((((((((((((!bVar1 && 0xf >= bVar4) && 0xf >= bVar5) && 0xf >= bVar6) && 0xf >= bVar7) &&
                  0xf >= bVar8) && 0xf >= bVar9) && 0xf >= bVar10) && 0xf >= bVar11) &&
              0xf >= bVar12) && 0xf >= bVar13) && 0xf >= bVar14) && 0xf >= bVar15) && 0xf >= bVar16)
          && 0xf >= bVar17) {
        *param_4 = false;
        if (*param_2 < 0x10) {
          return;
        }
        *param_3 = true;
        *(ulong *)(param_2 + 8) = *(ulong *)(param_2 + 8) ^ 0x1010101010101010;
        *(ulong *)param_2 = *(ulong *)param_2 ^ 0x1010101010101010;
        if (*param_4 == false) {
          return;
        }
        goto LAB_016419c8;
      }
      *param_3 = true;
    }
  }
  *param_4 = true;
LAB_016419c8:
  uVar18 = *(ulong *)param_2 & 0xffffffffffffff0f;
  uVar19 = CONCAT62((int6)(uVar18 >> 0x10),CONCAT11((char)(*(ulong *)param_2 >> 8),(char)uVar18)) &
           0xffffffffffff0fff;
  uVar18 = CONCAT53((int5)(uVar19 >> 0x18),CONCAT12((char)(uVar18 >> 0x10),(short)uVar19)) &
           0xffffffffff0fffff;
  uVar19 = CONCAT44((int)(uVar18 >> 0x20),CONCAT13((char)(uVar19 >> 0x18),(int3)uVar18)) &
           0xffffffff0fffffff;
  uVar18 = CONCAT35((int3)(uVar19 >> 0x28),CONCAT14((char)(uVar18 >> 0x20),(int)uVar19)) &
           0xffffff0fffffffff;
  uVar19 = CONCAT26((short)(uVar18 >> 0x30),CONCAT15((char)(uVar19 >> 0x28),(int5)uVar18)) &
           0xffff0fffffffffff;
  uVar20 = *(ulong *)(param_2 + 8) & 0xffffffffffffff0f;
  uVar21 = CONCAT62((int6)(uVar20 >> 0x10),
                    CONCAT11((char)(*(ulong *)(param_2 + 8) >> 8),(char)uVar20)) &
           0xffffffffffff0fff;
  uVar20 = CONCAT53((int5)(uVar21 >> 0x18),CONCAT12((char)(uVar20 >> 0x10),(short)uVar21)) &
           0xffffffffff0fffff;
  uVar21 = CONCAT44((int)(uVar20 >> 0x20),CONCAT13((char)(uVar21 >> 0x18),(int3)uVar20)) &
           0xffffffff0fffffff;
  uVar20 = CONCAT35((int3)(uVar21 >> 0x28),CONCAT14((char)(uVar20 >> 0x20),(int)uVar21)) &
           0xffffff0fffffffff;
  uVar21 = CONCAT26((short)(uVar20 >> 0x30),CONCAT15((char)(uVar21 >> 0x28),(int5)uVar20)) &
           0xffff0fffffffffff;
  *(ulong *)(param_2 + 8) =
       CONCAT17((char)(uVar21 >> 0x38),CONCAT16((char)(uVar20 >> 0x30),(int6)uVar21)) &
       0xf0fffffffffffff;
  *(ulong *)param_2 =
       CONCAT17((char)(uVar19 >> 0x38),CONCAT16((char)(uVar18 >> 0x30),(int6)uVar19)) &
       0xf0fffffffffffff;
  return;
}

