
/* cocos2d::PUDoEnableComponentEventHandler::handle(cocos2d::PUParticleSystem3D*,
   cocos2d::PUParticle3D*, float) */

void cocos2d::PUDoEnableComponentEventHandler::handle
               (PUParticleSystem3D *param_1,PUParticle3D *param_2,float param_3)

{
  PUParticleSystem3D *__s2;
  size_t __n;
  size_t sVar1;
  PUParticleSystem3D PVar2;
  PUParticleSystem3D PVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ParticleSystem3D *this;
  long *plVar7;
  PUEmitter *this_00;
  undefined8 *puVar8;
  long lVar9;
  PUParticleSystem3D *pPVar10;
  PUParticleSystem3D *__s1;
  size_t sVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 2:
    if (*(long **)(param_2 + 0x4c0) != (long *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x4c0) + 0x240))();
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      local_60 = 0;
      plVar7 = local_70;
      plVar12 = local_68;
      if ((&local_70 != (long **)puVar8) &&
         (std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          assign<cocos2d::Node**>
                    ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_70,
                     (Node **)*puVar8,(Node **)puVar8[1]), plVar12 = local_68, plVar7 = local_70,
         local_70 != local_68)) {
        do {
          Ref::retain((Ref *)*plVar7);
          plVar5 = local_68;
          plVar7 = plVar7 + 1;
        } while (plVar12 != plVar7);
        plVar7 = local_70;
        plVar12 = local_68;
        if (local_70 != local_68) {
          lVar9 = *local_70;
          plVar13 = local_70;
          if (lVar9 != 0) goto LAB_00e6227c;
          do {
            while( true ) {
              do {
                do {
                  do {
                    plVar13 = plVar13 + 1;
                    plVar7 = local_70;
                    plVar12 = local_68;
                    if (plVar13 == plVar5) goto joined_r0x00e6233c;
                    lVar9 = *plVar13;
                  } while (lVar9 == 0);
LAB_00e6227c:
                  this = (ParticleSystem3D *)
                         __dynamic_cast(lVar9,&Node::typeinfo,&PUParticleSystem3D::typeinfo,0);
                } while (this == (ParticleSystem3D *)0x0);
                pPVar10 = (PUParticleSystem3D *)(**(code **)(*(long *)this + 0x2c8))();
                PVar2 = *pPVar10;
                PVar3 = param_1[0x70];
                sVar11 = (size_t)((byte)PVar2 >> 1);
                __n = sVar11;
                if (((byte)PVar2 & 1) != 0) {
                  __n = *(size_t *)(pPVar10 + 8);
                }
                sVar1 = (ulong)((byte)PVar3 >> 1);
                if (((byte)PVar3 & 1) != 0) {
                  sVar1 = *(size_t *)(param_1 + 0x78);
                }
              } while (__n != sVar1);
              __s1 = *(PUParticleSystem3D **)(pPVar10 + 0x10);
              if (((byte)PVar2 & 1) == 0) {
                __s1 = pPVar10 + 1;
              }
              __s2 = param_1 + 0x71;
              if (((byte)PVar3 & 1) != 0) {
                __s2 = *(PUParticleSystem3D **)(param_1 + 0x80);
              }
              if (((byte)PVar2 & 1) != 0) break;
              while( true ) {
                if (__n == 0) goto LAB_00e62328;
                pPVar10 = pPVar10 + 1;
                if (*pPVar10 != *__s2) break;
                sVar11 = sVar11 - 1;
                __s2 = __s2 + 1;
                __n = sVar11;
              }
            }
          } while ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0));
LAB_00e62328:
          ParticleSystem3D::setEnabled(this,(bool)param_1[0x8c]);
          plVar7 = local_70;
          plVar12 = local_68;
        }
      }
