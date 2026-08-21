
/* cocos2d::renderer::NodeProxy::getRotation(cocos2d::Quaternion*) const */

void __thiscall cocos2d::renderer::NodeProxy::getRotation(NodeProxy *this,Quaternion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(this + 0x88) + 0xc);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(this + 0x88) + 0x14);
  *(undefined8 *)param_1 = uVar1;
  return;
}

