
/* universe::Decompressor::setListener(std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, char const*)>) */

void __thiscall universe::Decompressor::setListener(Decompressor *this,long *param_2)

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
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if (param_2 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_009ee3a0(alStack_60,this + 0x40);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_009ee1e4;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_009ee1e4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009ee200 to 00aee24f has its CatchHandler @ 009ee200
                       catch() { ... } // from try @ 009ee200 with catch @ 009ee200
                       catch() { ... } // from try @ 009ee27c with catch @ 009ee200
                       catch() { ... } // from try @ 009ee2e8 with catch @ 009ee200 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

