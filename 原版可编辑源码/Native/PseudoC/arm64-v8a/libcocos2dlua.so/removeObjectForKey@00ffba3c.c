
/* cocos2d::__Dictionary::removeObjectForKey(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::__Dictionary::removeObjectForKey(__Dictionary *this,basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string *__s;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  long *plVar5;
  basic_string *pbVar6;
  long lVar7;
  DictElement *pDVar8;
  uint uVar9;
  void *__s1;
  uint uVar10;
  uint uVar11;
  
                    /* try { // try from 00ffba40 to 010fbab7 has its CatchHandler @ 00ffb900 */
  if (*(int *)(this + 0x38) == 0) {
                    /* catch() { ... } // from try @ 00ffbd58 with catch @ 00ffbcf0 */
    return;
  }
  if (*(long *)(this + 0x30) != 0) {
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    pbVar1 = param_1 + 1;
    if (((byte)*param_1 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    sVar3 = strlen((char *)pbVar6);
    uVar4 = 0xfeedbeef;
    uVar9 = (uint)sVar3;
    uVar10 = 0x9e3779b9;
    uVar11 = 0x9e3779b9;
    while (0xb < uVar9) {
      uVar9 = (int)sVar3 - 0xc;
      sVar3 = (size_t)uVar9;
                    /* try { // try from 00ffbab8 to 010fbb1f has its CatchHandler @ 00ffbb60 */
      uVar4 = *(int *)(pbVar6 + 8) + uVar4;
      uVar11 = ((*(int *)pbVar6 + uVar11) - (*(int *)(pbVar6 + 4) + uVar10)) - uVar4 ^ uVar4 >> 0xd;
      uVar10 = ((*(int *)(pbVar6 + 4) + uVar10) - uVar4) - uVar11 ^ uVar11 << 8;
      uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xd;
      uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 0xc;
      uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 0x10;
      uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 3;
                    /* try { // try from 00ffbb20 to 010fbb8f has its CatchHandler @ 00ffb900 */
      uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 10;
      uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xf;
      pbVar6 = pbVar6 + 0xc;
    }
    __s = pbVar1;
    if (((byte)*param_1 & 1) != 0) {
      __s = *(basic_string **)(param_1 + 0x10);
    }
    sVar3 = strlen((char *)__s);
    uVar4 = uVar4 + (int)sVar3;
                    /* catch() { ... } // from try @ 00ffbab8 with catch @ 00ffbb60 */
                    /* catch() { ... } // from try @ 00ffb9d8 with catch @ 00ffbb70 */
    switch(uVar9) {
    case 0xb:
      uVar4 = uVar4 + (uint)(byte)pbVar6[10] * 0x1000000;
    case 10:
      uVar4 = uVar4 + (uint)(byte)pbVar6[9] * 0x10000;
    case 9:
      uVar4 = uVar4 + (uint)(byte)pbVar6[8] * 0x100;
    case 8:
                    /* catch() { ... } // from try @ 00ffbbf0 with catch @ 00ffbb90 */
      uVar10 = uVar10 + (uint)(byte)pbVar6[7] * 0x1000000;
    case 7:
      uVar10 = uVar10 + (uint)(byte)pbVar6[6] * 0x10000;
    case 6:
      uVar10 = uVar10 + (uint)(byte)pbVar6[5] * 0x100;
    case 5:
      uVar10 = uVar10 + (byte)pbVar6[4];
    case 4:
      uVar11 = uVar11 + (uint)(byte)pbVar6[3] * 0x1000000;
    case 3:
                    /* try { // try from 00ffbbb8 to 010fbbbf has its CatchHandler @ 00ffbc74 */
      uVar11 = uVar11 + (uint)(byte)pbVar6[2] * 0x10000;
    case 2:
      uVar11 = uVar11 + (uint)(byte)pbVar6[1] * 0x100;
    case 1:
      uVar11 = uVar11 + (byte)*pbVar6;
    }
                    /* try { // try from 00ffbbd4 to 010fbbef has its CatchHandler @ 00ffbc7c */
    uVar11 = (uVar11 - uVar4) - uVar10 ^ uVar4 >> 0xd;
    uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 8;
                    /* try { // try from 00ffbbf0 to 010fbc9f has its CatchHandler @ 00ffbb90 */
    plVar5 = *(long **)(*(long *)(this + 0x30) + 0x110);
    uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xd;
    uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 0xc;
    uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 0x10;
    uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 5;
    uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 3;
    uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 10;
    lVar7 = *(long *)(*plVar5 +
                     (ulong)(((uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xf) & (int)plVar5[1] - 1U) *
                     0x10);
    if (lVar7 != 0) {
      while( true ) {
        pDVar8 = (DictElement *)(lVar7 - plVar5[4]);
        uVar4 = *(uint *)(pDVar8 + 0x140);
                    /* catch() { ... } // from try @ 00ffbbb8 with catch @ 00ffbc74 */
        pbVar6 = pbVar1;
        if (((byte)*param_1 & 1) != 0) {
          pbVar6 = *(basic_string **)(param_1 + 0x10);
        }
                    /* catch() { ... } // from try @ 00ffbbd4 with catch @ 00ffbc7c */
        sVar3 = strlen((char *)pbVar6);
        if (sVar3 == uVar4) {
          __s1 = *(void **)(pDVar8 + 0x138);
          pbVar6 = pbVar1;
          if (((byte)*param_1 & 1) != 0) {
            pbVar6 = *(basic_string **)(param_1 + 0x10);
          }
          sVar3 = strlen((char *)pbVar6);
          iVar2 = memcmp(__s1,pbVar6,sVar3);
          if (iVar2 == 0) goto LAB_00ffbcd0;
        }
        lVar7 = *(long *)(pDVar8 + 0x130);
        if (lVar7 == 0) break;
        plVar5 = *(long **)(*(long *)(this + 0x30) + 0x110);
      }
    }
  }
  pDVar8 = (DictElement *)0x0;
LAB_00ffbcd0:
  removeObjectForElememt(this,pDVar8);
  return;
}

