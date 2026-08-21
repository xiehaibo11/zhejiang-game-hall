
/* cocos2d::PUOnClearObserver::notifyStart() */

void __thiscall cocos2d::PUOnClearObserver::notifyStart(PUOnClearObserver *this)

{
  PUObserver::notifyStart((PUObserver *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a394 with catch @ 00e3a3b4
                        */
  this[0xa1] = (PUOnClearObserver)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a338 with catch @ 00e3a3b8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a2ec with catch @ 00e3a3c0
                        */
  return;
}

