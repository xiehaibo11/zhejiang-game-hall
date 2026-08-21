
/* cocos2d::Scene::create() */

Scene * cocos2d::Scene::create(void)

{
  Scene *this;
  ulong uVar1;
  
                    /* try { // try from 00f3cb84 to 0103cd47 has its CatchHandler @ 00f3cdb0 */
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (Scene *)0x0) {
    Scene(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Scene *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

