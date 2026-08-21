
/* cocos2d::Sprite::setSpriteFrame(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::Sprite::setSpriteFrame(Sprite *this,SpriteFrame *param_1)

{
  Sprite SVar1;
  long lVar2;
  Ref *this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  PolygonInfo *pPVar6;
  undefined8 uVar7;
  EventDispatcher *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00f413b8 to 01041417 has its CatchHandler @ 00f41314 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == (SpriteFrame *)0x0) {
    lVar4 = Director::getInstance();
    this_01 = *(EventDispatcher **)(lVar4 + 0xb0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"G_TRACKBACK");
    EventDispatcher::dispatchCustomEvent(this_01,(basic_string *)local_50,(void *)0x0);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    this_00 = *(Ref **)(this + 0x370);
    if (this_00 != (Ref *)param_1) {
      if (this_00 != (Ref *)0x0) {
        Ref::release(this_00);
      }
      *(SpriteFrame **)(this + 0x370) = param_1;
      Ref::retain((Ref *)param_1);
    }
    puVar3 = (undefined8 *)SpriteFrame::getOffset(param_1);
                    /* catch() { ... } // from try @ 00f413a0 with catch @ 00f41404 */
    *(undefined8 *)(this + 0x448) = *puVar3;
    lVar4 = SpriteFrame::getTexture(param_1);
    if (lVar4 != *(long *)(this + 0x368)) {
      (**(code **)(*(long *)this + 0x548))(this,lVar4);
    }
    SVar1 = *(Sprite *)(param_1 + 0x58);
    this[0x418] = SVar1;
    (**(code **)(*(long *)this + 0x560))(this,param_1 + 0x5c,SVar1,param_1 + 0x40);
    uVar5 = SpriteFrame::hasPolygonInfo(param_1);
    if ((uVar5 & 1) != 0) {
      pPVar6 = (PolygonInfo *)SpriteFrame::getPolygonInfo(param_1);
      PolygonInfo::operator=((PolygonInfo *)(this + 0x4c0),pPVar6);
      *(undefined4 *)(this + 0x42c) = 1;
      if (this[0x509] != (Sprite)0x0) {
        (**(code **)(*(long *)this + 0x660))(this);
      }
      if (this[0x50a] != (Sprite)0x0) {
        (**(code **)(*(long *)this + 0x668))(this);
      }
      (**(code **)(*(long *)this + 0x528))(this);
    }
    uVar5 = SpriteFrame::hasAnchorPoint(param_1);
    if ((uVar5 & 1) != 0) {
      uVar7 = SpriteFrame::getAnchorPoint(param_1);
      (**(code **)(*(long *)this + 0x148))(this,uVar7);
    }
    uVar5 = SpriteFrame::hasCenterRect(param_1);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(long *)this + 0x580))(this,param_1 + 0x6c);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

