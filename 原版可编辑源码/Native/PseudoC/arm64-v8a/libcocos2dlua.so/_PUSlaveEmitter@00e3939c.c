
/* non-virtual thunk to cocos2d::PUSlaveEmitter::~PUSlaveEmitter() */

void __thiscall cocos2d::PUSlaveEmitter::~PUSlaveEmitter(PUSlaveEmitter *this)

{
  PUEmitter *this_00;
  
  this_00 = (PUEmitter *)(this + -0x200);
  *(undefined ***)this_00 = &PTR__PUSlaveEmitter_016f0d68;
  *(undefined ***)this = &PTR__PUSlaveEmitter_016f0e58;
                    /* try { // try from 00e393cc to 00f393d7 has its CatchHandler @ 00e396c0 */
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  PUListener::~PUListener((PUListener *)this);
  PUEmitter::~PUEmitter(this_00);
  operator_delete(this_00);
  return;
}

