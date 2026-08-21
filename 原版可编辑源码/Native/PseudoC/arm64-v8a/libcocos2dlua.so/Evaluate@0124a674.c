
/* gjkepa2_impl::GJK::Evaluate(gjkepa2_impl::MinkowskiDiff const&, btVector3 const&) */

int __thiscall gjkepa2_impl::GJK::Evaluate(GJK *this,MinkowskiDiff *param_1,btVector3 *param_2)

{
  sSV *psVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  GJK *pGVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  GJK *pGVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_f4;
  undefined8 local_f0;
  float local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  psVar1 = (sSV *)(this + 0x178);
  *(GJK **)(this + 0x198) = this + 0x118;
  *(GJK **)(this + 0x1a0) = this + 0x138;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(GJK **)(this + 0x1a8) = this + 0x158;
  *(sSV **)(this + 0x1b0) = psVar1;
  *(undefined8 *)(this + 0x1b8) = 4;
  uVar16 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = uVar16;
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x88) = uVar9;
  *(undefined8 *)(this + 0x80) = uVar16;
  uVar16 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x90) = uVar16;
  fVar15 = *(float *)(this + 0x90);
  fVar17 = *(float *)(this + 0x94);
  fVar19 = *(float *)(this + 0x98);
  fVar24 = fVar15 * fVar15 + fVar17 * fVar17 + fVar19 * fVar19;
  if (fVar24 <= 0.0) {
    local_e0 = 0x3f800000;
    uStack_d8 = 0;
    *(undefined4 *)(this + 200) = 0;
    *(undefined4 *)(this + 0x1b8) = 3;
    *(sSV **)(this + 0xa8) = psVar1;
    *(undefined4 *)(this + 0xd8) = 1;
  }
  else {
    local_e0 = CONCAT44(-fVar17,-fVar15);
    uStack_d8 = (ulong)(uint)-fVar19;
    *(undefined4 *)(this + 200) = 0;
    *(undefined4 *)(this + 0x1b8) = 3;
    *(sSV **)(this + 0xa8) = psVar1;
    *(undefined4 *)(this + 0xd8) = 1;
  }
  getsupport(this,(btVector3 *)&local_e0,psVar1);
  lVar5 = *(long *)(this + 0xa8);
  *(undefined4 *)(this + 200) = 0x3f800000;
  uVar16 = *(undefined8 *)(lVar5 + 0x10);
  uVar11 = 0;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(this + 0x90) = uVar16;
  uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
  local_b0 = *(undefined8 *)(lVar5 + 0x10);
  uStack_b8 = *(undefined8 *)(lVar5 + 0x18);
  local_c0 = *(undefined8 *)(lVar5 + 0x10);
  uVar12 = 0;
  uStack_c8 = *(undefined8 *)(lVar5 + 0x18);
  local_d0 = *(undefined8 *)(lVar5 + 0x10);
  uStack_d8 = *(ulong *)(lVar5 + 0x18);
  local_e0 = *(undefined8 *)(lVar5 + 0x10);
  fVar17 = 0.0;
  fVar15 = *(float *)(this + 0x90);
  uVar16 = *(undefined8 *)(this + 0x94);
  do {
    fVar19 = (float)((ulong)uVar16 >> 0x20);
    uVar2 = *(uint *)(this + 0x1bc);
    uVar13 = (ulong)uVar2;
    fVar15 = fVar15 * fVar15 + (float)uVar16 * (float)uVar16 + fVar19 * fVar19;
    fVar19 = SQRT(fVar15);
    if (NAN(fVar19)) {
      fVar19 = sqrtf(fVar15);
    }
    if (fVar19 < 0.0001) {
      *(undefined4 *)(this + 0x1c8) = 1;
      iVar4 = 1;
      break;
    }
    local_e4 = 0;
    local_e8 = -*(float *)(this + 0x98);
    local_f0 = CONCAT44(-*(float *)(this + 0x94),-*(float *)(this + 0x90));
    pGVar14 = this + uVar13 * 0x38 + 0xd8;
    lVar5 = uVar13 * 0x38 + 0xa8;
    *(undefined4 *)(this + (ulong)*(uint *)pGVar14 * 4 + lVar5 + 0x20) = 0;
    iVar4 = *(int *)(this + 0x1b8);
    *(uint *)(this + 0x1b8) = iVar4 - 1U;
    *(undefined8 *)(this + (ulong)*(uint *)pGVar14 * 8 + lVar5) =
         *(undefined8 *)(this + (ulong)(iVar4 - 1U) * 8 + 0x198);
    uVar3 = *(uint *)pGVar14;
    *(uint *)pGVar14 = uVar3 + 1;
    getsupport(this,(btVector3 *)&local_f0,*(sSV **)(this + (ulong)uVar3 * 8 + lVar5));
    uVar3 = *(uint *)pGVar14;
    lVar5 = *(long *)(this + (ulong)(uVar3 - 1) * 8 + lVar5);
    fVar15 = *(float *)(lVar5 + 0x10);
    fVar18 = *(float *)(lVar5 + 0x14);
    fVar20 = *(float *)(lVar5 + 0x18);
    if ((fVar15 - (float)local_e0) * (fVar15 - (float)local_e0) +
        (fVar18 - local_e0._4_4_) * (fVar18 - local_e0._4_4_) +
        (fVar20 - (float)uStack_d8) * (fVar20 - (float)uStack_d8) < 0.0001) {
LAB_0124acec:
      uVar12 = *(uint *)(this + 0x1bc);
      iVar4 = *(int *)(this + (ulong)uVar12 * 0x38 + 0xd8);
      *(uint *)(this + (ulong)uVar12 * 0x38 + 0xd8) = iVar4 - 1U;
      uVar11 = *(uint *)(this + 0x1b8);
      uVar16 = *(undefined8 *)(this + (ulong)(iVar4 - 1U) * 8 + (ulong)uVar12 * 0x38 + 0xa8);
      *(uint *)(this + 0x1b8) = uVar11 + 1;
      *(undefined8 *)(this + (ulong)uVar11 * 8 + 0x198) = uVar16;
      iVar4 = *(int *)(this + 0x1c8);
      break;
    }
    if ((fVar15 - (float)local_d0) * (fVar15 - (float)local_d0) +
        (fVar18 - local_d0._4_4_) * (fVar18 - local_d0._4_4_) +
        (fVar20 - (float)uStack_c8) * (fVar20 - (float)uStack_c8) < 0.0001) goto LAB_0124acec;
    if ((fVar15 - (float)local_c0) * (fVar15 - (float)local_c0) +
        (fVar18 - local_c0._4_4_) * (fVar18 - local_c0._4_4_) +
        (fVar20 - (float)uStack_b8) * (fVar20 - (float)uStack_b8) < 0.0001) goto LAB_0124acec;
    if ((fVar15 - (float)local_b0) * (fVar15 - (float)local_b0) +
        (fVar18 - local_b0._4_4_) * (fVar18 - local_b0._4_4_) +
        (fVar20 - (float)uStack_a8) * (fVar20 - (float)uStack_a8) < 0.0001) goto LAB_0124acec;
    uVar16 = *(undefined8 *)(lVar5 + 0x10);
    uVar11 = uVar11 + 1 & 3;
    (&uStack_d8)[(ulong)uVar11 * 2] = *(ulong *)(lVar5 + 0x18);
    (&local_e0)[(ulong)uVar11 * 2] = uVar16;
    fVar15 = (*(float *)(this + 0x90) * fVar15 + *(float *)(this + 0x94) * fVar18 +
             *(float *)(this + 0x98) * fVar20) / fVar19;
    if (fVar15 <= fVar17) {
      fVar15 = fVar17;
    }
    fVar17 = fVar15;
    if ((fVar19 - fVar17) + fVar19 * -0.0001 <= 0.0) goto LAB_0124acec;
    pGVar8 = this + uVar13 * 0x38 + 0xa8;
    local_f4 = 0;
    if (uVar3 == 4) {
      fVar24 = (float)projectorigin((btVector3 *)(*(long *)pGVar8 + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar13 * 0x38 + 0xb0) + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar13 * 0x38 + 0xb8) + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar13 * 0x38 + 0xc0) + 0x10),
                                    (float *)&local_f0,&local_f4);
    }
    else if (uVar3 == 3) {
      fVar24 = (float)projectorigin((btVector3 *)(*(long *)pGVar8 + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar13 * 0x38 + 0xb0) + 0x10),
                                    (btVector3 *)(*(long *)(this + uVar13 * 0x38 + 0xb8) + 0x10),
                                    (float *)&local_f0,&local_f4);
    }
    else if (uVar3 == 2) {
      lVar5 = *(long *)pGVar8;
      lVar7 = *(long *)(this + uVar13 * 0x38 + 0xb0);
      fVar15 = *(float *)(lVar5 + 0x10);
      fVar24 = *(float *)(lVar5 + 0x14);
      fVar19 = *(float *)(lVar5 + 0x18);
      fVar25 = *(float *)(lVar7 + 0x10);
      fVar23 = *(float *)(lVar7 + 0x14);
      fVar22 = *(float *)(lVar7 + 0x18);
      fVar21 = fVar25 - fVar15;
      fVar20 = fVar23 - fVar24;
      fVar18 = fVar22 - fVar19;
      fVar26 = fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18;
      if (fVar26 <= 0.0) goto LAB_0124acec;
      fVar26 = -(fVar15 * fVar21 + fVar24 * fVar20 + fVar19 * fVar18) / fVar26;
      if (1.0 <= fVar26) {
        local_f0 = 0x3f80000000000000;
        fVar24 = fVar25 * fVar25 + fVar23 * fVar23;
        fVar19 = fVar22 * fVar22;
        local_f4 = 2;
      }
      else {
        if (fVar26 <= 0.0) {
          local_f0 = 0x3f800000;
          local_f4 = 1;
        }
        else {
          local_f4 = 3;
          local_f0 = CONCAT44(fVar26,1.0 - fVar26);
          fVar15 = fVar21 * fVar26 + fVar15;
          fVar24 = fVar20 * fVar26 + fVar24;
          fVar19 = fVar18 * fVar26 + fVar19;
        }
        fVar24 = fVar15 * fVar15 + fVar24 * fVar24;
        fVar19 = fVar19 * fVar19;
      }
      fVar24 = fVar24 + fVar19;
    }
    if (fVar24 < 0.0) goto LAB_0124acec;
    uVar2 = 1 - uVar2;
    uVar6 = (ulong)uVar2;
    pGVar8 = this + uVar6 * 0x38 + 0xd8;
    *(uint *)pGVar8 = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(uint *)(this + 0x1bc) = uVar2;
    uVar2 = *(uint *)pGVar14;
    if (uVar2 == 0) {
      uVar16 = 0;
      fVar15 = 0.0;
    }
    else {
      uVar9 = *(undefined8 *)(this + uVar13 * 0x38 + 0xa8);
      if ((local_f4 & 1) == 0) {
        uVar3 = *(uint *)(this + 0x1b8);
        uVar16 = 0;
        fVar15 = 0.0;
        *(uint *)(this + 0x1b8) = uVar3 + 1;
        *(undefined8 *)(this + (ulong)uVar3 * 8 + 0x198) = uVar9;
      }
      else {
        lVar5 = uVar6 * 0x38 + 0xa8;
        *(undefined8 *)(this + (ulong)*(uint *)pGVar8 * 8 + lVar5) = uVar9;
        uVar3 = *(uint *)pGVar8;
        *(uint *)pGVar8 = uVar3 + 1;
        *(float *)(this + (ulong)uVar3 * 4 + lVar5 + 0x20) = (float)local_f0;
        lVar5 = *(long *)(this + uVar13 * 0x38 + 0xa8);
        uVar16 = *(undefined8 *)(lVar5 + 0x14);
        fVar15 = *(float *)(lVar5 + 0x10) * (float)local_f0 + 0.0;
        uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)local_f0 + 0.0,
                          (float)uVar16 * (float)local_f0 + 0.0);
        *(float *)(this + 0x90) = fVar15;
        *(undefined8 *)(this + 0x94) = uVar16;
      }
      if (uVar2 != 1) {
        uVar10 = 1;
        pGVar14 = this + uVar13 * 0x38 + 0xb0;
        do {
          uVar9 = *(undefined8 *)pGVar14;
          if ((local_f4 & 1 << (ulong)((uint)uVar10 & 0x1f)) == 0) {
            uVar3 = *(uint *)(this + 0x1b8);
            *(uint *)(this + 0x1b8) = uVar3 + 1;
            *(undefined8 *)(this + (ulong)uVar3 * 8 + 0x198) = uVar9;
          }
          else {
            lVar5 = uVar6 * 0x38 + 0xa8;
            *(undefined8 *)(this + (ulong)*(uint *)pGVar8 * 8 + lVar5) = uVar9;
            uVar3 = *(uint *)pGVar8;
            fVar19 = *(float *)((long)&local_f0 + uVar10 * 4);
            *(uint *)pGVar8 = uVar3 + 1;
            *(float *)(this + (ulong)uVar3 * 4 + lVar5 + 0x20) = fVar19;
            uVar9 = *(undefined8 *)(*(long *)pGVar14 + 0x14);
            fVar15 = *(float *)(*(long *)pGVar14 + 0x10) * fVar19 + fVar15;
            uVar16 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar19 +
                              (float)((ulong)uVar16 >> 0x20),(float)uVar9 * fVar19 + (float)uVar16);
            *(float *)(this + 0x90) = fVar15;
            *(undefined8 *)(this + 0x94) = uVar16;
          }
          uVar10 = uVar10 + 1;
          pGVar14 = pGVar14 + 8;
        } while (uVar2 != uVar10);
      }
    }
    if (local_f4 == 0xf) {
      *(undefined4 *)(this + 0x1c8) = 1;
    }
    uVar12 = uVar12 + 1;
    if (0x7f < uVar12) {
      *(undefined4 *)(this + 0x1c8) = 2;
      *(GJK **)(this + 0x1c0) = this + (ulong)*(uint *)(this + 0x1bc) * 0x38 + 0xa8;
      return 2;
    }
    iVar4 = *(int *)(this + 0x1c8);
  } while (iVar4 == 0);
  *(GJK **)(this + 0x1c0) = this + (ulong)*(uint *)(this + 0x1bc) * 0x38 + 0xa8;
  if (iVar4 == 1) {
    fVar15 = 0.0;
    iVar4 = 1;
  }
  else {
    if (iVar4 != 0) {
      return iVar4;
    }
    fVar24 = *(float *)(this + 0x90) * *(float *)(this + 0x90) +
             *(float *)(this + 0x94) * *(float *)(this + 0x94) +
             *(float *)(this + 0x98) * *(float *)(this + 0x98);
    fVar15 = SQRT(fVar24);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar24);
    }
    iVar4 = *(int *)(this + 0x1c8);
  }
  *(float *)(this + 0xa0) = fVar15;
  return iVar4;
}

