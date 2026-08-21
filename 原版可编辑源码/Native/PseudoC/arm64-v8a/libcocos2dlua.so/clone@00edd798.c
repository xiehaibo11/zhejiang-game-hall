
/* cocos2d::RepeatForever::clone() const */

void __thiscall cocos2d::RepeatForever::clone(RepeatForever *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
  create(pAVar1);
  return;
}

