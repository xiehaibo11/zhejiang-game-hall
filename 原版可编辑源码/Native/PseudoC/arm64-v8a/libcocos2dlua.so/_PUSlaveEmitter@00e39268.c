
/* cocos2d::PUSlaveEmitter::~PUSlaveEmitter() */

void __thiscall cocos2d::PUSlaveEmitter::~PUSlaveEmitter(PUSlaveEmitter *this)

{
  *(undefined ***)this = &PTR__PUSlaveEmitter_016f0d68;
                    /* try { // try from 00e39294 to 00f3929f has its CatchHandler @ 00e396a8 */
  *(undefined ***)(this + 0x200) = &PTR__PUSlaveEmitter_016f0e58;
  if (((byte)this[0x228] & 1) != 0) {
                    /* try { // try from 00e392a0 to 00f392c3 has its CatchHandler @ 00e39694 */
    operator_delete(*(void **)(this + 0x238));
  }
  if (((byte)this[0x210] & 1) != 0) {
    operator_delete(*(void **)(this + 0x220));
  }
  PUListener::~PUListener((PUListener *)(this + 0x200));
  PUEmitter::~PUEmitter((PUEmitter *)this);
  return;
}

