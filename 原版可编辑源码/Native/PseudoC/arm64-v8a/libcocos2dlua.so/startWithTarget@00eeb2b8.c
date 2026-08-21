
/* cocos2d::SplitCols::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::SplitCols::startWithTarget(SplitCols *this,Node *param_1)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GridAction::startWithTarget((GridAction *)this,param_1);
  Director::getInstance();
  Director::getWinSizeInPixels();
  Size::operator=((Size *)(this + 0x6c),aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

