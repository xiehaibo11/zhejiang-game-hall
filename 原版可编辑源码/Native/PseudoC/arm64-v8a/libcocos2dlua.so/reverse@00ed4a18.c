
/* cocos2d::GridAction::reverse() const */

void __thiscall cocos2d::GridAction::reverse(GridAction *this)

{
  FiniteTimeAction *pFVar1;
  
  pFVar1 = (FiniteTimeAction *)(**(code **)(*(long *)this + 0x18))();
  ReverseTime::create(pFVar1);
  return;
}

