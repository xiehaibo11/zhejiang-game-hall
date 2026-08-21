
/* cocos2d::Label::setSystemFontName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Label::setSystemFontName(Label *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  Label LVar3;
  Label *pLVar4;
  int iVar5;
  size_t sVar6;
  basic_string *pbVar7;
  Label *__s2;
  
  bVar2 = *param_1;
  LVar3 = this[0x3a0];
  sVar6 = (size_t)((byte)bVar2 >> 1);
  __n = sVar6;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)((byte)LVar3 >> 1);
  if (((byte)LVar3 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x3a8);
  }
  if (__n == sVar1) {
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    __s2 = *(Label **)(this + 0x3b0);
    if (((byte)bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    if (((byte)LVar3 & 1) == 0) {
      __s2 = this + 0x3a1;
    }
    pLVar4 = (Label *)param_1;
    sVar1 = __n;
    if (((byte)bVar2 & 1) == 0) {
      while( true ) {
        if (sVar1 == 0) {
          return;
        }
        if (pLVar4[1] != *__s2) break;
        sVar6 = sVar6 - 1;
        __s2 = __s2 + 1;
        pLVar4 = pLVar4 + 1;
        sVar1 = sVar6;
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(pbVar7,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x3a0) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x3a0),(char *)pbVar7,__n);
  }
  *(undefined4 *)(this + 0x308) = 3;
  this[0x39c] = (Label)0x1;
  return;
}

