
/* cocos2d::renderer::NodeProxy::setOpacity(unsigned char) */

void __thiscall cocos2d::renderer::NodeProxy::setOpacity(NodeProxy *this,uchar param_1)

{
  if (**(uchar **)(this + 0xb8) != param_1) {
    **(uchar **)(this + 0xb8) = param_1;
    **(uint **)(this + 0x80) = **(uint **)(this + 0x80) | 0x20;
  }
  return;
}

