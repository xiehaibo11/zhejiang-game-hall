
/* cocos2d::BatchSprite3D::setLightMask(unsigned int) */

void __thiscall cocos2d::BatchSprite3D::setLightMask(BatchSprite3D *this,uint param_1)

{
  if (*(long *)(this + 0x338) != 0) {
    *(uint *)(*(long *)(this + 0x338) + 0x28c) = param_1;
  }
  this[0x2f9] = (BatchSprite3D)0x1;
  return;
}

