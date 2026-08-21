
/* universe::Translated::getTime() const */

void __thiscall universe::Translated::getTime(Translated *this)

{
  long lVar1;
  tm *__tp;
  size_t __n;
  ulong *in_x8;
  void *__dest;
  ulong uVar2;
  time_t local_68;
  undefined8 local_60;
  char acStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe634 with catch @ 009fe6cc
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe65c with catch @ 009fe6cc
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe684 with catch @ 009fe6cc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe5d4 with catch @ 009fe6d0
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe600 with catch @ 009fe6d0
                        */
  local_60 = std::__ndk1::chrono::system_clock::now();
  local_68 = std::__ndk1::chrono::system_clock::to_time_t((time_point *)&local_60);
  __tp = localtime(&local_68);
  strftime(acStack_58,0x20,"%Y.%m.%d %H:%M:%S",__tp);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __n = strlen(acStack_58);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009fe768;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,acStack_58,__n);
LAB_009fe768:
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

