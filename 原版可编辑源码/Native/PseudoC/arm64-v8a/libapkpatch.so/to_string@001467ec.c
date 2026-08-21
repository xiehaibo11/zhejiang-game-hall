
/* std::__ndk1::to_string(int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong *in_x8;
  undefined1 *__dest;
  ulong __n;
  ulong uVar6;
  char local_54 [11];
  char cStack_49;
  long local_48;
  
  uVar3 = (uint)this;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar5 = local_54;
  pcVar4 = &cStack_49;
  if ((int)uVar3 < 0) {
    pcVar5 = (char *)((ulong)pcVar5 | 1);
    uVar3 = -uVar3;
    local_54[0] = '-';
  }
  if ((9 < (long)pcVar4 - (long)pcVar5) ||
     (uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar3 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (uVar3 < *(uint *)(&BYTE_0011ec34 + (ulong)uVar1 * 4))) + 1) <=
     (long)pcVar4 - (long)pcVar5)) {
    pcVar4 = (char *)__itoa::__u32toa(uVar3,pcVar5);
  }
  __n = (long)pcVar4 - (long)local_54;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar6 | 1;
  }
  if (local_54 != pcVar4) {
    memcpy(__dest,local_54,__n);
    __dest = __dest + __n;
  }
  *__dest = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

