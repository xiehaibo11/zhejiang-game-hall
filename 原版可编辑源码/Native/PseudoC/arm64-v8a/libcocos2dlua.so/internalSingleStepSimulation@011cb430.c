
/* btDiscreteDynamicsWorld::internalSingleStepSimulation(float) */

void __thiscall
btDiscreteDynamicsWorld::internalSingleStepSimulation(btDiscreteDynamicsWorld *this,float param_1)

{
  undefined8 uVar1;
  CProfileManager *pCVar2;
  long *plVar3;
  long lVar4;
  undefined4 in_register_00005004;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(in_register_00005004,param_1);
  CProfileManager::Start_Profile("internalSingleStepSimulation");
  if (*(code **)(this + 0x80) != (code *)0x0) {
    (**(code **)(this + 0x80))(uVar5,this);
  }
  (**(code **)(*(long *)this + 0x118))(uVar5,this);
  *(float *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x34) = 0;
  uVar1 = (**(code **)(*(long *)this + 0x28))(this);
  *(undefined8 *)(this + 0x48) = uVar1;
  createPredictiveContacts(this,param_1);
  (**(code **)(*(long *)this + 0x58))(this);
  (**(code **)(*(long *)this + 0x128))(this);
  *(float *)(this + 0x9c) = param_1;
  (**(code **)(*(long *)this + 0x130))(this,this + 0x90);
  (**(code **)(*(long *)this + 0x120))(uVar5,this);
  pCVar2 = (CProfileManager *)CProfileManager::Start_Profile("updateActions");
  if (0 < *(int *)(this + 0x184)) {
    lVar4 = 0;
    do {
      plVar3 = *(long **)(*(long *)(this + 400) + lVar4 * 8);
      pCVar2 = (CProfileManager *)(**(code **)(*plVar3 + 0x10))(uVar5,plVar3,this);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x184));
  }
  CProfileManager::Stop_Profile(pCVar2);
  pCVar2 = (CProfileManager *)(**(code **)(*(long *)this + 0x138))(uVar5,this);
  if (*(code **)(this + 0x78) != (code *)0x0) {
    pCVar2 = (CProfileManager *)(**(code **)(this + 0x78))(uVar5,this);
  }
  CProfileManager::Stop_Profile(pCVar2);
  return;
}

