
/* cocos2d::ProgressTimer::setReverseDirection(bool) */

void __thiscall cocos2d::ProgressTimer::setReverseDirection(ProgressTimer *this,bool param_1)

{
                    /* try { // try from 00f37844 to 0103785f has its CatchHandler @ 00f37c74 */
  if (this[0x380] != (ProgressTimer)param_1) {
    this[0x380] = (ProgressTimer)param_1;
    if (*(void **)(this + 800) != (void *)0x0) {
      free(*(void **)(this + 800));
      *(undefined8 *)(this + 800) = 0;
    }
                    /* try { // try from 00f37860 to 01037937 has its CatchHandler @ 00f375ec */
    *(undefined4 *)(this + 0x318) = 0;
  }
  return;
}

