
/* cocos2d::Label::createShadowSpriteForSystemFont(cocos2d::FontDefinition const&) */

void __thiscall cocos2d::Label::createShadowSpriteForSystemFont(Label *this,FontDefinition *param_1)

{
  long lVar1;
  undefined3 uVar2;
  ulong uVar3;
  Texture2D *pTVar4;
  long *plVar5;
  undefined8 uVar6;
  Label *pLVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Size aSStack_80 [8];
  undefined4 local_78;
  FontDefinition local_74;
  Size aSStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((param_1[0x48] == (FontDefinition)0x0) &&
      (uVar3 = Color3B::operator==((Color3B *)(param_1 + 0x30),(Color3B *)(this + 0x628)),
      (uVar3 & 1) != 0)) && (*(Label *)(param_1 + 0x33) == this[0x62b])) {
    pTVar4 = (Texture2D *)(**(code **)(**(long **)(this + 0x3c0) + 0x550))();
    plVar5 = (long *)Sprite::createWithTexture(pTVar4);
    *(long **)(this + 0x3c8) = plVar5;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_a8,(basic_string *)param_1);
    uStack_88 = *(undefined8 *)(param_1 + 0x20);
    local_90 = *(undefined8 *)(param_1 + 0x18);
    Size::Size(aSStack_80,(Size *)(param_1 + 0x28));
    local_78 = *(undefined4 *)(param_1 + 0x30);
    local_74 = param_1[0x34];
    Size::Size(aSStack_70,(Size *)(param_1 + 0x38));
    local_68 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 00f0cc48 to 0100cd8b has its CatchHandler @ 00f0cc48
                       catch() { ... } // from try @ 00f0cc48 with catch @ 00f0cc48
                       catch() { ... } // from try @ 00f0cd94 with catch @ 00f0cc48 */
    local_50 = *(undefined4 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined3 *)(this + 0x628);
    local_78._2_1_ = (undefined1)((uint3)uVar2 >> 0x10);
    local_78._0_2_ = (undefined2)uVar2;
    local_60._5_3_ = (undefined3)((ulong)uVar6 >> 0x28);
    local_60 = CONCAT53(CONCAT41(CONCAT31(local_60._5_3_,this[0x62b]),local_78._2_1_),
                        CONCAT21((undefined2)local_78,(char)uVar6));
    local_78 = *(undefined4 *)(this + 0x628);
    pTVar4 = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (pTVar4 != (Texture2D *)0x0) {
      Texture2D::Texture2D(pTVar4);
    }
    if (((byte)this[0x328] & 1) == 0) {
      pLVar7 = this + 0x329;
    }
    else {
      pLVar7 = *(Label **)(this + 0x338);
    }
    Texture2D::initWithString(pTVar4,(char *)pLVar7,(FontDefinition *)local_a8);
    uVar6 = Sprite::createWithTexture(pTVar4);
    *(undefined8 *)(this + 0x3c8) = uVar6;
    Ref::release((Ref *)pTVar4);
    if (((byte)local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    plVar5 = *(long **)(this + 0x3c8);
  }
  if (plVar5 != (long *)0x0) {
    if (this[0x631] != (Label)0x0) {
      (**(code **)(*plVar5 + 0x5e0))(plVar5,this + 0x634);
      plVar5 = *(long **)(this + 0x3c8);
    }
    (**(code **)(*plVar5 + 0x4f0))(plVar5,*(undefined2 *)(this + 0x222),1);
    plVar5 = *(long **)(this + 0x3c8);
    (**(code **)(*(long *)this + 0x48))(this);
    (**(code **)(*plVar5 + 0x40))(plVar5);
    (**(code **)(**(long **)(this + 0x3c8) + 0x148))
              (*(long **)(this + 0x3c8),&Vec2::ANCHOR_BOTTOM_LEFT);
    (**(code **)(**(long **)(this + 0x3c8) + 200))
              (*(undefined4 *)(this + 0x610),*(undefined4 *)(this + 0x614));
    Ref::retain(*(Ref **)(this + 0x3c8));
    (**(code **)(**(long **)(this + 0x3c8) + 0x4c8))(*(long **)(this + 0x3c8),this + 0x21a);
    (**(code **)(**(long **)(this + 0x3c8) + 0x498))(*(long **)(this + 0x3c8),this[0x218]);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

