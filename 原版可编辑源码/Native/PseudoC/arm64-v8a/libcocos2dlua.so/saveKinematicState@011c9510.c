
/* btDiscreteDynamicsWorld::saveKinematicState(float) */

void __thiscall
btDiscreteDynamicsWorld::saveKinematicState(btDiscreteDynamicsWorld *this,float param_1)

{
  btRigidBody *this_00;
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x18) + lVar2 * 8);
      if (((this_00 != (btRigidBody *)0x0 && (*(uint *)(this_00 + 0x100) & 2) != 0) &&
          (*(int *)(this_00 + 0xec) != 2)) && (((byte)this_00[0xe0] >> 1 & 1) != 0)) {
        btRigidBody::saveKinematicState(this_00,param_1);
        iVar1 = *(int *)(this + 0xc);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

