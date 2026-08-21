
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::erase(unsigned long, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::erase(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar3 = uVar5 - param_1;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    uVar3 = uVar5 - param_1;
  }
  if (uVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  if (param_2 != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = this + 4;
    }
    else {
      pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    uVar1 = uVar3;
    if (param_2 <= uVar3) {
      uVar1 = param_2;
    }
    if (uVar3 - uVar1 != 0) {
      wmemmove((wchar_t *)(pbVar6 + param_1 * 4),(wchar_t *)(pbVar6 + param_1 * 4 + uVar1 * 4),
               uVar3 - uVar1);
      bVar2 = *this;
    }
    lVar4 = uVar5 - uVar1;
    if (((byte)bVar2 & 1) == 0) {
      *this = SUB41((int)lVar4 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar4;
    }
    *(undefined4 *)(pbVar6 + lVar4 * 4) = 0;
  }
  return this;
}

