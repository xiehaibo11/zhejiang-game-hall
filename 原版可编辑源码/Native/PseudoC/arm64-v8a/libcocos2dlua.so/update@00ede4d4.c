
/* cocos2d::Spawn::update(float) */

void __thiscall cocos2d::Spawn::update(Spawn *this,float param_1)

{
  long lVar1;
  Action *pAVar2;
  ulong uVar3;
  undefined4 in_register_00005004;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar2 = *(Action **)(this + 0x58);
  if (pAVar2 != (Action *)0x0) {
    local_3c = param_1;
    if (*(int *)(this + 0x48) == 2) {
      uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_3c);
      if ((uVar3 & 1) != 0) goto LAB_00ede538;
      pAVar2 = *(Action **)(this + 0x58);
    }
    (**(code **)(*(long *)pAVar2 + 0x48))(CONCAT44(in_register_00005004,param_1));
  }
LAB_00ede538:
                    /* catch() { ... } // from try @ 00ede564 with catch @ 00ede538 */
  pAVar2 = *(Action **)(this + 0x60);
  if (pAVar2 != (Action *)0x0) {
    local_3c = param_1;
    if (*(int *)(this + 0x48) == 2) {
      uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_3c);
                    /* try { // try from 00ede55c to 00fde563 has its CatchHandler @ 00ede5c4 */
      if ((uVar3 & 1) != 0) goto LAB_00ede574;
      pAVar2 = *(Action **)(this + 0x60);
    }
                    /* try { // try from 00ede564 to 00fde5df has its CatchHandler @ 00ede538 */
    (**(code **)(*(long *)pAVar2 + 0x48))(CONCAT44(in_register_00005004,param_1));
  }
LAB_00ede574:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

