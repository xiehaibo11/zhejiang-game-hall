
/* cocos2d::PUObserver::notifyStart() */

void __thiscall cocos2d::PUObserver::notifyStart(PUObserver *this)

{
  this[0x65] = (PUObserver)0x0;
  this[99] = (PUObserver)0x1;
                    /* catch() { ... } // from try @ 00e4dad4 with catch @ 00e4daf0 */
                    /* WARNING: Could not recover jumptable at 0x00e4daf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,this[0x61]);
  return;
}

