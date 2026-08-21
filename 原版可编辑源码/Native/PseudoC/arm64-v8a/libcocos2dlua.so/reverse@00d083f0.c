
/* cocos2d::Animate3D::reverse() const */

void __thiscall cocos2d::Animate3D::reverse(Animate3D *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x18))();
  *(byte *)(lVar1 + 0x78) = *(byte *)(lVar1 + 0x78) ^ 1;
  return;
}

