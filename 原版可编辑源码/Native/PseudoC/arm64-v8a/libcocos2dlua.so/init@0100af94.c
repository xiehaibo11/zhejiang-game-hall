
/* cocos2d::PhysicsShapeEdgePolygon::init(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial
   const&, float) */

void __thiscall
cocos2d::PhysicsShapeEdgePolygon::init
          (PhysicsShapeEdgePolygon *this,Vec2 *param_1,int param_2,PhysicsMaterial *param_3,
          float param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  cpShape *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 in_register_00005004;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  cpShape *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(this + 0x48) = 6;
  uVar13 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
  if ((ulong)(long)param_2 >> 0x3d != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  pvVar5 = operator_new__(uVar13,(nothrow_t *)&std::nothrow);
  if (param_2 < 1) {
    if (pvVar5 != (void *)0x0) goto LAB_0100b140;
  }
  else {
    uVar13 = (ulong)(uint)param_2;
    if ((uint)param_2 < 8) {
      uVar8 = 0;
LAB_0100b058:
      lVar11 = uVar13 - uVar8;
      puVar9 = (undefined8 *)((long)pvVar5 + uVar8 * 8);
      puVar12 = (undefined8 *)(param_1 + uVar8 * 8);
      do {
        lVar11 = lVar11 + -1;
        *puVar9 = *puVar12;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar11 != 0);
    }
    else {
      uVar8 = uVar13 & 0xfffffff8;
      puVar9 = (undefined8 *)(param_1 + 0x20);
      puVar12 = (undefined8 *)((long)pvVar5 + 0x20);
      uVar10 = uVar8;
      do {
        uVar7 = puVar9[-4];
        uVar17 = puVar9[-1];
        uVar16 = puVar9[-2];
        uVar19 = puVar9[1];
        uVar18 = *puVar9;
        uVar21 = puVar9[3];
        uVar20 = puVar9[2];
        uVar10 = uVar10 - 8;
        puVar12[-3] = puVar9[-3];
        puVar12[-4] = uVar7;
        puVar12[-1] = uVar17;
        puVar12[-2] = uVar16;
        puVar12[1] = uVar19;
        *puVar12 = uVar18;
        puVar12[3] = uVar21;
        puVar12[2] = uVar20;
        puVar9 = puVar9 + 8;
        puVar12 = puVar12 + 8;
      } while (uVar10 != 0);
      if (uVar8 != uVar13) goto LAB_0100b058;
    }
    if (0 < param_2) {
      puVar15 = (undefined4 *)((long)pvVar5 + 4);
      uVar10 = 0;
      do {
        uVar8 = uVar10 + 1;
                    /* try { // try from 0100b0bc to 0110b17b has its CatchHandler @ 0100b0bc
                       catch() { ... } // from try @ 0100b0bc with catch @ 0100b0bc
                       catch() { ... } // from try @ 0100b1fc with catch @ 0100b0bc */
        uVar2 = 0;
        if (uVar13 - 1 != uVar10) {
          uVar2 = uVar8 & 0xffffffff;
        }
        puVar1 = (undefined4 *)((long)pvVar5 + uVar2 * 8);
        pcVar6 = (cpShape *)
                 cpSegmentShapeNew(puVar15[-1],*puVar15,*puVar1,puVar1[1],
                                   CONCAT44(in_register_00005004,param_4),DAT_01792ca8);
        if (pcVar6 == (cpShape *)0x0) {
          operator_delete__(pvVar5);
          uVar7 = 0;
          goto LAB_0100b1e4;
        }
        cpShapeSetUserData(pcVar6,this);
        cpShapeSetElasticity(0x3f800000,pcVar6);
        cpShapeSetFriction(0x3f800000,pcVar6);
        local_80 = pcVar6;
        cpShapeSetUserData(pcVar6,this);
        cpShapeSetFilter(pcVar6,(long)*(int *)(this + 0x88),0xffffffffffffffff);
        plVar3 = *(long **)(this + 0x38);
        if (plVar3 == *(long **)(this + 0x40)) {
          std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
          __push_back_slow_path<cpShape*const&>
                    ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_80);
        }
        else {
          *plVar3 = (long)pcVar6;
          *(long **)(this + 0x38) = plVar3 + 1;
        }
        puVar15 = puVar15 + 2;
        uVar10 = uVar8;
      } while (uVar13 != uVar8);
    }
LAB_0100b140:
    operator_delete__(pvVar5);
  }
  *(undefined4 *)(this + 0x50) = 0x7f7fffff;
  *(undefined4 *)(this + 0x54) = 0x7f7fffff;
  PhysicsShape::setDensity((PhysicsShape *)this,*(float *)param_3);
  puVar9 = *(undefined8 **)(this + 0x38);
  uVar22 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x70) = uVar22;
  puVar12 = *(undefined8 **)(this + 0x30);
  if (*(undefined8 **)(this + 0x30) == puVar9) {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_3 + 8);
  }
  else {
    do {
      puVar14 = puVar12 + 1;
                    /* try { // try from 0100b17c to 0110b1df has its CatchHandler @ 0100b284 */
      cpShapeSetElasticity(uVar22,*puVar12);
      puVar12 = puVar14;
    } while (puVar9 != puVar14);
    puVar9 = *(undefined8 **)(this + 0x30);
    puVar12 = *(undefined8 **)(this + 0x38);
    uVar22 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(this + 0x74) = uVar22;
    if (puVar9 != puVar12) {
      do {
        puVar14 = puVar9 + 1;
        cpShapeSetFriction(uVar22,*puVar9);
        puVar9 = puVar14;
      } while (puVar12 != puVar14);
      uVar7 = 1;
      goto LAB_0100b1e4;
    }
  }
  uVar7 = 1;
LAB_0100b1e4:
                    /* try { // try from 0100b1e4 to 0110b1fb has its CatchHandler @ 0100b280 */
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
                    /* try { // try from 0100b1fc to 0110b29f has its CatchHandler @ 0100b0bc */
  return;
}

