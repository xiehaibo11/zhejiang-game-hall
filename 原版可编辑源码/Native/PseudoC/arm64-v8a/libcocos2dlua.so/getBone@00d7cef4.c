
/* dragonBones::Armature::getBone(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall dragonBones::Armature::getBone(Armature *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  long *plVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  long lVar8;
  void *__s1;
  long lVar9;
  long *plVar10;
  
  plVar10 = *(long **)(this + 0x60);
  plVar2 = *(long **)(this + 0x68);
  if (plVar10 != plVar2) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar9 = *plVar10;
      lVar8 = *(long *)(lVar9 + 0xa8);
      bVar3 = *(byte *)(lVar8 + 0x18);
      uVar5 = (ulong)(bVar3 >> 1);
      sVar1 = uVar5;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar8 + 0x20);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar8 + 0x28);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar8 + 0x19);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return lVar9;
          }
          pbVar6 = (basic_string *)(lVar8 + 0x19);
          pbVar7 = __s2;
                    /* try { // try from 00d7cf8c to 00e7d10f has its CatchHandler @ 00d7d8d8 */
          while (*pbVar6 == *pbVar7) {
            uVar5 = uVar5 - 1;
            pbVar6 = pbVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (uVar5 == 0) {
              return lVar9;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar9;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return lVar9;
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  return 0;
}

