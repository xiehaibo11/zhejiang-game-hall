
/* btDiscreteDynamicsWorld::applyGravity() */

void __thiscall btDiscreteDynamicsWorld::applyGravity(btDiscreteDynamicsWorld *this)

{
  int iVar1;
  btRigidBody *this_00;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(this + 0x144);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar3 * 8);
      iVar1 = *(int *)(this_00 + 0xec);
      if (iVar1 != 2 && iVar1 != 5) {
        btRigidBody::applyGravity(this_00);
        iVar2 = *(int *)(this + 0x144);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}

