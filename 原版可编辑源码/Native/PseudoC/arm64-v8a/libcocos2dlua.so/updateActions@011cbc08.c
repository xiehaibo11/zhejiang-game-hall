
/* btDiscreteDynamicsWorld::updateActions(float) */

void __thiscall btDiscreteDynamicsWorld::updateActions(btDiscreteDynamicsWorld *this,float param_1)

{
  CProfileManager *this_00;
  long *plVar1;
  long lVar2;
  undefined4 in_register_00005004;
  
  this_00 = (CProfileManager *)CProfileManager::Start_Profile("updateActions");
  if (0 < *(int *)(this + 0x184)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 400) + lVar2 * 8);
      this_00 = (CProfileManager *)
                (**(code **)(*plVar1 + 0x10))(CONCAT44(in_register_00005004,param_1),plVar1,this);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x184));
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

