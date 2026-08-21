
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(std::__ndk1::__wrap_iter<wchar_t const*>, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,long param_2,undefined4 param_3)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    pbVar6 = this + 4;
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 4;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar4 = param_2 - (long)pbVar6 >> 2;
  if (uVar3 == uVar5) {
    __grow_by(this,uVar5,1,uVar5,uVar4,0,1);
    pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  else {
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = this + 4;
    }
    else {
      pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar5 - uVar4 != 0) {
      wmemmove((wchar_t *)(pbVar6 + uVar4 * 4 + 4),(wchar_t *)(pbVar6 + uVar4 * 4),uVar5 - uVar4);
    }
  }
  lVar1 = uVar5 + 1;
  *(undefined4 *)(pbVar6 + uVar4 * 4) = param_3;
  *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    if (((byte)*this & 1) != 0) {
      this = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
      goto LAB_0182d680;
    }
  }
  this = this + 4;
LAB_0182d680:
  return this + uVar4 * 4;
}