joined_r0x00e6233c:
      for (; plVar5 = local_68, plVar7 != local_68; plVar7 = plVar7 + 1) {
        local_68 = plVar12;
        Ref::release((Ref *)*plVar7);
        plVar12 = local_68;
        local_68 = plVar5;
      }
      local_68 = local_70;
      if (local_70 != (long *)0x0) {
        operator_delete(local_70);
      }
    }
    break;
  case 3:
    this_00 = (PUEmitter *)
              PUParticleSystem3D::getEmitter
                        ((PUParticleSystem3D *)param_2,(basic_string *)(param_1 + 0x70));
    if (this_00 == (PUEmitter *)0x0) {
      if (*(long **)(param_2 + 0x4c0) == (long *)0x0) break;
      puVar8 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x4c0) + 0x240))();
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      local_60 = 0;
      if (&local_70 == (long **)puVar8) {
        plVar7 = (long *)0x0;
LAB_00e6264c:
        this_00 = (PUEmitter *)0x0;
        plVar12 = plVar7;
        plVar13 = local_68;
      }
      else {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        assign<cocos2d::Node**>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_70,
                   (Node **)*puVar8,(Node **)puVar8[1]);
        plVar12 = local_68;
        plVar7 = local_70;
        if (local_70 == local_68) goto LAB_00e6264c;
        do {
          Ref::retain((Ref *)*plVar7);
          plVar5 = local_68;
          plVar7 = plVar7 + 1;
        } while (plVar12 != plVar7);
        plVar7 = local_68;
        if (local_70 == local_68) goto LAB_00e6264c;
        lVar9 = *local_70;
        plVar15 = local_70;
        if (lVar9 != 0) goto LAB_00e62608;
        do {
          do {
            plVar15 = plVar15 + 1;
            if (plVar5 == plVar15) {
              this_00 = (PUEmitter *)0x0;
              plVar7 = local_70;
              plVar12 = local_70;
              plVar13 = local_68;
              goto joined_r0x00e626f4;
            }
            lVar9 = *plVar15;
          } while (lVar9 == 0);
LAB_00e62608:
          pPVar10 = (PUParticleSystem3D *)
                    __dynamic_cast(lVar9,&Node::typeinfo,&PUParticleSystem3D::typeinfo,0);
        } while ((pPVar10 == (PUParticleSystem3D *)0x0) ||
                (this_00 = (PUEmitter *)
                           PUParticleSystem3D::getEmitter(pPVar10,(basic_string *)(param_1 + 0x70)),
                plVar7 = local_70, plVar12 = local_70, plVar13 = local_68,
                this_00 == (PUEmitter *)0x0));
      }
joined_r0x00e626f4:
      for (; plVar5 = local_68, plVar7 != local_68; plVar7 = plVar7 + 1) {
        local_68 = plVar13;
        Ref::release((Ref *)*plVar7);
        plVar12 = local_70;
        plVar13 = local_68;
        local_68 = plVar5;
      }
      local_68 = plVar12;
      if (plVar12 != (long *)0x0) {
        operator_delete(plVar12);
      }
      if (this_00 == (PUEmitter *)0x0) break;
    }
    PUEmitter::setEnabled(this_00,(bool)param_1[0x8c]);
    break;
  case 4:
    lVar9 = PUParticleSystem3D::getAffector
                      ((PUParticleSystem3D *)param_2,(basic_string *)(param_1 + 0x70));
    if (lVar9 == 0) {
      if (*(long **)(param_2 + 0x4c0) == (long *)0x0) break;
      puVar8 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x4c0) + 0x240))();
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      local_60 = 0;
      if (&local_70 == (long **)puVar8) {
        plVar7 = (long *)0x0;
LAB_00e62634:
        lVar9 = 0;
        plVar12 = plVar7;
        plVar13 = local_68;
      }
      else {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        assign<cocos2d::Node**>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_70,
                   (Node **)*puVar8,(Node **)puVar8[1]);
        plVar12 = local_68;
        plVar7 = local_70;
        if (local_70 == local_68) goto LAB_00e62634;
        do {
          Ref::retain((Ref *)*plVar7);
          plVar5 = local_68;
          plVar7 = plVar7 + 1;
        } while (plVar12 != plVar7);
        plVar7 = local_68;
        if (local_70 == local_68) goto LAB_00e62634;
        lVar9 = *local_70;
        plVar15 = local_70;
        if (lVar9 != 0) goto LAB_00e624a0;
        do {
          do {
            plVar15 = plVar15 + 1;
            if (plVar5 == plVar15) {
              lVar9 = 0;
              plVar7 = local_70;
              plVar12 = local_70;
              plVar13 = local_68;
              goto joined_r0x00e62664;
            }
            lVar9 = *plVar15;
          } while (lVar9 == 0);
LAB_00e624a0:
          pPVar10 = (PUParticleSystem3D *)
                    __dynamic_cast(lVar9,&Node::typeinfo,&PUParticleSystem3D::typeinfo,0);
        } while ((pPVar10 == (PUParticleSystem3D *)0x0) ||
                (lVar9 = PUParticleSystem3D::getAffector(pPVar10,(basic_string *)(param_1 + 0x70)),
                plVar7 = local_70, plVar12 = local_70, plVar13 = local_68, lVar9 == 0));
      }
