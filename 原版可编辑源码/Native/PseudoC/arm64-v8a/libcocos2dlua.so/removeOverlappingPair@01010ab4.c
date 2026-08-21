
/* btGhostPairCallback::removeOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*, btDispatcher*)
    */

undefined8 __thiscall
btGhostPairCallback::removeOverlappingPair
          (btGhostPairCallback *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2,
          btDispatcher *param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)param_2;
  plVar1 = *(long **)param_1;
                    /* catch() { ... } // from try @ 01010b44 with catch @ 01010adc */
  if ((int)plVar2[0x20] != 4) {
    plVar2 = (long *)0x0;
  }
  if ((plVar1 != (long *)0x0) && ((int)plVar1[0x20] == 4)) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_1);
  }
                    /* try { // try from 01010b0c to 01110b13 has its CatchHandler @ 01010b80 */
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_3,param_2);
  }
                    /* try { // try from 01010b38 to 01110b43 has its CatchHandler @ 01010b70 */
  return 0;
}

