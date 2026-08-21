
/* cocos2d::Lens3D::setPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::Lens3D::setPosition(Lens3D *this,Vec2 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = Vec2::equals((Vec2 *)param_1,this + 0x68);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)param_1;
    this[0x79] = (Lens3D)0x1;
    *(undefined8 *)(this + 0x68) = uVar2;
  }
                    /* try { // try from 00ed6b54 to 00fd6b73 has its CatchHandler @ 00ed6bb4 */
  return;
}

