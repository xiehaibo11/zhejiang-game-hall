
/* cocos2d::Scene::createWithSize(cocos2d::Size const&) */

Scene * cocos2d::Scene::createWithSize(Size *param_1)

{
  Scene *this;
  
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (Scene *)0x0) {
    Scene(this);
    (**(code **)(*(long *)this + 0x160))(this,param_1);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

