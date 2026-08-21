
/* cocos2d::Physics3DComponent::preSimulate() */

void __thiscall cocos2d::Physics3DComponent::preSimulate(Physics3DComponent *this)

{
  if (((((byte)this[0xd8] & 1) != 0) && (*(long *)(this + 0xd0) != 0)) &&
     (*(long *)(this + 0x28) != 0)) {
    syncNodeToPhysics(this);
    return;
  }
  return;
}

