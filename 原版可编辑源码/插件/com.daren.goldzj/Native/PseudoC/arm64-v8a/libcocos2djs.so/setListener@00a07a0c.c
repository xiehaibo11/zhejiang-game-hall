
/* universe::Downloader::setListener(std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, char const*)> const&) */

void __thiscall universe::Downloader::setListener(Downloader *this,function *param_1)

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
                    /* try { // try from 00a07a68 to 00b07a6f has its CatchHandler @ 00a07a80 */
                    /* try { // try from 00a07a70 to 00b07a73 has its CatchHandler @ 00a07770 */
                    /* try { // try from 00a07a74 to 00b07a7b has its CatchHandler @ 00a07a7c */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
                    /* catch() { ... } // from try @ 00a07a74 with catch @ 00a07a7c
                       try { // try from 00a07a7c to 00b07abb has its CatchHandler @ 00a07770 */
                    /* catch() { ... } // from try @ 00a07a68 with catch @ 00a07a80 */
                    /* catch() { ... } // from try @ 00a077dc with catch @ 00a07a84 */
  FUN_0097ba88(alStack_60,this + 0x40);
                    /* catch() { ... } // from try @ 00a07938 with catch @ 00a07a88 */
  if (alStack_60 == local_40) {
                    /* catch() { ... } // from try @ 00a07884 with catch @ 00a07aa4 */
                    /* catch() { ... } // from try @ 00a07800 with catch @ 00a07aa8
                       catch() { ... } // from try @ 00a07958 with catch @ 00a07aa8 */
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a07ab0;
    pcVar3 = *(code **)(*local_40 + 0x28);
                    /* catch() { ... } // from try @ 00a078e4 with catch @ 00a07aa0 */
  }
  (*pcVar3)();
LAB_00a07ab0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

