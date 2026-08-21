
/* ClipperLib::ClipperOffset::Execute(ClipperLib::PolyTree&, double) */

void __thiscall
ClipperLib::ClipperOffset::Execute(ClipperOffset *this,PolyTree *param_1,double param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *this_00;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  PolyNode *pPVar29;
  long lVar30;
  long *local_170;
  long *local_168;
  long *local_160;
  PolyNode *local_158;
  undefined **local_150;
  undefined8 local_148;
  long alStack_140 [12];
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 local_ac;
  undefined1 local_aa;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar17 = *(undefined8 **)(param_1 + 0x48);
  puVar18 = *(undefined8 **)(param_1 + 0x50);
  if (puVar18 != puVar17) {
    uVar26 = 0;
    puVar24 = (undefined8 *)*puVar17;
    while( true ) {
      if (puVar24 != (undefined8 *)0x0) {
        pvVar12 = (void *)puVar24[3];
        if (pvVar12 != (void *)0x0) {
          puVar24[4] = pvVar12;
          operator_delete(pvVar12);
        }
        pvVar12 = (void *)*puVar24;
        if (pvVar12 != (void *)0x0) {
          puVar24[1] = pvVar12;
          operator_delete(pvVar12);
        }
        operator_delete(puVar24);
        puVar17 = *(undefined8 **)(param_1 + 0x48);
        puVar18 = *(undefined8 **)(param_1 + 0x50);
      }
      uVar26 = uVar26 + 1;
                    /* try { // try from 0103aa60 to 0113aa63 has its CatchHandler @ 0103acbc */
      if ((ulong)((long)puVar18 - (long)puVar17 >> 3) <= uVar26) break;
                    /* try { // try from 0103aa64 to 0113aabf has its CatchHandler @ 0103a92c */
      puVar24 = (undefined8 *)puVar17[uVar26];
    }
    if ((long)puVar18 - (long)puVar17 != 0) {
      *(undefined8 **)(param_1 + 0x50) = puVar17;
    }
  }
  this_00 = (vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *)
            (param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != *(long *)this_00) {
    *(long *)(param_1 + 0x20) = *(long *)this_00;
  }
  FixOrientations(this);
                    /* try { // try from 0103aac0 to 0113aacb has its CatchHandler @ 0103aca0 */
  DoOffset(this,param_2);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_150 = &PTR__Clipper_01727ae8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
                    /* try { // try from 0103aafc to 0113aaff has its CatchHandler @ 0103ac9c */
  local_90 = 0;
                    /* try { // try from 0103ab00 to 0113acd7 has its CatchHandler @ 0103a92c */
  local_ac = 0;
  local_aa = 0;
  local_70 = 0;
  alStack_140[0] = 0;
  local_148 = 0;
  alStack_140[2] = 0;
  alStack_140[1] = 0;
  alStack_140[4] = 0;
  alStack_140[3] = 0;
  alStack_140[6] = 0;
  alStack_140[5] = 0;
  alStack_140[8] = 0;
  alStack_140[7] = 0;
  alStack_140[10] = 0;
  alStack_140[9] = 0;
  local_a8 = &PTR__Clipper_01727b30;
  local_e0 = &local_d8;
  lVar16 = *(long *)(this + 0x10);
  if (*(long *)(this + 0x18) != lVar16) {
    lVar28 = 0;
    uVar26 = 0;
    do {
      ClipperBase::AddPath((ClipperBase *)&local_a8,lVar16 + lVar28,0,1);
      lVar16 = *(long *)(this + 0x10);
      uVar26 = uVar26 + 1;
      lVar28 = lVar28 + 0x18;
    } while (uVar26 < (ulong)((*(long *)(this + 0x18) - lVar16 >> 3) * -0x5555555555555555));
  }
  if (0.0 < param_2) {
    Clipper::Execute((Clipper *)&local_150,1,param_1,2,2);
    plVar19 = local_168;
    goto LAB_0103aeac;
  }
  lVar16 = *(long *)((long)alStack_140 + (long)local_150[-3]);
  if (lVar16 == 0) {
    lVar27 = -10;
    lVar28 = 10;
                    /* catch() { ... } // from try @ 0103ad10 with catch @ 0103acd8 */
    lVar25 = 10;
    lVar30 = -10;
  }
  else {
    plVar19 = *(long **)(lVar16 + 8);
    lVar25 = *plVar19;
    lVar13 = plVar19[1];
    lVar28 = lVar13;
    lVar27 = lVar13;
    lVar20 = lVar13;
    lVar30 = lVar25;
    lVar21 = lVar13;
    lVar22 = lVar25;
    lVar23 = lVar25;
    while( true ) {
      plVar14 = plVar19;
      lVar15 = lVar13;
      if (lVar13 <= lVar21) {
        lVar15 = lVar28;
      }
      do {
        lVar28 = lVar15;
        lVar15 = *plVar14;
        bVar11 = lVar15 < lVar23;
        plVar10 = (long *)plVar14[0xe];
        plVar8 = plVar14;
        lVar9 = lVar22;
        lVar5 = lVar23;
        while (plVar7 = plVar10, plVar7 != (long *)0x0) {
          lVar1 = lVar15;
          lVar3 = lVar15;
          lVar2 = lVar15;
          if (!bVar11) {
            lVar1 = lVar23;
            lVar3 = lVar5;
            lVar2 = lVar30;
          }
          lVar23 = lVar15;
          lVar5 = lVar15;
          lVar30 = lVar15;
          if (lVar15 <= lVar22) {
            lVar23 = lVar22;
            lVar5 = lVar9;
            lVar30 = lVar25;
          }
          lVar15 = *plVar7;
          bVar11 = lVar15 < lVar1;
          plVar8 = plVar7;
          lVar25 = lVar30;
          lVar30 = lVar2;
          lVar22 = lVar23;
          lVar9 = lVar5;
          lVar23 = lVar1;
          lVar5 = lVar3;
          plVar10 = (long *)plVar7[0xe];
        }
        lVar2 = plVar8[4];
        lVar3 = plVar8[5];
        lVar1 = lVar15;
        lVar6 = lVar15;
        if (!bVar11) {
          lVar1 = lVar5;
          lVar6 = lVar30;
        }
        lVar5 = lVar15;
        if (lVar15 <= lVar22) {
          lVar15 = lVar9;
          lVar5 = lVar25;
        }
        lVar23 = lVar2;
        lVar30 = lVar2;
        if (lVar1 <= lVar2) {
          lVar23 = lVar1;
          lVar30 = lVar6;
        }
        lVar22 = lVar2;
        lVar25 = lVar2;
        if (lVar2 <= lVar15) {
          lVar22 = lVar15;
          lVar25 = lVar5;
        }
        lVar15 = lVar3;
        if (lVar20 <= lVar3) {
          lVar3 = lVar20;
          lVar15 = lVar27;
        }
        lVar27 = lVar15;
        bVar11 = plVar14 == plVar19;
        plVar14 = *(long **)(lVar16 + 0x10);
        lVar20 = lVar3;
        lVar15 = lVar28;
      } while (bVar11);
                    /* catch() { ... } // from try @ 0103aac0 with catch @ 0103aca0 */
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 == 0) break;
      plVar19 = *(long **)(lVar16 + 8);
      lVar15 = lVar13;
      if (lVar13 <= lVar21) {
        lVar15 = lVar21;
      }
      lVar13 = plVar19[1];
      lVar21 = lVar15;
    }
                    /* catch() { ... } // from try @ 0103aa60 with catch @ 0103acbc */
    lVar30 = lVar30 + -10;
    lVar28 = lVar28 + 10;
    lVar25 = lVar25 + 10;
    lVar27 = lVar27 + -10;
  }
  local_168 = (long *)0x0;
  local_160 = (long *)0x0;
  local_170 = (long *)0x0;
  plVar14 = operator_new(0x40);
  local_168 = plVar14 + 8;
  *plVar14 = 0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
                    /* try { // try from 0103ad08 to 0113ad0f has its CatchHandler @ 0103ad60 */
                    /* try { // try from 0103ad10 to 0113ad7b has its CatchHandler @ 0103acd8 */
  *plVar14 = lVar30;
  plVar14[1] = lVar28;
  plVar14[2] = lVar25;
  plVar14[3] = lVar28;
  plVar14[4] = lVar25;
  plVar14[5] = lVar27;
  plVar14[6] = lVar30;
  plVar14[7] = lVar27;
  local_170 = plVar14;
  local_160 = local_168;
  ClipperBase::AddPath((ClipperBase *)((long)&local_150 + (long)local_150[-3]),&local_170,0,1);
  local_ac = 1;
  Clipper::Execute((Clipper *)&local_150,1,param_1,3,3);
                    /* catch() { ... } // from try @ 0103ad08 with catch @ 0103ad60 */
  if ((int)((ulong)(*(long *)(param_1 + 0x20) - (long)*(long **)(param_1 + 0x18)) >> 3) == 1) {
    lVar16 = **(long **)(param_1 + 0x18);
    uVar26 = *(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18);
    if ((int)(uVar26 >> 3) < 1) goto LAB_0103ae20;
    std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::
    reserve(this_00,(long)(uVar26 * 0x20000000) >> 0x20);
    **(undefined8 **)this_00 = **(undefined8 **)(lVar16 + 0x18);
    lVar28 = *(long *)(lVar16 + 0x18);
    plVar19 = local_168;
    if (1 < (int)((ulong)(*(long *)(lVar16 + 0x20) - lVar28) >> 3)) {
      lVar25 = 1;
      do {
        pPVar29 = *(PolyNode **)(lVar28 + lVar25 * 8);
        lVar28 = *(long *)(param_1 + 0x18);
        plVar19 = *(long **)(param_1 + 0x20);
        local_158 = pPVar29;
        if (plVar19 < *(long **)(param_1 + 0x28)) {
          *plVar19 = (long)pPVar29;
          *(long **)(param_1 + 0x20) = plVar19 + 1;
        }
        else {
          std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::
          __push_back_slow_path<ClipperLib::PolyNode*>(this_00,&local_158);
        }
        *(PolyTree **)(pPVar29 + 0x30) = param_1;
        *(int *)(pPVar29 + 0x38) = (int)((ulong)((long)plVar19 - lVar28) >> 3);
        lVar28 = *(long *)(lVar16 + 0x18);
        lVar25 = lVar25 + 1;
        plVar14 = local_170;
        plVar19 = local_168;
      } while (lVar25 < (int)((ulong)(*(long *)(lVar16 + 0x20) - lVar28) >> 3));
    }
  }
  else {
LAB_0103ae20:
    puVar17 = *(undefined8 **)(param_1 + 0x48);
    puVar18 = *(undefined8 **)(param_1 + 0x50);
    if (puVar18 != puVar17) {
      uVar26 = 0;
      puVar24 = (undefined8 *)*puVar17;
      while( true ) {
        if (puVar24 != (undefined8 *)0x0) {
          pvVar12 = (void *)puVar24[3];
          if (pvVar12 != (void *)0x0) {
            puVar24[4] = pvVar12;
            operator_delete(pvVar12);
          }
          pvVar12 = (void *)*puVar24;
          if (pvVar12 != (void *)0x0) {
            puVar24[1] = pvVar12;
            operator_delete(pvVar12);
          }
          operator_delete(puVar24);
          puVar17 = *(undefined8 **)(param_1 + 0x48);
          puVar18 = *(undefined8 **)(param_1 + 0x50);
        }
        uVar26 = uVar26 + 1;
        if ((ulong)((long)puVar18 - (long)puVar17 >> 3) <= uVar26) break;
        puVar24 = (undefined8 *)puVar17[uVar26];
      }
      if ((long)puVar18 - (long)puVar17 != 0) {
        *(undefined8 **)(param_1 + 0x50) = puVar17;
      }
    }
    plVar19 = local_168;
    if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    }
  }
  local_168 = plVar14;
  if (local_168 != (long *)0x0) {
    operator_delete(local_168);
    plVar19 = local_168;
  }
LAB_0103aeac:
  local_168 = plVar19;
  Clipper::~Clipper((Clipper *)&local_150);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

