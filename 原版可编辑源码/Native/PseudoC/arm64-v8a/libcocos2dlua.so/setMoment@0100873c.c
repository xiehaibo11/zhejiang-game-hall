
/* cocos2d::PhysicsShape::setMoment(float) */

void __thiscall cocos2d::PhysicsShape::setMoment(PhysicsShape *this,float param_1)

{
  if (0.0 <= param_1) {
                    /* catch() { ... } // from try @ 010087a4 with catch @ 01008750 */
    if (*(PhysicsBody **)(this + 0x28) != (PhysicsBody *)0x0) {
      PhysicsBody::addMoment(*(PhysicsBody **)(this + 0x28),-*(float *)(this + 0x54));
                    /* try { // try from 01008778 to 0110877f has its CatchHandler @ 01008804 */
      PhysicsBody::addMoment(*(PhysicsBody **)(this + 0x28),param_1);
    }
    *(float *)(this + 0x54) = param_1;
  }
  return;
}

