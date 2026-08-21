
/* cocostudio::DisplayManager::containPoint(cocos2d::Vec2&) */

uint __thiscall cocostudio::DisplayManager::containPoint(DisplayManager *this,Vec2 *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((this[0x5d] == (DisplayManager)0x0) || (*(int *)(this + 0x58) < 0)) ||
     (lVar3 = (**(code **)(**(long **)(this + 0x50) + 0x30))(), *(int *)(lVar3 + 0x24) != 0)) {
    uVar2 = 0;
  }
  else {
    local_40 = 0;
    plVar4 = (long *)(**(code **)(**(long **)(this + 0x50) + 0x20))();
    plVar5 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,0);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5;
    }
    uVar2 = 0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Load size is inaccurate */
      uVar2 = isSpriteContainPoint
                        (*(cocostudio **)param_1,*(undefined4 *)(param_1 + 4),plVar4,&local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

