
void memcpy_to_i16_from_float(undefined8 *param_1,float *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  bool bVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_3 != 0) {
    if (3 < param_3) {
      uVar8 = param_3 & 0xfffffffffffffffc;
      puVar6 = param_1;
      pfVar7 = param_2;
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 - 4;
        fVar4 = (float)*(undefined8 *)pfVar7 + 384.0;
        fVar10 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) + 384.0;
        uVar11 = (undefined2)((uint)fVar10 >> 0x10);
        fVar12 = (float)*(undefined8 *)(pfVar7 + 2) + 384.0;
        fVar13 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) + 384.0;
        auVar15._0_4_ = -(uint)(0x43c07fff < (int)fVar4);
        auVar15._4_4_ = -(uint)(0x43c07fff < (int)fVar10);
        auVar15._8_4_ = -(uint)(0x43c07fff < (int)fVar12);
        auVar15._12_4_ = -(uint)(0x43c07fff < (int)fVar13);
        auVar14._0_4_ = -(uint)((int)fVar4 < 0x43bf8000);
        auVar14._4_4_ = -(uint)((int)fVar10 < 0x43bf8000);
        auVar14._8_4_ = -(uint)((int)fVar12 < 0x43bf8000);
        auVar14._12_4_ = -(uint)((int)fVar13 < 0x43bf8000);
        auVar1._8_4_ = 0x7fff;
        auVar1._0_8_ = 0x7fff00007fff;
        auVar1._12_4_ = 0x7fff;
        auVar3._4_2_ = SUB42(fVar10,0);
        auVar3._0_4_ = fVar4;
        auVar3._6_2_ = uVar11;
        auVar3._8_4_ = fVar12;
        auVar3._12_4_ = fVar13;
        auVar16._4_2_ = SUB42(fVar10,0);
        auVar16._0_4_ = fVar4;
        auVar16._6_2_ = uVar11;
        auVar16._8_4_ = fVar12;
        auVar16._12_4_ = fVar13;
        auVar16 = auVar16 ^ (auVar3 ^ auVar1) & auVar15;
        auVar2._8_4_ = 0x8000;
        auVar2._0_8_ = 0x800000008000;
        auVar2._12_4_ = 0x8000;
        auVar16 = auVar16 ^ (auVar16 ^ auVar2) & auVar14;
        *puVar6 = CONCAT26(auVar16._12_2_,
                           CONCAT24(auVar16._8_2_,CONCAT22(auVar16._4_2_,auVar16._0_2_)));
        puVar6 = puVar6 + 1;
        pfVar7 = pfVar7 + 4;
      } while (uVar9 != 0);
      bVar5 = uVar8 == param_3;
      param_3 = param_3 - uVar8;
      param_2 = param_2 + uVar8;
      param_1 = (undefined8 *)((long)param_1 + uVar8 * 2);
      if (bVar5) {
        return;
      }
    }
                    /* catch() { ... } // from try @ 00a980c8 with catch @ 00a98310 */
    do {
                    /* try { // try from 00a98324 to 00b984ff has its CatchHandler @ 00a98324
                       catch() { ... } // from try @ 00a98324 with catch @ 00a98324
                       catch() { ... } // from try @ 00a9850c with catch @ 00a98324 */
      param_3 = param_3 - 1;
      fVar10 = *param_2 + 384.0;
      fVar4 = 4.59163e-41;
      if ((int)fVar10 < 0x43c08000) {
        fVar4 = fVar10;
      }
      uVar11 = 0x8000;
      if (0x43bf7fff < (int)fVar10) {
        uVar11 = SUB42(fVar4,0);
      }
      *(undefined2 *)param_1 = uVar11;
      param_2 = param_2 + 1;
      param_1 = (undefined8 *)((long)param_1 + 2);
    } while (param_3 != 0);
  }
  return;
}

