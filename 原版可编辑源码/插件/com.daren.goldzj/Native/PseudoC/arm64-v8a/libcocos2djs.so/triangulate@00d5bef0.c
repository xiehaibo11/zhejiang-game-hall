
/* WARNING: Type propagation algorithm not settling */
/* spine::Triangulator::triangulate(spine::Vector<float>&) */

Triangulator * __thiscall spine::Triangulator::triangulate(Triangulator *this,Vector *param_1)

{
  Triangulator *pTVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long *plVar13;
  size_t __n;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  undefined8 uVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  uVar31 = *(ulong *)(param_1 + 8);
  uVar15 = *(ulong *)(this + 0x58);
  uVar29 = uVar31 >> 1;
  *(undefined8 *)(this + 0x50) = 0;
  if (uVar15 < uVar29) {
    uVar30 = *(undefined8 *)(this + 0x60);
    *(ulong *)(this + 0x58) = uVar29;
    plVar13 = (long *)SpineExtension::getInstance();
    uVar30 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,uVar29 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    uVar32 = *(ulong *)(this + 0x50);
    uVar15 = *(ulong *)(this + 0x58);
    *(undefined8 *)(this + 0x60) = uVar30;
  }
  else {
    uVar32 = 0;
  }
  *(ulong *)(this + 0x50) = uVar29;
  if (uVar15 < uVar29) {
    uVar14 = (uint)((float)uVar29 * 1.75);
    uVar30 = *(undefined8 *)(this + 0x60);
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    *(long *)(this + 0x58) = (long)(int)uVar14;
    plVar13 = (long *)SpineExtension::getInstance();
    uVar30 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,
                        -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    *(undefined8 *)(this + 0x60) = uVar30;
    lVar16 = *(ulong *)(this + 0x50) - uVar32;
    if (uVar32 <= *(ulong *)(this + 0x50) && lVar16 != 0) goto LAB_00d5bfe8;
  }
  else {
    lVar16 = uVar29 - uVar32;
    if (uVar32 <= uVar29 && lVar16 != 0) {
LAB_00d5bfe8:
      memset((void *)(*(long *)(this + 0x60) + uVar32 * 4),0,lVar16 << 2);
    }
  }
  if (uVar29 != 0) {
    lVar16 = *(long *)(this + 0x60);
    if (0xf < uVar31) {
      uVar34 = 0x300000002;
      uVar30 = 0x100000000;
      uVar15 = uVar29 & 0x7ffffffffffffff8;
      puVar21 = (undefined8 *)(lVar16 + 0x10);
      uVar32 = uVar15;
      do {
        iVar33 = (int)((ulong)uVar30 >> 0x20);
        iVar35 = (int)((ulong)uVar34 >> 0x20);
        puVar21[-1] = uVar34;
        puVar21[-2] = uVar30;
        puVar21[1] = CONCAT44(iVar35 + 4,(int)uVar34 + 4);
        *puVar21 = CONCAT44(iVar33 + 4,(int)uVar30 + 4);
        uVar30 = CONCAT44(iVar33 + 8,(int)uVar30 + 8);
        uVar34 = CONCAT44(iVar35 + 8,(int)uVar34 + 8);
        uVar32 = uVar32 - 8;
        puVar21 = puVar21 + 4;
        if (uVar32 == 0) goto LAB_00d5c054;
      } while( true );
    }
    uVar15 = 0;
    do {
      *(int *)(lVar16 + uVar15 * 4) = (int)uVar15;
      uVar15 = uVar15 + 1;
LAB_00d5c054:
    } while (uVar29 != uVar15);
  }
  uVar15 = *(ulong *)(this + 0x78);
  if (uVar15 < uVar29) {
    uVar30 = *(undefined8 *)(this + 0x80);
    *(ulong *)(this + 0x78) = uVar29;
    plVar13 = (long *)SpineExtension::getInstance();
    uVar30 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,uVar29,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    uVar15 = *(ulong *)(this + 0x78);
    *(undefined8 *)(this + 0x80) = uVar30;
  }
  uVar32 = *(ulong *)(this + 0x70);
  *(ulong *)(this + 0x70) = uVar29;
  if (uVar15 < uVar29) {
    uVar14 = (uint)((float)uVar29 * 1.75);
    uVar30 = *(undefined8 *)(this + 0x80);
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    *(long *)(this + 0x78) = (long)(int)uVar14;
    plVar13 = (long *)SpineExtension::getInstance();
    uVar30 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,(long)(int)uVar14,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    *(undefined8 *)(this + 0x80) = uVar30;
    __n = *(ulong *)(this + 0x70) - uVar32;
    if (uVar32 <= *(ulong *)(this + 0x70) && __n != 0) goto LAB_00d5c200;
LAB_00d5c0b8:
    if (uVar29 != 0) goto LAB_00d5c0bc;
LAB_00d5c214:
    uVar14 = 0xfffffffe;
  }
  else {
    __n = uVar29 - uVar32;
    if (uVar29 < uVar32 || __n == 0) goto LAB_00d5c0b8;
LAB_00d5c200:
    memset((void *)(*(long *)(this + 0x80) + uVar32),0,__n);
    if (uVar29 == 0) goto LAB_00d5c214;
LAB_00d5c0bc:
    lVar18 = *(long *)(this + 0x60);
    lVar23 = *(long *)(param_1 + 0x18);
    lVar26 = *(long *)(this + 0x80);
    lVar16 = 0;
    iVar33 = (int)uVar29;
    uVar15 = 0;
    do {
      uVar14 = *(uint *)(lVar18 + (lVar16 >> 0x1e));
      iVar35 = iVar33 + -1 + (int)uVar15;
      iVar25 = 0;
      if (iVar33 != 0) {
        iVar25 = iVar35 / iVar33;
      }
      uVar32 = uVar15 + 1;
      uVar8 = uVar14 << 1;
      iVar28 = 0;
      if (iVar33 != 0) {
        iVar28 = (int)uVar32 / iVar33;
      }
      uVar2 = *(uint *)(lVar18 + (long)(iVar35 - iVar25 * iVar33) * 4);
      uVar3 = *(uint *)(lVar18 + (long)((int)uVar32 - iVar28 * iVar33) * 4);
      uVar9 = uVar2 << 1;
      fVar36 = *(float *)(lVar23 + (((ulong)(long)(int)uVar8 >> 1) << 3 | 4));
      uVar10 = uVar3 << 1;
      fVar37 = *(float *)(lVar23 + (((ulong)(long)(int)uVar10 >> 1) << 3 | 4));
      fVar38 = *(float *)(lVar23 + (((ulong)(long)(int)uVar9 >> 1) << 3 | 4));
      *(bool *)(lVar26 + uVar15) =
           (fVar36 - fVar38) *
           *(float *)(lVar23 + (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                               (ulong)uVar10 << 2)) +
           *(float *)(lVar23 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                               (ulong)uVar9 << 2)) * (fVar37 - fVar36) +
           *(float *)(lVar23 + (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                               (ulong)uVar8 << 2)) * (fVar38 - fVar37) < 0.0;
      lVar16 = lVar16 + 0x100000000;
      uVar15 = uVar32;
    } while (uVar29 != uVar32);
    uVar14 = iVar33 - 2;
  }
  uVar15 = (ulong)(int)((uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) << 2);
  *(undefined8 *)(this + 0x90) = 0;
  if (*(ulong *)(this + 0x98) < uVar15) {
    uVar30 = *(undefined8 *)(this + 0xa0);
    *(ulong *)(this + 0x98) = uVar15;
    plVar13 = (long *)SpineExtension::getInstance();
    uVar30 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,uVar15 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 0xa0) = uVar30;
  }
  pTVar1 = this + 0x88;
  if (7 < uVar31) {
    lVar16 = *(long *)(this + 0x80);
    uVar15 = uVar29;
LAB_00d5c2b8:
    lVar18 = *(long *)(param_1 + 0x18);
    uVar29 = uVar15 - 1;
    uVar31 = 1;
    uVar32 = 0;
    uVar24 = uVar29;
    do {
      uVar19 = uVar32;
      uVar32 = uVar31;
      cVar7 = *(char *)(lVar16 + uVar19);
      if (cVar7 == '\0') {
        lVar23 = *(long *)(this + 0x60);
        uVar31 = 0;
        if (uVar15 != 0) {
          uVar31 = (uVar32 + 1) / uVar15;
        }
        uVar31 = (uVar32 + 1) - uVar31 * uVar15;
        if (uVar31 != uVar24) {
          uVar14 = *(uint *)(lVar23 + uVar24 * 4);
          uVar8 = *(uint *)(lVar23 + uVar19 * 4);
          uVar2 = *(uint *)(lVar23 + uVar32 * 4);
          uVar3 = uVar14 << 1;
          uVar9 = uVar8 << 1;
          uVar10 = uVar2 << 1;
          fVar36 = *(float *)(lVar18 + (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000
                                       | (ulong)uVar3 << 2));
          fVar37 = *(float *)(lVar18 + (((ulong)(long)(int)uVar3 >> 1) << 3 | 4));
          fVar38 = *(float *)(lVar18 + (((ulong)(long)(int)uVar10 >> 1) << 3 | 4));
          fVar39 = *(float *)(lVar18 + (((ulong)(long)(int)uVar9 >> 1) << 3 | 4));
          fVar40 = *(float *)(lVar18 + (-(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000
                                       | (ulong)uVar9 << 2));
          fVar41 = *(float *)(lVar18 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000
                                       | (ulong)uVar10 << 2));
          do {
            if (*(char *)(lVar16 + uVar31) != '\0') {
              uVar14 = *(uint *)(lVar23 + uVar31 * 4);
              uVar8 = uVar14 << 1;
              fVar43 = *(float *)(lVar18 + (((ulong)(long)(int)uVar8 >> 1) << 3 | 4));
              fVar42 = *(float *)(lVar18 + (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) &
                                            0xfffffffc00000000 | (ulong)uVar8 << 2));
              if (((0.0 <= (fVar37 - fVar38) * fVar42 +
                           fVar41 * (fVar43 - fVar37) + fVar36 * (fVar38 - fVar43)) &&
                  (0.0 <= (fVar39 - fVar37) * fVar42 +
                          fVar36 * (fVar43 - fVar39) + fVar40 * (fVar37 - fVar43))) &&
                 (0.0 <= (fVar38 - fVar39) * fVar42 +
                         fVar40 * (fVar43 - fVar38) + fVar41 * (fVar39 - fVar43)))
              goto LAB_00d5c2f4;
            }
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = (uVar31 + 1) / uVar15;
            }
            uVar31 = (uVar31 + 1) - uVar11 * uVar15;
            if (uVar31 == uVar24) break;
          } while( true );
        }
        goto LAB_00d5c438;
      }
