
/* cocos2d::renderer::NodeProxy::clearAssembler() */

void __thiscall cocos2d::renderer::NodeProxy::clearAssembler(NodeProxy *this)

{
  if (*(Ref **)(this + 0x108) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x108));
    *(undefined8 *)(this + 0x108) = 0;
  }
  **(uint **)(this + 0x80) = **(uint **)(this + 0x80) & 0xefffffff;
  return;
}

