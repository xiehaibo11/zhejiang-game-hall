
/* cocos2d::AmbientLight::~AmbientLight() */

void __thiscall cocos2d::AmbientLight::~AmbientLight(AmbientLight *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

