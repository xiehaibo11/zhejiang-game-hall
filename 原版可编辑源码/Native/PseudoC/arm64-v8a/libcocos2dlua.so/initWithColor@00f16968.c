
/* cocos2d::LayerGradient::initWithColor(cocos2d::Color4B const&, cocos2d::Color4B const&) */

undefined8 __thiscall
cocos2d::LayerGradient::initWithColor(LayerGradient *this,Color4B *param_1,Color4B *param_2)

{
  LayerGradient LVar1;
  long lVar2;
  Director *this_00;
  Size *pSVar3;
  Color4B aCStack_38 [8];
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this[0x413] = *(LayerGradient *)param_2;
  this[0x414] = *(LayerGradient *)(param_2 + 1);
  this[0x415] = *(LayerGradient *)(param_2 + 2);
  this[0x417] = *(LayerGradient *)(param_2 + 3);
  LVar1 = *(LayerGradient *)(param_1 + 3);
  *(undefined8 *)(this + 0x418) = 0xbf80000000000000;
  this[0x420] = (LayerGradient)0x1;
  this[0x416] = LVar1;
  Color4B::Color4B(aCStack_38,(uchar)*param_1,(uchar)param_1[1],(uchar)param_1[2],0xff);
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_30,pSVar3);
  LayerColor::initWithColor((LayerColor *)this,aCStack_38,local_30,fStack_2c);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

