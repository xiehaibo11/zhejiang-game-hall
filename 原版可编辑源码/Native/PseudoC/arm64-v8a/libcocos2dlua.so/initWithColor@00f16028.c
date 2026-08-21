
/* cocos2d::LayerColor::initWithColor(cocos2d::Color4B const&) */

undefined8 __thiscall cocos2d::LayerColor::initWithColor(LayerColor *this,Color4B *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_40,pSVar2);
  initWithColor(this,param_1,local_40,fStack_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

