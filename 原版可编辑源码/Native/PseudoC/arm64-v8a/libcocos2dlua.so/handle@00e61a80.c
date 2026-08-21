
/* cocos2d::PUDoAffectorEventHandler::handle(cocos2d::PUParticleSystem3D*, cocos2d::PUParticle3D*,
   float) */

void __thiscall
cocos2d::PUDoAffectorEventHandler::handle
          (PUDoAffectorEventHandler *this,PUParticleSystem3D *param_1,PUParticle3D *param_2,
          float param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  PUParticleSystem3D *this_00;
  long *plVar8;
  long *plVar9;
  undefined4 in_register_00005004;
  undefined8 uVar10;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long local_68;
  
  uVar10 = CONCAT44(in_register_00005004,param_3);
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)PUParticleSystem3D::getAffector(param_1,(basic_string *)(this + 0x70));
  if (plVar5 == (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x4c0) + 0x240))();
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    local_70 = 0;
    if (&local_80 == (long **)puVar6) {
      plVar8 = (long *)0x0;
LAB_00e61b8c:
      plVar5 = (long *)0x0;
      plVar2 = plVar8;
      plVar3 = local_78;
    }
    else {
      std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
      assign<cocos2d::Node**>
                ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_80,
                 (Node **)*puVar6,(Node **)puVar6[1]);
      plVar2 = local_78;
      plVar8 = local_80;
      plVar5 = local_80;
      if (local_80 == local_78) goto LAB_00e61b8c;
      do {
        Ref::retain((Ref *)*plVar5);
        plVar4 = local_78;
        plVar5 = plVar5 + 1;
      } while (plVar2 != plVar5);
      plVar8 = local_78;
      if (local_80 == local_78) goto LAB_00e61b8c;
      lVar7 = *local_80;
      plVar9 = local_80;
      if (lVar7 != 0) goto LAB_00e61b60;
      do {
        do {
          plVar9 = plVar9 + 1;
          if (plVar4 == plVar9) {
            plVar5 = (long *)0x0;
            plVar8 = local_80;
            plVar2 = local_80;
            plVar3 = local_78;
            goto joined_r0x00e61ba4;
          }
          lVar7 = *plVar9;
        } while (lVar7 == 0);
LAB_00e61b60:
        this_00 = (PUParticleSystem3D *)
                  __dynamic_cast(lVar7,&Node::typeinfo,&PUParticleSystem3D::typeinfo,0);
      } while ((this_00 == (PUParticleSystem3D *)0x0) ||
              (plVar5 = (long *)PUParticleSystem3D::getAffector
                                          (this_00,(basic_string *)(this + 0x70)), plVar8 = local_80
              , plVar2 = local_80, plVar3 = local_78, plVar5 == (long *)0x0));
    }
joined_r0x00e61ba4:
    for (; plVar4 = local_78, plVar8 != local_78; plVar8 = plVar8 + 1) {
      local_78 = plVar3;
      Ref::release((Ref *)*plVar8);
      plVar2 = local_80;
      plVar3 = local_78;
      local_78 = plVar4;
    }
    local_78 = plVar2;
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
    }
    if (plVar5 == (long *)0x0) goto LAB_00e61c3c;
  }
  if (this[0x88] == (PUDoAffectorEventHandler)0x0) {
    (**(code **)(*plVar5 + 0x58))(uVar10,plVar5,param_2);
  }
  else {
    (**(code **)(*plVar5 + 0x50))(uVar10,plVar5);
    (**(code **)(*plVar5 + 0x58))(uVar10,plVar5,param_2);
    (**(code **)(*plVar5 + 0x60))(uVar10,plVar5);
  }
LAB_00e61c3c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

