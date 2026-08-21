
/* cocos2d::PhysicsShape::setBody(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsShape::setBody(PhysicsShape *this,PhysicsBody *param_1)

{
  undefined8 *puVar1;
  PhysicsBody *pPVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 010094d0 to 01109537 has its CatchHandler @ 010093cc */
  pPVar2 = *(PhysicsBody **)(this + 0x28);
  if ((pPVar2 != param_1) || (param_1 == (PhysicsBody *)0x0)) {
    if (pPVar2 != (PhysicsBody *)0x0) {
      PhysicsBody::removeShape(pPVar2,this,true);
    }
    puVar3 = *(undefined8 **)(this + 0x30);
    puVar1 = *(undefined8 **)(this + 0x38);
    if (puVar3 != puVar1) {
      pPVar2 = (PhysicsBody *)&DAT_01792ca8;
                    /* catch() { ... } // from try @ 01009448 with catch @ 0100951c */
      if (param_1 != (PhysicsBody *)0x0) {
        pPVar2 = param_1 + 0x88;
      }
      do {
        puVar4 = puVar3 + 1;
        cpShapeSetBody(*puVar3,*(undefined8 *)pPVar2);
        puVar3 = puVar4;
      } while (puVar1 != puVar4);
    }
    *(PhysicsBody **)(this + 0x28) = param_1;
  }
                    /* catch() { ... } // from try @ 01009584 with catch @ 01009538 */
  return;
}

