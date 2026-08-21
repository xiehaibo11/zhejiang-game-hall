
/* cocos2d::TransitionPageTurn::actionWithSize(cocos2d::Size const&) */

void __thiscall cocos2d::TransitionPageTurn::actionWithSize(TransitionPageTurn *this,Size *param_1)

{
  TransitionPageTurn TVar1;
  FiniteTimeAction *pFVar2;
  
  TVar1 = this[0x398];
  pFVar2 = (FiniteTimeAction *)PageTurn3D::create(*(float *)(this + 0x380),param_1);
  if (TVar1 != (TransitionPageTurn)0x0) {
    ReverseTime::create(pFVar2);
    return;
  }
  return;
}

