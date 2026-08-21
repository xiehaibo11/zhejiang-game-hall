
/* std::__ndk1::locale::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::locale const&) const */

ulong __thiscall std::__ndk1::locale::operator==(locale *this,locale *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  char *__s2;
  size_t sVar10;
  
  lVar8 = *(long *)this;
  lVar9 = *(long *)param_1;
  if (lVar8 != lVar9) {
    bVar3 = *(byte *)(lVar8 + 0x120);
    sVar10 = *(size_t *)(lVar8 + 0x128);
    sVar7 = (size_t)(bVar3 >> 1);
    sVar2 = sVar7;
    if ((bVar3 & 1) != 0) {
      sVar2 = sVar10;
    }
    if (sVar2 == 1) {
      uVar6 = basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(lVar8 + 0x120),0,0xffffffffffffffff,"*",1);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      lVar8 = *(long *)this;
      lVar9 = *(long *)param_1;
      bVar3 = *(byte *)(lVar8 + 0x120);
      sVar10 = *(size_t *)(lVar8 + 0x128);
      sVar7 = (size_t)(bVar3 >> 1);
    }
    bVar4 = *(byte *)(lVar9 + 0x120);
    sVar2 = sVar7;
    if ((bVar3 & 1) != 0) {
      sVar2 = sVar10;
    }
    sVar10 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar10 = *(size_t *)(lVar9 + 0x128);
    }
    if (sVar2 != sVar10) {
      return 0;
    }
    __s2 = *(char **)(lVar9 + 0x130);
    pcVar1 = (char *)(lVar8 + 0x121);
    __s1 = pcVar1;
    if ((bVar3 & 1) != 0) {
      __s1 = *(char **)(lVar8 + 0x130);
    }
    if ((bVar4 & 1) == 0) {
      __s2 = (char *)(lVar9 + 0x121);
    }
    if ((bVar3 & 1) == 0) {
      while (sVar2 != 0) {
        if (*pcVar1 != *__s2) {
          return 0;
        }
        pcVar1 = pcVar1 + 1;
        __s2 = __s2 + 1;
        sVar7 = sVar7 - 1;
        sVar2 = sVar7;
      }
    }
    else if (sVar2 != 0) {
      iVar5 = memcmp(__s1,__s2,sVar2);
      return (ulong)(iVar5 == 0);
    }
  }
  return 1;
}

