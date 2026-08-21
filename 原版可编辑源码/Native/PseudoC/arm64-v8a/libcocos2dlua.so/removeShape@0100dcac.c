
/* cocos2d::PhysicsWorld::removeShape(cocos2d::PhysicsShape*) */

void __thiscall cocos2d::PhysicsWorld::removeShape(PhysicsWorld *this,PhysicsShape *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0100dcb0 to 0110dcb7 has its CatchHandler @ 0100dd70 */
  if (param_1 != (PhysicsShape *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    for (puVar1 = *(undefined8 **)(param_1 + 0x30); puVar1 != puVar2; puVar1 = puVar1 + 1) {
                    /* try { // try from 0100dce0 to 0110dce7 has its CatchHandler @ 0100dd60 */
      uVar4 = *puVar1;
                    /* try { // try from 0100dce8 to 0110dd83 has its CatchHandler @ 0100dc58 */
      cVar3 = cpSpaceContainsShape(*(undefined8 *)(this + 0x28),uVar4);
      if (cVar3 != '\0') {
        cpSpaceRemoveShape(*(undefined8 *)(this + 0x28),uVar4);
      }
    }
  }
  return;
}

