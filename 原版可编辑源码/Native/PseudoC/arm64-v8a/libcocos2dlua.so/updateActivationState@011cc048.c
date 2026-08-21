
/* btDiscreteDynamicsWorld::updateActivationState(float) */

void __thiscall
btDiscreteDynamicsWorld::updateActivationState(btDiscreteDynamicsWorld *this,float param_1)

{
  CProfileManager *this_00;
  uint uVar1;
  btCollisionObject *this_01;
  long lVar2;
  
  this_00 = (CProfileManager *)CProfileManager::Start_Profile("updateActivationState");
  if (0 < *(int *)(this + 0x144)) {
    lVar2 = 0;
    do {
      this_01 = *(btCollisionObject **)(*(long *)(this + 0x150) + lVar2 * 8);
      if (this_01 != (btCollisionObject *)0x0) {
        uVar1 = *(uint *)(this_01 + 0xec);
        if (uVar1 == 2 || uVar1 == 4) {
LAB_011cc190:
          if (uVar1 == 4) goto LAB_011cc1ec;
        }
        else {
          if ((*(float *)(this_01 + 500) * *(float *)(this_01 + 500) <=
               *(float *)(this_01 + 0x154) * *(float *)(this_01 + 0x154) +
               *(float *)(this_01 + 0x158) * *(float *)(this_01 + 0x158) +
               *(float *)(this_01 + 0x15c) * *(float *)(this_01 + 0x15c)) ||
             (*(float *)(this_01 + 0x1f8) * *(float *)(this_01 + 0x1f8) <=
              *(float *)(this_01 + 0x164) * *(float *)(this_01 + 0x164) +
              *(float *)(this_01 + 0x168) * *(float *)(this_01 + 0x168) +
              *(float *)(this_01 + 0x16c) * *(float *)(this_01 + 0x16c))) {
            *(undefined4 *)(this_01 + 0xf0) = 0;
            this_00 = (CProfileManager *)btCollisionObject::setActivationState(this_01,0);
            uVar1 = *(uint *)(this_01 + 0xec);
            goto LAB_011cc190;
          }
          *(float *)(this_01 + 0xf0) = *(float *)(this_01 + 0xf0) + param_1;
        }
        if (((gDisableDeactivation != '\0') || (gDeactivationTime == 0.0)) ||
           (((uVar1 & 0xfffffffe) != 2 && (*(float *)(this_01 + 0xf0) <= gDeactivationTime)))) {
          this_00 = (CProfileManager *)btCollisionObject::setActivationState(this_01,1);
        }
        else if (((byte)this_01[0xe0] & 3) == 0) {
          if (uVar1 == 1) {
            this_00 = (CProfileManager *)btCollisionObject::setActivationState(this_01,3);
            uVar1 = *(uint *)(this_01 + 0xec);
          }
          if (uVar1 == 2) {
            *(undefined8 *)(this_01 + 0x16c) = 0;
            *(undefined8 *)(this_01 + 0x164) = 0;
            *(int *)(this_01 + 0x120) = *(int *)(this_01 + 0x120) + 2;
            *(undefined8 *)(this_01 + 0x154) = 0;
            *(undefined8 *)(this_01 + 0x15c) = 0;
          }
        }
        else {
          this_00 = (CProfileManager *)btCollisionObject::setActivationState(this_01,2);
        }
      }
LAB_011cc1ec:
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x144));
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

