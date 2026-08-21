
/* cocos2d::LayerGradient::create(cocos2d::Color4B const&, cocos2d::Color4B const&) */

LayerColor * cocos2d::LayerGradient::create(Color4B *param_1,Color4B *param_2)

{
  Color4B CVar1;
  long lVar2;
  LayerColor *this;
  Director *this_00;
  Size *pSVar3;
  Color4B aCStack_48 [8];
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x430,(nothrow_t *)&std::nothrow);
  if (this != (LayerColor *)0x0) {
    LayerColor::LayerColor(this);
    *(undefined ***)this = &PTR__LayerGradient_01700a20;
    *(undefined ***)(this + 800) = &PTR__LayerGradient_01701090;
    Color3B::Color3B((Color3B *)(this + 0x410),(Color4B *)&Color4B::BLACK);
    Color3B::Color3B((Color3B *)(this + 0x413),(Color4B *)&Color4B::BLACK);
    this[0x413] = *(LayerColor *)param_2;
    this[0x414] = *(LayerColor *)(param_2 + 1);
    this[0x415] = *(LayerColor *)(param_2 + 2);
    this[0x417] = *(LayerColor *)(param_2 + 3);
    CVar1 = param_1[3];
    *(undefined8 *)(this + 0x418) = 0xbf80000000000000;
    this[0x420] = (LayerColor)0x1;
    *(Color4B *)(this + 0x416) = CVar1;
    Color4B::Color4B(aCStack_48,(uchar)*param_1,(uchar)param_1[1],(uchar)param_1[2],0xff);
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)&local_40,pSVar3);
    LayerColor::initWithColor(this,aCStack_48,local_40,fStack_3c);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