LAB_00d5c2f4:
      if (uVar32 == 0) goto joined_r0x00d5c28c;
      uVar31 = 0;
      if (uVar15 != 0) {
        uVar31 = (uVar32 + 1) / uVar15;
      }
      uVar31 = (uVar32 + 1) - uVar31 * uVar15;
      uVar24 = uVar19;
    } while( true );
  }
LAB_00d5c7c8:
  if (uVar29 != 3) {
    return pTVar1;
  }
  uVar15 = *(ulong *)(this + 0x90);
  uVar29 = *(ulong *)(this + 0x98);
  puVar17 = *(undefined4 **)(this + 0x60);
  if (uVar15 == uVar29) {
    uVar14 = (uint)((float)uVar15 * 1.75);
    uVar4 = puVar17[2];
    uVar30 = *(undefined8 *)(this + 0xa0);
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    *(long *)(this + 0x98) = (long)(int)uVar14;
    plVar13 = (long *)SpineExtension::getInstance();
    lVar16 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,
                        -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x6a);
    lVar18 = *(long *)(this + 0x90);
    *(long *)(this + 0xa0) = lVar16;
    uVar31 = lVar18 + 1;
    *(ulong *)(this + 0x90) = uVar31;
    *(undefined4 *)(lVar16 + lVar18 * 4) = uVar4;
    puVar17 = *(undefined4 **)(this + 0x60);
    uVar29 = *(ulong *)(this + 0x98);
    if (uVar31 == uVar29) {
LAB_00d5c8a0:
      uVar4 = *puVar17;
      uVar14 = (uint)((float)uVar29 * 1.75);
      if (uVar14 < 9) {
        uVar14 = 8;
      }
      *(long *)(this + 0x98) = (long)(int)uVar14;
      plVar13 = (long *)SpineExtension::getInstance();
      lVar16 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,lVar16,
                          -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x6a);
      lVar18 = *(long *)(this + 0x90);
      *(long *)(this + 0xa0) = lVar16;
      uVar15 = lVar18 + 1;
      *(ulong *)(this + 0x90) = uVar15;
      *(undefined4 *)(lVar16 + lVar18 * 4) = uVar4;
      puVar17 = *(undefined4 **)(this + 0x60);
      uVar29 = *(ulong *)(this + 0x98);
      if (uVar15 == uVar29) goto LAB_00d5c914;
      goto LAB_00d5c870;
    }
  }
  else {
    uVar31 = uVar15 + 1;
    *(ulong *)(this + 0x90) = uVar31;
    lVar16 = *(long *)(this + 0xa0);
    *(undefined4 *)(lVar16 + uVar15 * 4) = puVar17[2];
    if (uVar31 == uVar29) goto LAB_00d5c8a0;
  }
  uVar15 = uVar31 + 1;
  *(ulong *)(this + 0x90) = uVar15;
  *(undefined4 *)(lVar16 + uVar31 * 4) = *puVar17;
  if (uVar15 == uVar29) {
LAB_00d5c914:
    uVar4 = puVar17[1];
    uVar14 = (uint)((float)uVar29 * 1.75);
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    *(long *)(this + 0x98) = (long)(int)uVar14;
    plVar13 = (long *)SpineExtension::getInstance();
    lVar16 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,lVar16,
                        -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x6a);
    lVar18 = *(long *)(this + 0x90);
    *(long *)(this + 0xa0) = lVar16;
    *(long *)(this + 0x90) = lVar18 + 1;
    *(undefined4 *)(lVar16 + lVar18 * 4) = uVar4;
    return pTVar1;
  }
