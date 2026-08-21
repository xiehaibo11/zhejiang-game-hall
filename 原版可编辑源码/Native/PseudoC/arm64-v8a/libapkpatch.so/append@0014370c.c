
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  bool bVar6;
  
  bVar5 = *this;
  bVar6 = ((byte)bVar5 & 1) != 0;
  uVar2 = 4;
  if (bVar6) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar3 = (ulong)((byte)bVar5 >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (uVar2 - uVar3 < param_2) {
    __grow_by_and_replace(this,uVar2,(uVar3 + param_2) - uVar2,uVar3,uVar3,0,param_2,param_1);
  }
  else if (param_2 != 0) {
    pbVar4 = this + 4;
    if (((byte)bVar5 & 1) != 0) {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    wmemcpy((wchar_t *)(pbVar4 + uVar3 * 4),param_1,param_2);
    lVar1 = uVar3 + param_2;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
  }
  return this;
}

