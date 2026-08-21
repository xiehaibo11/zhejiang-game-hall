
/* cocos2d::PUMeshSurfaceEmitter::create() */

PUEmitter * cocos2d::PUMeshSurfaceEmitter::create(void)

{
  undefined8 uVar1;
  PUEmitter *this;
  
                    /* catch() { ... } // from try @ 00e37060 with catch @ 00e37444 */
  this = operator_new(0x250,(nothrow_t *)&std::nothrow);
  if (this != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this);
                    /* catch() { ... } // from try @ 00e36fb4 with catch @ 00e37468 */
    *(undefined8 *)(this + 0x200) = 0;
                    /* catch() { ... } // from try @ 00e371e0 with catch @ 00e37478 */
    *(undefined8 *)(this + 0x210) = 0;
    *(undefined8 *)(this + 0x208) = 0;
    *(undefined ***)this = &PTR__PUMeshSurfaceEmitter_016f0978;
    Quaternion::Quaternion((Quaternion *)(this + 0x218));
    uVar1 = DEFAULT_SCALE;
    *(undefined4 *)(this + 0x230) = DAT_01788f3c;
    *(undefined8 *)(this + 0x228) = uVar1;
    *(undefined8 *)(this + 0x23c) = 0;
    *(undefined8 *)(this + 0x234) = 0;
    *(undefined8 *)(this + 0x241) = 0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

