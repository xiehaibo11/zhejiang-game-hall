
/* btDiscreteDynamicsWorld::addRigidBody(btRigidBody*) */

void __thiscall
btDiscreteDynamicsWorld::addRigidBody(btDiscreteDynamicsWorld *this,btRigidBody *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  
  if ((((byte)param_1[0xe0] & 3) == 0) && (((byte)param_1[0x228] & 1) == 0)) {
    btRigidBody::setGravity(param_1,(btVector3 *)(this + 0x160));
  }
  if (*(long *)(param_1 + 200) != 0) {
    if (((byte)param_1[0xe0] & 1) == 0) {
      iVar4 = *(int *)(this + 0x144);
      if (iVar4 == *(int *)(this + 0x148)) {
        uVar1 = iVar4 << 1;
        if (iVar4 == 0) {
          uVar1 = 1;
        }
        if (iVar4 < (int)uVar1) {
          if (uVar1 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = btAlignedAllocInternal
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                              );
            iVar4 = *(int *)(this + 0x144);
          }
          if (0 < iVar4) {
            lVar6 = 0;
            do {
              lVar8 = lVar6 * 8;
              lVar6 = lVar6 + 1;
              *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(*(long *)(this + 0x150) + lVar8);
            } while (iVar4 != lVar6);
          }
          if (*(void **)(this + 0x150) != (void *)0x0) {
            if (this[0x158] != (btDiscreteDynamicsWorld)0x0) {
              btAlignedFreeInternal(*(void **)(this + 0x150));
              iVar4 = *(int *)(this + 0x144);
            }
            *(undefined8 *)(this + 0x150) = 0;
          }
          *(long *)(this + 0x150) = lVar3;
          this[0x158] = (btDiscreteDynamicsWorld)0x1;
          *(uint *)(this + 0x148) = uVar1;
        }
      }
      *(btRigidBody **)(*(long *)(this + 0x150) + (long)iVar4 * 8) = param_1;
      *(int *)(this + 0x144) = iVar4 + 1;
    }
    else {
      btCollisionObject::setActivationState((btCollisionObject *)param_1,2);
    }
    bVar2 = (*(uint *)(param_1 + 0xe0) & 3) != 0;
    uVar7 = 1;
    if (bVar2) {
      uVar7 = 2;
    }
    uVar5 = 0xfffffffd;
    if (!bVar2) {
      uVar5 = 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x011cbeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x48))(this,param_1,uVar7,uVar5);
    return;
  }
  return;
}

