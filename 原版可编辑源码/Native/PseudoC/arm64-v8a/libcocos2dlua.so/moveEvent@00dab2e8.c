
/* cocos2d::ui::Widget::moveEvent() */

void __thiscall cocos2d::ui::Widget::moveEvent(Widget *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 local_34;
  Widget *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Ref::retain((Ref *)this);
  plVar2 = *(long **)(this + 0x450);
  if (plVar2 != (long *)0x0) {
    local_34 = 1;
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  if (*(long *)(this + 0x418) != 0) {
                    /* try { // try from 00dab340 to 00eab357 has its CatchHandler @ 00dab3ac */
    pcVar3 = *(code **)(this + 0x420);
    uVar4 = *(ulong *)(this + 0x428) & 1;
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar2 = (long *)(*(long *)(this + 0x418) + ((long)*(ulong *)(this + 0x428) >> 1));
      if (uVar4 != 0) {
                    /* try { // try from 00dab358 to 00eab3e3 has its CatchHandler @ 00dab22c */
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,1);
    }
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

