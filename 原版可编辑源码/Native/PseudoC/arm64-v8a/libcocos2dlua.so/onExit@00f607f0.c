
/* cocos2d::TransitionProgress::onExit() */

void __thiscall cocos2d::TransitionProgress::onExit(TransitionProgress *this)

{
                    /* try { // try from 00f60800 to 0106080b has its CatchHandler @ 00f6080c */
                    /* catch() { ... } // from try @ 00f6069c with catch @ 00f6080c
                       catch() { ... } // from try @ 00f60800 with catch @ 00f6080c
                       try { // try from 00f6080c to 01060823 has its CatchHandler @ 00f6054c */
  (**(code **)(*(long *)this + 0x288))(this,0xc001,1);
  TransitionScene::onExit((TransitionScene *)this);
  return;
}

