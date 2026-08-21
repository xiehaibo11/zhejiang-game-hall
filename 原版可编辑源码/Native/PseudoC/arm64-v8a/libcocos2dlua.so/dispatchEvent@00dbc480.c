
/* cocos2d::ui::ScrollView::dispatchEvent(cocos2d::ui::ScrollviewEventType,
   cocos2d::ui::ScrollView::EventType) */

void __thiscall
cocos2d::ui::ScrollView::dispatchEvent(ScrollView *this,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 local_44;
  ScrollView *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Ref::retain((Ref *)this);
  if (*(long *)(this + 0x868) != 0) {
    pcVar3 = *(code **)(this + 0x870);
    uVar4 = *(ulong *)(this + 0x878) & 1;
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar2 = (long *)(*(long *)(this + 0x868) + ((long)*(ulong *)(this + 0x878) >> 1));
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,param_2);
    }
  }
  plVar2 = *(long **)(this + 0x8a0);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00dbc4f8 to 00ebc52b has its CatchHandler @ 00dbc7e0 */
    local_44 = param_3;
    local_40 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
  }
  plVar2 = *(long **)(this + 0x4b0);
  if (plVar2 != (long *)0x0) {
    local_44 = param_3;
    local_40 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

