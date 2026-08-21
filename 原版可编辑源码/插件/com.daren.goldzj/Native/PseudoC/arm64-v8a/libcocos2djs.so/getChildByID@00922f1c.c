
/* cocos2d::renderer::NodeProxy::getChildByID(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

long __thiscall cocos2d::renderer::NodeProxy::getChildByID(NodeProxy *this,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte *__s2;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  void *__s1;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(this + 0xf0);
  plVar2 = *(long **)(this + 0xf8);
  if (plVar8 != plVar2) {
    bVar4 = *param_2;
    __n = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    do {
      lVar7 = *plVar8;
      bVar3 = *(byte *)(lVar7 + 0x48);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar7 + 0x50);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar7 + 0x58);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar7 + 0x49);
        }
        __s2 = param_2 + 1;
        if ((bVar4 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return lVar7;
          }
          uVar6 = 0;
          while (*(byte *)(lVar7 + uVar6 + 0x49) == __s2[uVar6]) {
            uVar6 = uVar6 + 1;
            if (bVar3 >> 1 == uVar6) {
              return lVar7;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar7;
          }
          iVar5 = memcmp(__s1,__s2,__n);
          if (iVar5 == 0) {
            return lVar7;
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  return 0;
}

