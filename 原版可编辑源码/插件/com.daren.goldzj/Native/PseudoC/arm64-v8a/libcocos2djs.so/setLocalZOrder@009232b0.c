
/* cocos2d::renderer::NodeProxy::setLocalZOrder(int) */

void __thiscall cocos2d::renderer::NodeProxy::setLocalZOrder(NodeProxy *this,int param_1)

{
  uint *puVar1;
  
  if (**(int **)(this + 0xa8) != param_1) {
    **(int **)(this + 0xa8) = param_1;
    if (*(long *)(this + 0xe8) != 0) {
      puVar1 = *(uint **)(*(long *)(this + 0xe8) + 0x80);
      *puVar1 = *puVar1 | 0x20000000;
    }
  }
  return;
}

