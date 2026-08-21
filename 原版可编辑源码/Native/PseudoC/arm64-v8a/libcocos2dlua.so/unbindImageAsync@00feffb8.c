
/* cocos2d::TextureCache::unbindImageAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::TextureCache::unbindImageAsync(TextureCache *this,basic_string *param_1)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  basic_string bVar4;
  int iVar5;
  long *plVar6;
  basic_string *__s2;
  ulong uVar7;
  code *pcVar8;
  basic_string *pbVar9;
  ulong uVar10;
  void *__s1;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if ((*(long *)(this + 0x58) != 0) &&
     (lVar13 = *(long *)(this + 0x38), *(long *)(this + 0x40) != lVar13)) {
    uVar10 = *(ulong *)(this + 0x50);
    uVar7 = uVar10 + *(long *)(this + 0x58);
    plVar11 = (long *)(lVar13 + (uVar10 >> 6 & 0x3fffffffffffff8));
                    /* catch() { ... } // from try @ 00feff74 with catch @ 00fefff8 */
    plVar12 = (long *)(*plVar11 + (uVar10 & 0x1ff) * 8);
    plVar1 = (long *)(*(long *)(lVar13 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8);
    if (plVar1 != plVar12) {
      do {
        lVar13 = *plVar12;
        bVar3 = *(byte *)(lVar13 + 0x50);
        bVar4 = *param_1;
        uVar7 = (ulong)(bVar3 >> 1);
        __n = uVar7;
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(lVar13 + 0x58);
        }
        sVar2 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        if (__n == sVar2) {
          __s1 = *(void **)(lVar13 + 0x60);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar13 + 0x51);
          }
          __s2 = param_1 + 1;
          if (((byte)bVar4 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              pbVar9 = (basic_string *)(lVar13 + 0x51);
              do {
                if (*pbVar9 != *__s2) goto LAB_00ff00ec;
                uVar7 = uVar7 - 1;
                pbVar9 = pbVar9 + 1;
                __s2 = __s2 + 1;
              } while (uVar7 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00ff00ec;
          plVar6 = *(long **)(lVar13 + 0x40);
          *(undefined8 *)(lVar13 + 0x40) = 0;
          if ((long *)(lVar13 + 0x20) == plVar6) {
            pcVar8 = *(code **)(*plVar6 + 0x20);
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00ff00ec;
            pcVar8 = *(code **)(*plVar6 + 0x28);
          }
          (*pcVar8)();
        }
LAB_00ff00ec:
        plVar12 = plVar12 + 1;
        if ((long)plVar12 - *plVar11 == 0x1000) {
          plVar11 = plVar11 + 1;
          plVar12 = (long *)*plVar11;
        }
      } while (plVar1 != plVar12);
    }
  }
  return;
}

