
/* gjkepa2_impl::EPA::Evaluate(gjkepa2_impl::GJK&, btVector3 const&) */

undefined4 __thiscall gjkepa2_impl::EPA::Evaluate(EPA *this,GJK *param_1,btVector3 *param_2)

{
  sSV *psVar1;
  sSV *psVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  sSV *psVar9;
  sSV *psVar10;
  undefined4 uVar11;
  long lVar12;
  btVector3 *pbVar13;
  int iVar14;
  int iVar15;
  btVector3 *pbVar16;
  btVector3 *pbVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long local_98;
  long lStack_90;
  uint local_88;
  
  plVar19 = *(long **)(param_1 + 0x1c0);
  if ((1 < *(uint *)(plVar19 + 6)) && (uVar5 = GJK::EncloseOrigin(param_1), (uVar5 & 1) != 0)) {
    lVar12 = *(long *)(this + 0x3860);
    if (lVar12 != 0) {
      iVar14 = *(int *)(this + 0x3868);
      iVar15 = *(int *)(this + 0x3878);
      do {
        if (*(long *)(lVar12 + 0x50) != 0) {
          *(undefined8 *)(*(long *)(lVar12 + 0x50) + 0x48) = *(undefined8 *)(lVar12 + 0x48);
        }
        if (*(long *)(lVar12 + 0x48) != 0) {
          *(undefined8 *)(*(long *)(lVar12 + 0x48) + 0x50) = *(undefined8 *)(lVar12 + 0x50);
        }
        if (*(long *)(this + 0x3860) == lVar12) {
          *(undefined8 *)(this + 0x3860) = *(undefined8 *)(lVar12 + 0x50);
        }
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(this + 0x3870);
        if (*(long *)(this + 0x3870) != 0) {
          *(long *)(*(long *)(this + 0x3870) + 0x48) = lVar12;
        }
        *(long *)(this + 0x3870) = lVar12;
        lVar12 = *(long *)(this + 0x3860);
        iVar14 = iVar14 + -1;
        iVar15 = iVar15 + 1;
      } while (lVar12 != 0);
      *(int *)(this + 0x3868) = iVar14;
      *(int *)(this + 0x3878) = iVar15;
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x3858) = 0;
    psVar1 = (sSV *)plVar19[2];
    lVar12 = plVar19[3];
    psVar2 = (sSV *)*plVar19;
    psVar10 = (sSV *)plVar19[1];
    fVar23 = *(float *)(lVar12 + 0x10);
    fVar26 = *(float *)(lVar12 + 0x14);
    fVar27 = *(float *)(lVar12 + 0x18);
    psVar9 = psVar2;
    if (((*(float *)(psVar2 + 0x10) - fVar23) * (*(float *)(psVar10 + 0x14) - fVar26) *
         (*(float *)(psVar1 + 0x18) - fVar27) +
        ((((*(float *)(psVar2 + 0x14) - fVar26) * (*(float *)(psVar10 + 0x18) - fVar27) *
           (*(float *)(psVar1 + 0x10) - fVar23) +
          (*(float *)(psVar2 + 0x18) - fVar27) * (*(float *)(psVar10 + 0x10) - fVar23) *
          (*(float *)(psVar1 + 0x14) - fVar26)) -
         (*(float *)(psVar2 + 0x10) - fVar23) * (*(float *)(psVar10 + 0x18) - fVar27) *
         (*(float *)(psVar1 + 0x14) - fVar26)) -
        (*(float *)(psVar2 + 0x14) - fVar26) * (*(float *)(psVar10 + 0x10) - fVar23) *
        (*(float *)(psVar1 + 0x18) - fVar27))) -
        (*(float *)(psVar2 + 0x18) - fVar27) * (*(float *)(psVar10 + 0x14) - fVar26) *
        (*(float *)(psVar1 + 0x10) - fVar23) < 0.0) {
      lVar12 = plVar19[4];
      *plVar19 = (long)psVar10;
      plVar19[1] = (long)psVar2;
      *(undefined4 *)(plVar19 + 4) = *(undefined4 *)((long)plVar19 + 0x24);
      *(int *)((long)plVar19 + 0x24) = (int)lVar12;
      psVar9 = psVar10;
      psVar10 = psVar2;
    }
    lVar12 = newface(this,psVar9,psVar10,psVar1,true);
    lVar6 = newface(this,(sSV *)plVar19[1],(sSV *)*plVar19,(sSV *)plVar19[3],true);
    lVar7 = newface(this,(sSV *)plVar19[2],(sSV *)plVar19[1],(sSV *)plVar19[3],true);
    lVar8 = newface(this,(sSV *)*plVar19,(sSV *)plVar19[2],(sSV *)plVar19[3],true);
    if (*(int *)(this + 0x3868) == 4) {
      pbVar16 = *(btVector3 **)(this + 0x3860);
      pbVar13 = *(btVector3 **)(pbVar16 + 0x50);
      fVar23 = *(float *)(pbVar16 + 0x10);
      if (pbVar13 != (btVector3 *)0x0) {
        fVar23 = fVar23 * fVar23;
        pbVar17 = pbVar16;
        do {
          fVar26 = *(float *)(pbVar13 + 0x10) * *(float *)(pbVar13 + 0x10);
          pbVar16 = pbVar13;
          if (fVar23 <= fVar26) {
            pbVar16 = pbVar17;
          }
          pbVar13 = *(btVector3 **)(pbVar13 + 0x50);
          if (fVar23 <= fVar26) {
            fVar26 = fVar23;
          }
          fVar23 = fVar26;
          pbVar17 = pbVar16;
        } while (pbVar13 != (btVector3 *)0x0);
        fVar23 = *(float *)(pbVar16 + 0x10);
      }
      uVar25 = *(undefined8 *)(pbVar16 + 8);
      uVar24 = *(undefined8 *)pbVar16;
      lVar20 = *(long *)(pbVar16 + 0x18);
      lVar21 = *(long *)(pbVar16 + 0x20);
      lVar22 = *(long *)(pbVar16 + 0x28);
      uVar18 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 0;
      *(long *)(lVar12 + 0x30) = lVar6;
      *(undefined1 *)(lVar6 + 0x58) = 0;
      *(long *)(lVar6 + 0x30) = lVar12;
      *(undefined1 *)(lVar12 + 0x59) = 0;
      *(long *)(lVar12 + 0x38) = lVar7;
      *(long *)(lVar7 + 0x30) = lVar12;
      *(undefined1 *)(lVar7 + 0x58) = 1;
      *(undefined1 *)(lVar12 + 0x5a) = 0;
      *(long *)(lVar12 + 0x40) = lVar8;
      *(long *)(lVar8 + 0x30) = lVar12;
      *(undefined1 *)(lVar8 + 0x58) = 2;
      *(undefined1 *)(lVar6 + 0x59) = 2;
      *(long *)(lVar6 + 0x38) = lVar8;
      *(undefined1 *)(lVar8 + 0x5a) = 1;
      *(long *)(lVar8 + 0x40) = lVar6;
      *(undefined1 *)(lVar6 + 0x5a) = 1;
      *(long *)(lVar6 + 0x40) = lVar7;
      *(undefined1 *)(lVar7 + 0x59) = 2;
      *(undefined1 *)(lVar7 + 0x5a) = 1;
      *(long *)(lVar7 + 0x38) = lVar6;
      *(long *)(lVar7 + 0x40) = lVar8;
      *(undefined1 *)(lVar8 + 0x59) = 2;
      *(long *)(lVar8 + 0x38) = lVar7;
      *(undefined4 *)this = 0;
      do {
        uVar3 = *(uint *)(this + 0x3858);
        if (0x3f < uVar3) {
          *(undefined4 *)this = 6;
          break;
        }
        uVar18 = uVar18 + 1;
        local_88 = 0;
        local_98 = 0;
        lStack_90 = 0;
        *(uint *)(this + 0x3858) = uVar3 + 1;
        pbVar16[0x5b] = SUB41(uVar18,0);
        GJK::getsupport(param_1,pbVar16,(sSV *)(this + (ulong)uVar3 * 0x20 + 0x54));
        if ((*(float *)pbVar16 * *(float *)(this + (ulong)uVar3 * 0x20 + 100) +
             (float)*(undefined8 *)(pbVar16 + 4) *
             (float)*(undefined8 *)(this + (ulong)uVar3 * 0x20 + 0x68) +
            (float)((ulong)*(undefined8 *)(pbVar16 + 4) >> 0x20) *
            (float)((ulong)*(undefined8 *)(this + (ulong)uVar3 * 0x20 + 0x68) >> 0x20)) -
            *(float *)(pbVar16 + 0x10) <= 0.0001) {
          uVar11 = 7;
LAB_0124b8bc:
          *(undefined4 *)this = uVar11;
          break;
        }
        uVar5 = 0;
        do {
          bVar4 = expand(this,uVar18,(sSV *)(this + (ulong)uVar3 * 0x20 + 0x54),
                         *(sFace **)(pbVar16 + uVar5 * 8 + 0x30),(uint)(byte)pbVar16[uVar5 + 0x58],
                         (sHorizon *)&local_98);
          uVar5 = uVar5 + 1;
          if (2 < uVar5) break;
        } while ((bVar4 & 1) != 0);
        if ((bVar4 & 2 < local_88) == 0) {
          uVar11 = 4;
          goto LAB_0124b8bc;
        }
        *(undefined1 *)(local_98 + 0x59) = 2;
        *(long *)(local_98 + 0x38) = lStack_90;
        *(undefined1 *)(lStack_90 + 0x5a) = 1;
        *(long *)(lStack_90 + 0x40) = local_98;
        if (*(long *)(pbVar16 + 0x50) != 0) {
          *(undefined8 *)(*(long *)(pbVar16 + 0x50) + 0x48) = *(undefined8 *)(pbVar16 + 0x48);
        }
        if (*(long *)(pbVar16 + 0x48) != 0) {
          *(undefined8 *)(*(long *)(pbVar16 + 0x48) + 0x50) = *(undefined8 *)(pbVar16 + 0x50);
        }
        if (*(btVector3 **)(this + 0x3860) == pbVar16) {
          *(undefined8 *)(this + 0x3860) = *(undefined8 *)(pbVar16 + 0x50);
        }
        *(int *)(this + 0x3868) = *(int *)(this + 0x3868) + -1;
        *(undefined8 *)(pbVar16 + 0x48) = 0;
        *(undefined8 *)(pbVar16 + 0x50) = *(undefined8 *)(this + 0x3870);
        if (*(long *)(this + 0x3870) != 0) {
          *(btVector3 **)(*(long *)(this + 0x3870) + 0x48) = pbVar16;
        }
        *(btVector3 **)(this + 0x3870) = pbVar16;
        pbVar16 = *(btVector3 **)(this + 0x3860);
        *(int *)(this + 0x3878) = *(int *)(this + 0x3878) + 1;
        pbVar13 = *(btVector3 **)(pbVar16 + 0x50);
        fVar23 = *(float *)(pbVar16 + 0x10);
        if (pbVar13 != (btVector3 *)0x0) {
          fVar23 = fVar23 * fVar23;
          pbVar17 = pbVar16;
          do {
            fVar26 = *(float *)(pbVar13 + 0x10) * *(float *)(pbVar13 + 0x10);
            pbVar16 = pbVar13;
            if (fVar23 <= fVar26) {
              pbVar16 = pbVar17;
            }
            pbVar13 = *(btVector3 **)(pbVar13 + 0x50);
            if (fVar23 <= fVar26) {
              fVar26 = fVar23;
            }
            fVar23 = fVar26;
            pbVar17 = pbVar16;
          } while (pbVar13 != (btVector3 *)0x0);
          fVar23 = *(float *)(pbVar16 + 0x10);
        }
        uVar25 = *(undefined8 *)(pbVar16 + 8);
        uVar24 = *(undefined8 *)pbVar16;
        lVar20 = *(long *)(pbVar16 + 0x18);
        lVar21 = *(long *)(pbVar16 + 0x20);
        lVar22 = *(long *)(pbVar16 + 0x28);
      } while (uVar18 < 0xff);
      *(undefined8 *)(this + 0x48) = uVar25;
      *(undefined8 *)(this + 0x40) = uVar24;
      *(float *)(this + 0x50) = fVar23;
      *(long *)(this + 8) = lVar20;
      *(long *)(this + 0x10) = lVar21;
      *(long *)(this + 0x18) = lVar22;
      *(undefined4 *)(this + 0x38) = 3;
      fVar34 = fVar23 * (float)uVar24;
      fVar33 = fVar23 * (float)((ulong)uVar24 >> 0x20);
      fVar23 = fVar23 * (float)uVar25;
      fVar26 = *(float *)(lVar21 + 0x10) - fVar34;
      fVar27 = *(float *)(lVar21 + 0x14) - fVar33;
      fVar28 = *(float *)(lVar21 + 0x18) - fVar23;
      fVar29 = *(float *)(lVar22 + 0x10) - fVar34;
      fVar31 = *(float *)(lVar22 + 0x14) - fVar33;
      fVar32 = *(float *)(lVar22 + 0x18) - fVar23;
      fVar30 = fVar27 * fVar32 - fVar28 * fVar31;
      fVar28 = fVar28 * fVar29 - fVar26 * fVar32;
      fVar26 = fVar26 * fVar31 - fVar27 * fVar29;
      fVar27 = fVar26 * fVar26 + fVar30 * fVar30 + fVar28 * fVar28;
      fVar26 = SQRT(fVar27);
      if (NAN(fVar26)) {
        fVar26 = sqrtf(fVar27);
      }
      *(float *)(this + 0x28) = fVar26;
      fVar26 = *(float *)(lVar22 + 0x10) - fVar34;
      fVar27 = *(float *)(lVar22 + 0x14) - fVar33;
      fVar28 = *(float *)(lVar22 + 0x18) - fVar23;
      fVar29 = *(float *)(lVar20 + 0x10) - fVar34;
      fVar31 = *(float *)(lVar20 + 0x14) - fVar33;
      fVar32 = *(float *)(lVar20 + 0x18) - fVar23;
      fVar30 = fVar27 * fVar32 - fVar28 * fVar31;
      fVar28 = fVar28 * fVar29 - fVar26 * fVar32;
      fVar26 = fVar26 * fVar31 - fVar27 * fVar29;
      fVar27 = fVar26 * fVar26 + fVar30 * fVar30 + fVar28 * fVar28;
      fVar26 = SQRT(fVar27);
      if (NAN(fVar26)) {
        fVar26 = sqrtf(fVar27);
      }
      *(float *)(this + 0x2c) = fVar26;
      fVar26 = *(float *)(lVar20 + 0x10) - fVar34;
      fVar34 = *(float *)(lVar21 + 0x10) - fVar34;
      fVar27 = *(float *)(lVar20 + 0x14) - fVar33;
      fVar29 = *(float *)(lVar20 + 0x18) - fVar23;
      fVar33 = *(float *)(lVar21 + 0x14) - fVar33;
      fVar23 = *(float *)(lVar21 + 0x18) - fVar23;
      fVar28 = fVar27 * fVar23 - fVar29 * fVar33;
      fVar29 = fVar29 * fVar34 - fVar26 * fVar23;
      fVar23 = fVar26 * fVar33 - fVar27 * fVar34;
      fVar26 = fVar23 * fVar23 + fVar28 * fVar28 + fVar29 * fVar29;
      fVar23 = SQRT(fVar26);
      if (NAN(fVar23)) {
        fVar23 = sqrtf(fVar26);
      }
      fVar26 = fVar23 + *(float *)(this + 0x28) + *(float *)(this + 0x2c);
      *(float *)(this + 0x28) = *(float *)(this + 0x28) / fVar26;
      *(float *)(this + 0x2c) = *(float *)(this + 0x2c) / fVar26;
      *(float *)(this + 0x30) = fVar23 / fVar26;
      goto LAB_0124b878;
    }
  }
  *(undefined4 *)this = 8;
  fVar23 = *(float *)param_2;
  fVar27 = *(float *)(param_2 + 4);
  fVar34 = *(float *)(param_2 + 8);
  *(undefined4 *)(this + 0x4c) = 0;
  fVar28 = fVar23 * fVar23 + fVar27 * fVar27 + fVar34 * fVar34;
  fVar26 = SQRT(fVar28);
  *(float *)(this + 0x40) = -fVar23;
  *(float *)(this + 0x44) = -fVar27;
  *(float *)(this + 0x48) = -fVar34;
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar28);
    if (0.0 < fVar26) goto LAB_0124b818;
LAB_0124b850:
    *(undefined8 *)(this + 0x40) = 0x3f800000;
    *(undefined4 *)(this + 0x48) = 0;
  }
  else {
    if (fVar26 <= 0.0) goto LAB_0124b850;
LAB_0124b818:
    fVar26 = 1.0 / fVar26;
    *(float *)(this + 0x40) = fVar26 * *(float *)(this + 0x40);
    *(float *)(this + 0x44) = fVar26 * *(float *)(this + 0x44);
    *(float *)(this + 0x48) = fVar26 * *(float *)(this + 0x48);
  }
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  lVar12 = *plVar19;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(long *)(this + 8) = lVar12;
LAB_0124b878:
  return *(undefined4 *)this;
}

