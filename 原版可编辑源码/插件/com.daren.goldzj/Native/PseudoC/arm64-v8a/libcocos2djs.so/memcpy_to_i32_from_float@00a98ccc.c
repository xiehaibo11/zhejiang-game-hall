
void memcpy_to_i32_from_float(int *param_1,float *param_2,ulong param_3)

{
  long lVar1;
  float *pfVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar14;
  ulong uVar13;
  byte bVar15;
  byte bVar18;
  byte bVar19;
  int iVar16;
  byte bVar20;
  uint uVar17;
  byte bVar21;
  byte bVar24;
  byte bVar25;
  int iVar22;
  byte bVar26;
  uint uVar23;
  undefined1 auVar27 [16];
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar1 = 1;
      pfVar2 = param_2;
      piVar3 = param_1;
    }
    else {
      uVar4 = param_3 & 0xfffffffffffffffe;
      uVar6 = NEON_fmov(0xbf800000,4);
      uVar7 = NEON_fmov(0x3f800000,4);
      auVar8 = NEON_fmov(0xbfe0000000000000,8);
      auVar9 = NEON_fmov(0x3fe0000000000000,8);
      lVar1 = param_3 - uVar4;
      pfVar2 = param_2 + uVar4;
      piVar3 = param_1 + uVar4;
      uVar5 = uVar4;
      do {
        uVar5 = uVar5 - 2;
        fVar10 = (float)*(undefined8 *)param_2;
        iVar12 = -(uint)(fVar10 <= (float)uVar6);
        fVar11 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        iVar14 = -(uint)(fVar11 <= (float)((ulong)uVar6 >> 0x20));
        iVar16 = -(uint)((float)uVar7 <= fVar10);
        iVar22 = -(uint)((float)((ulong)uVar7 >> 0x20) <= fVar11);
        auVar27._0_8_ = (long)(int)-(uint)(0.0 < fVar10 * 2.1474836e+09);
        auVar27._8_8_ = (long)(int)-(uint)(0.0 < fVar11 * 2.1474836e+09);
        auVar27 = auVar8 ^ (auVar8 ^ auVar9) & auVar27;
        uVar13 = CONCAT44((int)(long)(auVar27._8_8_ + (double)(fVar11 * 2.1474836e+09)),
                          (int)(long)(auVar27._0_8_ + (double)(fVar10 * 2.1474836e+09)));
        bVar15 = (byte)iVar16 & ~(byte)iVar12;
        bVar18 = (byte)((uint)iVar16 >> 8) & ~(byte)((uint)iVar12 >> 8);
        bVar19 = (byte)((uint)iVar16 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
        bVar20 = (byte)((uint)iVar16 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
        bVar21 = (byte)iVar22 & ~(byte)iVar14;
        bVar24 = (byte)((uint)iVar22 >> 8) & ~(byte)((uint)iVar14 >> 8);
        bVar25 = (byte)((uint)iVar22 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
        bVar26 = (byte)((uint)iVar22 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
        uVar13 = uVar13 ^ (uVar13 ^ 0x8000000080000000) & CONCAT44(iVar14,iVar12);
        uVar17 = CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar15))) & 0x7fffffff;
        uVar23 = CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar21))) & 0x7fffffff;
        *(ulong *)param_1 =
             CONCAT17((byte)(uVar23 >> 0x18) | (byte)(uVar13 >> 0x38) & ~bVar26,
                      CONCAT16((byte)(uVar23 >> 0x10) | (byte)(uVar13 >> 0x30) & ~bVar25,
                               CONCAT15((byte)(uVar23 >> 8) | (byte)(uVar13 >> 0x28) & ~bVar24,
                                        CONCAT14((byte)uVar23 | (byte)(uVar13 >> 0x20) & ~bVar21,
                                                 CONCAT13((byte)(uVar17 >> 0x18) |
                                                          (byte)(uVar13 >> 0x18) & ~bVar20,
                                                          CONCAT12((byte)(uVar17 >> 0x10) |
                                                                   (byte)(uVar13 >> 0x10) & ~bVar19,
                                                                   CONCAT11((byte)(uVar17 >> 8) |
                                                                            (byte)(uVar13 >> 8) &
                                                                            ~bVar18,(byte)uVar17 |
                                                                                    (byte)uVar13 &
                                                                                    ~bVar15)))))));
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (uVar5 != 0);
      if (uVar4 == param_3) {
        return;
      }
    }
    do {
      while( true ) {
        fVar10 = *pfVar2;
        lVar1 = lVar1 + -1;
        if (fVar10 <= -1.0) break;
        if (1.0 <= fVar10) {
          *piVar3 = 0x7fffffff;
        }
        else {
          fVar11 = 0.5;
          if (fVar10 * 2.1474836e+09 <= 0.0) {
            fVar11 = -0.5;
          }
          *piVar3 = (int)(fVar11 + fVar10 * 2.1474836e+09);
        }
        pfVar2 = pfVar2 + 1;
        piVar3 = piVar3 + 1;
        if (lVar1 == 0) {
          return;
        }
      }
      *piVar3 = -0x80000000;
      pfVar2 = pfVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar1 != 0);
  }
  return;
}

