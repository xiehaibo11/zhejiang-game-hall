
/* dragonBones::Armature::getSlot(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall dragonBones::Armature::getSlot(Armature *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  long *plVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  long lVar7;
  void *__s1;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(this + 0x78);
  plVar2 = *(long **)(this + 0x80);
  if (plVar9 != plVar2) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar8 = *plVar9;
      lVar7 = *(long *)(lVar8 + 200);
      bVar3 = *(byte *)(lVar7 + 0x20);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar7 + 0x28);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar7 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar7 + 0x21);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return lVar8;
          }
          pbVar5 = (basic_string *)(lVar7 + 0x21);
          lVar7 = -(ulong)(bVar3 >> 1);
          pbVar6 = __s2;
          while (*pbVar5 == *pbVar6) {
            pbVar5 = pbVar5 + 1;
            lVar7 = lVar7 + 1;
            pbVar6 = pbVar6 + 1;
            if (lVar7 == 0) {
              return lVar8;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar8;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return lVar8;
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return 0;
}

