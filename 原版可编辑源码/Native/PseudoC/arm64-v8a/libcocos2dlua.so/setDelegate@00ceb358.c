
/* cocosbuilder::CCBAnimationManager::setDelegate(cocosbuilder::CCBAnimationManagerDelegate*) */

void __thiscall
cocosbuilder::CCBAnimationManager::setDelegate
          (CCBAnimationManager *this,CCBAnimationManagerDelegate *param_1)

{
  Ref *pRVar1;
  
  if ((*(long *)(this + 0xd8) != 0) &&
     (pRVar1 = (Ref *)__dynamic_cast(*(long *)(this + 0xd8),&CCBAnimationManagerDelegate::typeinfo,
                                     &cocos2d::Ref::typeinfo,0xfffffffffffffffe),
     pRVar1 != (Ref *)0x0)) {
    cocos2d::Ref::release(pRVar1);
  }
  *(CCBAnimationManagerDelegate **)(this + 0xd8) = param_1;
  if ((param_1 != (CCBAnimationManagerDelegate *)0x0) &&
     (pRVar1 = (Ref *)__dynamic_cast(param_1,&CCBAnimationManagerDelegate::typeinfo,
                                     &cocos2d::Ref::typeinfo,0xfffffffffffffffe),
     pRVar1 != (Ref *)0x0)) {
    cocos2d::Ref::retain(pRVar1);
    return;
  }
  return;
}

