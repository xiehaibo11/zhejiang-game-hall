
/* cocos2d::MeshCommand::setDisplayColor(cocos2d::Vec4 const&) */

void __thiscall cocos2d::MeshCommand::setDisplayColor(MeshCommand *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

