
/* cocos2d::PUParticleSystem3D::copyAttributesTo(cocos2d::PUParticleSystem3D*) */

void __thiscall
cocos2d::PUParticleSystem3D::copyAttributesTo(PUParticleSystem3D *this,PUParticleSystem3D *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  Particle3DRender *pPVar4;
  PUAffectorManager *this_00;
  Particle3DAffector *pPVar5;
  PUEmitterManager *this_01;
  PUObserverManager *this_02;
  Ref *pRVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  PUParticleSystem3D *pPVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  Ref *local_b8 [2];
  void *local_a8;
  DataPool<cocos2d::Particle3D> aDStack_a0 [8];
  long local_98;
  long *plStack_90;
  long local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar12 = *(undefined8 **)(param_1 + 0x380);
  puVar13 = *(undefined8 **)(param_1 + 0x388);
  if (puVar12 != puVar13) {
    do {
      puVar14 = puVar12 + 1;
      Ref::release((Ref *)*puVar12);
      puVar12 = puVar14;
    } while (puVar13 != puVar14);
    puVar12 = *(undefined8 **)(param_1 + 0x380);
  }
  *(undefined8 **)(param_1 + 0x388) = puVar12;
  ParticleSystem3D::removeAllAffector((ParticleSystem3D *)param_1);
  puVar12 = *(undefined8 **)(param_1 + 0x398);
  puVar13 = *(undefined8 **)(param_1 + 0x3a0);
  if (puVar12 != puVar13) {
    do {
      puVar14 = puVar12 + 1;
      Ref::release((Ref *)*puVar12);
      puVar12 = puVar14;
    } while (puVar13 != puVar14);
    puVar12 = *(undefined8 **)(param_1 + 0x398);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x408);
  puVar14 = *(undefined8 **)(param_1 + 0x410);
  *(undefined8 **)(param_1 + 0x3a0) = puVar12;
  if (puVar13 != puVar14) {
    do {
      puVar12 = puVar13 + 1;
      Ref::release((Ref *)*puVar13);
      puVar13 = puVar12;
    } while (puVar14 != puVar12);
    puVar13 = *(undefined8 **)(param_1 + 0x408);
  }
  *(undefined8 **)(param_1 + 0x410) = puVar13;
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_1 + 0x420);
  DataPool<cocos2d::Particle3D>::removeAllDatas((DataPool<cocos2d::Particle3D> *)(param_1 + 0x330));
  plVar16 = *(long **)(param_1 + 0x3c0);
  if (plVar16 != (long *)0x0) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_b8,(basic_string *)(plVar16 + 2));
      DataPool<cocos2d::Particle3D>::DataPool(aDStack_a0,(DataPool *)(plVar16 + 5));
      DataPool<cocos2d::Particle3D>::removeAllDatas(aDStack_a0);
      if (local_70 != 0) {
        lVar9 = *plStack_78;
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_80 + 8);
        **(long **)(local_80 + 8) = lVar9;
        local_70 = 0;
        plVar3 = plStack_78;
        while (plVar3 != &local_80) {
          plVar15 = (long *)plVar3[1];
          operator_delete(plVar3);
          plVar3 = plVar15;
        }
      }
      if (local_88 != 0) {
        lVar9 = *plStack_90;
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_98 + 8);
        **(long **)(local_98 + 8) = lVar9;
        local_88 = 0;
        plVar3 = plStack_90;
        while (plVar3 != &local_98) {
          plVar15 = (long *)plVar3[1];
          operator_delete(plVar3);
          plVar3 = plVar15;
        }
      }
      if (((ulong)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  plVar16 = *(long **)(param_1 + 1000);
  if (plVar16 != (long *)0x0) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_b8,(basic_string *)(plVar16 + 2));
      DataPool<cocos2d::Particle3D>::DataPool(aDStack_a0,(DataPool *)(plVar16 + 5));
      DataPool<cocos2d::Particle3D>::removeAllDatas(aDStack_a0);
      if (local_70 != 0) {
                    /* try { // try from 00e1f570 to 00f1f59b has its CatchHandler @ 00e1f694 */
        lVar9 = *plStack_78;
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_80 + 8);
        **(long **)(local_80 + 8) = lVar9;
        local_70 = 0;
        plVar3 = plStack_78;
        while (plVar3 != &local_80) {
          plVar15 = (long *)plVar3[1];
          operator_delete(plVar3);
          plVar3 = plVar15;
        }
      }
      if (local_88 != 0) {
        lVar9 = *plStack_90;
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_98 + 8);
                    /* try { // try from 00e1f5c8 to 00f1f5cf has its CatchHandler @ 00e1f65c */
        **(long **)(local_98 + 8) = lVar9;
        local_88 = 0;
        plVar3 = plStack_90;
        while (plVar3 != &local_98) {
          plVar15 = (long *)plVar3[1];
          operator_delete(plVar3);
          plVar3 = plVar15;
        }
      }
      if (((ulong)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  (**(code **)(*(long *)param_1 + 0x2d0))(param_1,this + 0x1a8);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(this + 0x300);
                    /* try { // try from 00e1f618 to 00f1f61f has its CatchHandler @ 00e1f624 */
  if (*(long **)(this + 0x328) != (long *)0x0) {
                    /* try { // try from 00e1f620 to 00f1f6b7 has its CatchHandler @ 00e1e178 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f618 with catch @ 00e1f624
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1e220 with catch @ 00e1f628
                        */
    pPVar4 = (Particle3DRender *)(**(code **)(**(long **)(this + 0x328) + 0x50))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1e82c with catch @ 00e1f62c
                        */
    ParticleSystem3D::setRender((ParticleSystem3D *)param_1,pPVar4);
  }
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(this + 0x36c);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(this + 0x370);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1e968 with catch @ 00e1f648
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1ee1c with catch @ 00e1f64c
                        */
  param_1[0x378] = this[0x378];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f210 with catch @ 00e1f650
                        */
  param_1[0x379] = this[0x379];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f5c8 with catch @ 00e1f65c
                        */
  puVar13 = *(undefined8 **)(this + 0x318);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f228 with catch @ 00e1f660
                        */
  for (puVar12 = *(undefined8 **)(this + 0x310); puVar12 != puVar13; puVar12 = puVar12 + 1) {
    plVar16 = (long *)*puVar12;
    this_00 = (PUAffectorManager *)PUAffectorManager::Instance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f1b4 with catch @ 00e1f670
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f1c4 with catch @ 00e1f674
                        */
    pPVar5 = (Particle3DAffector *)
             PUAffectorManager::createAffector(this_00,(basic_string *)(plVar16 + 0xc));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f1ec with catch @ 00e1f678
                        */
    (**(code **)(*plVar16 + 0x78))(plVar16,pPVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1edb0 with catch @ 00e1f690
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1f570 with catch @ 00e1f694
                        */
    ParticleSystem3D::addAffector((ParticleSystem3D *)param_1,pPVar5);
  }
  puVar12 = *(undefined8 **)(this + 0x380);
  puVar13 = *(undefined8 **)(this + 0x388);
joined_r0x00e1f6b0:
  if (puVar12 != puVar13) {
    do {
      plVar16 = (long *)*puVar12;
      this_01 = (PUEmitterManager *)PUEmitterManager::Instance();
      pRVar6 = (Ref *)PUEmitterManager::createEmitter(this_01,(basic_string *)(plVar16 + 0xf));
      (**(code **)(*plVar16 + 0x78))(plVar16,pRVar6);
      local_b8[0] = pRVar6;
      if (pRVar6 != (Ref *)0x0) {
        puVar14 = *(undefined8 **)(param_1 + 0x380);
        puVar7 = *(undefined8 **)(param_1 + 0x388);
        if ((puVar14 != puVar7) && ((Ref *)*puVar14 != pRVar6)) {
          do {
            if (puVar7 + -1 == puVar14) goto LAB_00e1f74c;
            puVar1 = puVar14 + 1;
            puVar14 = puVar14 + 1;
          } while ((Ref *)*puVar1 != pRVar6);
        }
        if (puVar14 == puVar7) {
LAB_00e1f74c:
          *(PUParticleSystem3D **)(pRVar6 + 0x28) = param_1;
          Ref::retain(pRVar6);
          puVar14 = *(undefined8 **)(param_1 + 0x388);
          if (puVar14 != *(undefined8 **)(param_1 + 0x390)) goto code_r0x00e1f768;
          std::__ndk1::vector<cocos2d::PUEmitter*,std::__ndk1::allocator<cocos2d::PUEmitter*>>::
          __push_back_slow_path<cocos2d::PUEmitter*const&>
                    ((vector<cocos2d::PUEmitter*,std::__ndk1::allocator<cocos2d::PUEmitter*>> *)
                     (param_1 + 0x380),(PUEmitter **)local_b8);
        }
      }
      puVar12 = puVar12 + 1;
      if (puVar12 == puVar13) break;
    } while( true );
  }
  puVar12 = *(undefined8 **)(this + 0x398);
  puVar13 = *(undefined8 **)(this + 0x3a0);
joined_r0x00e1f788:
  if (puVar12 != puVar13) {
    do {
      plVar16 = (long *)*puVar12;
      this_02 = (PUObserverManager *)PUObserverManager::Instance();
      pRVar6 = (Ref *)PUObserverManager::createObserver(this_02,(basic_string *)(plVar16 + 6));
      (**(code **)(*plVar16 + 0x60))(plVar16,pRVar6);
      puVar14 = *(undefined8 **)(param_1 + 0x398);
      puVar7 = *(undefined8 **)(param_1 + 0x3a0);
      local_b8[0] = pRVar6;
      if ((puVar14 != puVar7) && ((Ref *)*puVar14 != pRVar6)) {
        do {
          if (puVar7 + -1 == puVar14) goto LAB_00e1f820;
          puVar1 = puVar14 + 1;
          puVar14 = puVar14 + 1;
        } while ((Ref *)*puVar1 != pRVar6);
      }
      if (puVar14 == puVar7) {
LAB_00e1f820:
        Ref::retain(pRVar6);
        *(PUParticleSystem3D **)(pRVar6 + 0x28) = param_1;
                    /* try { // try from 00e1f82c to 00f1f867 has its CatchHandler @ 00e1f82c
                       catch() { ... } // from try @ 00e1f82c with catch @ 00e1f82c
                       catch() { ... } // from try @ 00e1f878 with catch @ 00e1f82c
                       catch() { ... } // from try @ 00e1fd18 with catch @ 00e1f82c */
        puVar14 = *(undefined8 **)(param_1 + 0x3a0);
        if (puVar14 != *(undefined8 **)(param_1 + 0x3a8)) goto code_r0x00e1f83c;
        std::__ndk1::vector<cocos2d::PUObserver*,std::__ndk1::allocator<cocos2d::PUObserver*>>::
        __push_back_slow_path<cocos2d::PUObserver*const&>
                  ((vector<cocos2d::PUObserver*,std::__ndk1::allocator<cocos2d::PUObserver*>> *)
                   (param_1 + 0x398),(PUObserver **)local_b8);
      }
      puVar12 = puVar12 + 1;
      if (puVar12 == puVar13) break;
    } while( true );
  }
  puVar12 = *(undefined8 **)(this + 0x408);
  puVar13 = *(undefined8 **)(this + 0x410);
  do {
    while( true ) {
      if (puVar12 == puVar13) {
        uVar8 = *(undefined8 *)(this + 0x400);
        param_1[0x438] = (PUParticleSystem3D)0x0;
        *(undefined8 *)(param_1 + 0x400) = uVar8;
        *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(this + 0x43c);
        uVar8 = *(undefined8 *)(this + 0x460);
        *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(this + 0x468);
        *(undefined8 *)(param_1 + 0x460) = uVar8;
        param_1[0x470] = this[0x470];
        if (param_1 != this) {
          pPVar10 = *(PUParticleSystem3D **)(this + 0x488);
          uVar11 = *(ulong *)(this + 0x480);
          if (((byte)this[0x478] & 1) == 0) {
            pPVar10 = this + 0x479;
            uVar11 = (ulong)((byte)this[0x478] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + 0x478),(char *)pPVar10,uVar11);
        }
        param_1[0x490] = this[0x490];
        *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(this + 0x4c0);
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pRVar6 = (Ref *)(**(code **)(*(long *)*puVar12 + 0x40))();
      puVar14 = *(undefined8 **)(param_1 + 0x408);
      puVar7 = *(undefined8 **)(param_1 + 0x410);
      local_b8[0] = pRVar6;
      if ((puVar14 != puVar7) && ((Ref *)*puVar14 != pRVar6)) {
        do {
          if (puVar7 + -1 == puVar14) goto LAB_00e1f8e0;
          puVar1 = puVar14 + 1;
          puVar14 = puVar14 + 1;
        } while ((Ref *)*puVar1 != pRVar6);
      }
      if (puVar14 == puVar7) break;
LAB_00e1f870:
      puVar12 = puVar12 + 1;
                    /* try { // try from 00e1f878 to 00f1fb03 has its CatchHandler @ 00e1f82c */
    }
LAB_00e1f8e0:
    Ref::retain(pRVar6);
    *(PUParticleSystem3D **)(pRVar6 + 0x28) = param_1;
    puVar14 = *(undefined8 **)(param_1 + 0x410);
    if (puVar14 == *(undefined8 **)(param_1 + 0x418)) {
                    /* try { // try from 00e1f868 to 00f1f877 has its CatchHandler @ 00e1fd70 */
      std::__ndk1::vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
      __push_back_slow_path<cocos2d::PUBehaviour*const&>
                ((vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>> *)
                 (param_1 + 0x408),(PUBehaviour **)local_b8);
      goto LAB_00e1f870;
    }
    *puVar14 = pRVar6;
    *(undefined8 **)(param_1 + 0x410) = puVar14 + 1;
    puVar12 = puVar12 + 1;
  } while( true );
code_r0x00e1f768:
  *puVar14 = pRVar6;
  *(undefined8 **)(param_1 + 0x388) = puVar14 + 1;
  puVar12 = puVar12 + 1;
  goto joined_r0x00e1f6b0;
code_r0x00e1f83c:
  *puVar14 = pRVar6;
  *(undefined8 **)(param_1 + 0x3a0) = puVar14 + 1;
  puVar12 = puVar12 + 1;
  goto joined_r0x00e1f788;
}

