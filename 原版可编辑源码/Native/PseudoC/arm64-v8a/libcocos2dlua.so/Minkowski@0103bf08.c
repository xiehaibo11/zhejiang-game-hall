
/* ClipperLib::Minkowski(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&, std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, bool, bool) */

void ClipperLib::Minkowski
               (vector *param_1,vector *param_2,vector *param_3,bool param_4,bool param_5)

{
  bool bVar1;
  ulong uVar2;
  IntPoint *pIVar3;
  long *plVar4;
  long lVar5;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar6;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar7;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar8;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvVar9;
  void *pvVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *local_1a0;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvStack_198;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvStack_190;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *local_188;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *local_180;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *pvStack_178;
  undefined **local_170;
  long *plStack_168;
  long *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined1 local_cc;
  undefined1 local_ca;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  lVar20 = *(long *)param_1;
  lVar23 = *(long *)(param_1 + 8);
  local_180 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0;
  pvStack_178 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0;
  lVar17 = *(long *)(param_2 + 8) - *(long *)param_2;
  uVar21 = lVar17 >> 4;
                    /* try { // try from 0103bf60 to 0113c047 has its CatchHandler @ 0103bf60
                       catch() { ... } // from try @ 0103bf60 with catch @ 0103bf60
                       catch() { ... } // from try @ 0103c060 with catch @ 0103bf60 */
  local_188 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0;
  std::__ndk1::
  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
  ::reserve((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
             *)&local_188,uVar21);
  uVar22 = lVar23 - lVar20;
  uVar25 = (long)uVar22 >> 4;
  if (param_4) {
    if (lVar17 != 0) {
      uVar18 = 0;
      do {
        plStack_168 = (long *)0x0;
        local_160 = (long *)0x0;
        local_170 = (undefined **)0x0;
        if (uVar22 != 0) {
          if (uVar25 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          plStack_168 = operator_new(uVar22);
          local_160 = plStack_168 + uVar25 * 2;
        }
        lVar20 = *(long *)param_1;
        local_170 = (undefined **)plStack_168;
        if (*(long *)(param_1 + 8) != lVar20) {
          uVar24 = 0;
          do {
            plVar15 = (long *)(lVar20 + uVar24 * 0x10);
            plVar4 = (long *)(*(long *)param_2 + uVar18 * 0x10);
            local_1a0 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *
                        )(*plVar15 + *plVar4);
            pvStack_198 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                           *)(plVar15[1] + plVar4[1]);
            if (plStack_168 < local_160) {
              plStack_168[1] = (long)pvStack_198;
              *plStack_168 = (long)local_1a0;
              plStack_168 = plStack_168 + 2;
            }
            else {
              std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
              ::__push_back_slow_path<ClipperLib::IntPoint>
                        ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>
                          *)&local_170,(IntPoint *)&local_1a0);
            }
            lVar20 = *(long *)param_1;
            uVar24 = uVar24 + 1;
          } while (uVar24 < (ulong)(*(long *)(param_1 + 8) - lVar20 >> 4));
        }
        pvVar8 = local_180;
                    /* try { // try from 0103c048 to 0113c05f has its CatchHandler @ 0103c144 */
        if (local_180 == pvStack_178) {
          std::__ndk1::
          vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
          ::
          __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                    ((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                      *)&local_188,(vector *)&local_170);
        }
        else {
          std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
          vector(local_180,(vector *)&local_170);
          local_180 = pvVar8 + 0x18;
                    /* try { // try from 0103c060 to 0113c157 has its CatchHandler @ 0103bf60 */
        }
        if (local_170 != (undefined **)0x0) {
          plStack_168 = (long *)local_170;
          operator_delete(local_170);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar21);
    }
  }
  else if (lVar17 != 0) {
    uVar18 = 0;
    do {
      plStack_168 = (long *)0x0;
      local_160 = (long *)0x0;
      local_170 = (undefined **)0x0;
      if (uVar22 != 0) {
        if (uVar25 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        plStack_168 = operator_new(uVar22);
        local_160 = plStack_168 + uVar25 * 2;
      }
      lVar20 = *(long *)param_1;
      local_170 = (undefined **)plStack_168;
      if (*(long *)(param_1 + 8) != lVar20) {
        uVar24 = 0;
        do {
          plVar15 = (long *)(lVar20 + uVar24 * 0x10);
          plVar4 = (long *)(*(long *)param_2 + uVar18 * 0x10);
          local_1a0 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                      (*plVar4 - *plVar15);
          pvStack_198 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *
                        )(plVar4[1] - plVar15[1]);
          if (plStack_168 < local_160) {
            plStack_168[1] = (long)pvStack_198;
            *plStack_168 = (long)local_1a0;
            plStack_168 = plStack_168 + 2;
          }
          else {
            std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
            __push_back_slow_path<ClipperLib::IntPoint>
                      ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                       &local_170,(IntPoint *)&local_1a0);
          }
          lVar20 = *(long *)param_1;
          uVar24 = uVar24 + 1;
        } while (uVar24 < (ulong)(*(long *)(param_1 + 8) - lVar20 >> 4));
      }
      pvVar8 = local_180;
      if (local_180 == pvStack_178) {
        std::__ndk1::
        vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
        ::
        __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                  ((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                    *)&local_188,(vector *)&local_170);
      }
      else {
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        vector(local_180,(vector *)&local_170);
        local_180 = pvVar8 + 0x18;
      }
      if (local_170 != (undefined **)0x0) {
        plStack_168 = (long *)local_170;
        operator_delete(local_170);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar21);
  }
  lVar20 = uVar21 + param_5;
  pvStack_198 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0;
  pvStack_190 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0;
  local_1a0 = (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0;
  std::__ndk1::
  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
  ::reserve((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
             *)&local_1a0,lVar20 * (uVar25 + 1));
  if (lVar20 != 1) {
    uVar18 = 0;
    uVar24 = 1;
    while( true ) {
      if (uVar22 != 0) {
        uVar19 = 0;
        do {
          plStack_168 = (long *)0x0;
          local_160 = (long *)0x0;
          local_170 = (undefined **)0x0;
          local_170 = operator_new(0x40);
          uVar14 = 0;
          if (uVar21 != 0) {
            uVar14 = uVar18 / uVar21;
          }
          local_160 = (long *)(local_170 + 8);
          lVar23 = uVar18 - uVar14 * uVar21;
          uVar14 = 0;
          if (uVar25 != 0) {
            uVar14 = uVar19 / uVar25;
          }
          lVar17 = (uVar19 - uVar14 * uVar25) * 0x10;
          puVar13 = (undefined8 *)(*(long *)(local_188 + lVar23 * 0x18) + lVar17);
          uVar26 = *puVar13;
          uVar14 = 0;
          if (uVar21 != 0) {
            uVar14 = uVar24 / uVar21;
          }
          lVar11 = (uVar24 - uVar14 * uVar21) * 0x18;
          local_170[1] = (undefined *)puVar13[1];
          *local_170 = (undefined *)uVar26;
          uVar19 = uVar19 + 1;
          puVar13 = (undefined8 *)(*(long *)(local_188 + lVar11) + lVar17);
          uVar26 = *puVar13;
          plStack_168 = (long *)(local_170 + 4);
          local_170[3] = (undefined *)puVar13[1];
          local_170[2] = (undefined *)uVar26;
          uVar14 = 0;
          if (uVar25 != 0) {
            uVar14 = uVar19 / uVar25;
          }
          lVar17 = uVar19 - uVar14 * uVar25;
          pIVar3 = (IntPoint *)(*(long *)(local_188 + lVar11) + lVar17 * 0x10);
          if (local_160 == plStack_168) {
            std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
            __push_back_slow_path<ClipperLib::IntPoint_const&>
                      ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                       &local_170,pIVar3);
          }
          else {
            uVar26 = *(undefined8 *)pIVar3;
            local_170[5] = (undefined *)*(undefined8 *)(pIVar3 + 8);
            *plStack_168 = uVar26;
            plStack_168 = (long *)(local_170 + 6);
          }
          pIVar3 = (IntPoint *)(*(long *)(local_188 + lVar23 * 0x18) + lVar17 * 0x10);
          if (plStack_168 == local_160) {
            std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
            __push_back_slow_path<ClipperLib::IntPoint_const&>
                      ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                       &local_170,pIVar3);
          }
          else {
            uVar26 = *(undefined8 *)pIVar3;
            plStack_168[1] = *(undefined8 *)(pIVar3 + 8);
            *plStack_168 = uVar26;
            plStack_168 = plStack_168 + 2;
          }
          pvVar8 = pvStack_198;
          uVar14 = (ulong)((long)plStack_168 - (long)local_170) >> 4;
          if (2 < (int)uVar14) {
            plVar15 = (long *)(local_170 + 1);
            dVar27 = 0.0;
            uVar2 = 0;
            uVar14 = uVar14 - 1;
            do {
              uVar16 = uVar2;
              plVar4 = (long *)((long)local_170 + ((long)(uVar14 << 0x20) >> 0x1c));
              uVar2 = uVar16 + 1;
              dVar27 = dVar27 + ((double)*plVar4 + (double)plVar15[-1]) *
                                ((double)plVar4[1] - (double)*plVar15);
              plVar15 = plVar15 + 2;
              uVar14 = uVar16;
            } while (((ulong)((long)plStack_168 - (long)local_170) >> 4 & 0xffffffff) != uVar2);
            if (((dVar27 * -0.5 < 0.0) && ((undefined **)plStack_168 != local_170)) &&
               (local_170 < plStack_168 + -2)) {
              ppuVar12 = local_170;
              puVar13 = plStack_168 + -4;
              do {
                uVar29 = ppuVar12[1];
                uVar26 = *ppuVar12;
                uVar28 = puVar13[2];
                ppuVar12[1] = (undefined *)puVar13[3];
                *ppuVar12 = (undefined *)uVar28;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0103c430 with catch @ 0103c3c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c460 with catch @ 0103c3c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c490 with catch @ 0103c3c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c4b8 with catch @ 0103c3c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c4e4 with catch @ 0103c3c0
                        */
                puVar13[3] = uVar29;
                puVar13[2] = uVar26;
                bVar1 = ppuVar12 + 2 < puVar13;
                ppuVar12 = ppuVar12 + 2;
                puVar13 = puVar13 + -2;
              } while (bVar1);
            }
          }
          if (pvStack_198 == pvStack_190) {
            std::__ndk1::
            vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
            ::
            __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                      ((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                        *)&local_1a0,(vector *)&local_170);
          }
          else {
            std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
            vector(pvStack_198,(vector *)&local_170);
            pvStack_198 = pvVar8 + 0x18;
          }
          if (local_170 != (undefined **)0x0) {
            plStack_168 = (long *)local_170;
            operator_delete(local_170);
          }
        } while (uVar19 < uVar25);
      }
      if (uVar24 == lVar20 - 1U) break;
      uVar18 = uVar24;
      uVar24 = uVar24 + 1;
    }
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_170 = &PTR__Clipper_01727ae8;
  local_c8 = &PTR__Clipper_01727b30;
  uStack_c0 = 0;
                    /* try { // try from 0103c428 to 0113c42f has its CatchHandler @ 0103c524 */
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_120 = 0;
  local_128 = 0;
                    /* try { // try from 0103c430 to 0113c453 has its CatchHandler @ 0103c3c0 */
  uStack_110 = 0;
  local_118 = 0;
  local_100 = &local_f8;
  local_160 = (long *)0x0;
  plStack_168 = (long *)0x0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
                    /* try { // try from 0103c454 to 0113c45f has its CatchHandler @ 0103c524 */
  local_d8 = 0;
  local_b0 = 0;
  local_cc = 0;
                    /* try { // try from 0103c460 to 0113c487 has its CatchHandler @ 0103c3c0 */
  local_ca = 0;
  local_90 = 0;
  if (pvStack_198 != local_1a0) {
    lVar20 = 0;
    uVar21 = 0;
    do {
                    /* try { // try from 0103c488 to 0113c48f has its CatchHandler @ 0103c520 */
                    /* try { // try from 0103c490 to 0113c4af has its CatchHandler @ 0103c3c0 */
      ClipperBase::AddPath((ClipperBase *)&local_c8,local_1a0 + lVar20,0,1);
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x18;
                    /* try { // try from 0103c4b0 to 0113c4b7 has its CatchHandler @ 0103c520 */
    } while (uVar21 < (ulong)(((long)pvStack_198 - (long)local_1a0 >> 3) * -0x5555555555555555));
  }
                    /* try { // try from 0103c4b8 to 0113c4d7 has its CatchHandler @ 0103c3c0 */
  Clipper::Execute((Clipper *)&local_170,1,param_3,1,1);
  Clipper::~Clipper((Clipper *)&local_170);
  pvVar8 = local_1a0;
                    /* try { // try from 0103c4d8 to 0113c4e3 has its CatchHandler @ 0103c520 */
  if (local_1a0 != (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0)
  {
                    /* try { // try from 0103c4e4 to 0113c527 has its CatchHandler @ 0103c3c0 */
    if (pvStack_198 != local_1a0) {
      pvVar10 = *(void **)(pvStack_198 + -0x18);
      pvVar9 = pvStack_198 + -0x18;
      pvVar7 = pvStack_198;
      while( true ) {
        pvVar6 = pvVar9;
        if (pvVar10 != (void *)0x0) {
          *(void **)(pvVar7 + -0x10) = pvVar10;
          operator_delete(pvVar10);
        }
        if (pvVar8 == pvVar6) break;
        pvVar10 = *(void **)(pvVar6 + -0x18);
        pvVar9 = pvVar6 + -0x18;
        pvVar7 = pvVar6;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0103c488 with catch @ 0103c520
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c4b0 with catch @ 0103c520
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c4d8 with catch @ 0103c520
                        */
    pvStack_198 = pvVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0103c428 with catch @ 0103c524
                       catch(type#1 @ 00000000) { ... } // from try @ 0103c454 with catch @ 0103c524
                        */
    operator_delete(local_1a0);
  }
  pvVar8 = local_188;
  if (local_188 != (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)0x0)
  {
    if (local_180 != local_188) {
      pvVar10 = *(void **)(local_180 + -0x18);
      pvVar9 = local_180 + -0x18;
      pvVar7 = local_180;
      while( true ) {
        pvVar6 = pvVar9;
        if (pvVar10 != (void *)0x0) {
          *(void **)(pvVar7 + -0x10) = pvVar10;
          operator_delete(pvVar10);
        }
        if (pvVar8 == pvVar6) break;
        pvVar10 = *(void **)(pvVar6 + -0x18);
        pvVar9 = pvVar6 + -0x18;
        pvVar7 = pvVar6;
      }
    }
    local_180 = pvVar8;
    operator_delete(local_188);
  }
                    /* try { // try from 0103c58c to 0113c5cf has its CatchHandler @ 0103c58c
                       catch() { ... } // from try @ 0103c58c with catch @ 0103c58c
                       catch() { ... } // from try @ 0103c5d4 with catch @ 0103c58c */
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

