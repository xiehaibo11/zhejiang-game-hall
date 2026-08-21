
/* btCollisionWorld::updateAabbs() */

void __thiscall btCollisionWorld::updateAabbs(btCollisionWorld *this)

{
  int iVar1;
  CProfileManager *this_00;
  btCollisionObject *pbVar2;
  int iVar3;
  long lVar4;
  
  this_00 = (CProfileManager *)CProfileManager::Start_Profile("updateAabbs");
  iVar3 = *(int *)(this + 0xc);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      pbVar2 = *(btCollisionObject **)(*(long *)(this + 0x18) + lVar4 * 8);
      if ((this[0x70] != (btCollisionWorld)0x0) ||
         (iVar1 = *(int *)(pbVar2 + 0xec), iVar1 != 2 && iVar1 != 5)) {
        this_00 = (CProfileManager *)updateSingleAabb(this,pbVar2);
        iVar3 = *(int *)(this + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

