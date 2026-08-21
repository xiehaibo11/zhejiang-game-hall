
/* cocos2d::TransitionSplitCols::TransitionSplitCols() */

void __thiscall cocos2d::TransitionSplitCols::TransitionSplitCols(TransitionSplitCols *this)

{
  Ref *this_00;
  
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionSplitRows_0171a400;
  *(undefined ***)(this + 0x388) = &PTR__TransitionSplitCols_0171a968;
  this_00 = (Ref *)NodeGrid::create();
  *(Ref **)(this + 0x390) = this_00;
  Ref::retain(this_00);
  return;
}

