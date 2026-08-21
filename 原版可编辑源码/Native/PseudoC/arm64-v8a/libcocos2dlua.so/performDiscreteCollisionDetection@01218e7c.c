
/* btCollisionWorld::performDiscreteCollisionDetection() */

void __thiscall btCollisionWorld::performDiscreteCollisionDetection(btCollisionWorld *this)

{
  CProfileManager *pCVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  
  CProfileManager::Start_Profile("performDiscreteCollisionDetection");
  (**(code **)(*(long *)this + 0x10))(this);
  (**(code **)(*(long *)this + 0x18))(this);
  plVar3 = *(long **)(this + 0x28);
  pCVar1 = (CProfileManager *)CProfileManager::Start_Profile("dispatchAllCollisionPairs");
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x40);
    uVar2 = (**(code **)(**(long **)(this + 0x60) + 0x48))();
    pCVar1 = (CProfileManager *)(*pcVar4)(plVar3,uVar2,this + 0x30,*(undefined8 *)(this + 0x28));
  }
  pCVar1 = (CProfileManager *)CProfileManager::Stop_Profile(pCVar1);
  CProfileManager::Stop_Profile(pCVar1);
  return;
}

