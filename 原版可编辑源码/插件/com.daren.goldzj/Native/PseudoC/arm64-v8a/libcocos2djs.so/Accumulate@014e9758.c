
/* v8::internal::CompilationStatistics::BasicStats::Accumulate(v8::internal::CompilationStatistics::BasicStats
   const&) */

void __thiscall
v8::internal::CompilationStatistics::BasicStats::Accumulate(BasicStats *this,BasicStats *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong __n;
  BasicStats *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BasicStats *__dest;
  
  *(long *)this = *(long *)this + *(long *)param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(param_1 + 8);
  if (*(ulong *)(this + 0x18) < *(ulong *)(param_1 + 0x18)) {
    *(ulong *)(this + 0x18) = *(ulong *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    if (this != param_1) {
      this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (this + 0x20);
      __n = *(ulong *)(param_1 + 0x28);
      __src = *(BasicStats **)(param_1 + 0x30);
      bVar1 = *this_00;
      if (((byte)param_1[0x20] & 1) == 0) {
        __src = param_1 + 0x21;
        __n = (ulong)((byte)param_1[0x20] >> 1);
      }
      if (((byte)bVar1 & 1) == 0) {
        uVar2 = 0x16;
        uVar3 = __n - 0x16;
        if (0x15 < __n && uVar3 != 0) {
LAB_014e9804:
          if (((byte)bVar1 & 1) == 0) {
            uVar4 = (ulong)((byte)bVar1 >> 1);
          }
          else {
            uVar4 = *(ulong *)(this + 0x28);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __grow_by_and_replace(this_00,uVar2,uVar3,uVar4,0,uVar4,__n,(char *)__src);
          return;
        }
      }
      else {
        uVar2 = (*(ulong *)this_00 & 0xfffffffffffffffe) - 1;
        uVar3 = __n - uVar2;
        if (uVar2 <= __n && uVar3 != 0) goto LAB_014e9804;
      }
      if (((byte)bVar1 & 1) == 0) {
        __dest = this + 0x21;
      }
      else {
        __dest = *(BasicStats **)(this + 0x30);
      }
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      __dest[__n] = (BasicStats)0x0;
      if (((byte)*this_00 & 1) == 0) {
        *this_00 = SUB41((int)__n << 1,0);
      }
      else {
        *(ulong *)(this + 0x28) = __n;
      }
    }
  }
  return;
}

