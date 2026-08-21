
/* cocos2d::TargetedAction::update(float) */

void __thiscall cocos2d::TargetedAction::update(TargetedAction *this,float param_1)

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
  local_3c = param_1;
  if (*(int *)(this + 0x48) == 2) {
    uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_3c);
    if ((uVar3 & 1) != 0) goto LAB_00ee4e18;
    pAVar2 = *(Action **)(this + 0x58);
  }
  (**(code **)(*(long *)pAVar2 + 0x48))(CONCAT44(in_register_00005004,param_1));
LAB_00ee4e18:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

