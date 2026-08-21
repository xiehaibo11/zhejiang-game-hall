
/* cocos2d::PhysicsBody::removeFromWorld() */

void __thiscall cocos2d::PhysicsBody::removeFromWorld(PhysicsBody *this)

{
  long lVar1;
  
  if ((*(long **)(this + 0x28) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01000ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x348) + 0x18))(*(long **)(lVar1 + 0x348),this);
    return;
  }
  return;
}

