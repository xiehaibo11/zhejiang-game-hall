
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::erase(unsigned long, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::erase(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  ulong uVar5;
  long lVar6;
  
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar5 = uVar1 - param_1;
  if (param_1 <= uVar1) {
    if (param_2 != 0) {
      if (param_2 == 0xffffffffffffffff) {
        if (((byte)bVar4 & 1) == 0) {
          *(undefined4 *)(this + param_1 * 4 + 4) = 0;
          *this = SUB41((int)param_1 << 1,0);
        }
        else {
          *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
          *(ulong *)(this + 8) = param_1;
        }
      }
      else {
        pbVar2 = this + 4;
        if (((byte)bVar4 & 1) != 0) {
          pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     **)(this + 0x10);
        }
        uVar3 = uVar5;
        if (param_2 <= uVar5) {
          uVar3 = param_2;
        }
        if (uVar5 - uVar3 != 0) {
          wmemmove((wchar_t *)(pbVar2 + param_1 * 4),(wchar_t *)(pbVar2 + param_1 * 4 + uVar3 * 4),
                   uVar5 - uVar3);
          bVar4 = *this;
        }
        lVar6 = uVar1 - uVar3;
        if (((byte)bVar4 & 1) == 0) {
          *this = SUB41((int)lVar6 << 1,0);
        }
        else {
          *(long *)(this + 8) = lVar6;
        }
        *(undefined4 *)(pbVar2 + lVar6 * 4) = 0;
      }
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

