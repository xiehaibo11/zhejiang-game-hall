
/* cocos2d::PointLight::PointLight() */

void __thiscall cocos2d::PointLight::PointLight(PointLight *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0x13f800000;
  this[0x300] = (PointLight)0x1;
  *(undefined ***)this = &PTR__AmbientLight_01702d18;
  return;
}

