
/* cocos2d::PhysicsShape::setMass(float) */

void __thiscall cocos2d::PhysicsShape::setMass(PhysicsShape *this,float param_1)

{
  if (0.0 <= param_1) {
                    /* try { // try from 010086f8 to 01108707 has its CatchHandler @ 01008718 */
    if (*(PhysicsBody **)(this + 0x28) != (PhysicsBody *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010086f8 with catch @ 01008718
                        */
      PhysicsBody::addMass(*(PhysicsBody **)(this + 0x28),-*(float *)(this + 0x50));
      PhysicsBody::addMass(*(PhysicsBody **)(this + 0x28),param_1);
    }
    *(float *)(this + 0x50) = param_1;
  }
  return;
}

