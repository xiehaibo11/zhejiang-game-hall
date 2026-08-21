
/* cocos2d::AmbientLight::AmbientLight() */

void __thiscall cocos2d::AmbientLight::AmbientLight(AmbientLight *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0x13f800000;
  this[0x300] = (AmbientLight)0x1;
  *(undefined ***)this = &PTR__AmbientLight_017037a8;
  return;
}

