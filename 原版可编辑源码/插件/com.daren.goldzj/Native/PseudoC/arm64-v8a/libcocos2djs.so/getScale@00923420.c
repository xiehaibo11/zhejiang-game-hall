
/* cocos2d::renderer::NodeProxy::getScale(cocos2d::Vec3*) const */

void __thiscall cocos2d::renderer::NodeProxy::getScale(NodeProxy *this,Vec3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x88);
  *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x24);
  return;
}

