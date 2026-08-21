
/* cocos2d::LayerGradient::create(cocos2d::Color4B const&, cocos2d::Color4B const&, cocos2d::Vec2
   const&) */

LayerColor * cocos2d::LayerGradient::create(Color4B *param_1,Color4B *param_2,Vec2 *param_3)

{
  long lVar1;
  LayerColor *this;
  Director *this_00;
  Size *pSVar2;
  undefined8 uVar3;
  Color4B aCStack_58 [8];
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
    *(Color4B *)(this + 0x416) = param_1[3];
    uVar3 = *(undefined8 *)param_3;
    this[0x420] = (LayerColor)0x1;
    *(undefined8 *)(this + 0x418) = uVar3;
    Color4B::Color4B(aCStack_58,(uchar)*param_1,(uchar)param_1[1],(uchar)param_1[2],0xff);
    this_00 = (Director *)Director::getInstance();
    pSVar2 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)&local_50,pSVar2);
    LayerColor::initWithColor(this,aCStack_58,local_50,fStack_4c);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

