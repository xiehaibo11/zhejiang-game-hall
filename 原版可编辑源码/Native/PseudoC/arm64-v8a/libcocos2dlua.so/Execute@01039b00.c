
/* ClipperLib::ClipperOffset::Execute(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, double) */

void __thiscall
ClipperLib::ClipperOffset::Execute(ClipperOffset *this,vector *param_1,double param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  void *pvVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long *local_168;
  long *local_160;
  long *local_158;
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
  puVar28 = *(undefined8 **)param_1;
  puVar26 = *(undefined8 **)(param_1 + 8);
  if (puVar26 != puVar28) {
    pvVar14 = (void *)puVar26[-3];
    puVar7 = puVar26 + -3;
    while( true ) {
      if (pvVar14 != (void *)0x0) {
        puVar26[-2] = pvVar14;
        operator_delete(pvVar14);
      }
      if (puVar28 == puVar7) break;
      pvVar14 = (void *)puVar7[-3];
      puVar26 = puVar7;
      puVar7 = puVar7 + -3;
    }
  }
  *(undefined8 **)(param_1 + 8) = puVar28;
  FixOrientations(this);
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
  local_90 = 0;
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
  lVar18 = *(long *)(this + 0x10);
  if (*(long *)(this + 0x18) != lVar18) {
    lVar27 = 0;
    uVar29 = 0;
    do {
      ClipperBase::AddPath((ClipperBase *)&local_a8,lVar18 + lVar27,0,1);
      lVar18 = *(long *)(this + 0x10);
      uVar29 = uVar29 + 1;
      lVar27 = lVar27 + 0x18;
                    /* try { // try from 01039c3c to 01139c87 has its CatchHandler @ 01039c3c
                       catch() { ... } // from try @ 01039c3c with catch @ 01039c3c
                       catch() { ... } // from try @ 01039dec with catch @ 01039c3c
                       catch() { ... } // from try @ 01039e78 with catch @ 01039c3c
                       catch() { ... } // from try @ 01039ec4 with catch @ 01039c3c */
    } while (uVar29 < (ulong)((*(long *)(this + 0x18) - lVar18 >> 3) * -0x5555555555555555));
  }
  if (0.0 < param_2) {
    Clipper::Execute((Clipper *)&local_150,1,param_1,2,2);
    goto LAB_01039ee0;
  }
  lVar18 = *(long *)((long)alStack_140 + (long)local_150[-3]);
  if (lVar18 == 0) {
    lVar25 = -10;
    lVar27 = 10;
                    /* try { // try from 01039d9c to 01139da3 has its CatchHandler @ 01039fe4 */
    lVar31 = 10;
    lVar30 = -10;
  }
  else {
    plVar20 = *(long **)(lVar18 + 8);
    lVar31 = *plVar20;
    lVar15 = plVar20[1];
                    /* try { // try from 01039c88 to 01139d0f has its CatchHandler @ 0103a034 */
    lVar27 = lVar15;
    lVar25 = lVar15;
    lVar21 = lVar15;
    lVar30 = lVar31;
    lVar22 = lVar15;
    lVar23 = lVar31;
    lVar24 = lVar31;
    while( true ) {
      plVar16 = plVar20;
      lVar17 = lVar15;
      if (lVar15 <= lVar22) {
        lVar17 = lVar27;
      }
      do {
        lVar27 = lVar17;
        lVar17 = *plVar16;
                    /* try { // try from 01039d14 to 01139d1f has its CatchHandler @ 0103a02c */
        bVar13 = lVar17 < lVar24;
        plVar12 = (long *)plVar16[0xe];
        plVar10 = plVar16;
        lVar11 = lVar23;
        lVar5 = lVar24;
        while (plVar9 = plVar12, plVar9 != (long *)0x0) {
          lVar1 = lVar17;
          lVar3 = lVar17;
          lVar2 = lVar17;
          if (!bVar13) {
            lVar1 = lVar24;
            lVar3 = lVar5;
            lVar2 = lVar30;
          }
                    /* try { // try from 01039d34 to 01139d3f has its CatchHandler @ 0103a01c */
          lVar24 = lVar17;
          lVar5 = lVar17;
          lVar30 = lVar17;
          if (lVar17 <= lVar23) {
            lVar24 = lVar23;
            lVar5 = lVar11;
            lVar30 = lVar31;
          }
                    /* try { // try from 01039d44 to 01139d4f has its CatchHandler @ 0103a014 */
          lVar17 = *plVar9;
                    /* try { // try from 01039d54 to 01139d5f has its CatchHandler @ 0103a00c */
          bVar13 = lVar17 < lVar1;
          plVar10 = plVar9;
          lVar31 = lVar30;
          lVar30 = lVar2;
          lVar23 = lVar24;
          lVar11 = lVar5;
          lVar24 = lVar1;
          lVar5 = lVar3;
          plVar12 = (long *)plVar9[0xe];
        }
        lVar2 = plVar10[4];
        lVar3 = plVar10[5];
        lVar1 = lVar17;
        lVar6 = lVar17;
        if (!bVar13) {
          lVar1 = lVar5;
          lVar6 = lVar30;
        }
        lVar5 = lVar17;
        if (lVar17 <= lVar23) {
          lVar17 = lVar11;
          lVar5 = lVar31;
        }
        lVar24 = lVar2;
        lVar30 = lVar2;
        if (lVar1 <= lVar2) {
          lVar24 = lVar1;
          lVar30 = lVar6;
        }
        lVar23 = lVar2;
        lVar31 = lVar2;
        if (lVar2 <= lVar17) {
          lVar23 = lVar17;
          lVar31 = lVar5;
        }
        lVar17 = lVar3;
        if (lVar21 <= lVar3) {
          lVar3 = lVar21;
          lVar17 = lVar25;
        }
        lVar25 = lVar17;
        bVar13 = plVar16 == plVar20;
        plVar16 = *(long **)(lVar18 + 0x10);
        lVar21 = lVar3;
        lVar17 = lVar27;
      } while (bVar13);
      lVar18 = *(long *)(lVar18 + 0x18);
                    /* try { // try from 01039d68 to 01139d6f has its CatchHandler @ 0103a004 */
      if (lVar18 == 0) break;
      plVar20 = *(long **)(lVar18 + 8);
      lVar17 = lVar15;
      if (lVar15 <= lVar22) {
        lVar17 = lVar22;
      }
                    /* try { // try from 01039d78 to 01139d7f has its CatchHandler @ 01039ffc */
      lVar15 = plVar20[1];
      lVar22 = lVar17;
    }
    lVar30 = lVar30 + -10;
                    /* try { // try from 01039d84 to 01139d8b has its CatchHandler @ 01039ff4 */
    lVar27 = lVar27 + 10;
    lVar31 = lVar31 + 10;
    lVar25 = lVar25 + -10;
                    /* try { // try from 01039d90 to 01139d97 has its CatchHandler @ 01039fec */
  }
                    /* try { // try from 01039da4 to 01139db3 has its CatchHandler @ 01039f58 */
  local_160 = (long *)0x0;
  local_158 = (long *)0x0;
  local_168 = (long *)0x0;
  plVar20 = operator_new(0x40);
  local_160 = plVar20 + 8;
  *plVar20 = 0;
  plVar20[1] = 0;
  plVar20[2] = 0;
  plVar20[3] = 0;
  plVar20[4] = 0;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  *plVar20 = lVar30;
  plVar20[1] = lVar27;
  plVar20[2] = lVar31;
  plVar20[3] = lVar27;
  plVar20[4] = lVar31;
  plVar20[5] = lVar25;
                    /* try { // try from 01039de0 to 01139deb has its CatchHandler @ 01039f24 */
  plVar20[6] = lVar30;
  plVar20[7] = lVar25;
                    /* try { // try from 01039dec to 01139e2b has its CatchHandler @ 01039c3c */
  local_168 = plVar20;
  local_158 = local_160;
  ClipperBase::AddPath((ClipperBase *)((long)&local_150 + (long)local_150[-3]),&local_168,0,1);
  local_ac = 1;
  Clipper::Execute((Clipper *)&local_150,1,param_1,3,3);
  puVar28 = *(undefined8 **)param_1;
  puVar26 = *(undefined8 **)(param_1 + 8);
                    /* try { // try from 01039e2c to 01139e37 has its CatchHandler @ 01039f20 */
  if (puVar26 != puVar28) {
                    /* try { // try from 01039e38 to 01139e47 has its CatchHandler @ 01039f1c */
    if (puVar28 + 3 == puVar26) {
LAB_01039e9c:
      pvVar14 = (void *)puVar26[-3];
      puVar7 = puVar26 + -3;
      while( true ) {
        puVar8 = puVar7;
        if (pvVar14 != (void *)0x0) {
          puVar26[-2] = pvVar14;
          operator_delete(pvVar14);
                    /* try { // try from 01039ec4 to 0113a047 has its CatchHandler @ 01039c3c */
        }
        if (puVar28 == puVar8) break;
        pvVar14 = (void *)puVar8[-3];
                    /* try { // try from 01039eb8 to 01139ec3 has its CatchHandler @ 01039ef8 */
        puVar7 = puVar8 + -3;
        puVar26 = puVar8;
      }
    }
    else {
      pvVar14 = (void *)*puVar28;
      puVar7 = puVar28;
      while( true ) {
        if (pvVar14 != (void *)0x0) {
          puVar7[1] = pvVar14;
          operator_delete(pvVar14);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        puVar28 = puVar7 + 3;
        uVar32 = puVar7[4];
        uVar19 = puVar7[5];
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[1] = uVar32;
        *puVar7 = *puVar28;
        puVar7[2] = uVar19;
                    /* try { // try from 01039e6c to 01139e77 has its CatchHandler @ 01039efc */
        *puVar28 = 0;
        if (puVar7 + 6 == puVar26) break;
        pvVar14 = (void *)*puVar28;
                    /* try { // try from 01039e78 to 01139eb7 has its CatchHandler @ 01039c3c */
        puVar7 = puVar28;
      }
      puVar26 = *(undefined8 **)(param_1 + 8);
      if (puVar26 != puVar28) goto LAB_01039e9c;
    }
    *(undefined8 **)(param_1 + 8) = puVar28;
    plVar20 = local_168;
  }
  if (plVar20 != (long *)0x0) {
    local_160 = plVar20;
    operator_delete(plVar20);
  }
LAB_01039ee0:
  Clipper::~Clipper((Clipper *)&local_150);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 01039eb8 with catch @ 01039ef8 */
                    /* catch() { ... } // from try @ 01039e6c with catch @ 01039efc */
  return;
}

