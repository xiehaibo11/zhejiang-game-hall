
/* cocos2d::extension::ControlStepper::initWithMinusSpriteAndPlusSprite(cocos2d::Sprite*,
   cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlStepper::initWithMinusSpriteAndPlusSprite
          (ControlStepper *this,Sprite *param_1,Sprite *param_2)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  Rect *pRVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [12];
  float local_64;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = Control::init((Control *)this);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined2 *)(this + 0x361) = 1;
    this[0x360] = (ControlStepper)0x1;
    *(undefined8 *)(this + 0x370) = 0x4059000000000000;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x378) = 0x3ff0000000000000;
    (**(code **)(*(long *)this + 0x1f0))(this,0);
    (**(code **)(*(long *)this + 0x700))(this,param_1);
    plVar7 = *(long **)(this + 0x390);
    pfVar3 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    fVar8 = *pfVar3;
                    /* try { // try from 00e11ee8 to 00f11ef3 has its CatchHandler @ 00e1207c */
                    /* try { // try from 00e11ef4 to 00f11f27 has its CatchHandler @ 00e11350 */
    lVar4 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    (**(code **)(*plVar7 + 200))(fVar8 * 0.5,*(float *)(lVar4 + 4) * 0.5,plVar7);
                    /* try { // try from 00e11f28 to 00f11f37 has its CatchHandler @ 00e12070 */
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x390));
                    /* try { // try from 00e11f38 to 00f11f6f has its CatchHandler @ 00e11350 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"-");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,"CourierNewPSMT");
    uVar5 = Label::createWithSystemFont(0x42200000,local_70,local_88,&Size::ZERO,0,0);
                    /* try { // try from 00e11f70 to 00f11f7b has its CatchHandler @ 00e1206c */
                    /* try { // try from 00e11f7c to 00f12017 has its CatchHandler @ 00e11350 */
    (**(code **)(*(long *)this + 0x720))(this,uVar5);
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    plVar7 = *(long **)(this + 0x3a0);
    Color3B::Color3B((Color3B *)local_70,0x93,0x93,0x93);
    (**(code **)(*plVar7 + 0x4c0))(plVar7,local_70);
    (**(code **)(**(long **)(this + 0x3a0) + 0x148))(*(long **)(this + 0x3a0),&Vec2::ANCHOR_MIDDLE);
    plVar7 = *(long **)(this + 0x3a0);
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x390) + 0x168))();
    fVar8 = *pfVar3;
    lVar4 = (**(code **)(**(long **)(this + 0x390) + 0x168))(*(long **)(this + 0x390));
                    /* try { // try from 00e12018 to 00f1201f has its CatchHandler @ 00e12020 */
                    /* catch() { ... } // from try @ 00e12018 with catch @ 00e12020
                       try { // try from 00e12020 to 00f1209b has its CatchHandler @ 00e11350 */
                    /* catch() { ... } // from try @ 00e11984 with catch @ 00e12024 */
                    /* catch() { ... } // from try @ 00e11464 with catch @ 00e12028 */
    (**(code **)(*plVar7 + 200))(fVar8 * 0.5,*(float *)(lVar4 + 4) * 0.5,plVar7);
                    /* catch() { ... } // from try @ 00e1186c with catch @ 00e12038 */
                    /* catch() { ... } // from try @ 00e1184c with catch @ 00e1203c */
    (**(code **)(**(long **)(this + 0x390) + 0x208))
              (*(long **)(this + 0x390),*(undefined8 *)(this + 0x3a0));
                    /* catch() { ... } // from try @ 00e11880 with catch @ 00e12048 */
                    /* catch() { ... } // from try @ 00e11894 with catch @ 00e12050 */
    (**(code **)(*(long *)this + 0x710))(this,param_2);
    plVar7 = *(long **)(this + 0x398);
                    /* catch() { ... } // from try @ 00e11f70 with catch @ 00e1206c */
    pfVar3 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
                    /* catch() { ... } // from try @ 00e11f28 with catch @ 00e12070 */
                    /* catch() { ... } // from try @ 00e11d18 with catch @ 00e12074 */
    fVar9 = *pfVar3;
                    /* catch() { ... } // from try @ 00e11cd0 with catch @ 00e12078 */
                    /* catch() { ... } // from try @ 00e11ee8 with catch @ 00e1207c */
                    /* catch() { ... } // from try @ 00e11c90 with catch @ 00e12080 */
    pfVar3 = (float *)(**(code **)(*(long *)param_2 + 0x168))(param_2);
    fVar8 = *pfVar3;
    lVar4 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    (**(code **)(*plVar7 + 200))(fVar9 + fVar8 * 0.5,*(float *)(lVar4 + 4) * 0.5,plVar7);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x398));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"+");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,"CourierNewPSMT");
    uVar5 = Label::createWithSystemFont(0x42200000,local_70,local_88,&Size::ZERO,0,0);
    (**(code **)(*(long *)this + 0x730))(this,uVar5);
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    plVar7 = *(long **)(this + 0x3a8);
    pRVar6 = (Rect *)0x37;
    Color3B::Color3B((Color3B *)local_70,'7','7','7');
    (**(code **)(*plVar7 + 0x4c0))(plVar7,local_70);
    (**(code **)(**(long **)(this + 0x3a8) + 0x148))(*(long **)(this + 0x3a8),&Vec2::ANCHOR_MIDDLE);
    plVar7 = *(long **)(this + 0x3a8);
                    /* try { // try from 00e1219c to 00f12403 has its CatchHandler @ 00e1219c
                       catch() { ... } // from try @ 00e1219c with catch @ 00e1219c
                       catch() { ... } // from try @ 00e1240c with catch @ 00e1219c
                       catch() { ... } // from try @ 00e124f8 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e125c8 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e1260c with catch @ 00e1219c
                       catch() { ... } // from try @ 00e1265c with catch @ 00e1219c
                       catch() { ... } // from try @ 00e126a0 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e126d8 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e1272c with catch @ 00e1219c
                       catch() { ... } // from try @ 00e12774 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e127bc with catch @ 00e1219c
                       catch() { ... } // from try @ 00e127f8 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e12834 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e12870 with catch @ 00e1219c
                       catch() { ... } // from try @ 00e128d0 with catch @ 00e1219c */
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x398) + 0x168))();
    fVar8 = *pfVar3;
    lVar4 = (**(code **)(**(long **)(this + 0x398) + 0x168))(*(long **)(this + 0x398));
    (**(code **)(*plVar7 + 200))(fVar8 * 0.5,*(float *)(lVar4 + 4) * 0.5,plVar7);
    (**(code **)(**(long **)(this + 0x398) + 0x208))
              (*(long **)(this + 0x398),*(undefined8 *)(this + 0x3a8));
    (**(code **)(**(long **)(this + 0x390) + 0x370))(local_88);
    (**(code **)(**(long **)(this + 0x398) + 0x370))(auStack_98);
    ControlUtils::RectUnion((ControlUtils *)local_88,auStack_98,pRVar6);
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x390) + 0x168))();
    fVar8 = *pfVar3;
    lVar4 = (**(code **)(**(long **)(this + 0x398) + 0x168))(*(long **)(this + 0x398));
    Size::Size((Size *)local_88,fVar8 + *(float *)(lVar4 + 4),local_64);
    (**(code **)(*(long *)this + 0x160))(this,local_88);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

