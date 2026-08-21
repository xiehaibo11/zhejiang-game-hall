
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,ulong param_2,wchar_t param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    if (param_2 != 0) {
      uVar3 = 4;
      if (((byte)bVar4 & 1) != 0) {
        uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
      }
      if (uVar3 - uVar2 < param_2) {
        __grow_by(this,uVar3,(uVar2 + param_2) - uVar3,uVar2,param_1,0,param_2);
        pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      else {
        pbVar5 = this + 4;
        if (((byte)bVar4 & 1) != 0) {
          pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     **)(this + 0x10);
        }
        if (uVar2 - param_1 != 0) {
          wmemmove((wchar_t *)(pbVar5 + param_2 * 4 + param_1 * 4),(wchar_t *)(pbVar5 + param_1 * 4)
                   ,uVar2 - param_1);
        }
      }
      wmemset((wchar_t *)(pbVar5 + param_1 * 4),param_3,param_2);
      lVar1 = uVar2 + param_2;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      *(undefined4 *)(pbVar5 + lVar1 * 4) = 0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

