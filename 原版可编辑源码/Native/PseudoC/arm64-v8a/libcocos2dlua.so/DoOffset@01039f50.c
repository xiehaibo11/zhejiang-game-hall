
/* ClipperLib::ClipperOffset::DoOffset(double) */

void __thiscall ClipperLib::ClipperOffset::DoOffset(ClipperOffset *this,double param_1)

{
  vector<ClipperLib::DoublePoint,std::__ndk1::allocator<ClipperLib::DoublePoint>> *this_00;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar1;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this_01;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *pvVar5;
  vector *pvVar6;
  int iVar7;
  undefined8 *puVar8;
  double *pdVar9;
  double *pdVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
  *this_02;
  uint uVar19;
  ulong uVar20;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double local_d8;
  double dStack_d0;
  uint local_c4;
  double local_c0;
  double dStack_b8;
  long local_b0;
  
                    /* catch() { ... } // from try @ 01039da4 with catch @ 01039f58 */
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  this_02 = (vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
             *)(this + 0x10);
  puVar12 = *(undefined8 **)this_02;
  puVar8 = *(undefined8 **)(this + 0x18);
  if (puVar8 != puVar12) {
    pvVar5 = (void *)puVar8[-3];
    puVar3 = puVar8 + -3;
    while( true ) {
      if (pvVar5 != (void *)0x0) {
        puVar8[-2] = pvVar5;
        operator_delete(pvVar5);
      }
      if (puVar12 == puVar3) break;
      pvVar5 = (void *)puVar3[-3];
      puVar8 = puVar3;
      puVar3 = puVar3 + -3;
    }
  }
  *(undefined8 **)(this + 0x18) = puVar12;
                    /* catch() { ... } // from try @ 01039d9c with catch @ 01039fe4 */
  *(double *)(this + 0x70) = param_1;
                    /* catch() { ... } // from try @ 01039d90 with catch @ 01039fec */
                    /* catch() { ... } // from try @ 01039d84 with catch @ 01039ff4 */
                    /* catch() { ... } // from try @ 01039d78 with catch @ 01039ffc */
  if ((param_1 <= -1e-20) || (1e-20 <= param_1)) {
    dVar29 = *(double *)this;
    if (dVar29 <= 2.0) {
      dVar29 = 0.5;
    }
    else {
      dVar29 = 2.0 / (dVar29 * dVar29);
    }
    dVar24 = *(double *)(this + 8);
    dVar33 = ABS(param_1);
    *(double *)(this + 0x90) = dVar29;
    dVar29 = 0.25;
    if ((0.0 < dVar24) && (dVar29 = dVar33 * 0.25, dVar24 <= dVar33 * 0.25)) {
      dVar29 = dVar24;
    }
    dVar24 = acos(1.0 - dVar29 / dVar33);
    dVar29 = dVar33 * 3.141592653589793;
    if (3.141592653589793 / dVar24 <= dVar33 * 3.141592653589793) {
      dVar29 = 3.141592653589793 / dVar24;
    }
    sincos(6.283185307179586 / dVar29,&dStack_d0,&local_d8);
    *(double *)(this + 0x98) = dVar29 / 6.283185307179586;
    *(double *)(this + 0x80) = dStack_d0;
    *(double *)(this + 0x88) = local_d8;
    if (param_1 < 0.0) {
      *(double *)(this + 0x80) = -dStack_d0;
    }
    std::__ndk1::
    vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
    ::reserve(this_02,(*(long *)(this + 0xd0) - *(long *)(this + 200)) * 0x40000000 >> 0x20 &
                      0xfffffffffffffffe);
    lVar17 = *(long *)(this + 200);
    if (0 < (int)((ulong)(*(long *)(this + 0xd0) - lVar17) >> 3)) {
      lVar13 = 0;
      pvVar1 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
               (this + 0x28);
      pvVar6 = (vector *)(this + 0x40);
      this_00 = (vector<ClipperLib::DoublePoint,std::__ndk1::allocator<ClipperLib::DoublePoint>> *)
                (this + 0x58);
      do {
        pvVar21 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                   (lVar17 + lVar13 * 8);
        if (pvVar1 != pvVar21) {
          std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
          assign<ClipperLib::IntPoint*>(pvVar1,*(IntPoint **)pvVar21,*(IntPoint **)(pvVar21 + 8));
        }
        plVar11 = *(long **)(this + 0x28);
        uVar20 = *(long *)(this + 0x30) - (long)plVar11;
        uVar16 = uVar20 >> 4;
        uVar15 = (uint)uVar16;
        if (uVar15 != 0) {
          if (param_1 <= 0.0) {
            if ((2 < (int)uVar15) && (*(int *)(pvVar21 + 0x44) == 0)) {
              *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
              goto LAB_0103a2d0;
            }
          }
          else {
            pdVar9 = *(double **)(this + 0x40);
            *(double **)(this + 0x48) = pdVar9;
            if (uVar15 == 1) {
              if (*(int *)(pvVar21 + 0x40) != 1) {
                iVar7 = 3;
                dVar33 = -1.0;
                dVar24 = -1.0;
                do {
                  dVar22 = dVar24 * param_1 + (double)*plVar11;
                  dVar25 = dVar33 * param_1 + (double)plVar11[1];
                  dVar30 = -0.5;
                  if (0.0 <= dVar22) {
                    dVar30 = 0.5;
                  }
                  local_c0 = (double)(long)(dVar22 + dVar30);
                  dVar22 = -0.5;
                  if (0.0 <= dVar25) {
                    dVar22 = 0.5;
                  }
                    /* try { // try from 0103a4e0 to 0113a4eb has its CatchHandler @ 0103a660 */
                  dStack_b8 = (double)(long)(dVar25 + dVar22);
                    /* try { // try from 0103a4ec to 0113a697 has its CatchHandler @ 0103a3f4 */
                  if (pdVar9 < *(double **)(this + 0x50)) {
                    pdVar9[1] = dStack_b8;
                    *pdVar9 = local_c0;
                    *(double **)(this + 0x48) = pdVar9 + 2;
                    if (dVar24 < 0.0) goto LAB_0103a534;
LAB_0103a50c:
                    if (0.0 <= dVar33) {
                      dVar24 = -1.0;
                    }
                    dVar22 = 1.0;
                    if (0.0 <= dVar33) {
                      dVar22 = dVar33;
                    }
                  }
                  else {
                    std::__ndk1::
                    vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                    __push_back_slow_path<ClipperLib::IntPoint>
                              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                                *)pvVar6,(IntPoint *)&local_c0);
                    if (0.0 <= dVar24) goto LAB_0103a50c;
LAB_0103a534:
                    dVar24 = 1.0;
                    dVar22 = dVar33;
                  }
                  dVar33 = dVar22;
                  if (iVar7 == 0) goto LAB_0103a54c;
                  plVar11 = *(long **)(this + 0x28);
                  pdVar9 = *(double **)(this + 0x48);
                  iVar7 = iVar7 + -1;
                } while( true );
              }
              if (1.0 <= dVar29) {
                dVar24 = 0.0;
                lVar17 = 2;
                dVar33 = 1.0;
                while( true ) {
                  dVar22 = dVar33 * param_1 + (double)*plVar11;
                  dVar25 = dVar24 * param_1 + (double)plVar11[1];
                  dVar30 = -0.5;
                  if (0.0 <= dVar22) {
                    dVar30 = 0.5;
                  }
                  local_c0 = (double)(long)(dVar22 + dVar30);
                  dVar22 = -0.5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0103a2b0 with catch @ 0103a244
                        */
                  if (0.0 <= dVar25) {
                    dVar22 = 0.5;
                  }
                  dStack_b8 = (double)(long)(dVar25 + dVar22);
                  if (pdVar9 < *(double **)(this + 0x50)) {
                    pdVar9[1] = dStack_b8;
                    *pdVar9 = local_c0;
                    /* try { // try from 0103a26c to 0113a2af has its CatchHandler @ 0103a35c */
                    *(double **)(this + 0x48) = pdVar9 + 2;
                  }
                  else {
                    std::__ndk1::
                    vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                    __push_back_slow_path<ClipperLib::IntPoint>
                              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                                *)pvVar6,(IntPoint *)&local_c0);
                  }
                  if (dVar29 < (double)lVar17) break;
                  plVar11 = *(long **)(this + 0x28);
                  pdVar9 = *(double **)(this + 0x48);
                  lVar17 = lVar17 + 1;
                  dVar22 = dVar24 * *(double *)(this + 0x80);
                  dVar24 = dVar24 * *(double *)(this + 0x88) + dVar33 * *(double *)(this + 0x80);
                    /* try { // try from 0103a2b0 to 0113a3cf has its CatchHandler @ 0103a244 */
                  dVar33 = dVar33 * *(double *)(this + 0x88) - dVar22;
                }
              }
LAB_0103a54c:
              pvVar21 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                          **)(this + 0x18);
              if (pvVar21 ==
                  *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                   (this + 0x20)) goto LAB_0103a188;
              std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
              ::vector(pvVar21,pvVar6);
            }
            else {
LAB_0103a2d0:
              *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x58);
              std::__ndk1::
              vector<ClipperLib::DoublePoint,std::__ndk1::allocator<ClipperLib::DoublePoint>>::
              reserve(this_00,(long)(uVar20 * 0x10000000) >> 0x20);
              uVar18 = uVar15 - 1;
              if (0 < (int)uVar18) {
                lVar14 = 0;
                lVar17 = -(ulong)uVar18;
                do {
                  plVar11 = (long *)(*(long *)pvVar1 + lVar14);
                  if (plVar11[2] - *plVar11 == 0) {
                    dStack_b8 = 0.0;
                    local_c0 = 0.0;
                    if (plVar11[3] != plVar11[1]) goto LAB_0103a33c;
                  }
                  else {
LAB_0103a33c:
                    dVar24 = (double)(plVar11[2] - *plVar11);
                    local_c0 = (double)(plVar11[3] - plVar11[1]);
                    dVar33 = 1.0 / SQRT(dVar24 * dVar24 + local_c0 * local_c0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0103a26c with catch @ 0103a35c
                        */
                    local_c0 = dVar33 * local_c0;
                    dStack_b8 = -(dVar33 * dVar24);
                  }
                  pdVar9 = *(double **)(this + 0x60);
                  if (pdVar9 < *(double **)(this + 0x68)) {
                    pdVar9[1] = dStack_b8;
                    *pdVar9 = local_c0;
                    *(double **)(this + 0x60) = pdVar9 + 2;
                  }
                  else {
                    std::__ndk1::
                    vector<ClipperLib::DoublePoint,std::__ndk1::allocator<ClipperLib::DoublePoint>>
                    ::__push_back_slow_path<ClipperLib::DoublePoint>
                              (this_00,(DoublePoint *)&local_c0);
                  }
                  bVar4 = lVar17 != -1;
                  lVar17 = lVar17 + 1;
                  lVar14 = lVar14 + 0x10;
                } while (bVar4);
              }
              if (*(uint *)(pvVar21 + 0x44) < 2) {
                plVar11 = *(long **)pvVar1;
                lVar17 = (plVar11 + (long)(int)uVar18 * 2)[1];
                lVar14 = *plVar11 - plVar11[(long)(int)uVar18 * 2];
                if (lVar14 == 0) {
                  dStack_b8 = 0.0;
                  local_c0 = 0.0;
                  if (plVar11[1] == lVar17) goto LAB_0103a408;
                }
                dVar24 = (double)lVar14;
                local_c0 = (double)(plVar11[1] - lVar17);
                dVar33 = 1.0 / SQRT(dVar24 * dVar24 + local_c0 * local_c0);
                local_c0 = dVar33 * local_c0;
                dStack_b8 = -(dVar33 * dVar24);
              }
              else {
                    /* try { // try from 0103a3f4 to 0113a453 has its CatchHandler @ 0103a3f4
                       catch() { ... } // from try @ 0103a3f4 with catch @ 0103a3f4
                       catch() { ... } // from try @ 0103a45c with catch @ 0103a3f4
                       catch() { ... } // from try @ 0103a4ec with catch @ 0103a3f4 */
                pdVar9 = (double *)
                         (*(long *)(this + 0x58) +
                         ((long)(uVar20 * 0x10000000 + -0x200000000) >> 0x1c));
                local_c0 = *pdVar9;
                dStack_b8 = pdVar9[1];
              }
LAB_0103a408:
              pdVar9 = *(double **)(this + 0x60);
              if (pdVar9 < *(double **)(this + 0x68)) {
                pdVar9[1] = dStack_b8;
                *pdVar9 = local_c0;
                *(double **)(this + 0x60) = pdVar9 + 2;
              }
              else {
                std::__ndk1::
                vector<ClipperLib::DoublePoint,std::__ndk1::allocator<ClipperLib::DoublePoint>>::
                __push_back_slow_path<ClipperLib::DoublePoint>(this_00,(DoublePoint *)&local_c0);
              }
              iVar7 = *(int *)(pvVar21 + 0x44);
              if (iVar7 == 1) {
                local_c0 = (double)CONCAT44(local_c0._4_4_,uVar18);
                if (0 < (int)uVar15) {
                  uVar19 = 0;
                  do {
                    OffsetPoint(this,uVar19,&local_c0,*(undefined4 *)(pvVar21 + 0x40));
                    uVar19 = uVar19 + 1;
                  } while (uVar15 != uVar19);
                }
                this_01 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                            **)(this + 0x18);
                if (this_01 ==
                    *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                     (this + 0x20)) {
                  std::__ndk1::
                  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                            (this_02,pvVar6);
                }
                else {
                  std::__ndk1::
                  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::vector
                            (this_01,pvVar6);
                  *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                   (this + 0x18) = this_01 + 0x18;
                }
                pdVar9 = *(double **)(this + 0x58);
                *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
                dVar24 = pdVar9[(long)(int)uVar18 * 2];
                dVar33 = (pdVar9 + (long)(int)uVar18 * 2)[1];
                if (0 < (int)uVar18) {
                  lVar17 = (long)(int)uVar18;
                  do {
                    pdVar9 = pdVar9 + lVar17 * 2;
                    lVar17 = lVar17 + -1;
                    pdVar9[1] = -pdVar9[-1];
                    *pdVar9 = -pdVar9[-2];
                    pdVar9 = *(double **)this_00;
                  } while (0 < lVar17);
                }
                pdVar9[1] = -dVar33;
                *pdVar9 = -dVar24;
                local_c0 = (double)((ulong)local_c0 & 0xffffffff00000000);
                while (0 < (int)uVar15) {
                  uVar15 = (int)uVar16 - 1;
                  uVar16 = (ulong)uVar15;
                  OffsetPoint(this,uVar16,&local_c0,*(undefined4 *)(pvVar21 + 0x40));
                }
                pvVar21 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                            **)(this + 0x18);
                if (pvVar21 ==
                    *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                     (this + 0x20)) goto LAB_0103a188;
                std::__ndk1::
                vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::vector
                          (pvVar21,pvVar6);
              }
              else if (iVar7 == 0) {
                local_c0 = (double)CONCAT44(local_c0._4_4_,uVar18);
                if (0 < (int)uVar15) {
                    /* try { // try from 0103a454 to 0113a45b has its CatchHandler @ 0103a67c */
                  uVar18 = 0;
                  do {
                    /* try { // try from 0103a45c to 0113a4df has its CatchHandler @ 0103a3f4 */
                    OffsetPoint(this,uVar18,&local_c0,*(undefined4 *)(pvVar21 + 0x40));
                    uVar18 = uVar18 + 1;
                  } while (uVar15 != uVar18);
                }
                pvVar21 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                            **)(this + 0x18);
                if (pvVar21 ==
                    *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                     (this + 0x20)) {
LAB_0103a188:
                  std::__ndk1::
                  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                            (this_02,pvVar6);
                  goto LAB_0103a194;
                }
                std::__ndk1::
                vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::vector
                          (pvVar21,pvVar6);
              }
              else {
                local_c4 = 0;
                if (1 < (int)uVar18) {
                  uVar19 = 2;
                  do {
                    OffsetPoint(this,uVar19 - 1,&local_c4,*(undefined4 *)(pvVar21 + 0x40));
                    uVar19 = uVar19 + 1;
                  } while (uVar15 != uVar19);
                  iVar7 = *(int *)(pvVar21 + 0x44);
                }
                auVar31 = NEON_fmov(0x3fe0000000000000,8);
                auVar32 = NEON_fmov(0xbfe0000000000000,8);
                local_c0 = 0.0;
                dStack_b8 = 0.0;
                if (iVar7 == 2) {
                  uVar16 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar18 << 4;
                  pdVar9 = (double *)(*(long *)(this + 0x58) + uVar16);
                  auVar23 = NEON_scvtf(*(undefined1 (*) [16])(*(long *)(this + 0x28) + uVar16),8);
                  dVar24 = *pdVar9 * param_1 + auVar23._0_8_;
                  dVar33 = pdVar9[1] * param_1 + auVar23._8_8_;
                  auVar23._0_8_ = -(ulong)(dVar24 < 0.0);
                  auVar23._8_8_ = -(ulong)(dVar33 < 0.0);
                  auVar23 = auVar31 ^ (auVar31 ^ auVar32) & auVar23;
                  local_c0 = (double)(long)(dVar24 + auVar23._0_8_);
                  dStack_b8 = (double)(long)(dVar33 + auVar23._8_8_);
                  pdVar9 = *(double **)(this + 0x48);
                  if (pdVar9 == *(double **)(this + 0x50)) {
                    std::__ndk1::
                    vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                    __push_back_slow_path<ClipperLib::IntPoint_const&>
                              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                                *)pvVar6,(IntPoint *)&local_c0);
                    pdVar10 = *(double **)(this + 0x48);
                  }
                  else {
                    pdVar10 = pdVar9 + 2;
                    pdVar9[1] = dStack_b8;
                    *pdVar9 = local_c0;
                    *(double **)(this + 0x48) = pdVar10;
                    /* catch() { ... } // from try @ 0103a4e0 with catch @ 0103a660 */
                  }
                  pdVar9 = (double *)(*(long *)(this + 0x58) + (long)(int)uVar18 * 0x10);
                  auVar23 = NEON_scvtf(*(undefined1 (*) [16])
                                        (*(long *)(this + 0x28) + (long)(int)uVar18 * 0x10),8);
                  dVar24 = auVar23._0_8_ - *pdVar9 * param_1;
                  dVar33 = auVar23._8_8_ - pdVar9[1] * param_1;
                  auVar26._0_8_ = -(ulong)(dVar24 < 0.0);
                  auVar26._8_8_ = -(ulong)(dVar33 < 0.0);
                  auVar23 = auVar31 ^ (auVar31 ^ auVar32) & auVar26;
                  local_c0 = (double)(long)(dVar24 + auVar23._0_8_);
                  dStack_b8 = (double)(long)(dVar33 + auVar23._8_8_);
                  if (pdVar10 == *(double **)(this + 0x50)) {
                    std::__ndk1::
                    vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                    __push_back_slow_path<ClipperLib::IntPoint_const&>
                              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                                *)pvVar6,(IntPoint *)&local_c0);
                  }
                  else {
                    pdVar10[1] = dStack_b8;
                    *pdVar10 = local_c0;
                    *(double **)(this + 0x48) = pdVar10 + 2;
                    /* catch() { ... } // from try @ 0103a804 with catch @ 0103a7c8 */
                  }
                }
                else {
                  local_c4 = uVar15 - 2;
                  *(undefined8 *)(this + 0x78) = 0;
                  uVar16 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar18 << 4;
                    /* catch() { ... } // from try @ 0103a454 with catch @ 0103a67c */
                  pdVar9 = (double *)(*(long *)(this + 0x58) + uVar16);
                  dVar24 = *pdVar9;
                  pdVar10 = (double *)(*(long *)(this + 0x58) + uVar16);
                  pdVar10[1] = -pdVar9[1];
                  *pdVar10 = -dVar24;
                  if (*(int *)(pvVar21 + 0x44) == 3) {
                    DoSquare(this,uVar18,local_c4);
                  }
                  else {
                    DoRound(this,uVar18,local_c4);
                  }
                }
                if (0 < (int)uVar18) {
                  lVar17 = (long)(int)uVar18;
                  do {
                    pdVar9 = (double *)(*(long *)this_00 + lVar17 * 0x10);
                    lVar17 = lVar17 + -1;
                    /* try { // try from 0103a7fc to 0113a803 has its CatchHandler @ 0103a854 */
                    pdVar9[1] = -pdVar9[-1];
                    *pdVar9 = -pdVar9[-2];
                    /* try { // try from 0103a804 to 0113a86f has its CatchHandler @ 0103a7c8 */
                  } while (0 < lVar17);
                }
                pdVar9 = *(double **)this_00;
                pdVar9[1] = -pdVar9[3];
                *pdVar9 = -pdVar9[2];
                local_c4 = uVar18;
                for (iVar7 = uVar15 - 2; 0 < iVar7; iVar7 = iVar7 + -1) {
                  OffsetPoint(this,iVar7,&local_c4,*(undefined4 *)(pvVar21 + 0x40));
                }
                iVar7 = *(int *)(pvVar21 + 0x44);
                    /* catch() { ... } // from try @ 0103a7fc with catch @ 0103a854 */
                if (iVar7 == 2) {
                  auVar23 = NEON_scvtf(**(undefined1 (**) [16])(this + 0x28),8);
                    /* catch() { ... } // from try @ 0103a8bc with catch @ 0103a878 */
                  dVar24 = auVar23._0_8_ - **(double **)(this + 0x58) * param_1;
                  dVar33 = auVar23._8_8_ - (*(double **)(this + 0x58))[1] * param_1;
                  auVar27._0_8_ = -(ulong)(dVar24 < 0.0);
                  auVar27._8_8_ = -(ulong)(dVar33 < 0.0);
                  auVar23 = auVar31 ^ (auVar31 ^ auVar32) & auVar27;
                  local_c0 = (double)(long)(dVar24 + auVar23._0_8_);
                  dStack_b8 = (double)(long)(dVar33 + auVar23._8_8_);
                  pdVar9 = *(double **)(this + 0x48);
                  if (pdVar9 == *(double **)(this + 0x50)) {
                    std::__ndk1::
                    vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                    __push_back_slow_path<ClipperLib::IntPoint_const&>
                              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                                *)pvVar6,(IntPoint *)&local_c0);
                    pdVar10 = *(double **)(this + 0x48);
                  }
                  else {
                    pdVar10 = pdVar9 + 2;
                    pdVar9[1] = dStack_b8;
                    *pdVar9 = local_c0;
                    *(double **)(this + 0x48) = pdVar10;
                  }
                  auVar23 = NEON_scvtf(**(undefined1 (**) [16])(this + 0x28),8);
                    /* catch() { ... } // from try @ 0103a8b4 with catch @ 0103a910 */
                  dVar24 = **(double **)(this + 0x58) * param_1 + auVar23._0_8_;
                  dVar33 = (*(double **)(this + 0x58))[1] * param_1 + auVar23._8_8_;
                  auVar28._0_8_ = -(ulong)(dVar24 < 0.0);
                  auVar28._8_8_ = -(ulong)(dVar33 < 0.0);
                  auVar31 = auVar31 ^ (auVar31 ^ auVar32) & auVar28;
                  local_c0 = (double)(long)(dVar24 + auVar31._0_8_);
                  dStack_b8 = (double)(long)(dVar33 + auVar31._8_8_);
                    /* try { // try from 0103a92c to 0113aa5f has its CatchHandler @ 0103a92c
                       catch() { ... } // from try @ 0103a92c with catch @ 0103a92c
                       catch() { ... } // from try @ 0103aa64 with catch @ 0103a92c
                       catch() { ... } // from try @ 0103ab00 with catch @ 0103a92c */
                  if (pdVar10 == *(double **)(this + 0x50)) {
                    std::__ndk1::
                    vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
                    __push_back_slow_path<ClipperLib::IntPoint_const&>
                              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                                *)pvVar6,(IntPoint *)&local_c0);
                  }
                  else {
                    pdVar10[1] = dStack_b8;
                    *pdVar10 = local_c0;
                    *(double **)(this + 0x48) = pdVar10 + 2;
                  }
                }
                else {
                    /* try { // try from 0103a8b4 to 0113a8bb has its CatchHandler @ 0103a910 */
                    /* try { // try from 0103a8bc to 0113a92b has its CatchHandler @ 0103a878 */
                  local_c4 = 1;
                  *(undefined8 *)(this + 0x78) = 0;
                  if (iVar7 == 3) {
                    DoSquare(this,0,1);
                  }
                  else {
                    DoRound(this,0,1);
                  }
                }
                pvVar21 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                            **)(this + 0x18);
                if (pvVar21 ==
                    *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                     (this + 0x20)) goto LAB_0103a188;
                std::__ndk1::
                vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::vector
                          (pvVar21,pvVar6);
              }
            }
            *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
             (this + 0x18) = pvVar21 + 0x18;
          }
        }
