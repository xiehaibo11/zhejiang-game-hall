
/* cocos2d::Physics3DComponent::postSimulate() */

void __thiscall cocos2d::Physics3DComponent::postSimulate(Physics3DComponent *this)

{
  if (((((byte)this[0xd8] >> 1 & 1) != 0) && (*(long *)(this + 0xd0) != 0)) &&
     (*(long *)(this + 0x28) != 0)) {
    syncPhysicsToNode(this);
    return;
  }
  return;
}

