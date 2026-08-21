
/* cocos2d::PhysicsBody::onExit() */

void __thiscall cocos2d::PhysicsBody::onExit(PhysicsBody *this)

{
  long lVar1;
  
                    /* try { // try from 01001714 to 0110171b has its CatchHandler @ 0100184c */
  if ((*(long **)(this + 0x28) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01001750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x348) + 0x18))(*(long **)(lVar1 + 0x348),this);
    return;
  }
  return;
}

