
/* cocos2d::Component::onAdd() */

void __thiscall cocos2d::Component::onAdd(Component *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_60 [2];
  Component **local_58;
  Component *local_50;
  int *piStack_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x4c) == 2) {
    local_3c = *(int *)(this + 0x4c);
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    plVar4 = (long *)*puVar2;
    uVar3 = (**(code **)(*plVar4 + 0x90))(plVar4);
    if ((uVar3 & 1) == 0) {
      piStack_48 = &local_3c;
      local_58 = &local_50;
      local_60[0] = 10;
      local_50 = this;
      (**(code **)(*plVar4 + 0x78))(plVar4,local_60);
    }
    else {
      (**(code **)(*plVar4 + 0x88))(plVar4,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

