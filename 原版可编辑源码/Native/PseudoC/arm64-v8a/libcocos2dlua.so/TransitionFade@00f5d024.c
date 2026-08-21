
/* cocos2d::TransitionFade::TransitionFade() */

void __thiscall cocos2d::TransitionFade::TransitionFade(TransitionFade *this)

{
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionFlipX_017193c8;
  Color4B::Color4B((Color4B *)(this + 0x386));
  return;
}

