
/* cocos2d::Camera::getRenderOrder() const */

int __thiscall cocos2d::Camera::getRenderOrder(Camera *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x4b0) == 0) {
    iVar1 = 0x7f00;
  }
  else {
    iVar1 = (uint)*(byte *)(*(long *)(this + 0x4b0) + 0x2d) << 8;
  }
  return iVar1 + (char)this[0x495];
}

