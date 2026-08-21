
/* cocos2d::__Dictionary::setObjectUnSafe(cocos2d::Ref*, long) */

void __thiscall cocos2d::__Dictionary::setObjectUnSafe(__Dictionary *this,Ref *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  void *__s;
  void *__ptr;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  
  Ref::retain(param_1);
  puVar7 = operator_new(0x148,(nothrow_t *)&std::nothrow);
  if (puVar7 != (undefined1 *)0x0) {
    *puVar7 = 0;
    *(long *)(puVar7 + 0x100) = param_2;
    *(Ref **)(puVar7 + 0x108) = param_1;
    *(undefined8 *)(puVar7 + 0x118) = 0;
    *(undefined8 *)(puVar7 + 0x110) = 0;
    *(undefined8 *)(puVar7 + 0x128) = 0;
    *(undefined8 *)(puVar7 + 0x120) = 0;
    *(undefined8 *)(puVar7 + 0x138) = 0;
    *(undefined8 *)(puVar7 + 0x130) = 0;
    *(undefined8 *)(puVar7 + 0x140) = 0;
  }
  *(undefined8 *)(puVar7 + 0x120) = 0;
  *(undefined1 **)(puVar7 + 0x138) = puVar7 + 0x100;
  *(undefined4 *)(puVar7 + 0x140) = 8;
  puVar9 = *(undefined1 **)(this + 0x30);
  puVar10 = (undefined8 *)(puVar7 + 0x110);
  if (puVar9 == (undefined1 *)0x0) {
    *(undefined1 **)(this + 0x30) = puVar7;
    *(undefined8 *)(puVar7 + 0x118) = 0;
    puVar17 = malloc(0x40);
    *(undefined8 **)(puVar7 + 0x110) = puVar17;
    if (puVar17 == (undefined8 *)0x0) goto LAB_00ffba34;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[7] = 0;
    puVar17[6] = 0;
    puVar17[3] = puVar10;
    puVar17[4] = 0x110;
    puVar17[1] = 0x500000020;
    puVar8 = malloc(0x200);
    *puVar17 = puVar8;
    if (puVar8 == (undefined8 *)0x0) goto LAB_00ffba34;
    puVar8[0x3d] = 0;
    puVar8[0x3c] = 0;
    puVar8[0x3f] = 0;
    puVar8[0x3e] = 0;
    puVar8[0x39] = 0;
    puVar8[0x38] = 0;
    puVar8[0x3b] = 0;
    puVar8[0x3a] = 0;
    puVar8[0x35] = 0;
    puVar8[0x34] = 0;
    puVar8[0x37] = 0;
    puVar8[0x36] = 0;
    puVar8[0x31] = 0;
    puVar8[0x30] = 0;
    puVar8[0x33] = 0;
    puVar8[0x32] = 0;
    puVar8[0x2d] = 0;
    puVar8[0x2c] = 0;
    puVar8[0x2f] = 0;
    puVar8[0x2e] = 0;
    puVar8[0x29] = 0;
    puVar8[0x28] = 0;
    puVar8[0x2b] = 0;
    puVar8[0x2a] = 0;
    puVar8[0x25] = 0;
    puVar8[0x24] = 0;
    puVar8[0x27] = 0;
    puVar8[0x26] = 0;
    puVar8[0x21] = 0;
    puVar8[0x20] = 0;
    puVar8[0x23] = 0;
    puVar8[0x22] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x1f] = 0;
    puVar8[0x1e] = 0;
    puVar8[0x19] = 0;
    puVar8[0x18] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x15] = 0;
    puVar8[0x14] = 0;
    puVar8[0x17] = 0;
    puVar8[0x16] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0x13] = 0;
    puVar8[0x12] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    *(undefined4 *)(puVar17 + 7) = 0xa0111fe1;
    puVar9 = puVar7;
  }
  else {
    puVar17 = *(undefined8 **)(puVar9 + 0x110);
    lVar11 = puVar17[3];
    *(undefined1 **)(lVar11 + 0x10) = puVar7;
    *(long *)(puVar7 + 0x118) = lVar11 - puVar17[4];
    puVar17[3] = puVar10;
  }
  *(int *)(puVar17 + 2) = *(int *)(puVar17 + 2) + 1;
  uVar3 = ((uint)(byte)puVar7[0x103] * 0x1000000 - (*(int *)(puVar7 + 0x104) + -0x61c88647)) +
          (uint)(byte)puVar7[0x102] * 0x10000 + (uint)(byte)puVar7[0x101] * 0x100 +
          (uint)(byte)puVar7[0x100] + 0x9f49bac2 ^ 0x7f76d;
  uVar4 = ((*(int *)(puVar7 + 0x104) + -0x61c88647) - uVar3) + 0x1124109 ^ uVar3 << 8;
  uVar5 = 0xfeedbef7 - (uVar3 + uVar4) ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar5 >> 3;
  puVar17 = *(undefined8 **)(puVar9 + 0x110);
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar3 << 10;
  uVar3 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 0xf;
  *(undefined8 **)(puVar7 + 0x110) = puVar17;
  *(uint *)(puVar7 + 0x144) = uVar3;
  lVar11 = **(long **)(puVar9 + 0x110);
  uVar12 = (ulong)(uVar3 & (int)(*(long **)(puVar9 + 0x110))[1] - 1U);
  plVar1 = (long *)(lVar11 + uVar12 * 0x10);
  lVar14 = *plVar1;
  uVar3 = (int)plVar1[1] + 1;
  *(uint *)(plVar1 + 1) = uVar3;
  *(undefined8 *)(puVar7 + 0x128) = 0;
  *(long *)(puVar7 + 0x130) = lVar14;
  if (lVar14 != 0) {
    *(undefined8 **)(lVar14 + 0x18) = puVar10;
  }
  *plVar1 = (long)puVar10;
  if ((*(int *)(lVar11 + uVar12 * 0x10 + 0xc) * 10 + 10U <= uVar3) &&
     (*(int *)((long)puVar17 + 0x34) != 1)) {
                    /* try { // try from 00ffb900 to 010fb9d7 has its CatchHandler @ 00ffb900
                       catch() { ... } // from try @ 00ffb900 with catch @ 00ffb900
                       catch() { ... } // from try @ 00ffba40 with catch @ 00ffb900
                       catch() { ... } // from try @ 00ffbb20 with catch @ 00ffb900 */
    __s = malloc((ulong)(uint)(*(int *)(puVar17 + 1) << 1) << 4);
    if (__s == (void *)0x0) {
LAB_00ffba34:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0,(ulong)(uint)(*(int *)(puVar17 + 1) << 1) << 4);
    uVar4 = *(uint *)(puVar17 + 1);
    __ptr = (void *)*puVar17;
    uVar3 = *(uint *)(puVar17 + 2) >> (ulong)(*(int *)((long)puVar17 + 0xc) + 1U & 0x1f);
    uVar5 = uVar4 * 2 - 1;
    if ((uVar5 & *(uint *)(puVar17 + 2)) != 0) {
      uVar3 = uVar3 + 1;
    }
    *(uint *)(puVar17 + 5) = uVar3;
    *(undefined4 *)((long)puVar17 + 0x2c) = 0;
    if (uVar4 != 0) {
      iVar13 = 0;
      uVar12 = 0;
      do {
        lVar11 = *(long *)((long)__ptr + uVar12 * 0x10);
        while (lVar11 != 0) {
          uVar15 = (ulong)(*(uint *)(lVar11 + 0x34) & uVar5);
          plVar1 = (long *)((long)__s + uVar15 * 0x10);
          lVar14 = *(long *)(lVar11 + 0x20);
          uVar2 = (int)plVar1[1] + 1;
          *(uint *)(plVar1 + 1) = uVar2;
          if (uVar3 < uVar2) {
            iVar13 = iVar13 + 1;
            uVar6 = 0;
            if (uVar3 != 0) {
              uVar6 = uVar2 / uVar3;
            }
            *(int *)((long)puVar17 + 0x2c) = iVar13;
            *(uint *)((long)__s + uVar15 * 0x10 + 0xc) = uVar6;
          }
          *(undefined8 *)(lVar11 + 0x18) = 0;
          lVar16 = *plVar1;
          *(long *)(lVar11 + 0x20) = lVar16;
          if (lVar16 != 0) {
            *(long *)(lVar16 + 0x18) = lVar11;
          }
          *plVar1 = lVar11;
          lVar11 = lVar14;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar4);
    }
    free(__ptr);
                    /* try { // try from 00ffb9d8 to 010fba3f has its CatchHandler @ 00ffbb70 */
    puVar10 = (undefined8 *)*puVar10;
    *puVar10 = __s;
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) << 1;
    *(int *)((long)puVar10 + 0xc) = *(int *)((long)puVar10 + 0xc) + 1;
    if (*(uint *)(puVar10 + 2) >> 1 < *(uint *)((long)puVar10 + 0x2c)) {
      iVar13 = *(int *)(puVar10 + 6);
      *(uint *)(puVar10 + 6) = iVar13 + 1U;
      if (1 < iVar13 + 1U) {
        *(undefined4 *)((long)puVar10 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar10 + 6) = 0;
    }
  }
  return;
}

