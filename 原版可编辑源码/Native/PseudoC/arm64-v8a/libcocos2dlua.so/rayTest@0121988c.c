
/* btDbvt::rayTest(btDbvtNode const*, btVector3 const&, btVector3 const&, btDbvt::ICollide&) */

void btDbvt::rayTest(btDbvtNode *param_1,btVector3 *param_2,btVector3 *param_3,ICollide *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 *local_118;
  uint local_f4;
  undefined8 *local_f0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if (param_1 != (btDbvtNode *)0x0) {
    fVar32 = *(float *)param_3 - *(float *)param_2;
    fVar29 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
    fVar30 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
    fVar19 = fVar32 * fVar32 + fVar29 * fVar29 + fVar30 * fVar30;
    fVar16 = SQRT(fVar19);
    if (NAN(fVar16)) {
      fVar16 = sqrtf(fVar19);
    }
    fVar23 = *(float *)param_3;
    fVar16 = 1.0 / fVar16;
    fVar24 = *(float *)(param_3 + 4);
    fVar32 = fVar32 * fVar16;
    fVar29 = fVar29 * fVar16;
    fVar30 = fVar30 * fVar16;
    fVar33 = *(float *)param_2;
    fVar25 = *(float *)(param_2 + 4);
    fVar26 = *(float *)(param_3 + 8);
    fVar19 = 1e+18;
    fVar34 = *(float *)(param_2 + 8);
    fVar16 = fVar19;
    if (fVar32 != 0.0) {
      fVar16 = 1.0 / fVar32;
    }
    fVar31 = fVar19;
    if (fVar29 != 0.0) {
      fVar31 = 1.0 / fVar29;
    }
    if (fVar30 != 0.0) {
      fVar19 = 1.0 / fVar30;
    }
    puVar2 = (undefined8 *)btAlignedAllocInternal(0x400,0x10);
    memset(puVar2 + 1,0,0x3f8);
    *puVar2 = param_1;
    local_f4 = 0x80;
    uVar15 = 1;
    iVar9 = 0x7e;
    uVar12 = 0x80;
    puVar8 = puVar2;
    local_118 = puVar2;
    local_f0 = puVar2;
    do {
      while( true ) {
        iVar14 = (int)uVar15;
        uVar15 = (long)iVar14 - 1;
        puVar13 = (undefined8 *)puVar2[uVar15];
        uStack_b8 = puVar13[1];
        local_c0 = *puVar13;
        uStack_a8 = puVar13[3];
        local_b0 = puVar13[2];
        fVar17 = fVar16 * (*(float *)(&local_c0 + (ulong)(fVar16 >= 0.0) * 2) - *(float *)param_2);
        fVar20 = fVar31 * (*(float *)((ulong)(&local_c0 + (ulong)(fVar31 < 0.0) * 2) | 4) -
                          *(float *)(param_2 + 4));
        if (fVar20 <= fVar17) break;
LAB_01219be0:
        if ((int)uVar15 == 0) goto LAB_01219d38;
      }
      fVar28 = fVar16 * (*(float *)(&local_c0 + (ulong)(fVar16 < 0.0) * 2) - *(float *)param_2);
      fVar27 = fVar31 * (*(float *)((ulong)(&local_c0 + (ulong)(fVar31 >= 0.0) * 2) | 4) -
                        *(float *)(param_2 + 4));
      if (fVar27 < fVar28) goto LAB_01219be0;
      if (fVar20 <= fVar28) {
        fVar20 = fVar28;
      }
      if (fVar17 <= fVar27) {
        fVar27 = fVar17;
      }
      fVar17 = fVar19 * (*(float *)(&uStack_b8 + (ulong)(fVar19 < 0.0) * 2) -
                        *(float *)(param_2 + 8));
      if ((fVar27 < fVar17) ||
         (fVar28 = fVar19 * (*(float *)(&uStack_b8 + (ulong)(fVar19 >= 0.0) * 2) -
                            *(float *)(param_2 + 8)), fVar28 < fVar20)) goto LAB_01219be0;
      if (fVar17 <= fVar20) {
        fVar17 = fVar20;
      }
      if (fVar27 <= fVar28) {
        fVar28 = fVar27;
      }
      if ((fVar32 * (fVar23 - fVar33) + fVar29 * (fVar24 - fVar25) + fVar30 * (fVar26 - fVar34) <=
           fVar17) || (fVar28 <= 0.0)) goto LAB_01219be0;
      if (puVar13[6] == 0) {
        (**(code **)(*(long *)param_4 + 0x18))(param_4,puVar13);
        goto LAB_01219be0;
      }
      uVar11 = (uint)uVar12;
      if (iVar9 < (int)uVar15) {
        uVar1 = uVar11 * 2;
        uVar12 = (ulong)uVar1;
        puVar3 = puVar2;
        if ((int)uVar11 < (int)uVar1) {
          puVar10 = local_f0;
          if ((int)local_f4 < (int)uVar1) {
            local_f4 = uVar1;
            if (uVar11 == 0) {
              puVar3 = (undefined8 *)0x0;
LAB_01219c14:
              puVar8 = puVar3;
              puVar10 = puVar3;
              local_118 = puVar3;
              if (puVar2 == (undefined8 *)0x0) goto LAB_01219cdc;
            }
            else {
              puVar3 = (undefined8 *)
                       btAlignedAllocInternal
                                 (-(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                  uVar12 << 3,0x10);
              if ((int)uVar11 < 1) goto LAB_01219c14;
              lVar4 = (long)(int)uVar11;
              if (uVar11 < 4) {
                lVar5 = 0;
              }
              else {
                lVar5 = lVar4;
                if (lVar4 != 0) {
                  if ((puVar2 + lVar4 <= puVar3) || (puVar3 + lVar4 <= local_118)) {
                    lVar6 = 0;
                    lVar7 = lVar4;
                    do {
                      puVar8 = (undefined8 *)((long)puVar2 + lVar6);
                      uVar18 = *puVar8;
                      uVar22 = puVar8[3];
                      uVar21 = puVar8[2];
                      puVar10 = (undefined8 *)((long)puVar3 + lVar6);
                      lVar7 = lVar7 + -4;
                      lVar6 = lVar6 + 0x20;
                      puVar10[1] = puVar8[1];
                      *puVar10 = uVar18;
                      puVar10[3] = uVar22;
                      puVar10[2] = uVar21;
                      if (lVar7 == 0) goto joined_r0x01219c8c;
                    } while( true );
                  }
                  lVar5 = 0;
                }
              }
              do {
                puVar3[lVar5] = puVar2[lVar5];
                lVar5 = lVar5 + 1;
joined_r0x01219c8c:
              } while (lVar5 != lVar4);
            }
            btAlignedFreeInternal(local_f0);
            puVar8 = puVar3;
            puVar10 = puVar3;
            local_118 = puVar3;
          }
LAB_01219cdc:
          memset(puVar3 + (int)uVar11,0,((long)(int)uVar1 - (long)(int)uVar11) * 8);
          local_f0 = puVar10;
        }
        iVar9 = uVar1 - 2;
        puVar2 = puVar3;
      }
      puVar2[uVar15] = puVar13[5];
      uVar15 = (ulong)(iVar14 + 1U);
      puVar2[iVar14] = puVar13[6];
    } while (iVar14 + 1U != 0);
LAB_01219d38:
    if (puVar2 != (undefined8 *)0x0) {
      btAlignedFreeInternal(puVar8);
    }
  }
  return;
}

