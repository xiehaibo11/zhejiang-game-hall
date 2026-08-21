
/* cocos2d::PUDoPlacementParticleEventHandler::handle(cocos2d::PUParticleSystem3D*,
   cocos2d::PUParticle3D*, float) */

void cocos2d::PUDoPlacementParticleEventHandler::handle
               (PUParticleSystem3D *param_1,PUParticle3D *param_2,float param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  PUEmitter *pPVar5;
  long lVar6;
  undefined8 *puVar7;
  PUParticleSystem3D *this;
  long in_x2;
  long *plVar8;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (in_x2 == 0) goto LAB_00e632fc;
  if (param_1[0xa8] == (PUParticleSystem3D)0x0) {
    lVar6 = PUParticleSystem3D::getEmitter
                      ((PUParticleSystem3D *)param_2,(basic_string *)(param_1 + 0x78));
    if (lVar6 == 0) {
      if (*(long **)(param_2 + 0x4c0) == (long *)0x0) goto LAB_00e632fc;
      puVar7 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x4c0) + 0x240))();
      local_80 = (long *)0x0;
      local_78 = (long *)0x0;
      local_70 = 0;
      if ((&local_80 == (long **)puVar7) ||
         (std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          assign<cocos2d::Node**>
                    ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_80,
                     (Node **)*puVar7,(Node **)puVar7[1]), plVar2 = local_78, plVar8 = local_80,
         local_80 == local_78)) {
LAB_00e6342c:
        lVar6 = 0;
        plVar2 = local_80;
        plVar3 = local_78;
      }
      else {
        do {
          Ref::retain((Ref *)*plVar8);
          plVar4 = local_78;
          plVar8 = plVar8 + 1;
        } while (plVar2 != plVar8);
        if (local_80 == local_78) goto LAB_00e6342c;
        lVar6 = *local_80;
        plVar8 = local_80;
        if (lVar6 != 0) goto LAB_00e633f4;
        do {
          do {
            plVar8 = plVar8 + 1;
            if (plVar4 == plVar8) goto LAB_00e6342c;
            lVar6 = *plVar8;
          } while (lVar6 == 0);
LAB_00e633f4:
          this = (PUParticleSystem3D *)
                 __dynamic_cast(lVar6,&Node::typeinfo,&PUParticleSystem3D::typeinfo,0);
        } while ((this == (PUParticleSystem3D *)0x0) ||
                (lVar6 = PUParticleSystem3D::getEmitter(this,(basic_string *)(param_1 + 0x78)),
                param_2 = (PUParticle3D *)this, plVar2 = local_80, plVar3 = local_78, lVar6 == 0));
      }
      for (; plVar8 = local_78, plVar2 != local_78; plVar2 = plVar2 + 1) {
        local_78 = plVar3;
        Ref::release((Ref *)*plVar2);
        plVar3 = local_78;
        local_78 = plVar8;
      }
      local_78 = local_80;
      if (local_80 != (long *)0x0) {
        operator_delete(local_80);
      }
      if (lVar6 == 0) goto LAB_00e632fc;
    }
    *(PUParticle3D **)(param_1 + 0x98) = param_2;
    *(long *)(param_1 + 0xa0) = lVar6;
    if (param_2 != (PUParticle3D *)0x0) {
      PUParticleSystem3D::addListener((PUParticleSystem3D *)param_2,(PUListener *)(param_1 + 0x70));
    }
    param_1[0xa8] = (PUParticleSystem3D)0x1;
    pPVar5 = *(PUEmitter **)(param_1 + 0x98);
  }
  else {
    pPVar5 = *(PUEmitter **)(param_1 + 0x98);
  }
  if (pPVar5 != (PUEmitter *)0x0) {
    *(long *)(param_1 + 0xb0) = in_x2;
    PUParticleSystem3D::forceEmission(pPVar5,(uint)*(undefined8 *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
LAB_00e632fc:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

