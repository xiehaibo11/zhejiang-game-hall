
/* universe::Copy::setListener(std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool)>) */

void __thiscall universe::Copy::setListener(Copy *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
                    /* try { // try from 009e807c to 00ae80af has its CatchHandler @ 009e811c */
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
                    /* try { // try from 009e80b0 to 00ae810b has its CatchHandler @ 009e800c */
  }
  FUN_009e8224(alStack_60,this + 0x30);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_009e8110;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
                    /* try { // try from 009e810c to 00ae8113 has its CatchHandler @ 009e811c */
  (*pcVar3)();
LAB_009e8110:
                    /* try { // try from 009e8114 to 00ae8137 has its CatchHandler @ 009e800c */
                    /* catch() { ... } // from try @ 009e807c with catch @ 009e811c
                       catch() { ... } // from try @ 009e810c with catch @ 009e811c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

