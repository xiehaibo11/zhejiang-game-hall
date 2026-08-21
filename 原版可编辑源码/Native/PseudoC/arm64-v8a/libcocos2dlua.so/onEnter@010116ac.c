
/* cocos2d::Physics3DComponent::onEnter() */

void __thiscall cocos2d::Physics3DComponent::onEnter(Physics3DComponent *this)

{
  long lVar1;
  
  Component::onEnter((Component *)this);
  if (((*(long *)(*(long *)(this + 0xd0) + 0x30) == 0) && (*(long **)(this + 0x28) != (long *)0x0))
     && (lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar1 != 0)) {
    addToPhysicsWorld(this,*(Physics3DWorld **)(lVar1 + 0x350));
    return;
  }
  return;
}

