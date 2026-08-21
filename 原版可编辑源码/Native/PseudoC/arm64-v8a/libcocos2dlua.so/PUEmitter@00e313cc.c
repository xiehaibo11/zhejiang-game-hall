
/* cocos2d::PUEmitter::PUEmitter() */

void __thiscall cocos2d::PUEmitter::PUEmitter(PUEmitter *this)

{
  undefined8 uVar1;
  PUDynamicAttributeFixed *pPVar2;
  
  Particle3DEmitter::Particle3DEmitter((Particle3DEmitter *)this);
  *(undefined ***)this = &PTR__PUEmitter_016f0490;
  Vec3::Vec3((Vec3 *)(this + 0x38));
  Vec3::Vec3((Vec3 *)(this + 0x44));
  Vec3::Vec3((Vec3 *)(this + 0x50));
  Vec3::Vec3((Vec3 *)(this + 0x5c));
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined8 *)(this + 0x68) = 0x3f8000003f800000;
  uVar1 = DEFAULT_DIRECTION;
  *(undefined4 *)(this + 0xb0) = DAT_01788e18;
  *(undefined8 *)(this + 0xa8) = uVar1;
  uVar1 = DEFAULT_DIRECTION;
  *(undefined4 *)(this + 0xbc) = DAT_01788e18;
  *(undefined8 *)(this + 0xb4) = uVar1;
  Quaternion::Quaternion((Quaternion *)(this + 0xc0));
  Quaternion::Quaternion((Quaternion *)(this + 0xd0));
  Quaternion::Quaternion((Quaternion *)(this + 0xe0));
  this[0xf0] = (PUEmitter)0x0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x150] = (PUEmitter)0x0;
  this[0x160] = (PUEmitter)0x0;
  this[0x170] = (PUEmitter)0x0;
  this[0x180] = (PUEmitter)0x0;
  Vec3::Vec3((Vec3 *)(this + 0x184));
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  this[0x19c] = (PUEmitter)0x0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined2 *)(this + 0x1a8) = 0;
  Vec4::Vec4((Vec4 *)(this + 0x1ac),(Vec4 *)DEFAULT_COLOUR);
  Vec4::Vec4((Vec4 *)(this + 0x1bc),(Vec4 *)DEFAULT_START_COLOUR_RANGE);
  Vec4::Vec4((Vec4 *)(this + 0x1cc),(Vec4 *)DEFAULT_END_COLOUR_RANGE);
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined2 *)(this + 0x1e4) = 0x100;
  this[0x1e6] = (PUEmitter)0x0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  this[0x1f8] = (PUEmitter)0x0;
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x100) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0x41200000,pPVar2);
                    /* try { // try from 00e3156c to 00f3157b has its CatchHandler @ 00e316d0 */
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x120) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0x40400000,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x128) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0x3f800000,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x130) = pPVar2;
                    /* try { // try from 00e315f4 to 00f31617 has its CatchHandler @ 00e316cc */
  (**(code **)(*(long *)pPVar2 + 0x28))(0x42c80000,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x138) = pPVar2;
                    /* try { // try from 00e31634 to 00f31647 has its CatchHandler @ 00e316d0 */
  (**(code **)(*(long *)pPVar2 + 0x28))(0,pPVar2);
                    /* try { // try from 00e31648 to 00f316eb has its CatchHandler @ 00e31274 */
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x140) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0xf8) = pPVar2;
                    /* catch() { ... } // from try @ 00e312bc with catch @ 00e316b0 */
  (**(code **)(*(long *)pPVar2 + 0x28))(0x41a00000,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
                    /* catch() { ... } // from try @ 00e315f4 with catch @ 00e316cc */
                    /* catch() { ... } // from try @ 00e3156c with catch @ 00e316d0
                       catch() { ... } // from try @ 00e31634 with catch @ 00e316d0 */
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x148) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0,pPVar2);
                    /* catch() { ... } // from try @ 00e31744 with catch @ 00e316ec
                       catch() { ... } // from try @ 00e31844 with catch @ 00e316ec */
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x158) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
                    /* try { // try from 00e3173c to 00f31743 has its CatchHandler @ 00e318c4 */
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
                    /* try { // try from 00e31744 to 00f31827 has its CatchHandler @ 00e316ec */
  *(PUDynamicAttributeFixed **)(this + 0x168) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0,pPVar2);
  pPVar2 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar2 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar2);
  }
  *(PUDynamicAttributeFixed **)(this + 0x178) = pPVar2;
  (**(code **)(*(long *)pPVar2 + 0x28))(0,pPVar2);
  return;
}

