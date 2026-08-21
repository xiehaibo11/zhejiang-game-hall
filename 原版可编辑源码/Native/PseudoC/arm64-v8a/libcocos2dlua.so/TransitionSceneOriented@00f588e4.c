
/* cocos2d::TransitionSceneOriented::TransitionSceneOriented() */

void __thiscall
cocos2d::TransitionSceneOriented::TransitionSceneOriented(TransitionSceneOriented *this)

{
                    /* try { // try from 00f588e4 to 010589a7 has its CatchHandler @ 00f588e4
                       catch() { ... } // from try @ 00f588e4 with catch @ 00f588e4
                       catch() { ... } // from try @ 00f589d8 with catch @ 00f588e4 */
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionFlipX_01713168;
  return;
}

