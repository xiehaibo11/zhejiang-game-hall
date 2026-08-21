
/* cocos2d::TransitionJumpZoom::TransitionJumpZoom() */

void __thiscall cocos2d::TransitionJumpZoom::TransitionJumpZoom(TransitionJumpZoom *this)

{
  Scene::Scene((Scene *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f58f80 with catch @ 00f58f38
                        */
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionFlipX_01713c18;
  return;
}

