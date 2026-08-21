
/* universe::Unzipper::onProgress(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, float) */

void __thiscall universe::Unzipper::onProgress(undefined4 param_1,Unzipper *this,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    local_2c = 0;
    local_38 = "SUCCESS";
    local_3c = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,param_3,&local_2c,&local_38,&local_3c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00a0a178 with catch @ 00a0a0e4
                       catch() { ... } // from try @ 00a0a1fc with catch @ 00a0a0e4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

