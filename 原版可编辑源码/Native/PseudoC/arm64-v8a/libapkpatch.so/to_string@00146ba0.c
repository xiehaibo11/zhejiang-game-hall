
/* std::__ndk1::to_string(unsigned int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,uint param_1)

{
  long lVar1;
  char *pcVar2;
  ulong *in_x8;
  undefined1 *__dest;
  ulong __n;
  ulong uVar3;
  char acStack_54 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)__itoa::__u32toa((uint)this,acStack_54);
  __n = (long)pcVar2 - (long)acStack_54;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar3 | 1;
  }
  if (acStack_54 != pcVar2) {
    memcpy(__dest,acStack_54,__n);
    __dest = __dest + __n;
  }
  *__dest = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

