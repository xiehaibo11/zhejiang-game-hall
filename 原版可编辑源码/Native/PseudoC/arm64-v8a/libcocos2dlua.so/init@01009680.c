
/* cocos2d::PhysicsShapeCircle::init(float, cocos2d::PhysicsMaterial const&, cocos2d::Vec2 const&)
    */

void __thiscall
cocos2d::PhysicsShapeCircle::init
          (PhysicsShapeCircle *this,float param_1,PhysicsMaterial *param_2,Vec2 *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  cpShape *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_register_00005004;
  cpShape *local_50;
  long local_48;
  undefined8 *puVar7;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x48) = 1;
  pcVar4 = (cpShape *)
           cpCircleShapeNew(CONCAT44(in_register_00005004,param_1),*(undefined4 *)param_3,
                            *(undefined4 *)(param_3 + 4),DAT_01792ca8);
  uVar5 = 0;
  if (pcVar4 != (cpShape *)0x0) {
    cpShapeSetUserData(pcVar4,this);
    local_50 = pcVar4;
    cpShapeSetUserData(pcVar4,this);
                    /* catch() { ... } // from try @ 0100973c with catch @ 010096ec */
    cpShapeSetFilter(pcVar4,(long)*(int *)(this + 0x88),0xffffffffffffffff);
    plVar1 = *(long **)(this + 0x38);
    if (plVar1 == *(long **)(this + 0x40)) {
      std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
      __push_back_slow_path<cpShape*const&>
                ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_50);
    }
    else {
      *plVar1 = (long)pcVar4;
      *(long **)(this + 0x38) = plVar1 + 1;
    }
    fVar9 = (float)(**(code **)(*(long *)this + 0x28))(this);
    *(float *)(this + 0x4c) = fVar9;
                    /* try { // try from 01009730 to 0110973b has its CatchHandler @ 010097d0 */
                    /* try { // try from 0100973c to 011097eb has its CatchHandler @ 010096ec */
    fVar3 = 3.4028235e+38;
    if (*(float *)param_2 != 3.4028235e+38) {
      fVar3 = fVar9 * *(float *)param_2;
    }
    *(float *)(this + 0x50) = fVar3;
    uVar10 = (**(code **)(*(long *)this + 0x10))(this);
    *(undefined4 *)(this + 0x54) = uVar10;
    PhysicsShape::setDensity((PhysicsShape *)this,*(float *)param_2);
    puVar8 = *(undefined8 **)(this + 0x38);
    uVar10 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x70) = uVar10;
    puVar6 = *(undefined8 **)(this + 0x30);
    if (*(undefined8 **)(this + 0x30) == puVar8) {
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_2 + 8);
    }
    else {
      do {
        puVar7 = puVar6 + 1;
        cpShapeSetElasticity(uVar10,*puVar6);
        puVar6 = puVar7;
      } while (puVar8 != puVar7);
      puVar8 = *(undefined8 **)(this + 0x30);
      puVar6 = *(undefined8 **)(this + 0x38);
      uVar10 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(this + 0x74) = uVar10;
      for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
        cpShapeSetFriction(uVar10,*puVar8);
      }
    }
    uVar5 = 1;
  }
                    /* catch() { ... } // from try @ 01009730 with catch @ 010097d0 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

