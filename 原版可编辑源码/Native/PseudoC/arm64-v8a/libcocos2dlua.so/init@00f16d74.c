
/* cocos2d::LayerGradient::init() */

undefined8 __thiscall cocos2d::LayerGradient::init(LayerGradient *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  LayerGradient local_48;
  LayerGradient local_47;
  LayerGradient local_46;
  LayerGradient local_45;
  Color4B local_40;
  uchar local_3f;
  uchar local_3e;
  LayerGradient local_3d;
  Color4B aCStack_38 [8];
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B(&local_40,'\0','\0','\0',0xff);
  Color4B::Color4B((Color4B *)&local_48,'\0','\0','\0',0xff);
  this[0x413] = local_48;
  this[0x414] = local_47;
  this[0x415] = local_46;
  this[0x417] = local_45;
  *(undefined8 *)(this + 0x418) = 0xbf80000000000000;
  this[0x420] = (LayerGradient)0x1;
  this[0x416] = local_3d;
  Color4B::Color4B(aCStack_38,(uchar)local_40,local_3f,local_3e,0xff);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_30,pSVar2);
  LayerColor::initWithColor((LayerColor *)this,aCStack_38,local_30,fStack_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

