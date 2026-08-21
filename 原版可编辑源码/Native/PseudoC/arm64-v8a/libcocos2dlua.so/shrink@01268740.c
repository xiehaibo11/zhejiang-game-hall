
/* btConvexHullInternal::shrink(float, float) */

undefined1  [16] __thiscall
btConvexHullInternal::shrink(btConvexHullInternal *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *puVar24;
  long *plVar25;
  uint uVar26;
  undefined8 *puVar27;
  long *plVar28;
  ulong uVar29;
  undefined8 *puVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long *plVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  undefined4 in_register_00005004;
  btConvexHullInternal *pbVar39;
  undefined8 in_register_00005008;
  undefined1 auVar40 [16];
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  btConvexHullInternal *pbVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  long *local_190;
  undefined8 *local_188;
  long *local_180;
  undefined8 *local_178;
  long *local_170;
  undefined8 *local_168;
  ulong local_160;
  ulong local_158;
  ulong local_130;
  undefined1 auStack_128 [4];
  ulong local_124;
  void *local_118;
  char local_110;
  float local_108 [4];
  ulong local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  long local_d0;
  ulong local_c8;
  long local_c0;
  float local_b4;
  float local_b0 [4];
  
  pbVar39 = (btConvexHullInternal *)CONCAT44(in_register_00005004,param_1);
  if (*(long *)(this + 0xb8) == 0) {
    pbVar49 = (btConvexHullInternal *)0x0;
    uVar16 = 0;
LAB_012691d0:
    auVar40._8_8_ = uVar16;
    auVar40._0_8_ = pbVar49;
    return auVar40;
  }
  iVar7 = *(int *)(this + 0xa0) + -1;
  *(int *)(this + 0xa0) = iVar7;
  *(int *)(*(long *)(this + 0xb8) + 0x78) = iVar7;
  local_b4 = param_1;
  puVar14 = (undefined8 *)btAlignedAllocInternal(8,0x10);
  local_130 = 0;
  local_160 = 0;
  local_180 = (long *)0x0;
  local_170 = (long *)0x0;
  local_190 = (long *)0x0;
  plVar36 = (long *)0x0;
  uVar34 = 1;
  *puVar14 = *(undefined8 *)(this + 0xb8);
  lVar18 = *(long *)(this + 0xb8);
  iVar3 = *(int *)(lVar18 + 0x68);
  iVar4 = *(int *)(lVar18 + 0x6c);
  iVar5 = *(int *)(lVar18 + 0x70);
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_158 = 1;
  local_188 = puVar14;
  local_178 = puVar14;
  local_168 = puVar14;
LAB_0126880c:
  uVar21 = (long)(int)uVar34;
  while (uVar34 = uVar21 - 1, 0 < (long)uVar21) {
    lVar18 = puVar14[uVar21 - 1];
    plVar35 = *(long **)(lVar18 + 0x10);
    uVar21 = uVar34;
    if (plVar35 != (long *)0x0) goto LAB_012688cc;
  }
  uVar16 = 0;
  pbVar49 = (btConvexHullInternal *)0x0;
  if ((local_f0 < 0) || (local_f0 == 0 && local_f8 == 0)) goto joined_r0x012690bc;
  fVar37 = (float)Int128::toScalar((Int128 *)&local_c8);
  local_108[*(int *)(this + 0xa8)] = fVar37;
  fVar37 = (float)Int128::toScalar((Int128 *)&local_d8);
  local_108[*(int *)(this + 0xac)] = fVar37;
  fVar37 = (float)Int128::toScalar((Int128 *)&local_e8);
  local_108[*(int *)(this + 0xa4)] = fVar37;
  fVar37 = (float)Int128::toScalar((Int128 *)&local_f8);
  fVar41 = *(float *)this;
  fVar46 = 1.0 / (fVar37 * 4.0);
  fVar50 = fVar41 * fVar46 * local_108[0];
  fVar37 = *(float *)(this + 4);
  fVar51 = fVar37 * fVar46 * local_108[1];
  fVar45 = *(float *)(this + 8);
  fVar46 = fVar45 * fVar46 * local_108[2];
  uVar26 = (uint)local_130;
  local_108[0] = fVar50;
  local_108[1] = fVar51;
  local_108[2] = fVar46;
  if (param_2 <= 0.0) goto LAB_012690e0;
  if ((int)uVar26 < 1) {
    fVar52 = 3.4028235e+38;
    goto LAB_012690c8;
  }
  uVar34 = (ulong)*(uint *)(this + 0xa4);
  uVar22 = (ulong)*(uint *)(this + 0xa8);
  uVar29 = (ulong)*(uint *)(this + 0xac);
  fVar52 = 3.4028235e+38;
  uVar33 = local_130;
  plVar35 = plVar36;
  do {
    lVar18 = *plVar35;
    uVar22 = -(uVar22 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar22 & 0xffffffff) << 2;
    uVar29 = -(uVar29 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar29 & 0xffffffff) << 2;
    uVar34 = -(uVar34 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar34 & 0xffffffff) << 2;
    *(float *)((long)local_b0 + uVar22) = (float)*(int *)(lVar18 + 0x28);
    *(float *)((long)local_b0 + uVar29) = (float)*(int *)(lVar18 + 0x2c);
    *(float *)((long)local_b0 + uVar34) = (float)*(int *)(lVar18 + 0x30);
    fVar53 = local_b0[2];
    fVar48 = local_b0[1];
    fVar38 = local_b0[0];
    *(float *)((long)local_b0 + uVar22) = (float)*(int *)(lVar18 + 0x38);
    *(float *)((long)local_b0 + uVar29) = (float)*(int *)(lVar18 + 0x3c);
    *(float *)((long)local_b0 + uVar34) = (float)*(int *)(lVar18 + 0x40);
    fVar47 = fVar48 * fVar37 * fVar45 * local_b0[2] - fVar53 * fVar45 * fVar37 * local_b0[1];
    fVar53 = fVar53 * fVar45 * fVar41 * local_b0[0] - fVar38 * fVar41 * fVar45 * local_b0[2];
    fVar48 = fVar38 * fVar41 * fVar37 * local_b0[1] - fVar48 * fVar37 * fVar41 * local_b0[0];
    fVar37 = fVar48 * fVar48 + fVar47 * fVar47 + fVar53 * fVar53;
    fVar38 = SQRT(fVar37);
    if (NAN(fVar38)) {
      fVar38 = sqrtf(fVar37);
    }
    lVar18 = *plVar35;
    fVar38 = 1.0 / fVar38;
    uVar22 = (ulong)*(int *)(this + 0xa8);
    uVar29 = (ulong)*(int *)(this + 0xac);
    local_b0[uVar22] = (float)*(int *)(lVar18 + 0x18);
    uVar33 = uVar33 - 1;
    local_b0[uVar29] = (float)*(int *)(lVar18 + 0x1c);
    uVar34 = (ulong)*(int *)(this + 0xa4);
    local_b0[uVar34] = (float)*(int *)(lVar18 + 0x20);
    fVar41 = *(float *)this;
    fVar37 = *(float *)(this + 4);
    fVar45 = *(float *)(this + 8);
    fVar38 = fVar47 * fVar38 * (local_b0[0] * fVar41 - fVar50) +
             fVar53 * fVar38 * (local_b0[1] * fVar37 - fVar51) +
             fVar48 * fVar38 * (local_b0[2] * fVar45 - fVar46);
    if (fVar52 <= fVar38) {
      fVar38 = fVar52;
    }
    fVar52 = fVar38;
    plVar35 = plVar35 + 1;
  } while (uVar33 != 0);
  pbVar49 = (btConvexHullInternal *)0x0;
  uVar16 = 0;
  if (0.0 < fVar52) {
LAB_012690c8:
    if (fVar52 * param_2 <= local_b4) {
      local_b4 = fVar52 * param_2;
    }
    in_register_00005008 = 0;
    pbVar39 = (btConvexHullInternal *)(ulong)(uint)local_b4;
LAB_012690e0:
    uVar16 = in_register_00005008;
    pbVar49 = pbVar39;
    if (0 < (int)uVar26) {
      uVar20 = 0x3b7f7;
      plVar35 = plVar36;
      do {
        uVar11 = 0;
        if (uVar26 != 0) {
          uVar11 = uVar20 / uVar26;
        }
        uVar11 = uVar20 - uVar11 * uVar26;
        uVar34 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
        lVar18 = *plVar35;
        local_130 = local_130 - 1;
        uVar20 = uVar20 * 0x19660d + 0x3c6ef35f;
        *plVar35 = *(long *)((long)plVar36 + uVar34);
        *(long *)((long)plVar36 + uVar34) = lVar18;
        plVar35 = plVar35 + 1;
      } while (local_130 != 0);
      if (0 < (int)uVar26) {
        lVar18 = 0;
        do {
          local_110 = '\x01';
          local_118 = (void *)0x0;
          local_124 = uVar21 & 0xffffffff;
          uVar34 = shiftFace(pbVar39,this,plVar36[lVar18],auStack_128);
          if ((local_118 != (void *)0x0) && (local_110 != '\0')) {
            btAlignedFreeInternal(local_118);
          }
          local_110 = 1;
          local_118 = (void *)0x0;
          local_124 = 0;
          if ((uVar34 & 1) == 0) {
            uVar16 = 0;
            pbVar49 = (btConvexHullInternal *)(ulong)(uint)-SUB84(pbVar39,0);
            break;
          }
          lVar18 = lVar18 + 1;
          uVar16 = in_register_00005008;
        } while (lVar18 < (int)uVar26);
      }
    }
  }
joined_r0x012690bc:
  if (plVar36 != (long *)0x0) {
    btAlignedFreeInternal(local_180);
  }
  if (puVar14 != (undefined8 *)0x0) {
    btAlignedFreeInternal(local_178);
  }
  goto LAB_012691d0;
  while (plVar35 = (long *)*plVar35, plVar35 != (long *)*(long *)(lVar18 + 0x10)) {
LAB_012688cc:
    if (*(int *)(plVar35[3] + 0x78) != iVar7) {
      *(int *)(plVar35[3] + 0x78) = iVar7;
      uVar26 = (uint)uVar34;
      puVar15 = puVar14;
      puVar24 = local_168;
      if (uVar26 == (uint)local_158) {
        uVar20 = uVar26 << 1;
        if (uVar26 == 0) {
          uVar20 = 1;
        }
        local_158 = (ulong)uVar20;
        if ((int)uVar26 < (int)uVar20) {
          if (uVar20 == 0) {
            puVar15 = (undefined8 *)0x0;
            if (0 < (int)uVar26) goto LAB_01268930;
LAB_012689b0:
            local_188 = puVar15;
            local_178 = puVar15;
            puVar24 = puVar15;
            if (puVar14 == (undefined8 *)0x0) goto LAB_012689d0;
          }
          else {
            puVar15 = (undefined8 *)
                      btAlignedAllocInternal
                                (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | local_158 << 3,0x10
                                );
            if ((int)uVar26 < 1) goto LAB_012689b0;
LAB_01268930:
            uVar34 = (ulong)(int)uVar26;
            if (uVar26 < 4) {
LAB_01268964:
              uVar21 = 0;
LAB_01268968:
              lVar19 = uVar34 - uVar21;
              puVar14 = puVar14 + uVar21;
              puVar24 = puVar15 + uVar21;
              do {
                lVar19 = lVar19 + -1;
                *puVar24 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar24 = puVar24 + 1;
              } while (lVar19 != 0);
            }
            else {
              uVar21 = uVar34 & 0xfffffffffffffffc;
              if (uVar21 == 0) goto LAB_01268968;
              if ((puVar15 < puVar14 + uVar34) && (local_188 < puVar15 + uVar34)) goto LAB_01268964;
              puVar24 = puVar15 + 2;
              puVar27 = puVar14 + 2;
              uVar22 = uVar21;
              do {
                puVar2 = puVar27 + -1;
                uVar16 = puVar27[-2];
                uVar43 = puVar27[1];
                uVar42 = *puVar27;
                uVar22 = uVar22 - 4;
                puVar27 = puVar27 + 4;
                puVar24[-1] = *puVar2;
                puVar24[-2] = uVar16;
                puVar24[1] = uVar43;
                *puVar24 = uVar42;
                puVar24 = puVar24 + 4;
              } while (uVar22 != 0);
              if (uVar21 != uVar34) goto LAB_01268968;
            }
          }
          btAlignedFreeInternal(local_168);
          local_188 = puVar15;
          local_178 = puVar15;
          puVar24 = puVar15;
        }
        else {
          local_158 = uVar34 & 0xffffffff;
        }
      }
LAB_012689d0:
      local_168 = puVar24;
      puVar15[(int)uVar26] = plVar35[3];
      uVar34 = (ulong)(uVar26 + 1);
      puVar14 = puVar15;
    }
    if ((int)plVar35[5] != iVar7) {
      puVar15 = *(undefined8 **)(this + 0x70);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = *(undefined8 **)(this + 0x68);
        if (puVar15 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
          iVar6 = *(int *)(this + 0x78);
          puVar15[2] = 0;
          *(int *)(puVar15 + 1) = iVar6;
          uVar16 = btAlignedAllocInternal((long)iVar6 * 0x48,0x10);
          *puVar15 = uVar16;
          puVar15[2] = *(undefined8 *)(this + 0x60);
          *(undefined8 **)(this + 0x60) = puVar15;
        }
        else {
          *(undefined8 *)(this + 0x68) = puVar15[2];
        }
        iVar6 = *(int *)(puVar15 + 1);
        puVar15 = (undefined8 *)*puVar15;
        if (0 < iVar6) {
          puVar24 = puVar15 + 9;
          puVar27 = puVar24;
          if (iVar6 == 1) {
            puVar27 = (undefined8 *)0x0;
          }
          *puVar15 = puVar27;
          if (iVar6 != 1) {
            iVar23 = iVar6;
            if (iVar6 < 3) {
              iVar23 = 2;
            }
            uVar21 = (ulong)(iVar23 - 2U) + 1;
            if (uVar21 < 2) {
LAB_01268b0c:
              iVar23 = 1;
            }
            else {
              uVar26 = ~(iVar23 - 2U) & 1;
              lVar19 = uVar21 - uVar26;
              if (lVar19 == 0) goto LAB_01268b0c;
              lVar32 = 0;
              iVar23 = (int)lVar19 + 1;
              puVar24 = puVar24 + lVar19 * 9;
              puVar27 = puVar15;
              do {
                puVar30 = puVar27 + 0x12;
                iVar31 = (int)lVar32;
                lVar32 = lVar32 + 2;
                puVar2 = puVar27 + 0x1b;
                puVar1 = puVar30;
                if (iVar6 <= (int)lVar32) {
                  puVar1 = (undefined8 *)0x0;
                }
                if (iVar6 <= iVar31 + 3) {
                  puVar2 = (undefined8 *)0x0;
                }
                puVar27[9] = puVar1;
                *puVar30 = puVar2;
                puVar27 = puVar30;
              } while (lVar19 != lVar32);
              if (uVar26 == 0) goto LAB_01268b30;
            }
            do {
              iVar23 = iVar23 + 1;
              puVar27 = puVar24 + 9;
              if (iVar6 <= iVar23) {
                puVar27 = (undefined8 *)0x0;
              }
              *puVar24 = puVar27;
              puVar24 = puVar24 + 9;
            } while (iVar23 < iVar6);
          }
        }
      }
LAB_01268b30:
      *(undefined8 *)(this + 0x70) = *puVar15;
      puVar15[1] = 0;
      puVar15[2] = 0;
      *puVar15 = 0;
      lVar19 = plVar35[3];
      lVar32 = *(long *)(*(long *)(plVar35[2] + 8) + 0x18);
      puVar15[1] = lVar19;
      uVar16 = *(undefined8 *)(lVar19 + 0x68);
      puVar15[4] = *(undefined8 *)(lVar19 + 0x70);
      puVar15[3] = uVar16;
      iVar6 = *(int *)(lVar32 + 0x70);
      iVar23 = *(int *)(lVar19 + 0x70);
      puVar15[5] = CONCAT44(*(int *)(lVar32 + 0x6c) - *(int *)(lVar19 + 0x6c),
                            *(int *)(lVar32 + 0x68) - *(int *)(lVar19 + 0x68));
      puVar15[6] = (ulong)(uint)(iVar6 - iVar23) | 0xffffffff00000000;
      iVar6 = *(int *)(lVar18 + 0x70);
      iVar23 = *(int *)(lVar19 + 0x70);
      puVar15[7] = CONCAT44(*(int *)(lVar18 + 0x6c) - *(int *)(lVar19 + 0x6c),
                            *(int *)(lVar18 + 0x68) - *(int *)(lVar19 + 0x68));
      puVar15[8] = (ulong)(uint)(iVar6 - iVar23) | 0xffffffff00000000;
      puVar24 = (undefined8 *)(lVar19 + 0x18);
      if (*(long *)(lVar19 + 0x20) != 0) {
        puVar24 = (undefined8 *)(*(long *)(lVar19 + 0x20) + 0x10);
      }
      *puVar24 = puVar15;
      *(undefined8 **)(lVar19 + 0x20) = puVar15;
      uVar26 = (uint)local_130;
      plVar17 = plVar36;
      plVar25 = local_170;
      if (uVar26 == (uint)local_160) {
        uVar20 = uVar26 << 1;
        if (uVar26 == 0) {
          uVar20 = 1;
        }
        local_160 = (ulong)uVar20;
        if ((int)uVar26 < (int)uVar20) {
          if (uVar20 == 0) {
            plVar17 = (long *)0x0;
            if (0 < (int)uVar26) goto LAB_01268c18;
LAB_01268c98:
            local_190 = plVar17;
            local_180 = plVar17;
            plVar25 = plVar17;
            if (plVar36 == (long *)0x0) goto LAB_01268cbc;
          }
          else {
            plVar17 = (long *)btAlignedAllocInternal
                                        (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 |
                                         local_160 << 3,0x10);
            if ((int)uVar26 < 1) goto LAB_01268c98;
LAB_01268c18:
            uVar21 = (ulong)(int)uVar26;
            if (uVar26 < 4) {
LAB_01268c50:
              uVar22 = 0;
LAB_01268c54:
              lVar19 = uVar21 - uVar22;
              plVar36 = plVar36 + uVar22;
              plVar25 = plVar17 + uVar22;
              do {
                lVar19 = lVar19 + -1;
                *plVar25 = *plVar36;
                plVar36 = plVar36 + 1;
                plVar25 = plVar25 + 1;
              } while (lVar19 != 0);
            }
            else {
              uVar22 = uVar21 & 0xfffffffffffffffc;
              if (uVar22 == 0) goto LAB_01268c54;
              if ((plVar17 < plVar36 + uVar21) && (local_190 < plVar17 + uVar21)) goto LAB_01268c50;
              plVar25 = plVar17 + 2;
              plVar28 = plVar36 + 2;
              uVar29 = uVar22;
              do {
                plVar12 = plVar28 + -1;
                lVar19 = plVar28[-2];
                lVar44 = plVar28[1];
                lVar32 = *plVar28;
                uVar29 = uVar29 - 4;
                plVar28 = plVar28 + 4;
                plVar25[-1] = *plVar12;
                plVar25[-2] = lVar19;
                plVar25[1] = lVar44;
                *plVar25 = lVar32;
                plVar25 = plVar25 + 4;
              } while (uVar29 != 0);
              if (uVar22 != uVar21) goto LAB_01268c54;
            }
          }
          btAlignedFreeInternal(local_170);
          local_190 = plVar17;
          local_180 = plVar17;
          plVar25 = plVar17;
        }
        else {
          local_160 = local_130;
        }
      }
LAB_01268cbc:
      local_170 = plVar25;
      plVar17[(int)uVar26] = (long)puVar15;
      lVar19 = 0;
      plVar36 = plVar35;
      lVar32 = 0;
      do {
        if ((lVar32 != 0) && (lVar19 != 0)) {
          iVar6 = *(int *)(lVar19 + 0x70) - iVar5;
          iVar23 = *(int *)(lVar32 + 0x6c) - iVar4;
          iVar31 = *(int *)(lVar19 + 0x68) - iVar3;
          iVar8 = *(int *)(lVar19 + 0x6c) - iVar4;
          iVar9 = *(int *)(lVar32 + 0x68) - iVar3;
          iVar10 = *(int *)(lVar32 + 0x70) - iVar5;
          uVar21 = (long)(iVar10 * iVar8 - iVar23 * iVar6) * (long)(*(int *)(lVar18 + 0x68) - iVar3)
                   + (long)(iVar23 * iVar31 - iVar9 * iVar8) *
                     (long)(*(int *)(lVar18 + 0x70) - iVar5) +
                   (long)(iVar9 * iVar6 - iVar10 * iVar31) * (long)(*(int *)(lVar18 + 0x6c) - iVar4)
          ;
          uVar22 = uVar21 * (long)(*(int *)(lVar18 + 0x68) + iVar3 + *(int *)(lVar19 + 0x68) +
                                  *(int *)(lVar32 + 0x68));
          bVar13 = CARRY8(uVar22,local_c8);
          local_c8 = uVar22 + local_c8;
          if (bVar13) {
            local_c0 = local_c0 + 1;
          }
          local_c0 = local_c0 + ((long)uVar22 >> 0x3f);
          uVar22 = uVar21 * (long)(*(int *)(lVar18 + 0x6c) + iVar4 + *(int *)(lVar19 + 0x6c) +
                                  *(int *)(lVar32 + 0x6c));
          bVar13 = CARRY8(local_d8,uVar22);
          local_d8 = local_d8 + uVar22;
          if (bVar13) {
            local_d0 = local_d0 + 1;
          }
          local_d0 = local_d0 + ((long)uVar22 >> 0x3f);
          uVar22 = uVar21 * (long)(*(int *)(lVar18 + 0x70) + iVar5 + *(int *)(lVar19 + 0x70) +
                                  *(int *)(lVar32 + 0x70));
          bVar13 = CARRY8(local_e8,uVar22);
          local_e8 = local_e8 + uVar22;
          if (bVar13) {
            local_e0 = local_e0 + 1;
          }
          local_e0 = local_e0 + ((long)uVar22 >> 0x3f);
          bVar13 = CARRY8(local_f8,uVar21);
          local_f8 = local_f8 + uVar21;
          if (bVar13) {
            local_f0 = local_f0 + 1;
          }
          local_f0 = local_f0 + ((long)uVar21 >> 0x3f);
        }
        plVar25 = plVar36 + 3;
        *(int *)(plVar36 + 5) = iVar7;
        plVar36[4] = (long)puVar15;
        plVar36 = *(long **)(plVar36[2] + 8);
        lVar19 = lVar32;
        lVar32 = *plVar25;
      } while (plVar36 != plVar35);
      local_130 = (ulong)(uVar26 + 1);
      plVar36 = plVar17;
    }
  }
  goto LAB_0126880c;
}

