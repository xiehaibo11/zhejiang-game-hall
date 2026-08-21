
/* cocos2d::PhysicsShapePolygon::init(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial const&,
   cocos2d::Vec2 const&, float) */

void __thiscall
cocos2d::PhysicsShapePolygon::init
          (PhysicsShapePolygon *this,Vec2 *param_1,int param_2,PhysicsMaterial *param_3,
          Vec2 *param_4,float param_5)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  void *pvVar4;
  cpShape *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_register_00005004;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  cpShape *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0100a210 to 0110a217 has its CatchHandler @ 0100a3b0 */
                    /* try { // try from 0100a224 to 0110a22b has its CatchHandler @ 0100a2f0 */
  *(undefined4 *)(this + 0x48) = 3;
  uVar7 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
  if ((ulong)(long)param_2 >> 0x3d != 0) {
    uVar7 = 0xffffffffffffffff;
  }
                    /* try { // try from 0100a240 to 0110a24b has its CatchHandler @ 0100a2ec */
  pvVar4 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
                    /* try { // try from 0100a24c to 0110a28f has its CatchHandler @ 01009f80 */
  if (0 < param_2) {
    uVar7 = (ulong)(uint)param_2;
    if ((uint)param_2 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0xfffffff8;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      puVar11 = (undefined8 *)((long)pvVar4 + 0x20);
      uVar12 = uVar9;
      do {
        uVar6 = puVar10[-4];
        uVar17 = puVar10[-1];
        uVar16 = puVar10[-2];
        uVar19 = puVar10[1];
        uVar18 = *puVar10;
        uVar21 = puVar10[3];
        uVar20 = puVar10[2];
        uVar12 = uVar12 - 8;
        puVar11[-3] = puVar10[-3];
        puVar11[-4] = uVar6;
        puVar11[-1] = uVar17;
        puVar11[-2] = uVar16;
        puVar11[1] = uVar19;
        *puVar11 = uVar18;
        puVar11[3] = uVar21;
        puVar11[2] = uVar20;
        puVar10 = puVar10 + 8;
        puVar11 = puVar11 + 8;
                    /* try { // try from 0100a290 to 0110a297 has its CatchHandler @ 0100a3b0 */
      } while (uVar12 != 0);
                    /* try { // try from 0100a298 to 0110a2cb has its CatchHandler @ 01009f80 */
      if (uVar9 == uVar7) goto LAB_0100a2bc;
    }
    lVar8 = uVar7 - uVar9;
    puVar10 = (undefined8 *)((long)pvVar4 + uVar9 * 8);
    puVar11 = (undefined8 *)(param_1 + uVar9 * 8);
    do {
      lVar8 = lVar8 + -1;
      *puVar10 = *puVar11;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar8 != 0);
  }
LAB_0100a2bc:
  local_70 = *(undefined8 *)param_4;
                    /* try { // try from 0100a2cc to 0110a2d3 has its CatchHandler @ 0100a2d4 */
  uStack_78 = 0x3f80000000000000;
  local_80 = 0x3f800000;
                    /* catch() { ... } // from try @ 0100a06c with catch @ 0100a2d4
                       catch() { ... } // from try @ 0100a2cc with catch @ 0100a2d4
                       try { // try from 0100a2d4 to 0110a44b has its CatchHandler @ 01009f80 */
  pcVar5 = (cpShape *)
           cpPolyShapeNew(CONCAT44(in_register_00005004,param_5),DAT_01792ca8,param_2,pvVar4,
                          &local_80);
                    /* catch() { ... } // from try @ 0100a240 with catch @ 0100a2ec */
                    /* catch() { ... } // from try @ 0100a224 with catch @ 0100a2f0 */
  if (pvVar4 != (void *)0x0) {
                    /* catch() { ... } // from try @ 0100a1c0 with catch @ 0100a2f4 */
    operator_delete__(pvVar4);
  }
  if (pcVar5 == (cpShape *)0x0) {
                    /* catch() { ... } // from try @ 0100a124 with catch @ 0100a344 */
    uVar6 = 0;
  }
  else {
    cpShapeSetUserData(pcVar5,this);
    local_60 = pcVar5;
    cpShapeSetUserData(pcVar5,this);
    cpShapeSetFilter(pcVar5,(long)*(int *)(this + 0x88),0xffffffffffffffff);
    plVar1 = *(long **)(this + 0x38);
    if (plVar1 == *(long **)(this + 0x40)) {
                    /* catch() { ... } // from try @ 01009ffc with catch @ 0100a34c */
      std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
      __push_back_slow_path<cpShape*const&>
                ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_60);
    }
    else {
                    /* catch() { ... } // from try @ 0100a1a4 with catch @ 0100a338 */
      *plVar1 = (long)pcVar5;
                    /* catch() { ... } // from try @ 0100a130 with catch @ 0100a33c */
      *(long **)(this + 0x38) = plVar1 + 1;
    }
    fVar14 = (float)(**(code **)(*(long *)this + 0x28))(this);
    *(float *)(this + 0x4c) = fVar14;
    fVar3 = 3.4028235e+38;
    if (*(float *)param_3 != 3.4028235e+38) {
      fVar3 = fVar14 * *(float *)param_3;
    }
    *(float *)(this + 0x50) = fVar3;
                    /* catch() { ... } // from try @ 0100a0dc with catch @ 0100a398 */
    uVar15 = (**(code **)(*(long *)this + 0x10))(this);
    *(undefined4 *)(this + 0x54) = uVar15;
                    /* catch() { ... } // from try @ 0100a13c with catch @ 0100a3a8 */
    PhysicsShape::setDensity((PhysicsShape *)this,*(float *)param_3);
    puVar10 = *(undefined8 **)(this + 0x38);
                    /* catch() { ... } // from try @ 0100a178 with catch @ 0100a3b0
                       catch() { ... } // from try @ 0100a210 with catch @ 0100a3b0
                       catch() { ... } // from try @ 0100a290 with catch @ 0100a3b0 */
    uVar15 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x70) = uVar15;
    puVar11 = *(undefined8 **)(this + 0x30);
    if (*(undefined8 **)(this + 0x30) == puVar10) {
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_3 + 8);
    }
    else {
      do {
        puVar13 = puVar11 + 1;
        cpShapeSetElasticity(uVar15,*puVar11);
        puVar11 = puVar13;
      } while (puVar10 != puVar13);
      puVar10 = *(undefined8 **)(this + 0x30);
      puVar11 = *(undefined8 **)(this + 0x38);
      uVar15 = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(this + 0x74) = uVar15;
      for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
        cpShapeSetFriction(uVar15,*puVar10);
      }
    }
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

