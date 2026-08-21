
/* cocos2d::__NotificationCenter::unregisterScriptObserver(cocos2d::Ref*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::__NotificationCenter::unregisterScriptObserver
          (__NotificationCenter *this,Ref *param_1,basic_string *param_2)

{
  size_t __n;
  size_t sVar1;
  Ref RVar2;
  basic_string bVar3;
  int iVar4;
  Ref *__s2;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  Ref *pRVar8;
  Ref *pRVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (*(long *)(this + 0x28) != 0) {
    plVar5 = *(long **)(*(long *)(this + 0x28) + 0x30);
    lVar7 = *plVar5;
    if (0 < lVar7) {
      puVar10 = (undefined8 *)plVar5[2];
      puVar11 = puVar10 + lVar7 + -1;
      if (puVar10 <= puVar11) {
        pRVar9 = (Ref *)*puVar10;
        while (pRVar9 != (Ref *)0x0) {
          RVar2 = pRVar9[0x40];
          bVar3 = *param_2;
                    /* try { // try from 00ffdb14 to 010fdb53 has its CatchHandler @ 00ffde64 */
          uVar6 = (ulong)((byte)RVar2 >> 1);
          __n = uVar6;
          if (((byte)RVar2 & 1) != 0) {
            __n = *(size_t *)(pRVar9 + 0x48);
          }
          sVar1 = (ulong)((byte)bVar3 >> 1);
          if (((byte)bVar3 & 1) != 0) {
            sVar1 = *(size_t *)(param_2 + 8);
          }
          if (__n == sVar1) {
            pRVar8 = *(Ref **)(pRVar9 + 0x50);
            if (((byte)RVar2 & 1) == 0) {
              pRVar8 = pRVar9 + 0x41;
            }
            __s2 = (Ref *)(param_2 + 1);
            if (((byte)bVar3 & 1) != 0) {
              __s2 = *(Ref **)(param_2 + 0x10);
            }
            if (((byte)RVar2 & 1) == 0) {
              if (__n != 0) {
                    /* try { // try from 00ffdb54 to 010fdb8b has its CatchHandler @ 00ffd900 */
                pRVar8 = pRVar9 + 0x41;
                do {
                  if (*pRVar8 != *__s2) goto LAB_00ffdaec;
                  uVar6 = uVar6 - 1;
                  pRVar8 = pRVar8 + 1;
                  __s2 = __s2 + 1;
                } while (uVar6 != 0);
              }
            }
            else if ((__n != 0) && (iVar4 = memcmp(pRVar8,__s2,__n), iVar4 != 0)) goto LAB_00ffdaec;
            if (*(Ref **)(pRVar9 + 0x28) == param_1) {
                    /* try { // try from 00ffdb8c to 010fdb93 has its CatchHandler @ 00ffde38 */
              __Array::removeObject(*(__Array **)(this + 0x28),pRVar9,true);
                    /* try { // try from 00ffdb9c to 010fdbe7 has its CatchHandler @ 00ffde68 */
            }
          }
LAB_00ffdaec:
          puVar10 = puVar10 + 1;
          if (puVar11 < puVar10) {
            return;
          }
          pRVar9 = (Ref *)*puVar10;
        }
      }
    }
  }
  return;
}

