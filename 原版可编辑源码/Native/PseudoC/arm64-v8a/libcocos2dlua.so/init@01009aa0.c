
/* cocos2d::PhysicsShapeEdgeSegment::init(cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::PhysicsMaterial const&, float) */

void __thiscall
cocos2d::PhysicsShapeEdgeSegment::init
          (PhysicsShapeEdgeSegment *this,Vec2 *param_1,Vec2 *param_2,PhysicsMaterial *param_3,
          float param_4)

{
  long *plVar1;
  long lVar2;
  cpShape *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  undefined4 in_register_00005004;
  undefined4 uVar8;
  cpShape *local_50;
  long local_48;
  undefined8 *puVar6;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x48) = 4;
  pcVar3 = (cpShape *)
           cpSegmentShapeNew(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                             *(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                             CONCAT44(in_register_00005004,param_4),DAT_01792ca8);
  uVar4 = 0;
  if (pcVar3 != (cpShape *)0x0) {
    cpShapeSetUserData(pcVar3,this);
    local_50 = pcVar3;
    cpShapeSetUserData(pcVar3,this);
    cpShapeSetFilter(pcVar3,(long)*(int *)(this + 0x88),0xffffffffffffffff);
    plVar1 = *(long **)(this + 0x38);
    if (plVar1 == *(long **)(this + 0x40)) {
      std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
      __push_back_slow_path<cpShape*const&>
                ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_50);
    }
    else {
      *plVar1 = (long)pcVar3;
      *(long **)(this + 0x38) = plVar1 + 1;
    }
    *(undefined4 *)(this + 0x50) = 0x7f7fffff;
    *(undefined4 *)(this + 0x54) = 0x7f7fffff;
    PhysicsShape::setDensity((PhysicsShape *)this,*(float *)param_3);
    puVar7 = *(undefined8 **)(this + 0x38);
    uVar8 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x70) = uVar8;
    puVar5 = *(undefined8 **)(this + 0x30);
    if (*(undefined8 **)(this + 0x30) == puVar7) {
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_3 + 8);
    }
    else {
      do {
        puVar6 = puVar5 + 1;
        cpShapeSetElasticity(uVar8,*puVar5);
        puVar5 = puVar6;
      } while (puVar7 != puVar6);
      puVar7 = *(undefined8 **)(this + 0x30);
      puVar5 = *(undefined8 **)(this + 0x38);
      uVar8 = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(this + 0x74) = uVar8;
      for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
        cpShapeSetFriction(uVar8,*puVar7);
      }
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

