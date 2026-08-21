
/* dragonBones::AnimationConfig::containsBoneMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
dragonBones::AnimationConfig::containsBoneMask(AnimationConfig *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  byte *pbVar2;
  basic_string *__s2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  byte *__s1;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar7 = *(byte **)(this + 0x90);
  pbVar2 = *(byte **)(this + 0x98);
  if (pbVar7 == pbVar2) {
    bVar4 = true;
  }
  else {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar3 = *pbVar7;
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar7 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(byte **)(pbVar7 + 0x10);
        if ((bVar3 & 1) == 0) {
          __s1 = pbVar7 + 1;
        }
        pbVar8 = pbVar7;
        if ((bVar3 & 1) == 0) {
          if (__n == 0) break;
          uVar6 = 0;
          while (*(basic_string *)(pbVar7 + uVar6 + 1) == __s2[uVar6]) {
            uVar6 = uVar6 + 1;
            if (bVar3 >> 1 == uVar6) goto LAB_00d331c0;
          }
        }
        else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) break;
      }
      pbVar7 = pbVar7 + 0x18;
      pbVar8 = pbVar2;
    } while (pbVar7 != pbVar2);
LAB_00d331c0:
    bVar4 = pbVar2 != pbVar8;
  }
  return bVar4;
}

