
/* cocos2d::Physics3DRigidBody::setCcdMotionThreshold(float) */

void __thiscall
cocos2d::Physics3DRigidBody::setCcdMotionThreshold(Physics3DRigidBody *this,float param_1)

{
                    /* try { // try from 01016544 to 0111659b has its CatchHandler @ 01016544
                       catch() { ... } // from try @ 01016544 with catch @ 01016544
                       catch() { ... } // from try @ 010165d4 with catch @ 01016544 */
  *(float *)(*(long *)(this + 0x78) + 0x118) = param_1;
  return;
}