LAB_00d5c870:
  *(ulong *)(this + 0x90) = uVar15 + 1;
  *(undefined4 *)(lVar16 + uVar15 * 4) = puVar17[1];
  return pTVar1;
joined_r0x00d5c28c:
  if (cVar7 == '\0') goto LAB_00d5c2b0;
  uVar19 = uVar19 - 1;
  if (uVar19 == 0) {
    uVar19 = 0;
    goto LAB_00d5c2b0;
  }
  cVar7 = *(char *)(lVar16 + uVar19);
  goto joined_r0x00d5c28c;
LAB_00d5c2b0:
  lVar23 = *(long *)(this + 0x60);
LAB_00d5c438:
  uVar31 = *(ulong *)(this + 0x90);
  uVar32 = *(ulong *)(this + 0x98);
  uVar24 = 0;
  if (uVar15 != 0) {
    uVar24 = (uVar29 + uVar19) / uVar15;
  }
  lVar16 = (uVar29 + uVar19) - uVar24 * uVar15;
  if (uVar31 == uVar32) {
    uVar14 = (uint)((float)uVar31 * 1.75);
    uVar4 = *(undefined4 *)(lVar23 + lVar16 * 4);
    uVar30 = *(undefined8 *)(this + 0xa0);
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    *(long *)(this + 0x98) = (long)(int)uVar14;
    plVar13 = (long *)SpineExtension::getInstance();
    lVar18 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,uVar30,
                        -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x6a);
    lVar16 = *(long *)(this + 0x90);
    *(long *)(this + 0xa0) = lVar18;
    uVar24 = lVar16 + 1;
    *(ulong *)(this + 0x90) = uVar24;
    *(undefined4 *)(lVar18 + lVar16 * 4) = uVar4;
    lVar23 = *(long *)(this + 0x60);
    uVar32 = *(ulong *)(this + 0x98);
    if (uVar24 == uVar32) {
LAB_00d5c4ec:
      uVar14 = (uint)((float)uVar32 * 1.75);
      uVar4 = *(undefined4 *)(lVar23 + uVar19 * 4);
      if (uVar14 < 9) {
        uVar14 = 8;
      }
      *(long *)(this + 0x98) = (long)(int)uVar14;
      plVar13 = (long *)SpineExtension::getInstance();
      lVar18 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,lVar18,
                          -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x6a);
      lVar16 = *(long *)(this + 0x90);
      *(long *)(this + 0xa0) = lVar18;
      uVar31 = lVar16 + 1;
      *(ulong *)(this + 0x90) = uVar31;
      *(undefined4 *)(lVar18 + lVar16 * 4) = uVar4;
      lVar23 = *(long *)(this + 0x60);
      uVar32 = *(ulong *)(this + 0x98);
      goto LAB_00d5c54c;
    }
  }
  else {
    uVar24 = uVar31 + 1;
    *(ulong *)(this + 0x90) = uVar24;
    lVar18 = *(long *)(this + 0xa0);
    *(undefined4 *)(lVar18 + uVar31 * 4) = *(undefined4 *)(lVar23 + lVar16 * 4);
    if (uVar24 == uVar32) goto LAB_00d5c4ec;
  }
  uVar31 = uVar24 + 1;
  *(ulong *)(this + 0x90) = uVar31;
  *(undefined4 *)(lVar18 + uVar24 * 4) = *(undefined4 *)(lVar23 + uVar19 * 4);
