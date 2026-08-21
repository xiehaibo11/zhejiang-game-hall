
/* cocostudio::DisplayManager::addDisplay(cocos2d::Node*, int) */

void __thiscall
cocostudio::DisplayManager::addDisplay(DisplayManager *this,Node *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  Skin *pSVar5;
  byte *pbVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  DisplayData *this_00;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  byte *pbVar12;
  DecorativeDisplay *pDVar13;
  Bone *pBVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  DecorativeDisplay *local_c0 [11];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0) {
LAB_00c43a38:
    pDVar13 = (DecorativeDisplay *)DecorativeDisplay::create();
    puVar1 = *(undefined8 **)(this + 0x30);
    local_c0[0] = pDVar13;
    if (puVar1 == *(undefined8 **)(this + 0x38)) {
      std::__ndk1::
      vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
      ::__push_back_slow_path<cocostudio::DecorativeDisplay*const&>
                ((vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
                  *)(this + 0x28),local_c0);
    }
    else {
      *puVar1 = pDVar13;
      *(undefined8 **)(this + 0x30) = puVar1 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_c0[0]);
    if (param_1 == (Node *)0x0) goto LAB_00c43cf4;
LAB_00c43a74:
    pSVar5 = (Skin *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,&Skin::typeinfo,0);
    if (pSVar5 == (Skin *)0x0) {
      lVar7 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::ParticleSystemQuad::typeinfo
                             ,0);
      if (lVar7 == 0) {
        plVar9 = (long *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,&Armature::typeinfo,0);
        if (plVar9 == (long *)0x0) goto LAB_00c43cf4;
        this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        if (this_00 != (DisplayData *)0x0) {
          ArmatureDisplayData::ArmatureDisplayData((ArmatureDisplayData *)this_00);
          cocos2d::Ref::autorelease((Ref *)this_00);
        }
        pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (**(code **)(*plVar9 + 0x2c8))(plVar9);
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x28) != pbVar8) {
          uVar2 = *(ulong *)(pbVar8 + 8);
          pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar8 + 0x10);
          if (((byte)*pbVar8 & 1) == 0) {
            pbVar3 = pbVar8 + 1;
            uVar2 = (ulong)((byte)*pbVar8 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this_00 + 0x28),(char *)pbVar3,uVar2);
        }
        (**(code **)(*plVar9 + 0x5b0))(plVar9,*(undefined8 *)(this + 0x60));
      }
      else {
        this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        if (this_00 != (DisplayData *)0x0) {
          ParticleDisplayData::ParticleDisplayData((ParticleDisplayData *)this_00);
          cocos2d::Ref::autorelease((Ref *)this_00);
        }
        (**(code **)(*(long *)param_1 + 0x270))(param_1);
        (**(code **)(*(long *)param_1 + 0x340))(param_1);
        lVar7 = (**(code **)(**(long **)(this + 0x60) + 0x570))();
        if (lVar7 != 0) {
          (**(code **)(*(long *)param_1 + 600))(param_1,lVar7);
        }
      }
    }
    else {
      (**(code **)(*(long *)pSVar5 + 0x680))(pSVar5,*(undefined8 *)(this + 0x60));
      this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
      if (this_00 != (DisplayData *)0x0) {
        SpriteDisplayData::SpriteDisplayData((SpriteDisplayData *)this_00);
        cocos2d::Ref::autorelease((Ref *)this_00);
      }
      pBVar14 = *(Bone **)(this + 0x60);
      pbVar6 = (byte *)(**(code **)(*(long *)pSVar5 + 0x690))(pSVar5);
      pbVar12 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar12 = pbVar6 + 1;
      }
      DisplayFactory::initSpriteDisplay(pBVar14,pDVar13,(char *)pbVar12,pSVar5);
      lVar7 = (**(code **)(*(long *)pDVar13 + 0x30))(pDVar13);
      if (lVar7 == 0) {
        lVar15 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
        lVar7 = lVar15 + -2;
        if (lVar7 < 0) {
LAB_00c43d20:
          BaseData::BaseData((BaseData *)local_c0);
          (**(code **)(*(long *)pSVar5 + 0x670))(pSVar5,local_c0);
          BaseData::~BaseData((BaseData *)local_c0);
          goto LAB_00c43d44;
        }
        lVar7 = (**(code **)(**(long **)(*(long *)(this + 0x28) + lVar7 * 8) + 0x30))();
        if (lVar7 == 0) {
          lVar15 = lVar15 + -3;
          do {
            if (lVar15 + 1 < 1) goto LAB_00c43d20;
            lVar7 = (**(code **)(**(long **)(*(long *)(this + 0x28) + lVar15 * 8) + 0x30))();
            lVar15 = lVar15 + -1;
          } while (lVar7 == 0);
        }
      }
      (**(code **)(*(long *)pSVar5 + 0x670))(pSVar5,lVar7 + 0x40);
      uVar10 = *(undefined8 *)(lVar7 + 0x51);
      uVar17 = *(undefined8 *)(lVar7 + 0x50);
      uVar16 = *(undefined8 *)(lVar7 + 0x48);
      *(undefined8 *)(this_00 + 0x59) = *(undefined8 *)(lVar7 + 0x59);
      *(undefined8 *)(this_00 + 0x51) = uVar10;
      *(undefined8 *)(this_00 + 0x50) = uVar17;
      *(undefined8 *)(this_00 + 0x48) = uVar16;
      uVar16 = *(undefined8 *)(lVar7 + 0x8c);
      uVar10 = *(undefined8 *)(lVar7 + 0x84);
      uVar18 = *(undefined8 *)(lVar7 + 0x7c);
      uVar17 = *(undefined8 *)(lVar7 + 0x74);
      uVar20 = *(undefined8 *)(lVar7 + 0x6c);
      uVar19 = *(undefined8 *)(lVar7 + 100);
      *(undefined4 *)(this_00 + 0x94) = *(undefined4 *)(lVar7 + 0x94);
      *(undefined8 *)(this_00 + 0x8c) = uVar16;
      *(undefined8 *)(this_00 + 0x84) = uVar10;
      *(undefined8 *)(this_00 + 0x7c) = uVar18;
      *(undefined8 *)(this_00 + 0x74) = uVar17;
      *(undefined8 *)(this_00 + 0x6c) = uVar20;
      *(undefined8 *)(this_00 + 100) = uVar19;
    }
  }
  else {
    if (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3 <= (long)param_2) goto LAB_00c43a38;
    pDVar13 = *(DecorativeDisplay **)(*(long *)(this + 0x28) + (long)param_2 * 8);
    if (param_1 != (Node *)0x0) goto LAB_00c43a74;
LAB_00c43cf4:
    this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this_00 != (DisplayData *)0x0) {
      DisplayData::DisplayData(this_00);
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
LAB_00c43d44:
  (**(code **)(*(long *)pDVar13 + 0x18))(pDVar13,param_1);
  (**(code **)(*(long *)pDVar13 + 0x28))(pDVar13,this_00);
  if (*(int *)(this + 0x58) == param_2) {
    *(undefined4 *)(this + 0x58) = 0xffffffff;
    this[0x5c] = (DisplayManager)0x0;
    if (param_2 != -1) {
      *(int *)(this + 0x58) = param_2;
      if (param_2 < 0) {
        plVar9 = *(long **)(this + 0x40);
        if (plVar9 == (long *)0x0) goto LAB_00c43dd8;
        (**(code **)(*plVar9 + 0x278))(plVar9,1);
        uVar10 = 0;
        pcVar11 = *(code **)(*(long *)this + 0x18);
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(this + 0x28) + (long)param_2 * 8);
        pcVar11 = *(code **)(*(long *)this + 0x18);
      }
      (*pcVar11)(this,uVar10);
    }
  }
LAB_00c43dd8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

