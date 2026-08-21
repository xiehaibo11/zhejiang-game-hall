
/* WARNING: Removing unreachable block (ram,0x0124eb58) */
/* WARNING: Removing unreachable block (ram,0x0124e74c) */
/* WARNING: Removing unreachable block (ram,0x0124eb18) */
/* WARNING: Removing unreachable block (ram,0x0124e58c) */
/* btPolyhedralContactClipping::findSeparatingAxis(btConvexPolyhedron const&, btConvexPolyhedron
   const&, btTransform const&, btTransform const&, btVector3&,
   btDiscreteCollisionDetectorInterface::Result&) */

undefined8
btPolyhedralContactClipping::findSeparatingAxis
          (btConvexPolyhedron *param_1,btConvexPolyhedron *param_2,btTransform *param_3,
          btTransform *param_4,btVector3 *param_5,Result *param_6)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  uint local_148;
  uint local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  
  DAT_017958dc = DAT_017958dc + 1;
  fVar18 = *(float *)(param_2 + 0x68);
  fVar19 = *(float *)(param_2 + 0x6c);
  fVar11 = *(float *)(param_1 + 0x68);
  fVar13 = *(float *)(param_1 + 0x6c);
  local_178 = *(float *)(param_3 + 0x10);
  fVar8 = *(float *)(param_3 + 0x14);
  fVar20 = *(float *)(param_2 + 0x70);
  fVar9 = *(float *)(param_3 + 0x20);
  fVar10 = *(float *)(param_3 + 0x24);
  fVar21 = *(float *)(param_1 + 0x70);
  fVar15 = *(float *)(param_3 + 8);
  fVar14 = *(float *)(param_3 + 0x18);
  fVar12 = *(float *)(param_3 + 0x28);
  fVar16 = (fVar11 * *(float *)param_3 + fVar13 * *(float *)(param_3 + 4) + fVar21 * fVar15 +
           *(float *)(param_3 + 0x30)) -
           (fVar18 * *(float *)param_4 + fVar19 * *(float *)(param_4 + 4) +
            fVar20 * *(float *)(param_4 + 8) + *(float *)(param_4 + 0x30));
  fVar17 = (fVar11 * local_178 + fVar13 * fVar8 + fVar21 * fVar14 + *(float *)(param_3 + 0x34)) -
           (fVar18 * *(float *)(param_4 + 0x10) + fVar19 * *(float *)(param_4 + 0x14) +
            fVar20 * *(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x34));
  fVar11 = (fVar11 * fVar9 + fVar13 * fVar10 + fVar21 * fVar12 + *(float *)(param_3 + 0x38)) -
           (fVar18 * *(float *)(param_4 + 0x20) + fVar19 * *(float *)(param_4 + 0x24) +
            fVar20 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38));
  local_f4 = 0;
  iVar4 = *(int *)(param_1 + 0x2c);
  local_100 = fVar16;
  fStack_fc = fVar17;
  local_f8 = fVar11;
  if (iVar4 < 1) {
    fVar13 = 3.4028235e+38;
  }
  else {
    fVar13 = 3.4028235e+38;
    lVar5 = 0;
    lVar6 = 1;
    while( true ) {
      lVar7 = *(long *)(param_1 + 0x38) + lVar5;
      fVar18 = *(float *)(lVar7 + 0x20);
      fVar19 = *(float *)(lVar7 + 0x24);
      fVar20 = *(float *)(lVar7 + 0x28);
      uStack_104 = 0;
      local_110 = fVar18 * *(float *)param_3 + fVar19 * *(float *)(param_3 + 4) + fVar20 * fVar15;
      fStack_10c = fVar18 * local_178 + fVar19 * fVar8 + fVar20 * fVar14;
      fStack_108 = fVar18 * fVar9 + fVar19 * fVar10 + fVar20 * fVar12;
      if (fVar16 * local_110 + fVar17 * fStack_10c + fVar11 * fStack_108 < 0.0) {
        local_110 = -local_110;
        fStack_10c = -fStack_10c;
        fStack_108 = -fStack_108;
      }
      gExpectedNbTests = gExpectedNbTests + 1;
      if ((gUseInternalObject == '\0') ||
         (uVar2 = TestInternalObjects(param_3,param_4,(btVector3 *)&local_100,
                                      (btVector3 *)&local_110,param_1,param_2,fVar13),
         uVar3 = extraout_d0, (uVar2 & 1) != 0)) {
        gActualNbTests = gActualNbTests + 1;
        btConvexPolyhedron::project
                  (param_1,param_3,(btVector3 *)&local_110,&local_a4,&fStack_a8,
                   (btVector3 *)&local_c0,(btVector3 *)&local_d0);
        btConvexPolyhedron::project
                  (param_2,param_4,(btVector3 *)&local_110,&local_ac,&local_b0,
                   (btVector3 *)&local_e0,(btVector3 *)&local_f0);
        if (fStack_a8 < local_ac) {
          return 0;
        }
        if (local_b0 < local_a4) {
          return 0;
        }
        fVar9 = fStack_a8 - local_ac;
        fVar8 = fVar9;
        if (local_b0 - local_a4 <= fVar9) {
          fVar8 = local_b0 - local_a4;
        }
        uVar3 = (ulong)(uint)fVar9;
        if (fVar8 < fVar13) {
          uVar3 = CONCAT44(fStack_10c,local_110);
          *(ulong *)(param_5 + 8) = CONCAT44(uStack_104,fStack_108);
          *(ulong *)param_5 = uVar3;
          fVar13 = fVar8;
        }
      }
      local_178 = (float)uVar3;
      if (iVar4 <= lVar6) break;
      fVar15 = *(float *)(param_3 + 8);
      local_178 = *(float *)(param_3 + 0x10);
      fVar8 = *(float *)(param_3 + 0x14);
      fVar14 = *(float *)(param_3 + 0x18);
      fVar9 = *(float *)(param_3 + 0x20);
      fVar10 = *(float *)(param_3 + 0x24);
      fVar12 = *(float *)(param_3 + 0x28);
      lVar5 = lVar5 + 0x30;
      lVar6 = lVar6 + 1;
    }
  }
  iVar4 = *(int *)(param_2 + 0x2c);
  if (0 < iVar4) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x38) + lVar6;
      fVar8 = *(float *)(lVar7 + 0x20);
      fVar10 = *(float *)(lVar7 + 0x24);
      fVar9 = *(float *)(lVar7 + 0x28);
      local_110 = fVar8 * *(float *)param_4 + fVar10 * *(float *)(param_4 + 4) +
                  fVar9 * *(float *)(param_4 + 8);
      fStack_10c = fVar8 * *(float *)(param_4 + 0x10) + fVar10 * *(float *)(param_4 + 0x14) +
                   fVar9 * *(float *)(param_4 + 0x18);
      fStack_108 = fVar8 * *(float *)(param_4 + 0x20) + fVar10 * *(float *)(param_4 + 0x24) +
                   fVar9 * *(float *)(param_4 + 0x28);
      uStack_104 = 0;
      if (fVar16 * local_110 + fVar17 * fStack_10c + fVar11 * fStack_108 < 0.0) {
        local_110 = -local_110;
        fStack_10c = -fStack_10c;
        fStack_108 = -fStack_108;
      }
      gExpectedNbTests = gExpectedNbTests + 1;
      if ((gUseInternalObject == '\0') ||
         (uVar2 = TestInternalObjects(param_3,param_4,(btVector3 *)&local_100,
                                      (btVector3 *)&local_110,param_1,param_2,fVar13),
         uVar3 = extraout_d0_00, (uVar2 & 1) != 0)) {
        gActualNbTests = gActualNbTests + 1;
        btConvexPolyhedron::project
                  (param_1,param_3,(btVector3 *)&local_110,&local_a4,&fStack_a8,
                   (btVector3 *)&local_c0,(btVector3 *)&local_d0);
        btConvexPolyhedron::project
                  (param_2,param_4,(btVector3 *)&local_110,&local_ac,&local_b0,
                   (btVector3 *)&local_e0,(btVector3 *)&local_f0);
        if ((fStack_a8 < local_ac) || (local_b0 < local_a4)) {
          return 0;
        }
        fVar9 = fStack_a8 - local_ac;
        fVar8 = fVar9;
        if (local_b0 - local_a4 <= fVar9) {
          fVar8 = local_b0 - local_a4;
        }
        uVar3 = (ulong)(uint)fVar9;
        if (fVar8 < fVar13) {
          uVar3 = CONCAT44(fStack_10c,local_110);
          *(ulong *)(param_5 + 8) = CONCAT44(uStack_104,fStack_108);
          *(ulong *)param_5 = uVar3;
          fVar13 = fVar8;
        }
      }
      local_178 = (float)uVar3;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar5 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  local_174 = local_178;
  local_170 = local_178;
  local_16c = local_178;
  local_168 = local_178;
  local_164 = local_178;
  local_160 = local_178;
  local_15c = local_178;
  local_158 = local_178;
  local_154 = local_178;
  local_150 = local_178;
  local_14c = local_178;
  if (iVar4 < 1) {
    local_148 = 0xffffffff;
    local_144 = 0xffffffff;
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x4c);
    local_144 = 0xffffffff;
    lVar5 = 0;
    local_148 = 0xffffffff;
    do {
      if (0 < (int)uVar3) {
        pfVar1 = (float *)(*(long *)(param_1 + 0x58) + lVar5 * 0x10);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        lVar7 = 0;
        lVar6 = 0;
        fVar14 = fVar8 * *(float *)param_3 + fVar9 * *(float *)(param_3 + 4) +
                 fVar10 * *(float *)(param_3 + 8);
        fVar12 = fVar8 * *(float *)(param_3 + 0x10) + fVar9 * *(float *)(param_3 + 0x14) +
                 fVar10 * *(float *)(param_3 + 0x18);
        fVar8 = fVar8 * *(float *)(param_3 + 0x20) + fVar9 * *(float *)(param_3 + 0x24) +
                fVar10 * *(float *)(param_3 + 0x28);
        do {
          pfVar1 = (float *)(*(long *)(param_2 + 0x58) + lVar7);
          fVar9 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar18 = fVar9 * *(float *)param_4 + fVar19 * *(float *)(param_4 + 4) +
                   fVar10 * *(float *)(param_4 + 8);
          fVar15 = fVar9 * *(float *)(param_4 + 0x10) + fVar19 * *(float *)(param_4 + 0x14) +
                   fVar10 * *(float *)(param_4 + 0x18);
          fVar9 = fVar9 * *(float *)(param_4 + 0x20) + fVar19 * *(float *)(param_4 + 0x24) +
                  fVar10 * *(float *)(param_4 + 0x28);
          local_110 = fVar12 * fVar9 - fVar8 * fVar15;
          fStack_10c = fVar8 * fVar18 - fVar14 * fVar9;
          fStack_108 = fVar14 * fVar15 - fVar12 * fVar18;
          uStack_104 = 0;
          if (((1e-06 < ABS(local_110)) || (1e-06 < ABS(fStack_10c))) || (1e-06 < ABS(fStack_108)))
          {
            fVar19 = local_110 * local_110 + fStack_10c * fStack_10c + fStack_108 * fStack_108;
            fVar10 = SQRT(fVar19);
            if (NAN(fVar10)) {
              fVar10 = sqrtf(fVar19);
            }
            fVar10 = 1.0 / fVar10;
            local_110 = fVar10 * local_110;
            fStack_10c = fVar10 * fStack_10c;
            fStack_108 = fVar10 * fStack_108;
            if (fVar16 * local_110 + fVar17 * fStack_10c + fVar11 * fStack_108 < 0.0) {
              local_110 = -local_110;
              fStack_10c = -fStack_10c;
              fStack_108 = -fStack_108;
            }
            gExpectedNbTests = gExpectedNbTests + 1;
            if ((gUseInternalObject == '\0') ||
               (uVar3 = TestInternalObjects(param_3,param_4,(btVector3 *)&local_100,
                                            (btVector3 *)&local_110,param_1,param_2,fVar13),
               (uVar3 & 1) != 0)) {
              gActualNbTests = gActualNbTests + 1;
              btConvexPolyhedron::project
                        (param_1,param_3,(btVector3 *)&local_110,&local_a4,&fStack_a8,
                         (btVector3 *)&local_c0,(btVector3 *)&local_d0);
              btConvexPolyhedron::project
                        (param_2,param_4,(btVector3 *)&local_110,&local_ac,&local_b0,
                         (btVector3 *)&local_e0,(btVector3 *)&local_f0);
              if (fStack_a8 < local_ac) {
                return 0;
              }
              if (local_b0 < local_a4) {
                return 0;
              }
              fVar10 = local_b0 - local_a4;
              if (fVar10 <= fStack_a8 - local_ac) {
                local_12c = local_c0;
                local_130 = local_bc;
                local_134 = local_b8;
                local_138 = local_f0;
                local_13c = local_ec;
                local_140 = local_e8;
              }
              else {
                local_12c = local_d0;
                local_130 = local_cc;
                local_134 = local_c8;
                local_138 = local_e0;
                local_13c = local_dc;
                local_140 = local_d8;
                fVar10 = fStack_a8 - local_ac;
              }
              if (fVar10 < fVar13) {
                *(ulong *)(param_5 + 8) = CONCAT44(uStack_104,fStack_108);
                *(ulong *)param_5 = CONCAT44(fStack_10c,local_110);
                local_148 = (uint)lVar6;
                local_144 = (uint)lVar5;
                local_14c = local_138;
                local_150 = local_13c;
                local_154 = local_140;
                local_170 = local_12c;
                local_174 = local_130;
                local_178 = local_134;
                local_16c = fVar8;
                local_168 = fVar12;
                local_164 = fVar14;
                local_160 = fVar9;
                local_15c = fVar15;
                local_158 = fVar18;
                fVar13 = fVar10;
              }
            }
          }
          uVar3 = (ulong)*(int *)(param_2 + 0x4c);
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar6 < (long)uVar3);
        iVar4 = *(int *)(param_1 + 0x4c);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if ((int)(local_144 | local_148) < 0) goto LAB_0124ee00;
  local_170 = local_14c - local_170;
  local_174 = local_150 - local_174;
  local_178 = local_154 - local_178;
  fVar10 = local_158 * local_164 + local_15c * local_168 + local_160 * local_16c;
  fVar9 = local_170 * local_158 + local_174 * local_15c + local_178 * local_160;
  fVar8 = 1.0 - fVar10 * fVar10;
  fVar12 = local_170 * local_164 + local_174 * local_168 + local_178 * local_16c;
  fVar13 = 0.0;
  if (fVar8 == 0.0) {
LAB_0124ec78:
    fVar8 = fVar13;
  }
  else {
    fVar13 = -1e+30;
    fVar8 = (fVar12 - fVar9 * fVar10) / fVar8;
    if ((fVar8 < -1e+30) || (fVar13 = 1e+30, 1e+30 < fVar8)) goto LAB_0124ec78;
  }
  fVar9 = fVar10 * fVar8 - fVar9;
  if (-1e+30 <= fVar9) {
    if (((1e+30 < fVar9) &&
        (fVar12 = fVar12 + fVar10 * 1e+30, fVar8 = -1e+30, fVar9 = 1e+30, -1e+30 <= fVar12)) &&
       (fVar8 = fVar12, fVar9 = 1e+30, 1e+30 < fVar12)) {
      fVar8 = 1e+30;
      fVar9 = fVar8;
    }
  }
  else {
    fVar9 = -1e+30;
    fVar12 = fVar12 + fVar10 * -1e+30;
    fVar8 = fVar9;
    if ((-1e+30 <= fVar12) && (fVar8 = 1e+30, fVar12 <= 1e+30)) {
      fVar8 = fVar12;
    }
  }
  fVar13 = local_158 * fVar9 + (local_170 - local_164 * fVar8);
  fVar12 = local_15c * fVar9 + (local_174 - local_168 * fVar8);
  fVar10 = local_160 * fVar9 + (local_178 - local_16c * fVar8);
  fVar8 = fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10;
  local_b4 = 0;
  if (1.1920929e-07 < fVar8) {
    fVar14 = SQRT(fVar8);
    if (NAN(fVar14)) {
      local_c0 = fVar13;
      local_bc = fVar12;
      local_b8 = fVar10;
      fVar14 = sqrtf(fVar8);
    }
    local_b8 = 1.0 / fVar14;
    local_c0 = local_b8 * fVar13;
    local_bc = local_b8 * fVar12;
    local_b8 = local_b8 * fVar10;
    if (local_c0 * fVar16 + local_bc * fVar17 + local_b8 * fVar11 < 0.0) {
      local_c0 = -local_c0;
      local_bc = -local_bc;
      local_b8 = -local_b8;
    }
    local_c4 = 0;
    local_d0 = local_14c + local_158 * fVar9;
    local_cc = local_150 + local_15c * fVar9;
    local_c8 = local_154 + local_160 * fVar9;
    (**(code **)(*(long *)param_6 + 0x20))(-fVar14,param_6,&local_c0,&local_d0);
  }
LAB_0124ee00:
  if (fVar16 * *(float *)param_5 + fVar17 * *(float *)(param_5 + 4) +
      fVar11 * *(float *)(param_5 + 8) < 0.0) {
    *(undefined4 *)(param_5 + 0xc) = 0;
    *(float *)param_5 = -*(float *)param_5;
    *(float *)(param_5 + 4) = -*(float *)(param_5 + 4);
    *(float *)(param_5 + 8) = -*(float *)(param_5 + 8);
  }
  return 1;
}

