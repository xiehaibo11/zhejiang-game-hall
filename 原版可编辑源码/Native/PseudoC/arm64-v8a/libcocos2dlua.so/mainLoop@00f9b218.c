
/* cocos2d::Director::mainLoop() */

void __thiscall cocos2d::Director::mainLoop(Director *this)

{
  PoolManager *this_00;
  AutoreleasePool *this_01;
  
  if (this[0x21] != (Director)0x0) {
    this[0x21] = (Director)0x0;
    reset(this);
    if (*(long **)(this + 0x108) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x108) + 0x10))();
      *(undefined8 *)(this + 0x108) = 0;
    }
    Ref::release((Ref *)this);
    return;
  }
                    /* try { // try from 00f9b268 to 0109b3c3 has its CatchHandler @ 00f9b268
                       catch() { ... } // from try @ 00f9b268 with catch @ 00f9b268
                       catch() { ... } // from try @ 00f9b504 with catch @ 00f9b268
                       catch() { ... } // from try @ 00f9b828 with catch @ 00f9b268
                       catch() { ... } // from try @ 00f9b92c with catch @ 00f9b268
                       catch() { ... } // from try @ 00f9bd28 with catch @ 00f9b268
                       catch() { ... } // from try @ 00f9c138 with catch @ 00f9b268
                       catch() { ... } // from try @ 00f9c14c with catch @ 00f9b268 */
  if (this[0x22] != (Director)0x0) {
    this[0x22] = (Director)0x0;
    restartDirector(this);
    return;
  }
  if (this[0x1d0] != (Director)0x0) {
    return;
  }
  drawScene(this);
  this_00 = (PoolManager *)PoolManager::getInstance();
  this_01 = (AutoreleasePool *)PoolManager::getCurrentPool(this_00);
  AutoreleasePool::clear(this_01);
  return;
}

