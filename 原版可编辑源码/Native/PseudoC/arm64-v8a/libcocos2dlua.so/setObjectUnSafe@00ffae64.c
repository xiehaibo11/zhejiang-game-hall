
/* cocos2d::__Dictionary::setObjectUnSafe(cocos2d::Ref*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::__Dictionary::setObjectUnSafe(__Dictionary *this,Ref *param_1,basic_string *param_2)

{
  long *plVar1;
  byte *pbVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  uint uVar5;
  byte *__s;
  size_t sVar6;
  undefined8 *puVar7;
  void *__s_00;
  void *__ptr;
  uint uVar8;
  byte *pbVar9;
  basic_string *__s_01;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  
                    /* try { // try from 00ffae78 to 010faf3f has its CatchHandler @ 00ffae78
                       catch() { ... } // from try @ 00ffae78 with catch @ 00ffae78
                       catch() { ... } // from try @ 00ffafd8 with catch @ 00ffae78 */
  Ref::retain(param_1);
  __s = operator_new(0x148,(nothrow_t *)&std::nothrow);
  if (__s != (byte *)0x0) {
    bVar4 = *param_2;
    __s_01 = *(basic_string **)(param_2 + 0x10);
    __s[0x100] = 0;
    __s[0x101] = 0;
    __s[0x102] = 0;
    __s[0x103] = 0;
    __s[0x104] = 0;
    __s[0x105] = 0;
    __s[0x106] = 0;
    __s[0x107] = 0;
    if (((byte)bVar4 & 1) == 0) {
      __s_01 = param_2 + 1;
    }
    sVar6 = strlen((char *)__s_01);
    pbVar3 = __s_01 + (sVar6 - 0x100);
    if (sVar6 < 0x101) {
      pbVar3 = __s_01;
    }
    __strcpy_chk(__s,pbVar3,0x100);
    *(Ref **)(__s + 0x108) = param_1;
    __s[0x118] = 0;
    __s[0x119] = 0;
    __s[0x11a] = 0;
    __s[0x11b] = 0;
    __s[0x11c] = 0;
    __s[0x11d] = 0;
    __s[0x11e] = 0;
    __s[0x11f] = 0;
    __s[0x110] = 0;
    __s[0x111] = 0;
    __s[0x112] = 0;
    __s[0x113] = 0;
    __s[0x114] = 0;
    __s[0x115] = 0;
    __s[0x116] = 0;
    __s[0x117] = 0;
    __s[0x128] = 0;
    __s[0x129] = 0;
    __s[0x12a] = 0;
    __s[299] = 0;
    __s[300] = 0;
    __s[0x12d] = 0;
    __s[0x12e] = 0;
    __s[0x12f] = 0;
    __s[0x120] = 0;
    __s[0x121] = 0;
    __s[0x122] = 0;
    __s[0x123] = 0;
    __s[0x124] = 0;
    __s[0x125] = 0;
    __s[0x126] = 0;
    __s[0x127] = 0;
    __s[0x138] = 0;
    __s[0x139] = 0;
    __s[0x13a] = 0;
    __s[0x13b] = 0;
    __s[0x13c] = 0;
    __s[0x13d] = 0;
    __s[0x13e] = 0;
    __s[0x13f] = 0;
    __s[0x130] = 0;
    __s[0x131] = 0;
    __s[0x132] = 0;
    __s[0x133] = 0;
    __s[0x134] = 0;
    __s[0x135] = 0;
    __s[0x136] = 0;
    __s[0x137] = 0;
    __s[0x140] = 0;
    __s[0x141] = 0;
    __s[0x142] = 0;
    __s[0x143] = 0;
    __s[0x144] = 0;
    __s[0x145] = 0;
    __s[0x146] = 0;
    __s[0x147] = 0;
  }
  pbVar2 = __s + 0x110;
  __s[0x120] = 0;
  __s[0x121] = 0;
  __s[0x122] = 0;
  __s[0x123] = 0;
  __s[0x124] = 0;
  __s[0x125] = 0;
  __s[0x126] = 0;
  __s[0x127] = 0;
  *(byte **)(__s + 0x138) = __s;
  sVar6 = strlen((char *)__s);
  *(int *)(__s + 0x140) = (int)sVar6;
  pbVar9 = *(byte **)(this + 0x30);
  if (pbVar9 == (byte *)0x0) {
    *(byte **)(this + 0x30) = __s;
    __s[0x118] = 0;
    __s[0x119] = 0;
    __s[0x11a] = 0;
    __s[0x11b] = 0;
    __s[0x11c] = 0;
    __s[0x11d] = 0;
    __s[0x11e] = 0;
    __s[0x11f] = 0;
                    /* try { // try from 00ffaf40 to 010faf47 has its CatchHandler @ 00ffb098 */
    puVar17 = malloc(0x40);
    *(undefined8 **)(__s + 0x110) = puVar17;
    if (puVar17 == (undefined8 *)0x0) goto LAB_00ffb380;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[7] = 0;
    puVar17[6] = 0;
    puVar17[3] = pbVar2;
    puVar17[4] = 0x110;
    puVar17[1] = 0x500000020;
    puVar7 = malloc(0x200);
    *puVar17 = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00ffb380;
    puVar7[0x3d] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3f] = 0;
    puVar7[0x3e] = 0;
    puVar7[0x39] = 0;
    puVar7[0x38] = 0;
    puVar7[0x3b] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x35] = 0;
    puVar7[0x34] = 0;
    puVar7[0x37] = 0;
    puVar7[0x36] = 0;
    puVar7[0x31] = 0;
    puVar7[0x30] = 0;
    puVar7[0x33] = 0;
    puVar7[0x32] = 0;
    puVar7[0x2d] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2f] = 0;
    puVar7[0x2e] = 0;
                    /* try { // try from 00ffafa0 to 010fafa3 has its CatchHandler @ 00ffb06c */
    puVar7[0x29] = 0;
    puVar7[0x28] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2a] = 0;
    puVar7[0x25] = 0;
    puVar7[0x24] = 0;
    puVar7[0x27] = 0;
    puVar7[0x26] = 0;
    puVar7[0x21] = 0;
    puVar7[0x20] = 0;
    puVar7[0x23] = 0;
    puVar7[0x22] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x19] = 0;
    puVar7[0x18] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    *(undefined4 *)(puVar17 + 7) = 0xa0111fe1;
                    /* try { // try from 00ffafd0 to 010fafd7 has its CatchHandler @ 00ffb088 */
    pbVar9 = __s;
  }
  else {
    puVar17 = *(undefined8 **)(pbVar9 + 0x110);
    lVar10 = puVar17[3];
    *(byte **)(lVar10 + 0x10) = __s;
    *(long *)(__s + 0x118) = lVar10 - puVar17[4];
    puVar17[3] = pbVar2;
  }
                    /* try { // try from 00ffafd8 to 010fb0d7 has its CatchHandler @ 00ffae78 */
  *(int *)(puVar17 + 2) = *(int *)(puVar17 + 2) + 1;
  *(undefined8 *)(__s + 0x110) = *(undefined8 *)(pbVar9 + 0x110);
  __s[0x144] = 0xef;
  __s[0x145] = 0xbe;
  __s[0x146] = 0xed;
  __s[0x147] = 0xfe;
  sVar6 = strlen((char *)__s);
  uVar16 = (uint)sVar6;
  uVar18 = 0x9e3779b9;
  pbVar9 = __s;
  if (uVar16 < 0xc) {
    uVar19 = 0x9e3779b9;
  }
  else {
    uVar8 = *(uint *)(__s + 0x144);
    uVar19 = 0x9e3779b9;
    do {
      uVar16 = (int)sVar6 - 0xc;
      sVar6 = (size_t)uVar16;
      uVar8 = *(int *)(pbVar9 + 8) + uVar8;
      uVar18 = ((*(int *)pbVar9 + uVar18) - (*(int *)(pbVar9 + 4) + uVar19)) - uVar8 ^ uVar8 >> 0xd;
      uVar19 = ((*(int *)(pbVar9 + 4) + uVar19) - uVar8) - uVar18 ^ uVar18 << 8;
      uVar8 = (uVar8 - uVar18) - uVar19 ^ uVar19 >> 0xd;
                    /* catch() { ... } // from try @ 00ffafa0 with catch @ 00ffb06c */
      uVar18 = (uVar18 - uVar19) - uVar8 ^ uVar8 >> 0xc;
      uVar19 = (uVar19 - uVar8) - uVar18 ^ uVar18 << 0x10;
                    /* catch() { ... } // from try @ 00ffafd0 with catch @ 00ffb088 */
      uVar8 = (uVar8 - uVar18) - uVar19 ^ uVar19 >> 5;
      uVar18 = (uVar18 - uVar19) - uVar8 ^ uVar8 >> 3;
                    /* catch() { ... } // from try @ 00ffaf40 with catch @ 00ffb098 */
      uVar19 = (uVar19 - uVar8) - uVar18 ^ uVar18 << 10;
      uVar8 = (uVar8 - uVar18) - uVar19 ^ uVar19 >> 0xf;
      pbVar9 = pbVar9 + 0xc;
      *(uint *)(__s + 0x144) = uVar8;
    } while (0xb < uVar16);
  }
  sVar6 = strlen((char *)__s);
  uVar8 = *(int *)(__s + 0x144) + (int)sVar6;
  *(uint *)(__s + 0x144) = uVar8;
  switch(uVar16) {
  case 0xb:
    uVar8 = uVar8 + (uint)pbVar9[10] * 0x1000000;
    *(uint *)(__s + 0x144) = uVar8;
  case 10:
    uVar8 = uVar8 + (uint)pbVar9[9] * 0x10000;
    *(uint *)(__s + 0x144) = uVar8;
  case 9:
    uVar8 = uVar8 + (uint)pbVar9[8] * 0x100;
    *(uint *)(__s + 0x144) = uVar8;
  case 8:
    uVar19 = uVar19 + (uint)pbVar9[7] * 0x1000000;
  case 7:
    uVar19 = uVar19 + (uint)pbVar9[6] * 0x10000;
  case 6:
    uVar19 = uVar19 + (uint)pbVar9[5] * 0x100;
  case 5:
    uVar19 = uVar19 + pbVar9[4];
  case 4:
    uVar18 = uVar18 + (uint)pbVar9[3] * 0x1000000;
  case 3:
    uVar18 = uVar18 + (uint)pbVar9[2] * 0x10000;
  case 2:
    uVar18 = uVar18 + (uint)pbVar9[1] * 0x100;
  case 1:
    uVar18 = uVar18 + *pbVar9;
  }
  uVar18 = (uVar18 - uVar19) - uVar8 ^ uVar8 >> 0xd;
  uVar16 = (uVar19 - uVar8) - uVar18 ^ uVar18 << 8;
  uVar19 = (uVar8 - uVar18) - uVar16 ^ uVar16 >> 0xd;
  uVar18 = (uVar18 - uVar16) - uVar19 ^ uVar19 >> 0xc;
  uVar16 = (uVar16 - uVar19) - uVar18 ^ uVar18 << 0x10;
  uVar19 = (uVar19 - uVar18) - uVar16 ^ uVar16 >> 5;
  uVar18 = (uVar18 - uVar16) - uVar19 ^ uVar19 >> 3;
  uVar16 = (uVar16 - uVar19) - uVar18 ^ uVar18 << 10;
  uVar18 = (uVar19 - uVar18) - uVar16 ^ uVar16 >> 0xf;
  *(uint *)(__s + 0x144) = uVar18;
  lVar10 = **(long **)(*(long *)(this + 0x30) + 0x110);
  uVar11 = (ulong)(uVar18 & (int)(*(long **)(*(long *)(this + 0x30) + 0x110))[1] - 1U);
  plVar1 = (long *)(lVar10 + uVar11 * 0x10);
  lVar13 = *plVar1;
  uVar18 = (int)plVar1[1] + 1;
  *(uint *)(plVar1 + 1) = uVar18;
  __s[0x128] = 0;
  __s[0x129] = 0;
  __s[0x12a] = 0;
  __s[299] = 0;
  __s[300] = 0;
  __s[0x12d] = 0;
  __s[0x12e] = 0;
  __s[0x12f] = 0;
  *(long *)(__s + 0x130) = lVar13;
  if (lVar13 != 0) {
    *(byte **)(lVar13 + 0x18) = pbVar2;
  }
  *plVar1 = (long)pbVar2;
  if ((*(int *)(lVar10 + uVar11 * 0x10 + 0xc) * 10 + 10U <= uVar18) &&
     (puVar17 = *(undefined8 **)pbVar2, *(int *)((long)puVar17 + 0x34) != 1)) {
    __s_00 = malloc((ulong)(uint)(*(int *)(puVar17 + 1) << 1) << 4);
    if (__s_00 == (void *)0x0) {
LAB_00ffb380:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s_00,0,(ulong)(uint)(*(int *)(puVar17 + 1) << 1) << 4);
    uVar16 = *(uint *)(puVar17 + 1);
    __ptr = (void *)*puVar17;
    uVar18 = *(uint *)(puVar17 + 2) >> (ulong)(*(int *)((long)puVar17 + 0xc) + 1U & 0x1f);
    uVar19 = uVar16 * 2 - 1;
    if ((uVar19 & *(uint *)(puVar17 + 2)) != 0) {
      uVar18 = uVar18 + 1;
    }
    *(uint *)(puVar17 + 5) = uVar18;
    *(undefined4 *)((long)puVar17 + 0x2c) = 0;
    if (uVar16 != 0) {
      iVar12 = 0;
      uVar11 = 0;
      do {
        lVar10 = *(long *)((long)__ptr + uVar11 * 0x10);
        while (lVar10 != 0) {
          uVar14 = (ulong)(*(uint *)(lVar10 + 0x34) & uVar19);
          plVar1 = (long *)((long)__s_00 + uVar14 * 0x10);
          lVar13 = *(long *)(lVar10 + 0x20);
          uVar8 = (int)plVar1[1] + 1;
          *(uint *)(plVar1 + 1) = uVar8;
          if (uVar18 < uVar8) {
            iVar12 = iVar12 + 1;
            uVar5 = 0;
            if (uVar18 != 0) {
              uVar5 = uVar8 / uVar18;
            }
            *(int *)((long)puVar17 + 0x2c) = iVar12;
            *(uint *)((long)__s_00 + uVar14 * 0x10 + 0xc) = uVar5;
          }
          *(undefined8 *)(lVar10 + 0x18) = 0;
          lVar15 = *plVar1;
          *(long *)(lVar10 + 0x20) = lVar15;
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x18) = lVar10;
          }
          *plVar1 = lVar10;
          lVar10 = lVar13;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar16);
    }
    free(__ptr);
    puVar17 = *(undefined8 **)pbVar2;
    *puVar17 = __s_00;
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) << 1;
    *(int *)((long)puVar17 + 0xc) = *(int *)((long)puVar17 + 0xc) + 1;
    if (*(uint *)(puVar17 + 2) >> 1 < *(uint *)((long)puVar17 + 0x2c)) {
      iVar12 = *(int *)(puVar17 + 6);
      *(uint *)(puVar17 + 6) = iVar12 + 1U;
      if (1 < iVar12 + 1U) {
        *(undefined4 *)((long)puVar17 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar17 + 6) = 0;
    }
  }
  return;
}

