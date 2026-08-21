
/* cocos2d::__NotificationCenter::postNotification(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Ref*) */

void __thiscall
cocos2d::__NotificationCenter::postNotification
          (__NotificationCenter *this,basic_string *param_1,Ref *param_2)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  basic_string bVar4;
  int iVar5;
  __Array *this_00;
  basic_string *__s2;
  Ref *pRVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  basic_string *pbVar10;
  void *__s1;
  long *plVar11;
  long *plVar12;
  
  this_00 = (__Array *)__Array::createWithCapacity(**(long **)(*(long *)(this + 0x28) + 0x30));
  __Array::addObjectsFromArray(this_00,*(__Array **)(this + 0x28));
                    /* try { // try from 00ffdbf4 to 010fdc27 has its CatchHandler @ 00ffde60 */
  if (this_00 != (__Array *)0x0) {
    lVar9 = **(long **)(this_00 + 0x30);
    if (0 < lVar9) {
      plVar11 = (long *)(*(long **)(this_00 + 0x30))[2];
      plVar12 = plVar11 + lVar9 + -1;
      if (plVar11 <= plVar12) {
        lVar9 = *plVar11;
        while (lVar9 != 0) {
          bVar3 = *(byte *)(lVar9 + 0x40);
          bVar4 = *param_1;
          uVar7 = (ulong)(bVar3 >> 1);
          __n = uVar7;
          if ((bVar3 & 1) != 0) {
            __n = *(size_t *)(lVar9 + 0x48);
          }
          sVar2 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(param_1 + 8);
          }
          if (__n == sVar2) {
            __s1 = *(void **)(lVar9 + 0x50);
            if ((bVar3 & 1) == 0) {
              __s1 = (void *)(lVar9 + 0x41);
            }
            __s2 = param_1 + 1;
            if (((byte)bVar4 & 1) != 0) {
              __s2 = *(basic_string **)(param_1 + 0x10);
            }
            if ((bVar3 & 1) == 0) {
              if (__n != 0) {
                pbVar10 = (basic_string *)(lVar9 + 0x41);
                do {
                  if (*pbVar10 != *__s2) goto LAB_00ffdc34;
                  uVar7 = uVar7 - 1;
                  pbVar10 = pbVar10 + 1;
                    /* try { // try from 00ffdcb8 to 010fdcbf has its CatchHandler @ 00ffde70 */
                  __s2 = __s2 + 1;
                } while (uVar7 != 0);
              }
            }
            else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00ffdc34;
            pRVar6 = *(Ref **)(lVar9 + 0x58);
                    /* try { // try from 00ffdc2c to 010fdc67 has its CatchHandler @ 00ffde68 */
            if ((((pRVar6 == param_2) || (param_2 == (Ref *)0x0)) || (pRVar6 == (Ref *)0x0)) &&
               ((*(int *)(lVar9 + 0x60) == 0 && (*(long *)(lVar9 + 0x28) != 0)))) {
              pcVar8 = *(code **)(lVar9 + 0x30);
              uVar7 = *(ulong *)(lVar9 + 0x38);
                    /* try { // try from 00ffdcf4 to 010fdd0b has its CatchHandler @ 00ffde6c */
              plVar1 = (long *)(*(long *)(lVar9 + 0x28) + ((long)uVar7 >> 1));
              if (param_2 == (Ref *)0x0) {
                if ((uVar7 & 1) != 0) {
                  pcVar8 = *(code **)(pcVar8 + *plVar1);
                }
              }
              else {
                pRVar6 = param_2;
                if ((uVar7 & 1) != 0) {
                  pcVar8 = *(code **)(pcVar8 + *plVar1);
                }
              }
              (*pcVar8)(plVar1,pRVar6);
            }
          }
LAB_00ffdc34:
          plVar11 = plVar11 + 1;
          if (plVar12 < plVar11) {
            return;
          }
          lVar9 = *plVar11;
        }
      }
    }
  }
  return;
}

