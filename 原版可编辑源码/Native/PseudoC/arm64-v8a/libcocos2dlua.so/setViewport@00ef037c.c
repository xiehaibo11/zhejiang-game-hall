
/* cocos2d::Camera::setViewport(cocos2d::experimental::Viewport const&) */

void __thiscall cocos2d::Camera::setViewport(Camera *this,Viewport *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x4a8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x4a0) = uVar1;
  return;
}

