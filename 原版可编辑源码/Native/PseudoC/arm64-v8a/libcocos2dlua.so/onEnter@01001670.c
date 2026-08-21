
/* cocos2d::PhysicsBody::onEnter() */

void __thiscall cocos2d::PhysicsBody::onEnter(PhysicsBody *this)

{
  long lVar1;
  
                    /* try { // try from 01001680 to 01101693 has its CatchHandler @ 010017fc */
  if ((*(long **)(this + 0x28) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x28) + 0x368))(), lVar1 != 0)) {
                    /* try { // try from 01001698 to 011016bb has its CatchHandler @ 01001850 */
                    /* WARNING: Could not recover jumptable at 0x010016b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x348) + 0x30))(*(long **)(lVar1 + 0x348),this);
    return;
  }
  return;
}

