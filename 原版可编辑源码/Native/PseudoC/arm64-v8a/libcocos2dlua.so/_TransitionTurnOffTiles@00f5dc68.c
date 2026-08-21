
/* cocos2d::TransitionTurnOffTiles::~TransitionTurnOffTiles() */

void __thiscall
cocos2d::TransitionTurnOffTiles::~TransitionTurnOffTiles(TransitionTurnOffTiles *this)

{
  *(undefined ***)this = &PTR__TransitionTurnOffTiles_01719e78;
  *(undefined ***)(this + 0x388) = &PTR__TransitionTurnOffTiles_0171a3d8;
  if (*(Ref **)(this + 0x390) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x390));
  }
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  return;
}

