
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  if (param_1 != 0) {
    bVar2 = *this;
    uVar4 = (ulong)(byte)bVar2;
    if (((byte)bVar2 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar2 >> 1);
      uVar3 = 4;
    }
    else {
      uVar4 = *(ulong *)this;
      uVar5 = *(ulong *)(this + 8);
      uVar3 = (uVar4 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar5 < param_1) {
      __grow_by(this,uVar3,(uVar5 + param_1) - uVar3,uVar5,uVar5,0,0);
      uVar4 = (ulong)(byte)*this;
    }
    if ((uVar4 & 1) == 0) {
      pbVar6 = this + 4;
    }
    else {
      pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    wmemset((wchar_t *)(pbVar6 + uVar5 * 4),param_2,param_1);
    lVar1 = uVar5 + param_1;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
  }
  return this;
}

