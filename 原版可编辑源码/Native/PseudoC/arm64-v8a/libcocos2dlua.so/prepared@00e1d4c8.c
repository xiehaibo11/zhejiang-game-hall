
/* cocos2d::PUParticleSystem3D::prepared() */

void cocos2d::PUParticleSystem3D::prepared(void)

{
  undefined8 *puVar1;
  long lVar2;
  PUParticleSystem3D *in_x0;
  PUEmitter *this;
  long *plVar3;
  long lVar4;
  long *plVar5;
  PUParticle3D *pPVar6;
  Ref *pRVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (in_x0[0x438] == (PUParticleSystem3D)0x0) {
    if (*(long **)(in_x0 + 0x328) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x328) + 0x38))();
    }
    puVar11 = *(undefined8 **)(in_x0 + 0x410);
    for (puVar10 = *(undefined8 **)(in_x0 + 0x408); puVar10 != puVar11; puVar10 = puVar10 + 1) {
      (**(code **)(*(long *)*puVar10 + 0x18))();
    }
    puVar11 = *(undefined8 **)(in_x0 + 0x388);
    for (puVar10 = *(undefined8 **)(in_x0 + 0x380); puVar10 != puVar11; puVar10 = puVar10 + 1) {
      (**(code **)(*(long *)*puVar10 + 0x48))();
    }
    puVar11 = *(undefined8 **)(in_x0 + 0x318);
    for (puVar10 = *(undefined8 **)(in_x0 + 0x310); puVar10 != puVar11; puVar10 = puVar10 + 1) {
      (**(code **)(*(long *)*puVar10 + 0x40))();
    }
    if (in_x0[0x439] == (PUParticleSystem3D)0x0) {
      puVar10 = *(undefined8 **)(in_x0 + 0x380);
      puVar11 = *(undefined8 **)(in_x0 + 0x388);
      if (puVar10 != puVar11) {
        do {
          this = (PUEmitter *)*puVar10;
                    /* catch() { ... } // from try @ 00e1d4a8 with catch @ 00e1d5dc */
          if (*(int *)(this + 0x1e8) == 1) {
            plVar3 = (long *)PUEmitter::getEmitsEntityPtr(this);
            if (*(int *)(in_x0 + 0x404) != 0) {
              uVar9 = 0;
              do {
                pRVar7 = (Ref *)(**(code **)(*plVar3 + 0x568))(plVar3);
                pPVar6 = operator_new(0x150,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e1d7b8 to 00f1d7cb has its CatchHandler @ 00e1e0c8 */
                if (pPVar6 != (PUParticle3D *)0x0) {
                  PUParticle3D::PUParticle3D(pPVar6);
                }
                    /* try { // try from 00e1d7cc to 00f1d7eb has its CatchHandler @ 00e1d6d0 */
                *(undefined4 *)(pPVar6 + 0x90) = 1;
                *(Ref **)(pPVar6 + 0x78) = pRVar7;
                Ref::retain(pRVar7);
                puVar12 = *(undefined8 **)(in_x0 + 0x408);
                puVar13 = *(undefined8 **)(in_x0 + 0x410);
                if (puVar12 != puVar13) {
                    /* try { // try from 00e1d7ec to 00f1d7fb has its CatchHandler @ 00e1e0cc */
                  do {
                    local_80 = (piecewise_construct_t *)(**(code **)(*(long *)*puVar12 + 0x40))();
                    Ref::retain((Ref *)local_80);
                    puVar1 = *(undefined8 **)(pPVar6 + 0x110);
                    if (puVar1 == *(undefined8 **)(pPVar6 + 0x118)) {
                    /* try { // try from 00e1d830 to 00f1d83f has its CatchHandler @ 00e1e0dc */
                      std::__ndk1::
                      vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
                      __push_back_slow_path<cocos2d::PUBehaviour*const&>
                                ((vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>
                                  *)(pPVar6 + 0x108),(PUBehaviour **)&local_80);
                    }
                    else {
                      *puVar1 = local_80;
                      *(undefined8 **)(pPVar6 + 0x110) = puVar1 + 1;
                    }
                    puVar12 = puVar12 + 1;
                  } while (puVar13 != puVar12);
                }
                local_80 = (piecewise_construct_t *)(**(code **)(*plVar3 + 0x2c8))(plVar3);
                lVar4 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>>>
                        ::
                        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                  ((basic_string *)(in_x0 + 0x3d8),local_80,(tuple *)&DAT_01422af4,
                                   (tuple *)&local_80);
                plVar5 = operator_new(0x18);
                plVar5[1] = lVar4 + 0x48;
                plVar5[2] = (long)pPVar6;
                lVar8 = *(long *)(lVar4 + 0x48);
                *plVar5 = lVar8;
                *(long **)(lVar8 + 8) = plVar5;
                *(long **)(lVar4 + 0x48) = plVar5;
                *(long *)(lVar4 + 0x58) = *(long *)(lVar4 + 0x58) + 1;
                prepared();
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(uint *)(in_x0 + 0x404));
            }
          }
          else {
                    /* catch() { ... } // from try @ 00e1d490 with catch @ 00e1d5e4 */
            if ((*(int *)(this + 0x1e8) == 2) &&
               (plVar3 = (long *)PUEmitter::getEmitsEntityPtr(this), *(int *)(in_x0 + 0x400) != 0))
            {
              uVar9 = 0;
                    /* catch() { ... } // from try @ 00e1d35c with catch @ 00e1d600 */
                    /* catch() { ... } // from try @ 00e1d350 with catch @ 00e1d604 */
              do {
                pPVar6 = operator_new(0x150,(nothrow_t *)&std::nothrow);
                if (pPVar6 != (PUParticle3D *)0x0) {
                  PUParticle3D::PUParticle3D(pPVar6);
                }
                *(undefined4 *)(pPVar6 + 0x90) = 2;
                pRVar7 = (Ref *)(**(code **)(*plVar3 + 0x70))(plVar3);
                *(Ref **)(pPVar6 + 0x78) = pRVar7;
                Ref::retain(pRVar7);
                puVar12 = *(undefined8 **)(in_x0 + 0x408);
                puVar13 = *(undefined8 **)(in_x0 + 0x410);
                if (puVar12 != puVar13) {
                  do {
                    local_80 = (piecewise_construct_t *)(**(code **)(*(long *)*puVar12 + 0x40))();
                    Ref::retain((Ref *)local_80);
                    puVar1 = *(undefined8 **)(pPVar6 + 0x110);
                    if (puVar1 == *(undefined8 **)(pPVar6 + 0x118)) {
                      std::__ndk1::
                      vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
                      __push_back_slow_path<cocos2d::PUBehaviour*const&>
                                ((vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>
                                  *)(pPVar6 + 0x108),(PUBehaviour **)&local_80);
                    }
                    else {
                      *puVar1 = local_80;
                      *(undefined8 **)(pPVar6 + 0x110) = puVar1 + 1;
                    }
                    puVar12 = puVar12 + 1;
                    /* try { // try from 00e1d6d0 to 00f1d7b7 has its CatchHandler @ 00e1d6d0
                       catch() { ... } // from try @ 00e1d6d0 with catch @ 00e1d6d0
                       catch() { ... } // from try @ 00e1d7cc with catch @ 00e1d6d0
                       catch() { ... } // from try @ 00e1d840 with catch @ 00e1d6d0
                       catch() { ... } // from try @ 00e1dea4 with catch @ 00e1d6d0 */
                  } while (puVar13 != puVar12);
                }
                local_80 = (piecewise_construct_t *)(plVar3 + 0x12);
                lVar4 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>>>
                        ::
                        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                  ((basic_string *)(in_x0 + 0x3b0),
                                   (piecewise_construct_t *)(plVar3 + 0x12),(tuple *)&DAT_01422af4,
                                   (tuple *)&local_80);
                plVar5 = operator_new(0x18);
                plVar5[1] = lVar4 + 0x48;
                plVar5[2] = (long)pPVar6;
                lVar8 = *(long *)(lVar4 + 0x48);
                uVar9 = uVar9 + 1;
                *plVar5 = lVar8;
                *(long **)(lVar8 + 8) = plVar5;
                *(long **)(lVar4 + 0x48) = plVar5;
                *(long *)(lVar4 + 0x58) = *(long *)(lVar4 + 0x58) + 1;
              } while (uVar9 < *(uint *)(in_x0 + 0x400));
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar11);
      }
                    /* try { // try from 00e1d840 to 00f1d997 has its CatchHandler @ 00e1d6d0 */
      if (*(int *)(in_x0 + 0x36c) != 0) {
        uVar9 = 0;
        do {
          pPVar6 = operator_new(0x150,(nothrow_t *)&std::nothrow);
          if (pPVar6 != (PUParticle3D *)0x0) {
            PUParticle3D::PUParticle3D(pPVar6);
          }
          puVar10 = *(undefined8 **)(in_x0 + 0x408);
          puVar11 = *(undefined8 **)(in_x0 + 0x410);
          if (puVar10 != puVar11) {
            do {
              local_80 = (piecewise_construct_t *)(**(code **)(*(long *)*puVar10 + 0x40))();
              Ref::retain((Ref *)local_80);
              puVar12 = *(undefined8 **)(pPVar6 + 0x110);
              if (puVar12 == *(undefined8 **)(pPVar6 + 0x118)) {
                std::__ndk1::
                vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
                __push_back_slow_path<cocos2d::PUBehaviour*const&>
                          ((vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>
                            *)(pPVar6 + 0x108),(PUBehaviour **)&local_80);
              }
              else {
                *puVar12 = local_80;
                *(undefined8 **)(pPVar6 + 0x110) = puVar12 + 1;
              }
              puVar10 = puVar10 + 1;
            } while (puVar11 != puVar10);
          }
          plVar3 = operator_new(0x18);
          plVar3[1] = (long)(in_x0 + 0x350);
          plVar3[2] = (long)pPVar6;
          lVar4 = *(long *)(in_x0 + 0x350);
          uVar9 = uVar9 + 1;
          *plVar3 = lVar4;
          *(long **)(lVar4 + 8) = plVar3;
          *(long **)(in_x0 + 0x350) = plVar3;
          *(long *)(in_x0 + 0x360) = *(long *)(in_x0 + 0x360) + 1;
        } while (uVar9 < *(uint *)(in_x0 + 0x36c));
      }
      in_x0[0x439] = (PUParticleSystem3D)0x1;
    }
    in_x0[0x438] = (PUParticleSystem3D)0x1;
    *(undefined4 *)(in_x0 + 0x440) = 0;
    uVar14 = getDerivedPosition(in_x0);
    *(undefined4 *)(in_x0 + 0x4a0) = uVar14;
    *(undefined4 *)(in_x0 + 0x4a4) = in_s1;
    *(undefined4 *)(in_x0 + 0x4a8) = in_s2;
    if (*(long *)(in_x0 + 0x4c0) != 0) {
      *(undefined4 *)(in_x0 + 0x43c) = *(undefined4 *)(*(long *)(in_x0 + 0x4c0) + 0x43c);
    }
  }
  if (*(long *)(in_x0 + 0x380) != *(long *)(in_x0 + 0x388)) {
    uVar14 = getDerivedScale(in_x0);
    local_80 = (piecewise_construct_t *)CONCAT44(in_s1,uVar14);
    notifyRescaled(in_x0,(Vec3 *)&local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00e1d998 to 00f1d9ab has its CatchHandler @ 00e1e0e4 */
  return;
}

