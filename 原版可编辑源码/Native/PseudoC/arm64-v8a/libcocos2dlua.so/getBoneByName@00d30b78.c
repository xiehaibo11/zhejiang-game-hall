
/* cocos2d::MeshSkin::getBoneByName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall cocos2d::MeshSkin::getBoneByName(MeshSkin *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  long *plVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  void *__s1;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(this + 0x28);
  plVar2 = *(long **)(this + 0x30);
  if (plVar7 != plVar2) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar6 = *plVar7;
      bVar3 = *(byte *)(lVar6 + 0x28);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x30);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar6 + 0x38);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar6 + 0x29);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return lVar6;
          }
          uVar5 = 0;
          while (*(basic_string *)(lVar6 + uVar5 + 0x29) == __s2[uVar5]) {
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
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  return 0;
}

