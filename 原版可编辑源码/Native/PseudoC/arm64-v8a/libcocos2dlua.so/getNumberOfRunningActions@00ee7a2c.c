
/* cocos2d::ActionManager::getNumberOfRunningActions() const */

long __thiscall cocos2d::ActionManager::getNumberOfRunningActions(ActionManager *this)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    lVar1 = 0;
    do {
      plVar3 = (long *)*puVar2;
      puVar2 = (undefined8 *)puVar2[7];
      lVar4 = 0;
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
      }
      lVar1 = lVar4 + lVar1;
                    /* try { // try from 00ee7a40 to 00fe7ad3 has its CatchHandler @ 00ee79e0 */
    } while (puVar2 != (undefined8 *)0x0);
    return lVar1;
  }
  return 0;
}

