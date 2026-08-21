
/* cocos2d::PhysicsBody::addToPhysicsWorld() */

void __thiscall cocos2d::PhysicsBody::addToPhysicsWorld(PhysicsBody *this)

{
  long lVar1;
  
                    /* try { // try from 010016d0 to 011016df has its CatchHandler @ 0100189c */
  if ((*(long **)(this + 0x28) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar1 != 0)) {
                    /* try { // try from 010016e8 to 011016ef has its CatchHandler @ 0100184c */
                    /* try { // try from 010016f4 to 011016f7 has its CatchHandler @ 010017f0 */
                    /* WARNING: Could not recover jumptable at 0x01001700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x348) + 0x30))(*(long **)(lVar1 + 0x348),this);
    return;
  }
  return;
}

