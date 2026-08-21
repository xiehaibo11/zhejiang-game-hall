
/* cocos2d::__NotificationCenter::removeObserver(cocos2d::Ref*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::__NotificationCenter::removeObserver
          (__NotificationCenter *this,Ref *param_1,basic_string *param_2)

{
  size_t sVar1;
  size_t __n;
  Ref *__s2;
  Ref RVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  Ref *pRVar6;
  Ref *pRVar7;
  __Array *this_00;
  Ref *pRVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  this_00 = *(__Array **)(this + 0x28);
  if (this_00 != (__Array *)0x0) {
    lVar5 = **(long **)(this_00 + 0x30);
    if (0 < lVar5) {
      puVar9 = (undefined8 *)(*(long **)(this_00 + 0x30))[2];
      puVar10 = puVar9 + lVar5 + -1;
      if (puVar9 <= puVar10) {
        __n = *(size_t *)(param_2 + 8);
        __s2 = *(Ref **)(param_2 + 0x10);
                    /* try { // try from 00ffd7c0 to 010fd7c3 has its CatchHandler @ 00ffd8e8 */
                    /* try { // try from 00ffd7c4 to 010fd8db has its CatchHandler @ 00ffd6f8 */
        if (((byte)*param_2 & 1) == 0) {
          __s2 = (Ref *)(param_2 + 1);
          __n = (ulong)((byte)*param_2 >> 1);
        }
        pRVar8 = (Ref *)*puVar9;
        while (pRVar8 != (Ref *)0x0) {
          RVar2 = pRVar8[0x40];
          uVar4 = (ulong)((byte)RVar2 >> 1);
          sVar1 = uVar4;
          if (((byte)RVar2 & 1) != 0) {
            sVar1 = *(size_t *)(pRVar8 + 0x48);
          }
          if (sVar1 == __n) {
            pRVar7 = *(Ref **)(pRVar8 + 0x50);
            if (((byte)RVar2 & 1) == 0) {
              pRVar7 = pRVar8 + 0x41;
            }
            if (((byte)RVar2 & 1) == 0) {
              if (__n != 0) {
                pRVar7 = pRVar8 + 0x41;
                pRVar6 = __s2;
                do {
                  if (*pRVar7 != *pRVar6) goto LAB_00ffd7ec;
                  uVar4 = uVar4 - 1;
                  pRVar7 = pRVar7 + 1;
                  pRVar6 = pRVar6 + 1;
                } while (uVar4 != 0);
              }
            }
            else if ((__n != 0) && (iVar3 = memcmp(pRVar7,__s2,__n), iVar3 != 0)) goto LAB_00ffd7ec;
            if (*(Ref **)(pRVar8 + 0x28) == param_1) {
              __Array::removeObject(this_00,pRVar8,true);
              return;
            }
          }
LAB_00ffd7ec:
          puVar9 = puVar9 + 1;
          if (puVar10 < puVar9) {
            return;
          }
          pRVar8 = (Ref *)*puVar9;
        }
      }
    }
  }
  return;
}

