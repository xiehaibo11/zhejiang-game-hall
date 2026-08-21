
/* universe::Downloader::setProgressListener(std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float)> const&) */

void __thiscall universe::Downloader::setProgressListener(Downloader *this,function *param_1)

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
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_0097a520(alStack_60,this + 0x70);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a07b78;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00a07b78:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a07b98 to 00b07bd7 has its CatchHandler @ 00a07b98
                       catch() { ... } // from try @ 00a07b98 with catch @ 00a07b98
                       catch() { ... } // from try @ 00a07cdc with catch @ 00a07b98 */
  __stack_chk_fail();
}

