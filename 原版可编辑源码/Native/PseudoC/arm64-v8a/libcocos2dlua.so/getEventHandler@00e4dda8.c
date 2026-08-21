
/* cocos2d::PUObserver::getEventHandler(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall cocos2d::PUObserver::getEventHandler(PUObserver *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  long *plVar2;
  basic_string bVar3;
  byte bVar4;
  int iVar5;
  basic_string *__s2;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  bVar3 = *param_1;
  __n = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n != 0) {
    plVar8 = *(long **)(this + 0x80);
    plVar2 = *(long **)(this + 0x88);
    if (plVar8 != plVar2) {
      __s2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        __s2 = param_1 + 1;
      }
      do {
        lVar7 = *plVar8;
        bVar4 = *(byte *)(lVar7 + 0x48);
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(lVar7 + 0x50);
        }
        if (sVar1 == __n) {
          if ((bVar4 & 1) == 0) {
            uVar6 = 0;
            while (*(basic_string *)(lVar7 + uVar6 + 0x49) == __s2[uVar6]) {
              uVar6 = uVar6 + 1;
              if (bVar4 >> 1 == uVar6) {
                return lVar7;
              }
            }
          }
          else {
            iVar5 = memcmp(*(void **)(lVar7 + 0x58),__s2,__n);
            if (iVar5 == 0) {
              return lVar7;
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar2);
    }
  }
  return 0;
}

