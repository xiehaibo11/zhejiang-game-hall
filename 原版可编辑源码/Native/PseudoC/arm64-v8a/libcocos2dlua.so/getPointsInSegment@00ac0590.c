
/* fairygui::GPath::getPointsInSegment(int, float, float, std::__ndk1::vector<cocos2d::Vec3,
   std::__ndk1::allocator<cocos2d::Vec3> >&, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >*, float) */

void __thiscall
fairygui::GPath::getPointsInSegment
          (GPath *this,int param_1,float param_2,float param_3,vector *param_4,vector *param_5,
          float param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_70;
  float local_6c;
  long local_68;
  
  uVar15 = (ulong)(uint)param_6;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_70 = param_3;
  local_6c = param_2;
  if (param_5 != (vector *)0x0) {
    pfVar5 = *(float **)(param_5 + 8);
                    /* try { // try from 00ac05e0 to 00bc05eb has its CatchHandler @ 00ac0620 */
    if (pfVar5 == *(float **)(param_5 + 0x10)) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                ((vector<float,std::__ndk1::allocator<float>> *)param_5,&local_6c);
    }
    else {
      *pfVar5 = param_2;
      *(float **)(param_5 + 8) = pfVar5 + 1;
                    /* try { // try from 00ac05ec to 00bc0633 has its CatchHandler @ 00ac056c */
    }
  }
  piVar1 = (int *)(*(long *)this + (long)param_1 * 0x10);
  fVar17 = (float)piVar1[1];
  iVar4 = piVar1[2];
  iVar7 = (int)this;
  if (*piVar1 - 1U < 2) {
                    /* catch() { ... } // from try @ 00ac05e0 with catch @ 00ac0620 */
    uVar11 = onBezierCurve(iVar7,iVar4,local_6c);
                    /* try { // try from 00ac0634 to 00bc06d3 has its CatchHandler @ 00ac0634
                       catch() { ... } // from try @ 00ac0634 with catch @ 00ac0634
                       catch() { ... } // from try @ 00ac0720 with catch @ 00ac0634
                       catch() { ... } // from try @ 00ac0a6c with catch @ 00ac0634
                       catch() { ... } // from try @ 00ac0dac with catch @ 00ac0634
                       catch() { ... } // from try @ 00ac0eb0 with catch @ 00ac0634
                       catch() { ... } // from try @ 00ac0f68 with catch @ 00ac0634 */
    local_80 = CONCAT44(param_3,uVar11);
    local_78 = (float)uVar15;
    FUN_00ac091c(param_4,&local_80);
    fVar14 = (float)uVar15;
    fVar12 = 50.0;
    fVar17 = (float)NEON_fminnm(fVar17 * param_6,0x42480000);
    iVar8 = (int)fVar17;
    if (-1 < iVar8) {
      iVar10 = 0;
      do {
        local_84 = (float)iVar10 / (float)iVar8;
        fVar12 = local_6c;
        if ((local_6c < local_84) && (fVar12 = local_70, local_84 < local_70)) {
          uVar11 = onBezierCurve(iVar7,iVar4,local_84);
          local_80 = CONCAT44(fVar12,uVar11);
          local_78 = (float)uVar15;
          FUN_00ac091c(param_4,&local_80);
          if (param_5 != (vector *)0x0) {
                    /* try { // try from 00ac06d4 to 00bc06eb has its CatchHandler @ 00ac1000 */
            pfVar5 = *(float **)(param_5 + 8);
            if (pfVar5 == *(float **)(param_5 + 0x10)) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)param_5,&local_84);
            }
            else {
              *pfVar5 = local_84;
              *(float **)(param_5 + 8) = pfVar5 + 1;
            }
          }
        }
        fVar14 = (float)uVar15;
        iVar10 = iVar10 + 1;
      } while (iVar8 + 1 != iVar10);
    }
    uVar11 = onBezierCurve(iVar7,iVar4,local_70);
  }
  else {
                    /* try { // try from 00ac06f0 to 00bc071f has its CatchHandler @ 00ac0ffc */
    if (*piVar1 == 3) {
      lVar9 = (long)iVar4 * 0xc;
      puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar9);
      puVar3 = (undefined8 *)(*(long *)(this + 0x18) + lVar9 + 0xc);
      uVar13 = *puVar2;
      uVar16 = *puVar3;
                    /* try { // try from 00ac0720 to 00bc09d7 has its CatchHandler @ 00ac0634 */
      fVar17 = 1.0 - local_6c;
      local_80 = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar17 +
                          (float)((ulong)uVar16 >> 0x20) * local_6c,
                          (float)uVar13 * fVar17 + (float)uVar16 * local_6c);
      local_78 = fVar17 * *(float *)(puVar2 + 1) + local_6c * *(float *)(puVar3 + 1);
      FUN_00ac091c(param_4,&local_80);
      puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar9);
      puVar3 = (undefined8 *)(*(long *)(this + 0x18) + lVar9 + 0xc);
      uVar13 = *puVar2;
      uVar16 = *puVar3;
      fVar17 = 1.0 - local_70;
      local_80 = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar17 +
                          (float)((ulong)uVar16 >> 0x20) * local_70,
                          (float)uVar13 * fVar17 + (float)uVar16 * local_70);
      local_78 = fVar17 * *(float *)(puVar2 + 1) + local_70 * *(float *)(puVar3 + 1);
      goto LAB_00ac08b0;
    }
    uVar11 = onCRSplineCurve(iVar7,iVar4,local_6c);
    local_80 = CONCAT44(param_3,uVar11);
    local_78 = (float)uVar15;
    FUN_00ac091c(param_4,&local_80);
    fVar14 = (float)uVar15;
    fVar12 = 50.0;
    fVar17 = (float)NEON_fminnm(fVar17 * param_6,0x42480000);
    iVar8 = (int)fVar17;
    if (-1 < iVar8) {
      iVar10 = 0;
      do {
        local_84 = (float)iVar10 / (float)iVar8;
        fVar12 = local_6c;
        if ((local_6c < local_84) && (fVar12 = local_70, local_84 < local_70)) {
          uVar11 = onCRSplineCurve(iVar7,iVar4,local_84);
          local_80 = CONCAT44(fVar12,uVar11);
          local_78 = (float)uVar15;
          FUN_00ac091c(param_4,&local_80);
          if (param_5 != (vector *)0x0) {
            pfVar5 = *(float **)(param_5 + 8);
            if (pfVar5 == *(float **)(param_5 + 0x10)) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)param_5,&local_84);
            }
            else {
              *pfVar5 = local_84;
              *(float **)(param_5 + 8) = pfVar5 + 1;
            }
          }
        }
        fVar14 = (float)uVar15;
        iVar10 = iVar10 + 1;
      } while (iVar8 + 1 != iVar10);
    }
    uVar11 = onCRSplineCurve(iVar7,iVar4,local_70);
  }
  local_80 = CONCAT44(fVar12,uVar11);
  local_78 = fVar14;
LAB_00ac08b0:
  FUN_00ac091c(param_4,&local_80);
  if (param_5 != (vector *)0x0) {
    pfVar5 = *(float **)(param_5 + 8);
    if (pfVar5 == *(float **)(param_5 + 0x10)) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                ((vector<float,std::__ndk1::allocator<float>> *)param_5,&local_70);
    }
    else {
      *pfVar5 = local_70;
      *(float **)(param_5 + 8) = pfVar5 + 1;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

