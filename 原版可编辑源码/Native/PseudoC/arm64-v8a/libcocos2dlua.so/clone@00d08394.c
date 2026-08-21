
/* covariant return thunk to cocos2d::Animate3D::clone() const */

long __thiscall cocos2d::Animate3D::clone(Animate3D *this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = create(*(Animation3D **)(this + 0x38));
  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(this + 0x28);
  uVar3 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  *(Animate3D *)(lVar2 + 0x78) = this[0x50];
  *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(this + 0x24);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  *(undefined4 *)(lVar2 + 0x84) = *(undefined4 *)(this + 0x5c);
  return lVar1;
}

