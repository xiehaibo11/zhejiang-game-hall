
/* cocos2d::Physics3DWorld::getPhysicsObject(btCollisionObject const*) */

long * __thiscall
cocos2d::Physics3DWorld::getPhysicsObject(Physics3DWorld *this,btCollisionObject *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  btCollisionObject *pbVar4;
  long *plVar5;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar1 == puVar2) {
      return (long *)0x0;
    }
    plVar5 = (long *)*puVar1;
    iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar3 == 1) {
      pbVar4 = (btCollisionObject *)plVar5[0xf];
joined_r0x010107c4:
      if (pbVar4 == param_1) {
        return plVar5;
      }
    }
    else {
                    /* catch() { ... } // from try @ 0101084c with catch @ 010107f0 */
      iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (iVar3 == 2) {
        pbVar4 = (btCollisionObject *)plVar5[0x1c];
        goto joined_r0x010107c4;
      }
    }
    puVar1 = puVar1 + 1;
                    /* try { // try from 01010814 to 0111081b has its CatchHandler @ 01010874 */
  } while( true );
}

