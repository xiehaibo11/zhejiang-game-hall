
/* cocos2d::PhysicsBody::setRotationEnable(bool) */

void __thiscall cocos2d::PhysicsBody::setRotationEnable(PhysicsBody *this,bool param_1)

{
  PhysicsBody *pPVar1;
  
  if (this[0x91] != (PhysicsBody)param_1) {
                    /* catch() { ... } // from try @ 00fffcec with catch @ 00fffe44 */
    pPVar1 = this + 0xa4;
    if (!param_1) {
      pPVar1 = (PhysicsBody *)&PHYSICS_INFINITY;
    }
    cpBodySetMoment(*(undefined4 *)pPVar1,*(undefined8 *)(this + 0x88));
                    /* try { // try from 00fffe60 to 010ffedf has its CatchHandler @ 00fffe60
                       catch() { ... } // from try @ 00fffe60 with catch @ 00fffe60
                       catch() { ... } // from try @ 00ffff50 with catch @ 00fffe60 */
    this[0x91] = (PhysicsBody)param_1;
  }
  return;
}

