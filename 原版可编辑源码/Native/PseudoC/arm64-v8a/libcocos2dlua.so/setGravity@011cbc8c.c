
/* btDiscreteDynamicsWorld::setGravity(btVector3 const&) */

void __thiscall
btDiscreteDynamicsWorld::setGravity(btDiscreteDynamicsWorld *this,btVector3 *param_1)

{
  btRigidBody *this_00;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(this + 0x144);
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x168) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x160) = uVar3;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar2 * 8);
      if ((*(int *)(this_00 + 0xec) != 2 && *(int *)(this_00 + 0xec) != 5) &&
         (((byte)this_00[0x228] & 1) == 0)) {
        btRigidBody::setGravity(this_00,param_1);
        iVar1 = *(int *)(this + 0x144);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

