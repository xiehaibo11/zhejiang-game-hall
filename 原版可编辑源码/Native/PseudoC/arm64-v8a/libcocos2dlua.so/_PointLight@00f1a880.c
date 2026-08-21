
/* cocos2d::PointLight::~PointLight() */

void __thiscall cocos2d::PointLight::~PointLight(PointLight *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