joined_r0x00e62664:
      for (; plVar5 = local_68, plVar7 != local_68; plVar7 = plVar7 + 1) {
        local_68 = plVar13;
        Ref::release((Ref *)*plVar7);
        plVar12 = local_70;
        plVar13 = local_68;
        local_68 = plVar5;
      }
      local_68 = plVar12;
      if (plVar12 != (long *)0x0) {
        operator_delete(plVar12);
      }
      if (lVar9 == 0) break;
    }
    *(PUParticleSystem3D *)(lVar9 + 0x30) = param_1[0x8c];
    break;
  case 5:
    plVar7 = (long *)PUParticleSystem3D::getObserver
                               ((PUParticleSystem3D *)param_2,(basic_string *)(param_1 + 0x70));
    if (plVar7 == (long *)0x0) {
      if (*(long **)(param_2 + 0x4c0) == (long *)0x0) break;
      puVar8 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x4c0) + 0x240))();
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      local_60 = 0;
      if (&local_70 == (long **)puVar8) {
        plVar12 = (long *)0x0;
LAB_00e62640:
        plVar7 = (long *)0x0;
        plVar5 = plVar12;
        plVar15 = local_68;
      }
      else {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        assign<cocos2d::Node**>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_70,
                   (Node **)*puVar8,(Node **)puVar8[1]);
        plVar5 = local_68;
        plVar12 = local_70;
        plVar7 = local_70;
        if (local_70 == local_68) goto LAB_00e62640;
        do {
          Ref::retain((Ref *)*plVar7);
          plVar13 = local_68;
          plVar7 = plVar7 + 1;
        } while (plVar5 != plVar7);
        plVar12 = local_68;
        if (local_70 == local_68) goto LAB_00e62640;
        lVar9 = *local_70;
        plVar14 = local_70;
        if (lVar9 != 0) goto LAB_00e62554;
        do {
          do {
            plVar14 = plVar14 + 1;
            if (plVar13 == plVar14) {
              plVar7 = (long *)0x0;
              plVar12 = local_70;
              plVar5 = local_70;
              plVar15 = local_68;
              goto joined_r0x00e626ac;
            }
            lVar9 = *plVar14;
          } while (lVar9 == 0);
LAB_00e62554:
          pPVar10 = (PUParticleSystem3D *)
                    __dynamic_cast(lVar9,&Node::typeinfo,&PUParticleSystem3D::typeinfo,0);
        } while ((pPVar10 == (PUParticleSystem3D *)0x0) ||
                (plVar7 = (long *)PUParticleSystem3D::getObserver
                                            (pPVar10,(basic_string *)(param_1 + 0x70)),
                plVar12 = local_70, plVar5 = local_70, plVar15 = local_68, plVar7 == (long *)0x0));
      }
joined_r0x00e626ac:
      for (; plVar13 = local_68, plVar12 != local_68; plVar12 = plVar12 + 1) {
        local_68 = plVar15;
        Ref::release((Ref *)*plVar12);
        plVar5 = local_70;
        plVar15 = local_68;
        local_68 = plVar13;
      }
      local_68 = plVar5;
      if (plVar5 != (long *)0x0) {
        operator_delete(plVar5);
      }
      if (plVar7 == (long *)0x0) break;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,param_1[0x8c]);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

