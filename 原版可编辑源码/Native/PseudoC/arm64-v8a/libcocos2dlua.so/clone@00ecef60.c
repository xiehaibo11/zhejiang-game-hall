
/* cocos2d::EaseExponentialIn::clone() const */

void __thiscall cocos2d::EaseExponentialIn::clone(EaseExponentialIn *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* try { // try from 00ecef78 to 00fcef7f has its CatchHandler @ 00ecefe0 */
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* try { // try from 00ecef80 to 00fceffb has its CatchHandler @ 00eceed4 */
    create(pAVar1);
    return;
  }
  return;
}

