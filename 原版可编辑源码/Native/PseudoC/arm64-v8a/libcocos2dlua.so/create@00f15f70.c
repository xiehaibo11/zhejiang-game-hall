
/* cocos2d::LayerColor::create(cocos2d::Color4B const&) */

LayerColor * cocos2d::LayerColor::create(Color4B *param_1)

{
  long lVar1;
  LayerColor *this;
  Director *this_00;
  Size *pSVar2;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this != (LayerColor *)0x0) {
    LayerColor(this);
    this_00 = (Director *)Director::getInstance();
    pSVar2 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)&local_40,pSVar2);
    initWithColor(this,param_1,local_40,fStack_3c);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

