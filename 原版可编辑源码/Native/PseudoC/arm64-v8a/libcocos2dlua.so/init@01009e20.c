
/* cocos2d::PhysicsShapeBox::init(cocos2d::Size const&, cocos2d::PhysicsMaterial const&,
   cocos2d::Vec2 const&, float) */

void cocos2d::PhysicsShapeBox::init
               (Size *param_1,PhysicsMaterial *param_2,Vec2 *param_3,float param_4)

{
  long *plVar1;
  long lVar2;
  cpShape *pcVar3;
  undefined8 uVar4;
  undefined8 *in_x3;
  undefined8 *puVar5;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 in_register_00005004;
  float fVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  cpShape *local_70;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  float local_4c;
  long local_48;
  undefined8 *puVar6;
  
                    /* try { // try from 01009e20 to 01109e5b has its CatchHandler @ 01009a98 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = 2;
                    /* try { // try from 01009e5c to 01109e63 has its CatchHandler @ 01009e64 */
  fVar10 = (float)*(undefined8 *)param_2;
                    /* catch() { ... } // from try @ 01009c4c with catch @ 01009e64
                       catch() { ... } // from try @ 01009e5c with catch @ 01009e64
                       try { // try from 01009e64 to 01109e93 has its CatchHandler @ 01009a98 */
  local_68 = fVar10 * -0.5;
  fVar8 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fStack_64 = fVar8 * -0.5;
                    /* catch() { ... } // from try @ 01009cc8 with catch @ 01009e78 */
  local_5c = NEON_rev64(CONCAT44(fVar8 * 0.5,fVar10 * 0.5),4);
  local_80 = *in_x3;
  uStack_88 = 0x3f80000000000000;
  local_90 = 0x3f800000;
  local_60 = local_68;
  uStack_54 = local_5c;
  local_4c = fStack_64;
  pcVar3 = (cpShape *)
           cpPolyShapeNew(CONCAT44(in_register_00005004,param_4),DAT_01792ca8,4,&local_68,&local_90)
  ;
  uVar4 = 0;
  if (pcVar3 != (cpShape *)0x0) {
    cpShapeSetUserData(pcVar3,param_1);
    local_70 = pcVar3;
    cpShapeSetUserData(pcVar3,param_1);
    cpShapeSetFilter(pcVar3,(long)*(int *)(param_1 + 0x88),0xffffffffffffffff);
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 == *(long **)(param_1 + 0x40)) {
      std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
      __push_back_slow_path<cpShape*const&>
                ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(param_1 + 0x30),&local_70);
    }
    else {
      *plVar1 = (long)pcVar3;
      *(long **)(param_1 + 0x38) = plVar1 + 1;
    }
    fVar8 = (float)(**(code **)(*(long *)param_1 + 0x28))(param_1);
    *(float *)(param_1 + 0x4c) = fVar8;
    fVar10 = 3.4028235e+38;
    if (*(float *)param_3 != 3.4028235e+38) {
      fVar10 = fVar8 * *(float *)param_3;
    }
    *(float *)(param_1 + 0x50) = fVar10;
    uVar9 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    *(undefined4 *)(param_1 + 0x54) = uVar9;
    PhysicsShape::setDensity((PhysicsShape *)param_1,*(float *)param_3);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    uVar9 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_1 + 0x70) = uVar9;
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x30) == puVar7) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_3 + 8);
    }
    else {
      do {
        puVar6 = puVar5 + 1;
        cpShapeSetElasticity(uVar9,*puVar5);
        puVar5 = puVar6;
                    /* try { // try from 01009f80 to 01109ffb has its CatchHandler @ 01009f80
                       catch() { ... } // from try @ 01009f80 with catch @ 01009f80
                       catch() { ... } // from try @ 0100a074 with catch @ 01009f80
                       catch() { ... } // from try @ 0100a1cc with catch @ 01009f80
                       catch() { ... } // from try @ 0100a24c with catch @ 01009f80
                       catch() { ... } // from try @ 0100a298 with catch @ 01009f80
                       catch() { ... } // from try @ 0100a2d4 with catch @ 01009f80 */
      } while (puVar7 != puVar6);
      puVar7 = *(undefined8 **)(param_1 + 0x30);
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      uVar9 = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(param_1 + 0x74) = uVar9;
      for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
        cpShapeSetFriction(uVar9,*puVar7);
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

