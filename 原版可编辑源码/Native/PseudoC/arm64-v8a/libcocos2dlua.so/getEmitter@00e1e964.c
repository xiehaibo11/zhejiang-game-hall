
/* cocos2d::PUParticleSystem3D::getEmitter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long __thiscall
cocos2d::PUParticleSystem3D::getEmitter(PUParticleSystem3D *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  basic_string *__s2;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  void *__s1;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
                    /* try { // try from 00e1e968 to 00f1e9f3 has its CatchHandler @ 00e1f648 */
  plVar6 = *(long **)(this + 0x380);
  plVar7 = *(long **)(this + 0x388);
  if (plVar6 != plVar7) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      lVar5 = *plVar6;
      bVar2 = *(byte *)(lVar5 + 0x90);
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar5 + 0x98);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar5 + 0xa0);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x91);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return lVar5;
          }
          uVar4 = 0;
          while (*(basic_string *)(lVar5 + uVar4 + 0x91) == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return lVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return lVar5;
          }
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar7);
  }
  return 0;
}

