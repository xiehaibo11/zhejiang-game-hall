
/* cocos2d::TransitionFadeTR::TransitionFadeTR() */

void __thiscall cocos2d::TransitionFadeTR::TransitionFadeTR(TransitionFadeTR *this)

{
  Ref *this_00;
  
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionFadeBL_0171af20;
  *(undefined ***)(this + 0x388) = &PTR__TransitionFadeTR_0171b488;
  this_00 = (Ref *)NodeGrid::create();
  *(Ref **)(this + 0x390) = this_00;
  Ref::retain(this_00);
  return;
}

