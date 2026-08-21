
/* cocos2d::PhysicsBody::onRemove() */

void __thiscall cocos2d::PhysicsBody::onRemove(PhysicsBody *this)

{
  long lVar1;
  
  if ((*(long **)(this + 0x28) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar1 != 0)) {
    (**(code **)(**(long **)(lVar1 + 0x348) + 0x18))(*(long **)(lVar1 + 0x348),this);
  }
  *(undefined8 *)(*(long *)(this + 0x28) + 0x2f0) = 0;
  return;
}

