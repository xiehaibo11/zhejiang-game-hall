
/* cocos2d::PUParticleSystem3D::~PUParticleSystem3D() */

void __thiscall cocos2d::PUParticleSystem3D::~PUParticleSystem3D(PUParticleSystem3D *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long ****local_110;
  long ****local_108;
  long local_100;
  DataPool<cocos2d::Particle3D> aDStack_f8 [8];
  long local_f0;
  long *plStack_e8;
  long local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  DataPool<cocos2d::Particle3D> aDStack_a8 [8];
  long local_a0;
  long *plStack_98;
  long local_90;
  long local_88;
  long *plStack_80;
  long local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e1b424 to 00f1b42b has its CatchHandler @ 00e1bee8 */
  *(undefined ***)this = &PTR__PUParticleSystem3D_016ee550;
  *(undefined ***)(this + 0x2f8) = &PTR__PUParticleSystem3D_016eead8;
  if (*(int *)(this + 0x300) != 0) {
    *(undefined4 *)(this + 0x300) = 0;
  }
  plVar12 = *(long **)(this + 0x178);
  plVar13 = *(long **)(this + 0x180);
  if (plVar12 != plVar13) {
    lVar2 = *plVar12;
    while( true ) {
                    /* try { // try from 00e1b480 to 00f1b4db has its CatchHandler @ 00e1beec */
      if ((lVar2 != 0) &&
         (plVar3 = (long *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0), plVar3 != (long *)0x0)
         ) {
        (**(code **)(*plVar3 + 0x548))();
      }
      plVar12 = plVar12 + 1;
      if (plVar13 == plVar12) break;
      lVar2 = *plVar12;
    }
  }
  unPrepared(this);
  DataPool<cocos2d::Particle3D>::removeAllDatas((DataPool<cocos2d::Particle3D> *)(this + 0x330));
  plVar12 = *(long **)(this + 0x3c0);
  if (plVar12 != (long *)0x0) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_c0,(basic_string *)(plVar12 + 2));
      DataPool<cocos2d::Particle3D>::DataPool(aDStack_a8,(DataPool *)(plVar12 + 5));
      DataPool<cocos2d::Particle3D>::DataPool(aDStack_f8,(DataPool *)aDStack_a8);
      local_110 = (long ****)&local_110;
      local_108 = (long ****)&local_110;
      local_100 = 0;
      ppppplVar8 = &local_110;
      if (&local_d8 != local_d0) {
        lVar2 = 1;
        plVar13 = local_d0;
        do {
          pppplVar6 = local_110;
          local_110 = operator_new(0x18);
          pppplVar5 = (long ****)plVar13[2];
          *local_110 = (long ***)pppplVar6;
          local_110[1] = (long ***)&local_110;
                    /* try { // try from 00e1b538 to 00f1b693 has its CatchHandler @ 00e1c040 */
          local_110[2] = (long ***)pppplVar5;
          pppplVar6[1] = (long ***)local_110;
          local_100 = lVar2;
          plVar13 = (long *)plVar13[1];
          lVar2 = lVar2 + 1;
          ppppplVar8 = (long *****)local_108;
        } while (&local_d8 != plVar13);
      }
      for (; &local_110 != ppppplVar8; ppppplVar8 = (long *****)ppppplVar8[1]) {
        Ref::release((Ref *)ppppplVar8[2][0xf]);
      }
      DataPool<cocos2d::Particle3D>::removeAllDatas(aDStack_a8);
      if (local_100 != 0) {
        pppplVar6 = (long ****)*local_108;
        pppplVar6[1] = local_110[1];
        *local_110[1] = (long **)pppplVar6;
        local_100 = 0;
        ppppplVar8 = (long *****)local_108;
        while (ppppplVar8 != &local_110) {
          ppppplVar7 = (long *****)ppppplVar8[1];
          operator_delete(ppppplVar8);
          ppppplVar8 = ppppplVar7;
        }
      }
      if (local_c8 != 0) {
        lVar2 = *local_d0;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_d8 + 8);
        **(long **)(local_d8 + 8) = lVar2;
        local_c8 = 0;
        plVar13 = local_d0;
        while (plVar13 != &local_d8) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (local_e0 != 0) {
        lVar2 = *plStack_e8;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_f0 + 8);
        **(long **)(local_f0 + 8) = lVar2;
        local_e0 = 0;
        plVar13 = plStack_e8;
        while (plVar13 != &local_f0) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (local_78 != 0) {
        lVar2 = *plStack_80;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_88 + 8);
        **(long **)(local_88 + 8) = lVar2;
        local_78 = 0;
        plVar13 = plStack_80;
        while (plVar13 != &local_88) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (local_90 != 0) {
        lVar2 = *plStack_98;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_a0 + 8);
        **(long **)(local_a0 + 8) = lVar2;
        local_90 = 0;
        plVar13 = plStack_98;
        while (plVar13 != &local_a0) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  plVar12 = *(long **)(this + 1000);
  if (plVar12 != (long *)0x0) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_c0,(basic_string *)(plVar12 + 2));
      DataPool<cocos2d::Particle3D>::DataPool(aDStack_a8,(DataPool *)(plVar12 + 5));
      DataPool<cocos2d::Particle3D>::DataPool(aDStack_f8,(DataPool *)aDStack_a8);
      local_110 = (long ****)&local_110;
      local_108 = (long ****)&local_110;
      local_100 = 0;
      ppppplVar8 = &local_110;
      if (&local_d8 != local_d0) {
                    /* try { // try from 00e1b74c to 00f1b9b7 has its CatchHandler @ 00e1c054 */
        lVar2 = 1;
        plVar13 = local_d0;
        do {
          pppplVar6 = local_110;
          local_110 = operator_new(0x18);
          pppplVar5 = (long ****)plVar13[2];
          *local_110 = (long ***)pppplVar6;
          local_110[1] = (long ***)&local_110;
          local_110[2] = (long ***)pppplVar5;
          pppplVar6[1] = (long ***)local_110;
          local_100 = lVar2;
          plVar13 = (long *)plVar13[1];
          lVar2 = lVar2 + 1;
          ppppplVar8 = (long *****)local_108;
        } while (&local_d8 != plVar13);
      }
      for (; &local_110 != ppppplVar8; ppppplVar8 = (long *****)ppppplVar8[1]) {
        Ref::release((Ref *)ppppplVar8[2][0xf]);
      }
      DataPool<cocos2d::Particle3D>::removeAllDatas(aDStack_a8);
      if (local_100 != 0) {
        pppplVar6 = (long ****)*local_108;
        pppplVar6[1] = local_110[1];
        *local_110[1] = (long **)pppplVar6;
        local_100 = 0;
        ppppplVar8 = (long *****)local_108;
        while (ppppplVar8 != &local_110) {
          ppppplVar7 = (long *****)ppppplVar8[1];
          operator_delete(ppppplVar8);
          ppppplVar8 = ppppplVar7;
        }
      }
      if (local_c8 != 0) {
        lVar2 = *local_d0;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_d8 + 8);
        **(long **)(local_d8 + 8) = lVar2;
        local_c8 = 0;
        plVar13 = local_d0;
        while (plVar13 != &local_d8) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (local_e0 != 0) {
        lVar2 = *plStack_e8;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_f0 + 8);
        **(long **)(local_f0 + 8) = lVar2;
        local_e0 = 0;
        plVar13 = plStack_e8;
        while (plVar13 != &local_f0) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (local_78 != 0) {
        lVar2 = *plStack_80;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_88 + 8);
        **(long **)(local_88 + 8) = lVar2;
        local_78 = 0;
        plVar13 = plStack_80;
        while (plVar13 != &local_88) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (local_90 != 0) {
        lVar2 = *plStack_98;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_a0 + 8);
        **(long **)(local_a0 + 8) = lVar2;
        local_90 = 0;
        plVar13 = plStack_98;
        while (plVar13 != &local_a0) {
          plVar3 = (long *)plVar13[1];
          operator_delete(plVar13);
          plVar13 = plVar3;
        }
      }
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  puVar9 = *(undefined8 **)(this + 0x380);
  puVar10 = *(undefined8 **)(this + 0x388);
  if (puVar9 != puVar10) {
    do {
      Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar10 != puVar9);
    puVar9 = *(undefined8 **)(this + 0x380);
  }
  puVar10 = *(undefined8 **)(this + 0x398);
  puVar11 = *(undefined8 **)(this + 0x3a0);
  *(undefined8 **)(this + 0x388) = puVar9;
  for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
    Ref::release((Ref *)*puVar10);
  }
  puVar10 = *(undefined8 **)(this + 0x410);
  for (puVar9 = *(undefined8 **)(this + 0x408); puVar9 != puVar10; puVar9 = puVar9 + 1) {
    Ref::release((Ref *)*puVar9);
  }
  *(undefined8 *)(this + 0x3a0) = *(undefined8 *)(this + 0x398);
  Quaternion::~Quaternion((Quaternion *)(this + 0x4ac));
  if (((byte)this[0x478] & 1) != 0) {
    operator_delete(*(void **)(this + 0x488));
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0x444));
  pvVar4 = *(void **)(this + 0x420);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x428) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x408);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x410) = pvVar4;
    operator_delete(pvVar4);
  }
  puVar9 = *(void **)(this + 1000);
  while (puVar9 != (void *)0x0) {
    pvVar4 = (void *)*puVar9;
    std::__ndk1::
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,void*>>>
    ::
    __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::DataPool<cocos2d::Particle3D>>>
              ();
    operator_delete(puVar9);
    puVar9 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x3d8);
  *(undefined8 *)(this + 0x3d8) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  puVar9 = *(void **)(this + 0x3c0);
  while (puVar9 != (void *)0x0) {
    pvVar4 = (void *)*puVar9;
    std::__ndk1::
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,void*>>>
    ::
    __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::DataPool<cocos2d::Particle3D>>>
              ();
    operator_delete(puVar9);
    puVar9 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x3b0);
  *(undefined8 *)(this + 0x3b0) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x398);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x3a0) = pvVar4;
    operator_delete(pvVar4);
  }
                    /* try { // try from 00e1ba4c to 00f1ba4f has its CatchHandler @ 00e1bf60 */
  pvVar4 = *(void **)(this + 0x380);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x388) = pvVar4;
    operator_delete(pvVar4);
  }
  ParticleSystem3D::~ParticleSystem3D((ParticleSystem3D *)this);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e1ba98 to 00f1ba9b has its CatchHandler @ 00e1c03c */
    __stack_chk_fail();
  }
                    /* try { // try from 00e1ba80 to 00f1ba87 has its CatchHandler @ 00e1c024 */
  return;
}

