
/* cocos2d::Blink::stop() */

void __thiscall cocos2d::Blink::stop(Blink *this)

{
  long *plVar1;
  
                    /* try { // try from 00ee2614 to 00fe261b has its CatchHandler @ 00ee2694 */
                    /* try { // try from 00ee261c to 00fe26af has its CatchHandler @ 00ee25e4 */
  plVar1 = *(long **)(this + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,this[0x5c]);
  }
  Action::stop((Action *)this);
  return;
}

