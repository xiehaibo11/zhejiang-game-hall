
/* cocos2d::LayerColor::init() */

undefined8 __thiscall cocos2d::LayerColor::init(LayerColor *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  Color4B aCStack_38 [8];
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_30,pSVar2);
  Color4B::Color4B(aCStack_38,'\0','\0','\0','\0');
  initWithColor(this,aCStack_38,local_30,fStack_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

