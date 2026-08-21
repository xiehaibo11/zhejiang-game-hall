
/* std::__ndk1::to_string(long long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longlong param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong *in_x8;
  undefined1 *__dest;
  ulong __n;
  ulong uVar5;
  long local_5c [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = local_5c;
  plVar3 = &local_48;
  if ((long)this < 0) {
    plVar4 = (long *)((ulong)plVar4 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0]._0_1_ = 0x2d;
  }
  if ((0x13 < (long)plVar3 - (long)plVar4) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (this < *(__ndk1 **)(&BYTE_0011ec60 + (ulong)uVar1 * 8))) + 1) <=
     (long)plVar3 - (long)plVar4)) {
    plVar3 = (long *)__itoa::__u64toa((ulong)this,(char *)plVar4);
  }
  __n = (long)plVar3 - (long)local_5c;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
  }
  if (local_5c != plVar3) {
    memcpy(__dest,local_5c,__n);
    __dest = __dest + __n;
  }
  *__dest = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

