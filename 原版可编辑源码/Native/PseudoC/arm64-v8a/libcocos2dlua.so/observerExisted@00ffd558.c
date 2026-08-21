
/* cocos2d::__NotificationCenter::observerExisted(cocos2d::Ref*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Ref*) */

undefined8 __thiscall
cocos2d::__NotificationCenter::observerExisted
          (__NotificationCenter *this,Ref *param_1,basic_string *param_2,Ref *param_3)

{
  size_t sVar1;
  size_t __n;
  basic_string *__s2;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  void *__s1;
  long *plVar9;
  
  if (*(long *)(this + 0x28) != 0) {
    plVar4 = *(long **)(*(long *)(this + 0x28) + 0x30);
    lVar6 = *plVar4;
    if (0 < lVar6) {
      plVar4 = (long *)plVar4[2];
      plVar9 = plVar4 + lVar6 + -1;
      if (plVar4 <= plVar9) {
        __n = *(size_t *)(param_2 + 8);
        __s2 = *(basic_string **)(param_2 + 0x10);
        if (((byte)*param_2 & 1) == 0) {
          __s2 = param_2 + 1;
          __n = (ulong)((byte)*param_2 >> 1);
        }
        lVar6 = *plVar4;
        while (lVar6 != 0) {
          bVar2 = *(byte *)(lVar6 + 0x40);
          uVar5 = (ulong)(bVar2 >> 1);
          sVar1 = uVar5;
          if ((bVar2 & 1) != 0) {
            sVar1 = *(size_t *)(lVar6 + 0x48);
          }
          if (sVar1 == __n) {
            __s1 = *(void **)(lVar6 + 0x50);
            if ((bVar2 & 1) == 0) {
              __s1 = (void *)(lVar6 + 0x41);
            }
            if ((bVar2 & 1) == 0) {
              if (__n != 0) {
                pbVar7 = (basic_string *)(lVar6 + 0x41);
                pbVar8 = __s2;
                do {
                  if (*pbVar7 != *pbVar8) goto LAB_00ffd5d4;
                  uVar5 = uVar5 - 1;
                  pbVar7 = pbVar7 + 1;
                  pbVar8 = pbVar8 + 1;
                } while (uVar5 != 0);
              }
            }
            else {
                    /* try { // try from 00ffd650 to 010fd667 has its CatchHandler @ 00ffd6dc */
              if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00ffd5d4;
            }
            if ((*(Ref **)(lVar6 + 0x28) == param_1) && (*(Ref **)(lVar6 + 0x58) == param_3)) {
              return 1;
            }
          }
LAB_00ffd5d4:
          plVar4 = plVar4 + 1;
          if (plVar9 < plVar4) {
            return 0;
          }
          lVar6 = *plVar4;
        }
      }
    }
  }
                    /* try { // try from 00ffd67c to 010fd68b has its CatchHandler @ 00ffd6d0 */
                    /* try { // try from 00ffd68c to 010fd6f7 has its CatchHandler @ 00ffd330 */
  return 0;
}

