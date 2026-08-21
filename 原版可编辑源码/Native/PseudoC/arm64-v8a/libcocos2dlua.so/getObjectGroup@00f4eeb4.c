
/* cocos2d::TMXTiledMap::getObjectGroup(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall cocos2d::TMXTiledMap::getObjectGroup(TMXTiledMap *this,basic_string *param_1)

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
  
                    /* try { // try from 00f4eec8 to 0104eecb has its CatchHandler @ 00f4efbc */
  plVar6 = *(long **)(this + 0x310);
  plVar7 = *(long **)(this + 0x318);
  if (plVar6 != plVar7) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00f4eee8 to 0104eef7 has its CatchHandler @ 00f4efcc */
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    lVar5 = *plVar6;
    while( true ) {
      if (lVar5 != 0) {
        bVar2 = *(byte *)(lVar5 + 0x28);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(lVar5 + 0x30);
        }
                    /* try { // try from 00f4ef24 to 0104ef47 has its CatchHandler @ 00f4efc8 */
        if (sVar1 == __n) {
          __s1 = *(void **)(lVar5 + 0x38);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar5 + 0x29);
          }
          if ((bVar2 & 1) == 0) {
            if (__n == 0) {
              return lVar5;
            }
            uVar4 = 0;
                    /* try { // try from 00f4ef54 to 0104ef77 has its CatchHandler @ 00f4efcc */
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
            iVar3 = memcmp(__s1,__s2,__n);
                    /* try { // try from 00f4ef78 to 0104efe7 has its CatchHandler @ 00f4edd8 */
            if (iVar3 == 0) {
              return lVar5;
            }
          }
        }
      }
      plVar6 = plVar6 + 1;
      if (plVar6 == plVar7) break;
      lVar5 = *plVar6;
    }
  }
  return 0;
}

