
/* cocos2d::Physics3DRigidBody::getAngularVelocity() const */

void __thiscall cocos2d::Physics3DRigidBody::getAngularVelocity(Physics3DRigidBody *this)

{
                    /* try { // try from 010162f0 to 01116373 has its CatchHandler @ 010162f0
                       catch() { ... } // from try @ 010162f0 with catch @ 010162f0
                       catch() { ... } // from try @ 0101637c with catch @ 010162f0
                       catch() { ... } // from try @ 010163f8 with catch @ 010162f0 */
  convertbtVector3ToVec3((btVector3 *)(*(long *)(this + 0x78) + 0x164));
  return;
}

