
/* cocos2d::PhysicsShapeEdgeChain::init(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial const&,
   float) */

void __thiscall
cocos2d::PhysicsShapeEdgeChain::init
          (PhysicsShapeEdgeChain *this,Vec2 *param_1,int param_2,PhysicsMaterial *param_3,
          float param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  cpShape *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 in_register_00005004;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  cpShape *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x48) = 7;
  uVar10 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
  if ((ulong)(long)param_2 >> 0x3d != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  puVar4 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
  if (0 < param_2) {
    uVar10 = (ulong)(uint)param_2;
    if ((uint)param_2 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar10 & 0xfffffff8;
      puVar9 = (undefined8 *)(param_1 + 0x20);
      puVar11 = (undefined8 *)(puVar4 + 8);
      uVar12 = uVar8;
      do {
        uVar6 = puVar9[-4];
        uVar15 = puVar9[-1];
        uVar14 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        uVar19 = puVar9[3];
        uVar18 = puVar9[2];
        uVar12 = uVar12 - 8;
        puVar11[-3] = puVar9[-3];
        puVar11[-4] = uVar6;
        puVar11[-1] = uVar15;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar17;
        *puVar11 = uVar16;
        puVar11[3] = uVar19;
        puVar11[2] = uVar18;
        puVar9 = puVar9 + 8;
        puVar11 = puVar11 + 8;
      } while (uVar12 != 0);
      if (uVar8 == uVar10) goto LAB_0100b538;
    }
    lVar7 = uVar10 - uVar8;
    puVar9 = (undefined8 *)(puVar4 + uVar8 * 2);
    puVar11 = (undefined8 *)(param_1 + uVar8 * 8);
    do {
      lVar7 = lVar7 + -1;
      *puVar9 = *puVar11;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
  }
LAB_0100b538:
  if ((int)(param_2 - 1U) < 1) {
    if (puVar4 == (undefined4 *)0x0) goto LAB_0100b5f0;
  }
  else {
    uVar10 = (ulong)(param_2 - 1U);
    puVar3 = puVar4;
    do {
      pcVar5 = (cpShape *)
               cpSegmentShapeNew(*puVar3,puVar3[1],puVar3[2],puVar3[3],
                                 CONCAT44(in_register_00005004,param_4),DAT_01792ca8);
      if (pcVar5 == (cpShape *)0x0) {
        operator_delete__(puVar4);
        uVar6 = 0;
        goto LAB_0100b67c;
      }
      cpShapeSetUserData(pcVar5,this);
      cpShapeSetElasticity(0x3f800000,pcVar5);
      cpShapeSetFriction(0x3f800000,pcVar5);
      local_80 = pcVar5;
      cpShapeSetUserData(pcVar5,this);
      cpShapeSetFilter(pcVar5,(long)*(int *)(this + 0x88),0xffffffffffffffff);
      plVar1 = *(long **)(this + 0x38);
      if (plVar1 == *(long **)(this + 0x40)) {
        std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
        __push_back_slow_path<cpShape*const&>
                  ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_80);
      }
      else {
        *plVar1 = (long)pcVar5;
        *(long **)(this + 0x38) = plVar1 + 1;
      }
      uVar10 = uVar10 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar10 != 0);
  }
  operator_delete__(puVar4);
LAB_0100b5f0:
  *(undefined4 *)(this + 0x50) = 0x7f7fffff;
  *(undefined4 *)(this + 0x54) = 0x7f7fffff;
  PhysicsShape::setDensity((PhysicsShape *)this,*(float *)param_3);
  puVar9 = *(undefined8 **)(this + 0x38);
  uVar20 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x70) = uVar20;
  puVar11 = *(undefined8 **)(this + 0x30);
  if (*(undefined8 **)(this + 0x30) == puVar9) {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_3 + 8);
  }
  else {
    do {
      puVar13 = puVar11 + 1;
      cpShapeSetElasticity(uVar20,*puVar11);
      puVar11 = puVar13;
    } while (puVar9 != puVar13);
    puVar9 = *(undefined8 **)(this + 0x30);
    puVar11 = *(undefined8 **)(this + 0x38);
    uVar20 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(this + 0x74) = uVar20;
    for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      cpShapeSetFriction(uVar20,*puVar9);
    }
  }
  uVar6 = 1;
LAB_0100b67c:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

