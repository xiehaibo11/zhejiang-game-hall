
/* std::__ndk1::locale::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::locale const&) const */

ulong __thiscall std::__ndk1::locale::operator==(locale *this,locale *param_1)

{
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  size_t sVar7;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  size_t sVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s2;
  
  lVar8 = *(long *)this;
  lVar6 = *(long *)param_1;
  if (lVar8 != lVar6) {
    bVar2 = *(byte *)(lVar8 + 0x120);
    sVar9 = *(size_t *)(lVar8 + 0x128);
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar8 + 0x120);
    sVar7 = (size_t)(bVar2 >> 1);
    sVar1 = sVar7;
    if ((bVar2 & 1) != 0) {
      sVar1 = sVar9;
    }
    if (sVar1 == 1) {
      uVar5 = basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(this_00,0,0xffffffffffffffff,"*",1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      lVar8 = *(long *)this;
      lVar6 = *(long *)param_1;
      bVar2 = *(byte *)(lVar8 + 0x120);
      sVar9 = *(size_t *)(lVar8 + 0x128);
      this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (lVar8 + 0x120);
      sVar7 = (size_t)(bVar2 >> 1);
    }
    bVar3 = *(byte *)(lVar6 + 0x120);
    sVar1 = sVar7;
    if ((bVar2 & 1) != 0) {
      sVar1 = sVar9;
    }
    sVar9 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar9 = *(size_t *)(lVar6 + 0x128);
    }
    if (sVar1 != sVar9) {
      return 0;
    }
    __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (lVar8 + 0x130);
    __s2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (lVar6 + 0x130);
    if ((bVar2 & 1) == 0) {
      __s1 = this_00 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar6 + 0x121);
    }
    if ((bVar2 & 1) == 0) {
      while (sVar1 != 0) {
        this_00 = this_00 + 1;
        if (*this_00 != *__s2) {
          return 0;
        }
        __s2 = __s2 + 1;
        sVar7 = sVar7 - 1;
        sVar1 = sVar7;
      }
    }
    else if (sVar1 != 0) {
      iVar4 = memcmp(__s1,__s2,sVar1);
      return (ulong)(iVar4 == 0);
    }
  }
  return 1;
}

