
/* cocos2d::renderer::NodeProxy::reorderChildren() */

void __thiscall cocos2d::renderer::NodeProxy::reorderChildren(NodeProxy *this)

{
  if ((*(byte *)(*(long *)(this + 0x80) + 3) >> 5 & 1) != 0) {
    FUN_00924024(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
    **(uint **)(this + 0x80) = **(uint **)(this + 0x80) & 0xdfffffff;
  }
  return;
}

