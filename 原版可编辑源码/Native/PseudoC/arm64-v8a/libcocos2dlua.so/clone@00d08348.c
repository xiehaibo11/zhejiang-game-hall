
/* cocos2d::Animate3D::clone() const */

void __thiscall cocos2d::Animate3D::clone(Animate3D *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = create(*(Animation3D **)(this + 0x60));
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(this + 0x50);
  uVar2 = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(Animate3D *)(lVar1 + 0x78) = this[0x78];
  *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(lVar1 + 0x84) = *(undefined4 *)(this + 0x84);
  return;
}

