
/* cocosbuilder::CCBReader::init() */

undefined8 __thiscall cocosbuilder::CCBReader::init(CCBReader *this)

{
  CCBAnimationManager *pCVar1;
  Director *this_00;
  Size *pSVar2;
  
  pCVar1 = operator_new(0x1e8,(nothrow_t *)&std::nothrow);
  if (pCVar1 != (CCBAnimationManager *)0x0) {
    CCBAnimationManager::CCBAnimationManager(pCVar1);
  }
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x80));
  }
  *(CCBAnimationManager **)(this + 0x80) = pCVar1;
  if (pCVar1 != (CCBAnimationManager *)0x0) {
    cocos2d::Ref::retain((Ref *)pCVar1);
  }
  cocos2d::Ref::release((Ref *)pCVar1);
  pCVar1 = *(CCBAnimationManager **)(this + 0x80);
  this_00 = (Director *)cocos2d::Director::getInstance();
  pSVar2 = (Size *)cocos2d::Director::getWinSize(this_00);
  CCBAnimationManager::setRootContainerSize(pCVar1,pSVar2);
  return 1;
}

