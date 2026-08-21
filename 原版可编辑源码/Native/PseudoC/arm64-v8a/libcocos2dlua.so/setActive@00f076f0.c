
/* cocos2d::GridBase::setActive(bool) */

void __thiscall cocos2d::GridBase::setActive(GridBase *this,bool param_1)

{
  Director *pDVar1;
  
  this[0x21] = (GridBase)param_1;
  if (param_1) {
    return;
  }
  pDVar1 = (Director *)Director::getInstance();
  Director::setProjection(pDVar1,*(undefined4 *)(pDVar1 + 0x194));
  return;
}

