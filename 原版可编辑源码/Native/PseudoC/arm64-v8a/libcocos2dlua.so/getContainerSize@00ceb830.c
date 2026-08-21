
/* cocosbuilder::CCBAnimationManager::getContainerSize(cocos2d::Node*) */

CCBAnimationManager * __thiscall
cocosbuilder::CCBAnimationManager::getContainerSize(CCBAnimationManager *this,Node *param_1)

{
  CCBAnimationManager *pCVar1;
  
  if (param_1 != (Node *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ceb840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pCVar1 = (CCBAnimationManager *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    return pCVar1;
  }
  return this + 0xd0;
}

