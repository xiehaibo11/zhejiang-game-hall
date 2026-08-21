
/* cocos2d::renderer::View::getForward(cocos2d::Vec3&) const */

void __thiscall cocos2d::renderer::View::getForward(View *this,Vec3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(this + 0x58);
  uVar2 = *(undefined4 *)(this + 0x68);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}

