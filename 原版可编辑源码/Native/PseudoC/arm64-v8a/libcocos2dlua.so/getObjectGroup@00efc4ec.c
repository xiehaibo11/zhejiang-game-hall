
/* cocos2d::experimental::TMXTiledMap::getObjectGroup(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall
cocos2d::experimental::TMXTiledMap::getObjectGroup(TMXTiledMap *this,basic_string *param_1)

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
  
  plVar6 = *(long **)(this + 0x318);
  plVar7 = *(long **)(this + 0x310);
  if ((0 < (long)plVar6 - (long)plVar7) && (plVar7 != plVar6)) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    lVar5 = *plVar7;
    while( true ) {
      if (lVar5 != 0) {
        bVar2 = *(byte *)(lVar5 + 0x28);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(lVar5 + 0x30);
        }
        if (sVar1 == __n) {
          __s1 = *(void **)(lVar5 + 0x38);
                    /* catch() { ... } // from try @ 00efc420 with catch @ 00efc574 */
                    /* catch() { ... } // from try @ 00efc12c with catch @ 00efc578 */
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar5 + 0x29);
          }
                    /* catch() { ... } // from try @ 00efc454 with catch @ 00efc57c */
          if ((bVar2 & 1) == 0) {
            if (__n == 0) {
              return lVar5;
            }
            uVar4 = 0;
            while (*(basic_string *)(lVar5 + uVar4 + 0x29) == __s2[uVar4]) {
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
                    /* catch() { ... } // from try @ 00efc240 with catch @ 00efc5b0 */
                    /* catch() { ... } // from try @ 00efc2b8 with catch @ 00efc5b4 */
            iVar3 = memcmp(__s1,__s2,__n);
            if (iVar3 == 0) {
              return lVar5;
            }
          }
        }
      }
      plVar7 = plVar7 + 1;
      if (plVar7 == plVar6) break;
      lVar5 = *plVar7;
    }
  }
  return 0;
}

