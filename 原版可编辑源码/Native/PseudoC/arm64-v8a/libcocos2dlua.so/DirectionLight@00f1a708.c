
/* cocos2d::DirectionLight::DirectionLight() */

void __thiscall cocos2d::DirectionLight::DirectionLight(DirectionLight *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0x13f800000;
  this[0x300] = (DirectionLight)0x1;
  *(undefined ***)this = &PTR__AmbientLight_017027d0;
  return;
}

