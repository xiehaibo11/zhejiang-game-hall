
/* cocos2d::TransitionCrossFade::TransitionCrossFade() */

void __thiscall cocos2d::TransitionCrossFade::TransitionCrossFade(TransitionCrossFade *this)

{
  Scene::Scene((Scene *)this);
  *(undefined8 *)(this + 0x37e) = 0;
                    /* catch() { ... } // from try @ 00f5d238 with catch @ 00f5d5f4 */
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
                    /* catch() { ... } // from try @ 00f5d2b4 with catch @ 00f5d5fc
                       catch() { ... } // from try @ 00f5d498 with catch @ 00f5d5fc */
  *(undefined ***)this = &PTR__TransitionFlipX_01719920;
                    /* catch() { ... } // from try @ 00f5d35c with catch @ 00f5d600 */
  return;
}

