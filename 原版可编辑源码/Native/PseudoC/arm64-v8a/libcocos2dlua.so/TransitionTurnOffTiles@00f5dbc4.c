
/* cocos2d::TransitionTurnOffTiles::TransitionTurnOffTiles() */

void __thiscall
cocos2d::TransitionTurnOffTiles::TransitionTurnOffTiles(TransitionTurnOffTiles *this)

{
  Ref *this_00;
  
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionTurnOffTiles_01719e78;
  *(undefined ***)(this + 0x388) = &PTR__TransitionTurnOffTiles_0171a3d8;
  this_00 = (Ref *)NodeGrid::create();
  *(Ref **)(this + 0x390) = this_00;
  Ref::retain(this_00);
  return;
}

