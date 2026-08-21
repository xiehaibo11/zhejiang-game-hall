
/* cocos2d::ui::Layout::init() */

void __thiscall cocos2d::ui::Layout::init(Layout *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  Layout *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = Widget::init((Widget *)this);
  if ((uVar2 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dae404 with catch @ 00dae55c
                        */
    uVar3 = 0;
    goto LAB_00dae574;
  }
  (**(code **)(*(long *)this + 0x600))(this,0);
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  (**(code **)(*(long *)this + 0x148))(this,&Vec2::ZERO);
  local_70 = &PTR_FUN_016d9800;
  uStack_60 = 0;
  local_68 = findNearestChildWidgetIndex;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_00db25b8(&local_70,this + 0x500);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00dae56c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00dae56c;
  }
                    /* catch() { ... } // from try @ 00daec84 with catch @ 00dae570
                       catch() { ... } // from try @ 00daedf8 with catch @ 00dae570 */
  uVar3 = 1;
LAB_00dae574:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

