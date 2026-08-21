
void memcpy_to_q8_23_from_float_with_clamp(ulong *param_1,float *param_2,ulong param_3)

{
  long lVar1;
  float *pfVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  int iVar11;
  int iVar13;
  ulong uVar12;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar1 = 1;
      pfVar2 = param_2;
      puVar3 = param_1;
    }
    else {
      uVar4 = param_3 & 0xfffffffffffffffe;
      uVar6 = NEON_fmov(0xbf800000,4);
      auVar7 = NEON_fmov(0xbfe0000000000000,8);
      auVar9 = NEON_fmov(0x3fe0000000000000,8);
      lVar1 = param_3 - uVar4;
      pfVar2 = param_2 + uVar4;
      puVar3 = (ulong *)((long)param_1 + uVar4 * 4);
      uVar5 = uVar4;
      do {
        uVar5 = uVar5 - 2;
        fVar8 = (float)*(undefined8 *)param_2;
        iVar11 = -(uint)(fVar8 <= (float)uVar6);
        fVar10 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        iVar13 = -(uint)(fVar10 <= (float)((ulong)uVar6 >> 0x20));
        iVar14 = -(uint)(0.9999999 <= fVar8);
        iVar15 = -(uint)(0.9999999 <= fVar10);
        auVar16._0_8_ = (long)(int)-(uint)(0.0 < fVar8 * 8388608.0);
        auVar16._8_8_ = (long)(int)-(uint)(0.0 < fVar10 * 8388608.0);
        auVar16 = auVar7 ^ (auVar7 ^ auVar9) & auVar16;
        uVar12 = CONCAT44((int)(long)(auVar16._8_8_ + (double)(fVar10 * 8388608.0)),
                          (int)(long)(auVar16._0_8_ + (double)(fVar8 * 8388608.0)));
        uVar12 = uVar12 ^ (uVar12 ^ 0xff800000ff800000) & CONCAT44(iVar13,iVar11);
        *param_1 = uVar12 ^ (uVar12 ^ 0x7fffff007fffff) &
                            CONCAT17((byte)((uint)iVar15 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                     CONCAT16((byte)((uint)iVar15 >> 0x10) &
                                              ~(byte)((uint)iVar13 >> 0x10),
                                              CONCAT15((byte)((uint)iVar15 >> 8) &
                                                       ~(byte)((uint)iVar13 >> 8),
                                                       CONCAT14((byte)iVar15 & ~(byte)iVar13,
                                                                CONCAT13((byte)((uint)iVar14 >> 0x18
                                                                               ) & ~(byte)((uint)
                                                  iVar11 >> 0x18),
                                                  CONCAT12((byte)((uint)iVar14 >> 0x10) &
                                                           ~(byte)((uint)iVar11 >> 0x10),
                                                           CONCAT11((byte)((uint)iVar14 >> 8) &
                                                                    ~(byte)((uint)iVar11 >> 8),
                                                                    (byte)iVar14 & ~(byte)iVar11))))
                                                  )));
        param_1 = param_1 + 1;
        param_2 = param_2 + 2;
      } while (uVar5 != 0);
      if (uVar4 == param_3) {
        return;
      }
    }
    do {
      while( true ) {
        fVar8 = *pfVar2;
        lVar1 = lVar1 + -1;
        if (fVar8 <= -1.0) break;
        if (0.9999999 <= fVar8) {
          *(int *)puVar3 = 0x7fffff;
        }
        else {
          fVar10 = 0.5;
          if (fVar8 * 8388608.0 <= 0.0) {
            fVar10 = -0.5;
          }
          *(int *)puVar3 = (int)(fVar10 + fVar8 * 8388608.0);
        }
        pfVar2 = pfVar2 + 1;
        puVar3 = (ulong *)((long)puVar3 + 4);
        if (lVar1 == 0) {
          return;
        }
      }
      *(int *)puVar3 = -0x800000;
      pfVar2 = pfVar2 + 1;
      puVar3 = (ulong *)((long)puVar3 + 4);
    } while (lVar1 != 0);
  }
  return;
}

