
/* cocos2d::SpotLight::~SpotLight() */

void __thiscall cocos2d::SpotLight::~SpotLight(SpotLight *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

