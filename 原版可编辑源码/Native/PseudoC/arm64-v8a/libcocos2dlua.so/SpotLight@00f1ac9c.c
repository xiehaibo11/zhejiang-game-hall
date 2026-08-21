
/* cocos2d::SpotLight::SpotLight() */

void __thiscall cocos2d::SpotLight::SpotLight(SpotLight *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0x13f800000;
  this[0x300] = (SpotLight)0x1;
  *(undefined ***)this = &PTR__AmbientLight_01703260;
  return;
}