LAB_0103a194:
        lVar17 = *(long *)(this + 200);
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)((ulong)(*(long *)(this + 0xd0) - lVar17) >> 3));
    }
  }
  else {
                    /* catch() { ... } // from try @ 01039d68 with catch @ 0103a004 */
                    /* catch() { ... } // from try @ 01039d54 with catch @ 0103a00c */
                    /* catch() { ... } // from try @ 01039d44 with catch @ 0103a014 */
    std::__ndk1::
    vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
    ::reserve(this_02,(*(long *)(this + 0xd0) - *(long *)(this + 200)) * 0x20000000 >> 0x20);
    lVar17 = *(long *)(this + 200);
                    /* catch() { ... } // from try @ 01039d34 with catch @ 0103a01c */
                    /* catch() { ... } // from try @ 01039d24 with catch @ 0103a024 */
    if (0 < (int)((ulong)(*(long *)(this + 0xd0) - lVar17) >> 3)) {
                    /* catch() { ... } // from try @ 01039d14 with catch @ 0103a02c */
      lVar13 = 0;
      do {
        pvVar6 = *(vector **)(lVar17 + lVar13 * 8);
        if (*(int *)(pvVar6 + 0x44) == 0) {
          pvVar1 = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                    (this + 0x18);
          if (pvVar1 == *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                          **)(this + 0x20)) {
                    /* catch() { ... } // from try @ 01039c88 with catch @ 0103a034 */
            std::__ndk1::
            vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
            ::
            __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                      (this_02,pvVar6);
          }
          else {
            std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
            vector(pvVar1,pvVar6);
            *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
             (this + 0x18) = pvVar1 + 0x18;
          }
        }
        lVar17 = *(long *)(this + 200);
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)((ulong)(*(long *)(this + 0xd0) - lVar17) >> 3));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

