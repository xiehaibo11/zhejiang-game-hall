
/* cocos2d::ReverseTime::update(float) */

void __thiscall cocos2d::ReverseTime::update(ReverseTime *this,float param_1)

{
  long lVar1;
  Action *pAVar2;
  ulong uVar3;
  float fVar4;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar2 = *(Action **)(this + 0x58);
  if (pAVar2 != (Action *)0x0) {
    fVar4 = 1.0 - param_1;
                    /* catch() { ... } // from try @ 00ee3eb8 with catch @ 00ee3f04 */
    local_3c = fVar4;
    if (*(int *)(this + 0x48) == 2) {
      uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_3c);
      if ((uVar3 & 1) != 0) goto LAB_00ee3f38;
      pAVar2 = *(Action **)(this + 0x58);
    }
    (**(code **)(*(long *)pAVar2 + 0x48))(fVar4);
  }
LAB_00ee3f38:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

