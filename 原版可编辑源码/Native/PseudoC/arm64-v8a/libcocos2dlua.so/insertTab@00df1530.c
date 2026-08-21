
/* cocos2d::ui::TabControl::insertTab(int, cocos2d::ui::TabHeader*, cocos2d::ui::Layout*) */

void __thiscall
cocos2d::ui::TabControl::insertTab(TabControl *this,int param_1,TabHeader *param_2,Layout *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  TabControl *local_78;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((int)((ulong)(*(long *)(this + 0x558) - *(long *)(this + 0x550)) >> 3) < param_1)
  goto LAB_00df1650;
  (**(code **)(*(long *)this + 0x540))(this,param_3,0xfffffffd,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,param_2,0xfffffffe,0xffffffff);
  lVar2 = *(long *)(this + 0x550);
  local_90 = operator_new(0x10);
  *local_90 = param_2;
  local_90[1] = param_3;
  std::__ndk1::
  vector<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>>
  ::insert((vector<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>>
            *)(this + 0x550),lVar2 + (long)param_1 * 8,&local_90);
  *(TabControl **)(param_2 + 0x5d0) = this;
  local_90 = &PTR_FUN_016e7368;
  uStack_80 = 0;
  local_88 = dispatchSelectedTabChanged;
  local_78 = this;
  local_70 = (long *)&local_90;
  FUN_00df3eec(&local_90,param_2 + 0x5e0);
  if (&local_90 == (undefined ***)local_70) {
    pcVar3 = *(code **)(*local_70 + 0x20);
LAB_00df1640:
    (*pcVar3)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar3 = *(code **)(*local_70 + 0x28);
    goto LAB_00df1640;
  }
  initAfterInsert(this,param_1);
LAB_00df1650:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

