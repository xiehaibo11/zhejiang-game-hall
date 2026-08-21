
/* cocosbuilder::CCBReader::setAnimationManager(cocosbuilder::CCBAnimationManager*) */

void __thiscall
cocosbuilder::CCBReader::setAnimationManager(CCBReader *this,CCBAnimationManager *param_1)

{
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x80));
  }
  *(CCBAnimationManager **)(this + 0x80) = param_1;
  if (param_1 != (CCBAnimationManager *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

