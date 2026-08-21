
/* cocos2d::DirectionLight::~DirectionLight() */

void __thiscall cocos2d::DirectionLight::~DirectionLight(DirectionLight *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

