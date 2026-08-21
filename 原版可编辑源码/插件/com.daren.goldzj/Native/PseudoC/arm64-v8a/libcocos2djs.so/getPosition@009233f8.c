
/* cocos2d::renderer::NodeProxy::getPosition(cocos2d::Vec3*) const */

void __thiscall cocos2d::renderer::NodeProxy::getPosition(NodeProxy *this,Vec3 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x88);
  *(undefined8 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar1 + 1);
  return;
}

