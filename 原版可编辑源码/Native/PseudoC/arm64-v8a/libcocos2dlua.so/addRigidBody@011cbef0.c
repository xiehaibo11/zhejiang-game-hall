
/* btDiscreteDynamicsWorld::addRigidBody(btRigidBody*, short, short) */

void __thiscall
btDiscreteDynamicsWorld::addRigidBody
          (btDiscreteDynamicsWorld *this,btRigidBody *param_1,short param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((((byte)param_1[0xe0] & 3) == 0) && (((byte)param_1[0x228] & 1) == 0)) {
    btRigidBody::setGravity(param_1,(btVector3 *)(this + 0x160));
  }
  if (*(long *)(param_1 + 200) != 0) {
    if (((byte)param_1[0xe0] & 1) == 0) {
      iVar3 = *(int *)(this + 0x144);
      if (iVar3 == *(int *)(this + 0x148)) {
        uVar1 = iVar3 << 1;
        if (iVar3 == 0) {
          uVar1 = 1;
        }
        if (iVar3 < (int)uVar1) {
          if (uVar1 == 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = btAlignedAllocInternal
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10
                              );
            iVar3 = *(int *)(this + 0x144);
          }
          if (0 < iVar3) {
            lVar4 = 0;
            do {
              lVar5 = lVar4 * 8;
              lVar4 = lVar4 + 1;
              *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(*(long *)(this + 0x150) + lVar5);
            } while (iVar3 != lVar4);
          }
          if (*(void **)(this + 0x150) != (void *)0x0) {
            if (this[0x158] != (btDiscreteDynamicsWorld)0x0) {
              btAlignedFreeInternal(*(void **)(this + 0x150));
              iVar3 = *(int *)(this + 0x144);
            }
            *(undefined8 *)(this + 0x150) = 0;
          }
          *(long *)(this + 0x150) = lVar2;
          this[0x158] = (btDiscreteDynamicsWorld)0x1;
          *(uint *)(this + 0x148) = uVar1;
        }
      }
      *(btRigidBody **)(*(long *)(this + 0x150) + (long)iVar3 * 8) = param_1;
      *(int *)(this + 0x144) = iVar3 + 1;
    }
    else {
      btCollisionObject::setActivationState((btCollisionObject *)param_1,2);
    }
                    /* WARNING: Could not recover jumptable at 0x011cc044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x48))(this,param_1,param_2,param_3);
    return;
  }
  return;
}

