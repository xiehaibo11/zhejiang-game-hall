
/* btGhostPairCallback::addOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*) */

undefined8 __thiscall
btGhostPairCallback::addOverlappingPair
          (btGhostPairCallback *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)param_2;
  plVar1 = *(long **)param_1;
  if ((int)plVar2[0x20] != 4) {
    plVar2 = (long *)0x0;
  }
  if ((plVar1 != (long *)0x0) && ((int)plVar1[0x20] == 4)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_1);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2);
  }
  return 0;
}

