
/* cocos2d::Scene::createWithPhysics() */

Scene * cocos2d::Scene::createWithPhysics(void)

{
  Scene *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00f3d2b8 with catch @ 00f3d300 */
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f3d31c to 0103d347 has its CatchHandler @ 00f3d31c
                       catch() { ... } // from try @ 00f3d31c with catch @ 00f3d31c
                       catch() { ... } // from try @ 00f3d34c with catch @ 00f3d31c */
  if (this != (Scene *)0x0) {
    Scene(this);
    uVar1 = initWithPhysics(this);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f3d348 to 0103d34b has its CatchHandler @ 00f3d36c */
                    /* try { // try from 00f3d34c to 0103d37f has its CatchHandler @ 00f3d31c */
      (**(code **)(*(long *)this + 8))(this);
      this = (Scene *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

