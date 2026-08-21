
/* spine::SkeletonAnimation::setCompleteListener(std::__ndk1::function<void (spTrackEntry*)> const&)
    */

void __thiscall
spine::SkeletonAnimation::setCompleteListener(SkeletonAnimation *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4fe44 with catch @ 00d4fdf0
                       catch(type#1 @ 00000000) { ... } // from try @ 00d50118 with catch @ 00d4fdf0
                        */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 00d4fc3c with catch @ 00d4fdd4 */
  }
  FUN_00d505ec(alStack_60,this + 0x480);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00d4fe38;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00d4fe38:
                    /* try { // try from 00d4fe3c to 00e4fe43 has its CatchHandler @ 00d501a0 */
                    /* try { // try from 00d4fe44 to 00e4ff7b has its CatchHandler @ 00d4fdf0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

