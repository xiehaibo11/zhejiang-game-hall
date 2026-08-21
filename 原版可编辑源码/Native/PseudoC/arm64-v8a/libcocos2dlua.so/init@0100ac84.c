
/* cocos2d::PhysicsShapeEdgeBox::init(cocos2d::Size const&, cocos2d::PhysicsMaterial const&, float,
   cocos2d::Vec2 const&) */

void __thiscall
cocos2d::PhysicsShapeEdgeBox::init
          (PhysicsShapeEdgeBox *this,Size *param_1,PhysicsMaterial *param_2,float param_3,
          Vec2 *param_4)

{
  long *plVar1;
  long lVar2;
  cpShape *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  undefined4 in_register_00005004;
  float fVar11;
  undefined4 uVar12;
  cpShape *local_90;
  float local_88 [7];
  float fStack_6c;
  long local_68;
  undefined8 *puVar6;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x48) = 5;
  uVar8 = 1;
  pfVar9 = local_88 + 3;
  fVar10 = *(float *)param_4 - *(float *)param_1 * 0.5;
  fVar11 = *(float *)(param_4 + 4) - *(float *)(param_1 + 4) * 0.5;
  local_88[2] = *(float *)param_1 * 0.5 + *(float *)param_4;
  local_88[5] = *(float *)(param_1 + 4) * 0.5 + *(float *)(param_4 + 4);
  local_88[0] = fVar10;
  local_88[1] = fVar11;
  local_88[3] = fVar11;
  local_88[4] = local_88[2];
  local_88[6] = fVar10;
  fStack_6c = local_88[5];
  while( true ) {
    pcVar3 = (cpShape *)
             cpSegmentShapeNew(fVar10,fVar11,local_88[(uVar8 & 3) * 2],local_88[(uVar8 & 3) * 2 + 1]
                               ,CONCAT44(in_register_00005004,param_3),DAT_01792ca8);
    uVar4 = 0;
    if (pcVar3 == (cpShape *)0x0) goto LAB_0100ae18;
    cpShapeSetUserData(pcVar3,this);
    local_90 = pcVar3;
    cpShapeSetUserData(pcVar3,this);
    cpShapeSetFilter(pcVar3,(long)*(int *)(this + 0x88),0xffffffffffffffff);
    plVar1 = *(long **)(this + 0x38);
    if (plVar1 == *(long **)(this + 0x40)) {
      std::__ndk1::vector<cpShape*,std::__ndk1::allocator<cpShape*>>::
      __push_back_slow_path<cpShape*const&>
                ((vector<cpShape*,std::__ndk1::allocator<cpShape*>> *)(this + 0x30),&local_90);
    }
    else {
      *plVar1 = (long)pcVar3;
      *(long **)(this + 0x38) = plVar1 + 1;
    }
    if (uVar8 == 4) break;
    fVar10 = pfVar9[-1];
    fVar11 = *pfVar9;
    uVar8 = uVar8 + 1;
    pfVar9 = pfVar9 + 2;
  }
  *(undefined4 *)(this + 0x50) = 0x7f7fffff;
  *(undefined4 *)(this + 0x54) = 0x7f7fffff;
  PhysicsShape::setDensity((PhysicsShape *)this,*(float *)param_2);
  puVar7 = *(undefined8 **)(this + 0x38);
  uVar12 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x70) = uVar12;
  puVar5 = *(undefined8 **)(this + 0x30);
  if (*(undefined8 **)(this + 0x30) == puVar7) {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_2 + 8);
  }
  else {
    do {
      puVar6 = puVar5 + 1;
      cpShapeSetElasticity(uVar12,*puVar5);
      puVar5 = puVar6;
    } while (puVar7 != puVar6);
    puVar7 = *(undefined8 **)(this + 0x30);
    puVar5 = *(undefined8 **)(this + 0x38);
    uVar12 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(this + 0x74) = uVar12;
    for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
      cpShapeSetFriction(uVar12,*puVar7);
    }
  }
  uVar4 = 1;
LAB_0100ae18:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