LAB_00d5c54c:
  uVar24 = 0;
  if (uVar15 != 0) {
    uVar24 = (uVar19 + 1) / uVar15;
  }
  lVar16 = (uVar19 + 1) - uVar24 * uVar15;
  if (uVar31 == uVar32) {
    uVar14 = (uint)((float)uVar32 * 1.75);
    uVar4 = *(undefined4 *)(lVar23 + lVar16 * 4);
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    *(long *)(this + 0x98) = (long)(int)uVar14;
    plVar13 = (long *)SpineExtension::getInstance();
    lVar16 = (**(code **)(*plVar13 + 0x20))
                       (plVar13,lVar18,
                        -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x6a);
    lVar18 = *(long *)(this + 0x90);
    *(long *)(this + 0xa0) = lVar16;
    *(long *)(this + 0x90) = lVar18 + 1;
    *(undefined4 *)(lVar16 + lVar18 * 4) = uVar4;
  }
  else {
    *(ulong *)(this + 0x90) = uVar31 + 1;
    *(undefined4 *)(lVar18 + uVar31 * 4) = *(undefined4 *)(lVar23 + lVar16 * 4);
  }
  uVar15 = *(long *)(this + 0x50) - 1;
  lVar16 = uVar15 - uVar19;
  *(ulong *)(this + 0x50) = uVar15;
  if (uVar19 <= uVar15 && lVar16 != 0) {
    puVar17 = (undefined4 *)(*(long *)(this + 0x60) + uVar19 * 4);
    uVar4 = *puVar17;
    do {
      puVar20 = puVar17 + 1;
      lVar16 = lVar16 + -1;
      *puVar17 = *puVar20;
      *puVar20 = uVar4;
      puVar17 = puVar20;
    } while (lVar16 != 0);
  }
  lVar16 = *(long *)(this + 0x80);
  uVar15 = *(long *)(this + 0x70) - 1;
  lVar18 = uVar15 - uVar19;
  *(ulong *)(this + 0x70) = uVar15;
  if (uVar19 <= uVar15 && lVar18 != 0) {
    uVar5 = *(undefined1 *)(lVar16 + uVar19);
    puVar12 = (undefined1 *)(lVar16 + uVar19);
    do {
      puVar22 = puVar12 + 1;
      uVar6 = *puVar22;
      *puVar22 = uVar5;
      lVar18 = lVar18 + -1;
      *puVar12 = uVar6;
      puVar12 = puVar22;
    } while (lVar18 != 0);
  }
  lVar18 = *(long *)(this + 0x60);
  uVar31 = (uVar19 + uVar29) - 1;
  uVar15 = 0;
  if (uVar29 != 0) {
    uVar15 = uVar31 / uVar29;
  }
  iVar28 = (int)uVar29;
  uVar31 = uVar31 - uVar15 * uVar29;
  iVar25 = (int)uVar31;
  iVar33 = iVar28 + -1 + iVar25;
  iVar35 = 0;
  if (iVar28 != 0) {
    iVar35 = iVar33 / iVar28;
  }
  uVar14 = *(uint *)(lVar18 + (-(uVar31 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (uVar31 & 0xffffffff) << 2));
  lVar23 = *(long *)(param_1 + 0x18);
  iVar27 = 0;
  if (iVar28 != 0) {
    iVar27 = (iVar25 + 1) / iVar28;
  }
  uVar8 = *(uint *)(lVar18 + (long)(iVar33 - iVar35 * iVar28) * 4);
  uVar3 = uVar14 << 1;
  uVar2 = *(uint *)(lVar18 + (long)((iVar25 + 1) - iVar27 * iVar28) * 4);
  uVar9 = uVar8 << 1;
  uVar10 = uVar2 << 1;
  fVar36 = *(float *)(lVar23 + (((ulong)(long)(int)uVar3 >> 1) << 3 | 4));
  fVar37 = *(float *)(lVar23 + (((ulong)(long)(int)uVar9 >> 1) << 3 | 4));
  fVar38 = *(float *)(lVar23 + (((ulong)(long)(int)uVar10 >> 1) << 3 | 4));
  uVar15 = 0;
  if (uVar19 != uVar29) {
    uVar15 = uVar19;
  }
  iVar27 = (int)uVar15;
  iVar33 = iVar28 + -1 + iVar27;
  *(bool *)(lVar16 + iVar25) =
       (fVar36 - fVar37) *
       *(float *)(lVar23 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                           (ulong)uVar10 << 2)) +
       *(float *)(lVar23 + (-(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                           (ulong)uVar9 << 2)) * (fVar38 - fVar36) +
       *(float *)(lVar23 + (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                           (ulong)uVar3 << 2)) * (fVar37 - fVar38) < 0.0;
  iVar35 = 0;
  if (iVar28 != 0) {
    iVar35 = iVar33 / iVar28;
  }
  iVar25 = 0;
  if (iVar28 != 0) {
    iVar25 = (iVar27 + 1) / iVar28;
  }
  uVar14 = *(uint *)(lVar18 + (long)(iVar33 - iVar35 * iVar28) * 4);
  uVar8 = *(uint *)(lVar18 + (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                             (uVar15 & 0xffffffff) << 2));
  uVar2 = *(uint *)(lVar18 + (long)((iVar27 + 1) - iVar25 * iVar28) * 4);
  uVar3 = uVar14 << 1;
  uVar9 = uVar8 << 1;
  uVar10 = uVar2 << 1;
  fVar36 = *(float *)(lVar23 + (((ulong)(long)(int)uVar9 >> 1) << 3 | 4));
  fVar37 = *(float *)(lVar23 + (((ulong)(long)(int)uVar10 >> 1) << 3 | 4));
  fVar38 = *(float *)(lVar23 + (((ulong)(long)(int)uVar3 >> 1) << 3 | 4));
  *(bool *)(lVar16 + iVar27) =
       (fVar36 - fVar38) *
       *(float *)(lVar23 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                           (ulong)uVar10 << 2)) +
       *(float *)(lVar23 + (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                           (ulong)uVar3 << 2)) * (fVar37 - fVar36) +
       *(float *)(lVar23 + (-(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                           (ulong)uVar9 << 2)) * (fVar38 - fVar37) < 0.0;
  uVar15 = uVar29;
  if (uVar29 < 4) goto LAB_00d5c7c8;
  goto LAB_00d5c2b8;
}

