
/* ClipperLib::ClipperOffset::OffsetPoint(int, int&, ClipperLib::JoinType) */

void __thiscall
ClipperLib::ClipperOffset::OffsetPoint(ClipperOffset *this,int param_1,int *param_2,int param_4)

{
  double *pdVar1;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this_00;
  double *pdVar2;
  IntPoint *pIVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  double dVar9;
  long lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  long local_60;
  long lStack_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  iVar4 = *param_2;
  pdVar2 = (double *)(*(long *)(this + 0x58) + (long)iVar4 * 0x10);
  pdVar1 = (double *)(*(long *)(this + 0x58) + (long)param_1 * 0x10);
  dVar15 = *pdVar1;
  dVar11 = pdVar1[1];
  dVar13 = *pdVar2;
  dVar9 = pdVar2[1];
  dVar18 = dVar13 * dVar11 - dVar15 * dVar9;
  *(double *)(this + 0x78) = dVar18;
  if ((dVar18 < 5e-05) && (-5e-05 < dVar18)) goto LAB_0103b220;
  dVar17 = 1.0;
  if ((1.0 < dVar18) || (dVar17 = -1.0, dVar18 < -1.0)) {
    *(double *)(this + 0x78) = dVar17;
    dVar18 = dVar17;
  }
  dVar17 = *(double *)(this + 0x70);
  lVar8 = (long)param_1;
  if (0.0 <= dVar18 * dVar17) {
    if (param_4 == 0) {
LAB_0103b14c:
      DoSquare(this,param_1,iVar4);
    }
    else if (param_4 == 1) {
      DoRound(this,param_1,iVar4);
    }
    else if (param_4 == 2) {
      dVar18 = dVar13 * dVar15 + dVar11 * dVar9 + 1.0;
      if (dVar18 < *(double *)(this + 0x90)) goto LAB_0103b14c;
      dVar17 = dVar17 / dVar18;
      plVar6 = (long *)(*(long *)(this + 0x28) + lVar8 * 0x10);
      dVar13 = dVar17 * (dVar13 + dVar15) + (double)*plVar6;
      dVar18 = dVar17 * (dVar9 + dVar11) + (double)plVar6[1];
      dVar9 = -0.5;
      if (0.0 <= dVar13) {
        dVar9 = 0.5;
      }
      dVar11 = -0.5;
      if (0.0 <= dVar18) {
        dVar11 = 0.5;
      }
      local_60 = (long)(dVar13 + dVar9);
      lStack_58 = (long)(dVar18 + dVar11);
      plVar6 = *(long **)(this + 0x48);
      if (plVar6 < *(long **)(this + 0x50)) goto LAB_0103b1ec;
      std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
      __push_back_slow_path<ClipperLib::IntPoint>
                ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                 (this + 0x40),(IntPoint *)&local_60);
    }
  }
  else {
    plVar6 = (long *)(*(long *)(this + 0x28) + lVar8 * 0x10);
    this_00 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
              (this + 0x40);
    dVar11 = dVar17 * dVar13 + (double)*plVar6;
    dVar18 = dVar17 * dVar9 + (double)plVar6[1];
    dVar9 = -0.5;
    if (0.0 <= dVar11) {
      dVar9 = 0.5;
    }
    dVar13 = -0.5;
    if (0.0 <= dVar18) {
      dVar13 = 0.5;
    }
    local_60 = (long)(dVar11 + dVar9);
    lStack_58 = (long)(dVar18 + dVar13);
    plVar6 = *(long **)(this + 0x48);
    if (plVar6 < *(long **)(this + 0x50)) {
      plVar7 = plVar6 + 2;
      plVar6[1] = lStack_58;
      *plVar6 = local_60;
      *(long **)(this + 0x48) = plVar7;
    }
    else {
      std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
      __push_back_slow_path<ClipperLib::IntPoint>(this_00,(IntPoint *)&local_60);
      plVar7 = *(long **)(this + 0x48);
    }
    pIVar3 = (IntPoint *)(*(long *)(this + 0x28) + lVar8 * 0x10);
    if (plVar7 == *(long **)(this + 0x50)) {
      std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
      __push_back_slow_path<ClipperLib::IntPoint_const&>(this_00,pIVar3);
      plVar6 = *(long **)(this + 0x48);
    }
    else {
      lVar10 = *(long *)pIVar3;
      plVar6 = plVar7 + 2;
      plVar7[1] = *(long *)(pIVar3 + 8);
      *plVar7 = lVar10;
      *(long **)(this + 0x48) = plVar6;
    }
    pdVar1 = (double *)(*(long *)(this + 0x58) + lVar8 * 0x10);
    auVar16 = NEON_fmov(0x3fe0000000000000,8);
    auVar12 = NEON_scvtf(*(undefined1 (*) [16])(*(long *)(this + 0x28) + lVar8 * 0x10),8);
    dVar18 = *pdVar1 * *(double *)(this + 0x70) + auVar12._0_8_;
    dVar9 = pdVar1[1] * *(double *)(this + 0x70) + auVar12._8_8_;
    auVar12._0_8_ = -(ulong)(dVar18 < 0.0);
    auVar12._8_8_ = -(ulong)(dVar9 < 0.0);
    auVar14 = NEON_fmov(0xbfe0000000000000,8);
    auVar16 = auVar16 ^ (auVar16 ^ auVar14) & auVar12;
    local_60 = (long)(dVar18 + auVar16._0_8_);
    lStack_58 = (long)(dVar9 + auVar16._8_8_);
    if (plVar6 < *(long **)(this + 0x50)) {
LAB_0103b1ec:
      plVar6[1] = lStack_58;
      *plVar6 = local_60;
      *(long **)(this + 0x48) = plVar6 + 2;
    }
    else {
      std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
      __push_back_slow_path<ClipperLib::IntPoint>(this_00,(IntPoint *)&local_60);
    }
  }
  *param_2 = param_1;
LAB_0103b220:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

