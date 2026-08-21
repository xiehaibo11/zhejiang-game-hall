
/* btDiscreteDynamicsWorld::debugDrawWorld() */

void __thiscall btDiscreteDynamicsWorld::debugDrawWorld(btDiscreteDynamicsWorld *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  btTypedConstraint *pbVar5;
  CProfileManager *this_00;
  
  CProfileManager::Start_Profile("debugDrawWorld");
  btCollisionWorld::debugDrawWorld((btCollisionWorld *)this);
  lVar3 = (**(code **)(*(long *)this + 0x28))(this);
  if (lVar3 != 0) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar1 = (**(code **)(*plVar4 + 0x60))();
    if ((uVar1 & 0x1800) != 0) {
      iVar2 = (**(code **)(*(long *)this + 0xd0))(this);
      while (0 < iVar2) {
        pbVar5 = (btTypedConstraint *)(**(code **)(*(long *)this + 0xd8))(this,iVar2 + -1);
        debugDrawConstraint(this,pbVar5);
        iVar2 = iVar2 + -1;
      }
    }
  }
  lVar3 = (**(code **)(*(long *)this + 0x28))(this);
  this_00 = (CProfileManager *)0x0;
  if (lVar3 != 0) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    this_00 = (CProfileManager *)(**(code **)(*plVar4 + 0x60))();
    if ((((ulong)this_00 & 0x4003) != 0) &&
       (lVar3 = (**(code **)(*(long *)this + 0x28))(this), this_00 = (CProfileManager *)0x0,
       lVar3 != 0)) {
      plVar4 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      this_00 = (CProfileManager *)(**(code **)(*plVar4 + 0x60))();
      if (((int)this_00 != 0) && (0 < *(int *)(this + 0x184))) {
        lVar3 = 0;
        do {
          plVar4 = *(long **)(*(long *)(this + 400) + lVar3 * 8);
          this_00 = (CProfileManager *)
                    (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(this + 0x68));
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(this + 0x184));
      }
    }
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

