
/* cocos2d::BaseLight::BaseLight() */

void __thiscall cocos2d::BaseLight::BaseLight(BaseLight *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0x13f800000;
  *(undefined ***)this = &PTR__AmbientLight_01702288;
  this[0x300] = (BaseLight)0x1;
  return;
}

