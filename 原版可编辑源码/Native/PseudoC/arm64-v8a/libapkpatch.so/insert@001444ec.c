
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(std::__ndk1::__wrap_iter<wchar_t const*>, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  
  bVar5 = ((byte)*this & 1) != 0;
  pbVar7 = this + 4;
  uVar4 = (ulong)((byte)*this >> 1);
  if (bVar5) {
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar4 = *(ulong *)(this + 8);
  }
  uVar2 = 4;
  if (bVar5) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar6 = param_2 - (long)pbVar7 >> 2;
  if (uVar2 == uVar4) {
    __grow_by(this,uVar4,1,uVar4,uVar6,0,1);
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  else if (uVar4 - uVar6 != 0) {
    wmemmove((wchar_t *)(pbVar7 + uVar6 * 4 + 4),(wchar_t *)(pbVar7 + uVar6 * 4),uVar4 - uVar6);
  }
  lVar1 = uVar4 + 1;
  *(undefined4 *)(pbVar7 + uVar6 * 4) = param_3;
  *(undefined4 *)(pbVar7 + lVar1 * 4) = 0;
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar7 = this + 4;
  if (((byte)bVar3 & 1) != 0) {
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  return pbVar7 + uVar6 * 4;
}

