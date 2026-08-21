
/* cocos2d::ui::Widget::pushDownEvent() */

void __thiscall cocos2d::ui::Widget::pushDownEvent(Widget *this)

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
                    /* try { // try from 00dab0b8 to 00eab0cf has its CatchHandler @ 00dab124 */
    local_34 = 0;
    local_30 = this;
                    /* try { // try from 00dab0d0 to 00eab15b has its CatchHandler @ 00daaf4c */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  if (*(long *)(this + 0x418) != 0) {
    pcVar3 = *(code **)(this + 0x420);
    uVar4 = *(ulong *)(this + 0x428) & 1;
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar2 = (long *)(*(long *)(this + 0x418) + ((long)*(ulong *)(this + 0x428) >> 1));
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,0);
    }
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00dab0b8 with catch @ 00dab124 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

