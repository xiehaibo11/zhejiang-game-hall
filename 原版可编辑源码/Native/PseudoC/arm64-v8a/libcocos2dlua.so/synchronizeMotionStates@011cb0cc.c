
/* btDiscreteDynamicsWorld::synchronizeMotionStates() */

void __thiscall btDiscreteDynamicsWorld::synchronizeMotionStates(btDiscreteDynamicsWorld *this)

{
  CProfileManager *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  btTransform abStack_b0 [64];
  btTransform abStack_70 [64];
  
  this_00 = (CProfileManager *)CProfileManager::Start_Profile("synchronizeMotionStates");
  if (this[0x17a] == (btDiscreteDynamicsWorld)0x0) {
    iVar1 = *(int *)(this + 0x144);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        lVar3 = *(long *)(*(long *)(this + 0x150) + lVar2 * 8);
        if (((*(int *)(lVar3 + 0xec) != 2 && *(int *)(lVar3 + 0xec) != 5) &&
            (*(long *)(lVar3 + 0x200) != 0)) && ((*(byte *)(lVar3 + 0xe0) & 3) == 0)) {
          if ((this[0x1a4] == (btDiscreteDynamicsWorld)0x0) || (*(float *)(this + 0x174) == 0.0)) {
            fVar4 = *(float *)(this + 0x170) * *(float *)(lVar3 + 0x110);
          }
          else {
            fVar4 = *(float *)(this + 0x170) - *(float *)(this + 0x174);
          }
          btTransformUtil::integrateTransform
                    ((btTransform *)(lVar3 + 0x48),(btVector3 *)(lVar3 + 0x88),
                     (btVector3 *)(lVar3 + 0x98),fVar4,abStack_70);
          this_00 = (CProfileManager *)
                    (**(code **)(**(long **)(lVar3 + 0x200) + 0x18))
                              (*(long **)(lVar3 + 0x200),abStack_70);
          iVar1 = *(int *)(this + 0x144);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  else {
    iVar1 = *(int *)(this + 0xc);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        lVar3 = *(long *)(*(long *)(this + 0x18) + lVar2 * 8);
        if (((lVar3 != 0 && (*(uint *)(lVar3 + 0x100) & 2) != 0) && (*(long *)(lVar3 + 0x200) != 0))
           && ((*(byte *)(lVar3 + 0xe0) & 3) == 0)) {
          if ((this[0x1a4] == (btDiscreteDynamicsWorld)0x0) || (*(float *)(this + 0x174) == 0.0)) {
            fVar4 = *(float *)(this + 0x170) * *(float *)(lVar3 + 0x110);
          }
          else {
            fVar4 = *(float *)(this + 0x170) - *(float *)(this + 0x174);
          }
          btTransformUtil::integrateTransform
                    ((btTransform *)(lVar3 + 0x48),(btVector3 *)(lVar3 + 0x88),
                     (btVector3 *)(lVar3 + 0x98),fVar4,abStack_b0);
          this_00 = (CProfileManager *)
                    (**(code **)(**(long **)(lVar3 + 0x200) + 0x18))
                              (*(long **)(lVar3 + 0x200),abStack_b0);
          iVar1 = *(int *)(this + 0xc);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

