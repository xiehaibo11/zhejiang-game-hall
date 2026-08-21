
/* non-virtual thunk to cocos2d::PUSlaveEmitter::~PUSlaveEmitter() */

void __thiscall cocos2d::PUSlaveEmitter::~PUSlaveEmitter(PUSlaveEmitter *this)

{
                    /* try { // try from 00e3934c to 00f39353 has its CatchHandler @ 00e395ec */
                    /* try { // try from 00e39354 to 00f3937b has its CatchHandler @ 00e37bc0 */
  *(undefined ***)(this + -0x200) = &PTR__PUSlaveEmitter_016f0d68;
  *(undefined ***)this = &PTR__PUSlaveEmitter_016f0e58;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  if (((byte)this[0x10] & 1) != 0) {
                    /* try { // try from 00e3937c to 00f39383 has its CatchHandler @ 00e39610 */
    operator_delete(*(void **)(this + 0x20));
  }
  PUListener::~PUListener((PUListener *)this);
  PUEmitter::~PUEmitter((PUEmitter *)(this + -0x200));
  return;
}

