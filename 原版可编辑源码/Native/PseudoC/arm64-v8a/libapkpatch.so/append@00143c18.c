
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    uVar5 = *(ulong *)this;
    uVar2 = (ulong)((byte)*this >> 1);
    uVar4 = 4;
    if (((byte)*this & 1) != 0) {
      uVar2 = *(ulong *)(this + 8);
      uVar4 = (uVar5 & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar2 < param_1) {
      __grow_by(this,uVar4,(uVar2 + param_1) - uVar4,uVar2,uVar2,0,0);
      uVar5 = (ulong)(byte)*this;
    }
    pbVar3 = this + 4;
    if ((uVar5 & 1) != 0) {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    wmemset((wchar_t *)(pbVar3 + uVar2 * 4),param_2,param_1);
    lVar1 = uVar2 + param_1;
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

