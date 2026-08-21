
/* cocos2d::experimental::TMXTiledMap::getLayer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall
cocos2d::experimental::TMXTiledMap::getLayer(TMXTiledMap *this,basic_string *param_1)

{
  ulong uVar1;
  size_t __n;
  void *__s2;
  ulong uVar2;
  long *plVar3;
  basic_string *__s1;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(this + 0x178);
  plVar3 = *(long **)(this + 0x180);
                    /* try { // try from 00efc420 to 00ffc42b has its CatchHandler @ 00efc574 */
  if (plVar7 == plVar3) {
LAB_00efc4cc:
    lVar6 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    __s1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s1 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    lVar6 = *plVar7;
    if (lVar6 != 0) goto LAB_00efc474;
LAB_00efc460:
    do {
      do {
        do {
          plVar7 = plVar7 + 1;
          if (plVar3 == plVar7) goto LAB_00efc4cc;
          lVar6 = *plVar7;
        } while (lVar6 == 0);
LAB_00efc474:
        lVar6 = __dynamic_cast(lVar6,&Node::typeinfo,&TMXLayer::typeinfo,0);
      } while (lVar6 == 0);
      bVar4 = *(byte *)(lVar6 + 0x2f8);
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(lVar6 + 0x300);
      }
      __n = uVar1;
                    /* try { // try from 00efc4a4 to 00ffc683 has its CatchHandler @ 00efbfc8 */
      if (uVar2 <= uVar1) {
        __n = uVar2;
      }
      if (__n != 0) {
        __s2 = (void *)(lVar6 + 0x2f9);
        if ((bVar4 & 1) != 0) {
          __s2 = *(void **)(lVar6 + 0x308);
        }
        iVar5 = memcmp(__s1,__s2,__n);
        if (iVar5 != 0) goto LAB_00efc460;
      }
    } while (uVar2 != uVar1);
  }
  return lVar6;
}

