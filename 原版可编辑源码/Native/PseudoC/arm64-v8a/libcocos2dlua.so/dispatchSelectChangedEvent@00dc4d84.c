
/* cocos2d::ui::CheckBox::dispatchSelectChangedEvent(bool) */

void __thiscall cocos2d::ui::CheckBox::dispatchSelectChangedEvent(CheckBox *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  uint local_44;
  CheckBox *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = ~(uint)param_1 & 1;
  Ref::retain((Ref *)this);
  plVar3 = *(long **)(this + 0x600);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00dc4dbc to 00ec4dc3 has its CatchHandler @ 00dc5278 */
    local_44 = uVar1;
    local_40 = this;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
  }
  plVar3 = *(long **)(this + 0x4b0);
  if (plVar3 != (long *)0x0) {
    local_44 = uVar1;
    local_40 = this;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
  }
                    /* try { // try from 00dc4dfc to 00ec4e07 has its CatchHandler @ 00dc51cc */
  if (*(long *)(this + 0x5c0) != 0) {
    pcVar4 = *(code **)(this + 0x5c8);
    uVar5 = *(ulong *)(this + 0x5d0) & 1;
                    /* try { // try from 00dc4e14 to 00ec4e4f has its CatchHandler @ 00dc5294 */
    if (uVar5 != 0 || pcVar4 != (code *)0x0) {
      plVar3 = (long *)(*(long *)(this + 0x5c0) + ((long)*(ulong *)(this + 0x5d0) >> 1));
      if (uVar5 != 0) {
        pcVar4 = *(code **)(pcVar4 + *plVar3);
      }
      (*pcVar4)(plVar3,this,uVar1);
    }
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00dc4e58 to 00ec4ef7 has its CatchHandler @ 00dc51c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

