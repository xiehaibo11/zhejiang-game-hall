
/* cocos2d::TransitionSplitRows::~TransitionSplitRows() */

void __thiscall cocos2d::TransitionSplitRows::~TransitionSplitRows(TransitionSplitRows *this)

{
                    /* try { // try from 00f5e1c0 to 0105e1cb has its CatchHandler @ 00f5e1dc */
  *(undefined ***)this = &PTR__TransitionSplitRows_0171a400;
  *(undefined ***)(this + 0x388) = &PTR__TransitionSplitCols_0171a968;
  if (*(Ref **)(this + 0x390) != (Ref *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5e1c0 with catch @ 00f5e1dc
                        */
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

