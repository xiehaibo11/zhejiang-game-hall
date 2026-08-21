
/* cocos2d::PUEmitter::isEmitterDone() const */

bool __thiscall cocos2d::PUEmitter::isEmitterDone(PUEmitter *this)

{
  if (this[0x34] != (PUEmitter)0x0) {
    return false;
  }
                    /* try { // try from 00e3341c to 00f3341f has its CatchHandler @ 00e33614 */
                    /* try { // try from 00e33420 to 00f3347b has its CatchHandler @ 00e32fe0 */
  return this[0x1a4] == (PUEmitter)0x0;
}

