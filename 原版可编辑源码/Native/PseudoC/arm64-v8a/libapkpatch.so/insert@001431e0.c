
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  
  bVar5 = *this;
  uVar2 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    uVar4 = 4;
    if (((byte)bVar5 & 1) != 0) {
      uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar2 < param_3) {
      __grow_by_and_replace(this,uVar4,(uVar2 + param_3) - uVar4,uVar2,param_1,0,param_3,param_2);
    }
    else if (param_3 != 0) {
      pbVar3 = this + 4;
      if (((byte)bVar5 & 1) != 0) {
        pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      if (uVar2 - param_1 != 0) {
        uVar4 = param_3;
        if (pbVar3 + uVar2 * 4 <= param_2 || param_2 < pbVar3 + param_1 * 4) {
          uVar4 = 0;
        }
        wmemmove((wchar_t *)(pbVar3 + param_1 * 4 + param_3 * 4),(wchar_t *)(pbVar3 + param_1 * 4),
                 uVar2 - param_1);
        param_2 = param_2 + uVar4;
      }
      wmemmove((wchar_t *)(pbVar3 + param_1 * 4),param_2,param_3);
      lVar1 = uVar2 + param_3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      *(undefined4 *)(pbVar3 + lVar1 * 4) = 0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

