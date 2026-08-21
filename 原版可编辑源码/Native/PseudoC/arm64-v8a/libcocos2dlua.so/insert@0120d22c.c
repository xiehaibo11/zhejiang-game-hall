
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,ulong param_2,wchar_t param_3)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar4) {
    if (param_2 != 0) {
      if (((byte)bVar2 & 1) == 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
      }
      if (uVar3 - uVar4 < param_2) {
        __grow_by(this,uVar3,(uVar4 + param_2) - uVar3,uVar4,param_1,0,param_2);
        pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      else {
        if (((byte)bVar2 & 1) == 0) {
          pbVar5 = this + 4;
        }
        else {
          pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     **)(this + 0x10);
        }
        if (uVar4 - param_1 != 0) {
          wmemmove((wchar_t *)(pbVar5 + param_1 * 4 + param_2 * 4),(wchar_t *)(pbVar5 + param_1 * 4)
                   ,uVar4 - param_1);
        }
      }
      wmemset((wchar_t *)(pbVar5 + param_1 * 4),param_3,param_2);
      lVar1 = uVar4 + param_2;
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

