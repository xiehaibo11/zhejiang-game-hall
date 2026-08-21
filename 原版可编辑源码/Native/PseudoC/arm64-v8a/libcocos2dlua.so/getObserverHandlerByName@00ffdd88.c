
/* cocos2d::__NotificationCenter::getObserverHandlerByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
cocos2d::__NotificationCenter::getObserverHandlerByName
          (__NotificationCenter *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  basic_string bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  basic_string *__s2;
  basic_string *pbVar7;
  long lVar8;
  basic_string *pbVar9;
  long *plVar10;
  
  bVar3 = *param_1;
  __n = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
                    /* try { // try from 00ffddb0 to 010fdea3 has its CatchHandler @ 00ffd900 */
  if ((__n != 0) && (*(long *)(this + 0x28) != 0)) {
    plVar6 = *(long **)(*(long *)(this + 0x28) + 0x30);
    lVar8 = *plVar6;
    if (0 < lVar8) {
      plVar6 = (long *)plVar6[2];
      plVar10 = plVar6 + lVar8 + -1;
      if (plVar6 <= plVar10) {
        __s2 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar3 & 1) == 0) {
          __s2 = param_1 + 1;
        }
        lVar8 = *plVar6;
        while (lVar8 != 0) {
          bVar2 = *(byte *)(lVar8 + 0x40);
          uVar5 = (ulong)(bVar2 >> 1);
          sVar1 = uVar5;
          if ((bVar2 & 1) != 0) {
            sVar1 = *(size_t *)(lVar8 + 0x48);
          }
                    /* catch() { ... } // from try @ 00ffd968 with catch @ 00ffde58 */
          if (sVar1 == __n) {
                    /* catch() { ... } // from try @ 00ffdd54 with catch @ 00ffde5c */
            if ((bVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00ffdbf4 with catch @ 00ffde60 */
              pbVar7 = (basic_string *)(lVar8 + 0x41);
                    /* catch() { ... } // from try @ 00ffdb14 with catch @ 00ffde64 */
              pbVar9 = __s2;
                    /* catch() { ... } // from try @ 00ffdb9c with catch @ 00ffde68
                       catch() { ... } // from try @ 00ffdc2c with catch @ 00ffde68 */
                    /* catch() { ... } // from try @ 00ffdcf4 with catch @ 00ffde6c */
                    /* catch() { ... } // from try @ 00ffda28 with catch @ 00ffde70
                       catch() { ... } // from try @ 00ffdcb8 with catch @ 00ffde70 */
              while (*pbVar7 == *pbVar9) {
                uVar5 = uVar5 - 1;
                pbVar7 = pbVar7 + 1;
                pbVar9 = pbVar9 + 1;
                if (uVar5 == 0) goto LAB_00ffde88;
              }
            }
            else {
              iVar4 = memcmp(*(void **)(lVar8 + 0x50),__s2,__n);
              if (iVar4 == 0) {
LAB_00ffde88:
                return *(undefined4 *)(lVar8 + 0x60);
              }
            }
          }
          plVar6 = plVar6 + 1;
                    /* catch() { ... } // from try @ 00ffd99c with catch @ 00ffde30 */
          if (plVar10 < plVar6) {
            return 0;
          }
                    /* catch() { ... } // from try @ 00ffd994 with catch @ 00ffde34 */
          lVar8 = *plVar6;
                    /* catch() { ... } // from try @ 00ffdb8c with catch @ 00ffde38 */
        }
      }
    }
  }
  return 0;
}

