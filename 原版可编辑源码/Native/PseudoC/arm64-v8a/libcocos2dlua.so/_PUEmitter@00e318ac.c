
/* cocos2d::PUEmitter::~PUEmitter() */

void __thiscall cocos2d::PUEmitter::~PUEmitter(PUEmitter *this)

{
                    /* catch() { ... } // from try @ 00e3173c with catch @ 00e318c4 */
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__PUEmitter_016f0490;
  if (*(long **)(this + 0x100) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e31828 with catch @ 00e318e0 */
    (**(code **)(**(long **)(this + 0x100) + 8))();
  }
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 8))();
  }
  if (*(long **)(this + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x128) + 8))();
  }
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 8))();
  }
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
  }
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 8))();
  }
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 8))();
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 8))();
  }
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 8))();
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  Vec4::~Vec4((Vec4 *)(this + 0x1cc));
  Vec4::~Vec4((Vec4 *)(this + 0x1bc));
  Vec4::~Vec4((Vec4 *)(this + 0x1ac));
  if (((byte)this[0x108] & 1) != 0) {
    operator_delete(*(void **)(this + 0x118));
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0xe0));
  Quaternion::~Quaternion((Quaternion *)(this + 0xd0));
  Quaternion::~Quaternion((Quaternion *)(this + 0xc0));
  if (((byte)this[0x90] & 1) != 0) {
    operator_delete(*(void **)(this + 0xa0));
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  Particle3DEmitter::~Particle3DEmitter((Particle3DEmitter *)this);
  return;
}

