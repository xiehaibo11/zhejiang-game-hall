
/* dragonBones::Animation::getState(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall dragonBones::Animation::getState(Animation *this,basic_string *param_1)

{
  size_t sVar1;
  long lVar2;
  size_t __n;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  void *__s1;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(this + 0x38);
  uVar5 = *(long *)(this + 0x40) - lVar2;
  if ((uVar5 & 0x7fffffff8) != 0) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    lVar7 = (long)(uVar5 * 0x20000000) >> 0x20;
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar7 = lVar7 + -1;
      lVar6 = *(long *)(lVar2 + lVar7 * 8);
      bVar3 = *(byte *)(lVar6 + 0x30);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x38);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar6 + 0x40);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar6 + 0x31);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return lVar6;
          }
          uVar5 = 0;
          while (*(basic_string *)(lVar6 + uVar5 + 0x31) == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar3 >> 1 == uVar5) {
              return lVar6;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar6;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return lVar6;
          }
        }
      }
    } while (lVar7 != 0);
  }
  return 0;
}

