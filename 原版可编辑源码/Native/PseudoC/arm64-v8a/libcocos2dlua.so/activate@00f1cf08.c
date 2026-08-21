
/* cocos2d::MenuItem::activate() */

void __thiscall cocos2d::MenuItem::activate(MenuItem *this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int local_48 [2];
  MenuItem **local_40;
  MenuItem *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x2f9] != (MenuItem)0x0) {
    plVar2 = *(long **)(this + 800);
    if (plVar2 != (long *)0x0) {
      local_38 = this;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
    }
    if (*(int *)(this + 0x208) == 1) {
      local_40 = &local_38;
      uStack_30 = 0;
      local_48[0] = *(int *)(this + 0x208);
      local_38 = this;
      puVar3 = (undefined8 *)ScriptEngineManager::getInstance();
      (**(code **)(*(long *)*puVar3 + 0x78))((long *)*puVar3,local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

