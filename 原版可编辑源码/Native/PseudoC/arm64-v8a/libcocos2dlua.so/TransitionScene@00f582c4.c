
/* cocos2d::TransitionScene::TransitionScene() */

void __thiscall cocos2d::TransitionScene::TransitionScene(TransitionScene *this)

{
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  *(undefined8 *)(this + 0x37e) = 0;
  return;
}

