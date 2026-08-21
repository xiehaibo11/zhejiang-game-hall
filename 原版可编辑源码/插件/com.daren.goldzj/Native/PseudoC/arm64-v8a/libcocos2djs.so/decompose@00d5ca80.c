
/* spine::Triangulator::decompose(spine::Vector<float>&, spine::Vector<int>&) */

Triangulator * __thiscall
spine::Triangulator::decompose(Triangulator *this,Vector *param_1,Vector *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  float *pfVar27;
  uint *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  Triangulator *local_c8;
  
  lVar21 = *(long *)(this + 0x10);
  if (lVar21 != 0) {
    uVar11 = *(ulong *)(this + 0xb8);
    lVar22 = 0;
    do {
      lVar25 = *(long *)(*(long *)(this + 0x20) + lVar22 * 8);
      if (uVar11 != 0) {
        uVar17 = 0;
        do {
          if (*(long *)(*(long *)(this + 200) + uVar17 * 8) == lVar25) goto LAB_00d5cb7c;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar11);
      }
      if (uVar11 == *(ulong *)(this + 0xc0)) {
        uVar8 = (uint)((float)uVar11 * 1.75);
        uVar23 = *(undefined8 *)(this + 200);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0xc0) = (long)(int)uVar8;
        plVar6 = (long *)SpineExtension::getInstance();
        lVar7 = (**(code **)(*plVar6 + 0x20))
                          (plVar6,uVar23,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar15 = *(long *)(this + 0xb8);
        *(long *)(this + 200) = lVar7;
        uVar11 = lVar15 + 1;
        *(ulong *)(this + 0xb8) = uVar11;
        plVar6 = (long *)(lVar7 + lVar15 * 8);
      }
      else {
        plVar6 = (long *)(*(long *)(this + 200) + uVar11 * 8);
        uVar11 = uVar11 + 1;
        *(ulong *)(this + 0xb8) = uVar11;
      }
      *plVar6 = lVar25;
LAB_00d5cb7c:
      lVar22 = lVar22 + 1;
    } while (lVar22 != lVar21);
  }
  lVar21 = *(long *)(this + 0x30);
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar21 == 0) {
    uVar11 = *(ulong *)(this + 0xe0);
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    lVar22 = 0;
    do {
      uVar11 = *(ulong *)(this + 0xe0);
      lVar25 = *(long *)(*(long *)(this + 0x40) + lVar22 * 8);
      if (uVar11 != 0) {
        uVar17 = 0;
        do {
          if (*(long *)(*(long *)(this + 0xf0) + uVar17 * 8) == lVar25) goto LAB_00d5cc58;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar11);
      }
      if (uVar11 == *(ulong *)(this + 0xe8)) {
        uVar8 = (uint)((float)uVar11 * 1.75);
        uVar23 = *(undefined8 *)(this + 0xf0);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0xe8) = (long)(int)uVar8;
        plVar6 = (long *)SpineExtension::getInstance();
        lVar7 = (**(code **)(*plVar6 + 0x20))
                          (plVar6,uVar23,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar15 = *(long *)(this + 0xe0);
        *(long *)(this + 0xf0) = lVar7;
        uVar11 = lVar15 + 1;
        *(ulong *)(this + 0xe0) = uVar11;
        plVar6 = (long *)(lVar7 + lVar15 * 8);
      }
      else {
        plVar6 = (long *)(*(long *)(this + 0xf0) + uVar11 * 8);
        uVar11 = uVar11 + 1;
        *(ulong *)(this + 0xe0) = uVar11;
      }
      *plVar6 = lVar25;
LAB_00d5cc58:
      lVar22 = lVar22 + 1;
    } while (lVar22 != lVar21);
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (uVar11 == 0) {
    puVar26 = SpineObject::operator_new
                        (0x20,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Pool.h",
                         0x39);
    puVar26[2] = 0;
    puVar26[3] = 0;
    *puVar26 = &PTR__Vector_01c8e510;
    puVar26[1] = 0;
  }
  else {
    puVar26 = *(undefined8 **)(*(long *)(this + 0xf0) + (uVar11 - 1) * 8);
    *(ulong *)(this + 0xe0) = uVar11 - 1;
  }
  local_c8 = this + 0xe0;
  puVar26[1] = 0;
  if (*(long *)(this + 0xb8) == 0) {
    puVar24 = SpineObject::operator_new
                        (0x20,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Pool.h",
                         0x39);
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR__Vector_01c8d048;
    puVar24[1] = 0;
  }
  else {
    lVar21 = *(long *)(this + 0xb8) + -1;
    puVar24 = *(undefined8 **)(*(long *)(this + 200) + lVar21 * 8);
    *(long *)(this + 0xb8) = lVar21;
  }
  puVar24[1] = 0;
  uVar11 = *(ulong *)(param_2 + 8);
  if (uVar11 != 0) {
    iVar10 = 0;
    uVar17 = 0;
    uVar8 = 0xffffffff;
    do {
      lVar21 = *(long *)(param_1 + 0x18);
      puVar28 = (uint *)(*(long *)(param_2 + 0x18) + uVar17 * 4);
      uVar9 = *puVar28 * 2;
      uVar4 = puVar28[2] << 1;
      uVar5 = puVar28[1] << 1;
      fVar29 = *(float *)(lVar21 + (-(ulong)((*puVar28 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                                   (ulong)uVar9 << 2));
      fVar35 = *(float *)(lVar21 + (((ulong)(long)(int)uVar9 >> 1) << 3 | 4));
      fVar30 = *(float *)(lVar21 + (-(ulong)((puVar28[1] & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000
                                   | (ulong)uVar5 << 2));
      fVar36 = *(float *)(lVar21 + (((ulong)(long)(int)uVar5 >> 1) << 3 | 4));
      fVar33 = *(float *)(lVar21 + (-(ulong)((puVar28[2] & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000
                                   | (ulong)uVar4 << 2));
      fVar34 = *(float *)(lVar21 + (((ulong)(long)(int)uVar4 >> 1) << 3 | 4));
      if (uVar8 == uVar9) {
        uVar12 = puVar24[1];
        pfVar27 = (float *)puVar24[3];
        fVar38 = pfVar27[uVar12 - 2] - pfVar27[uVar12 - 4];
        fVar39 = pfVar27[uVar12 - 1] - pfVar27[uVar12 - 3];
        iVar14 = -1;
        iVar1 = iVar14;
        if (0.0 <= (pfVar27[uVar12 - 3] * fVar38 + (fVar39 * fVar33 - fVar38 * fVar34)) -
                   pfVar27[uVar12 - 4] * fVar39) {
          iVar1 = 1;
        }
        if (0.0 <= ((*pfVar27 - fVar33) * fVar34 +
                   ((pfVar27[1] - fVar34) * pfVar27[2] - (*pfVar27 - fVar33) * pfVar27[3])) -
                   (pfVar27[1] - fVar34) * fVar33) {
          iVar14 = 1;
        }
        if ((iVar1 != iVar10) || (iVar14 != iVar10)) goto LAB_00d5cef8;
        uVar16 = puVar24[2];
        if (uVar12 == uVar16) {
          uVar9 = (uint)((float)uVar12 * 1.75);
          if (uVar9 < 9) {
            uVar9 = 8;
          }
          puVar24[2] = (long)(int)uVar9;
          plVar6 = (long *)SpineExtension::getInstance();
          pfVar27 = (float *)(**(code **)(*plVar6 + 0x20))
                                       (plVar6,pfVar27,
                                        -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar9 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar21 = puVar24[1];
          puVar24[3] = pfVar27;
          uVar19 = lVar21 + 1;
          puVar24[1] = uVar19;
          pfVar27[lVar21] = fVar33;
          uVar16 = puVar24[2];
          if (uVar19 == uVar16) goto LAB_00d5d0b8;
LAB_00d5cee8:
          puVar24[1] = uVar19 + 1;
          pfVar27 = pfVar27 + uVar19;
        }
        else {
          uVar19 = uVar12 + 1;
          puVar24[1] = uVar19;
          pfVar27[uVar12] = fVar33;
          if (uVar19 != uVar16) goto LAB_00d5cee8;
LAB_00d5d0b8:
          uVar9 = (uint)((float)uVar16 * 1.75);
          if (uVar9 < 9) {
            uVar9 = 8;
          }
          puVar24[2] = (long)(int)uVar9;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar21 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,pfVar27,
                              -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar22 = puVar24[1];
          puVar24[3] = lVar21;
          puVar24[1] = lVar22 + 1;
          pfVar27 = (float *)(lVar21 + lVar22 * 4);
        }
        *pfVar27 = fVar34;
        uVar12 = puVar26[1];
        if (uVar12 == puVar26[2]) {
          uVar9 = (uint)((float)uVar12 * 1.75);
          uVar23 = puVar26[3];
          if (uVar9 < 9) {
            uVar9 = 8;
          }
          puVar26[2] = (long)(int)uVar9;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar21 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar23,
                              -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar22 = puVar26[1];
          puVar26[3] = lVar21;
          puVar26[1] = lVar22 + 1;
          *(uint *)(lVar21 + lVar22 * 4) = uVar4;
        }
        else {
          puVar26[1] = uVar12 + 1;
          *(uint *)(puVar26[3] + uVar12 * 4) = uVar4;
        }
      }
      else {
LAB_00d5cef8:
        if (puVar24[1] == 0) {
          uVar12 = *(ulong *)(this + 0xb8);
          if (uVar12 != 0) {
            uVar16 = 0;
            do {
              if (*(undefined8 **)(*(long *)(this + 200) + uVar16 * 8) == puVar24)
              goto LAB_00d5d1b4;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar12);
          }
          if (uVar12 == *(ulong *)(this + 0xc0)) {
            uVar8 = (uint)((float)uVar12 * 1.75);
            uVar23 = *(undefined8 *)(this + 200);
            if (uVar8 < 9) {
              uVar8 = 8;
            }
            *(long *)(this + 0xc0) = (long)(int)uVar8;
            plVar6 = (long *)SpineExtension::getInstance();
            lVar21 = (**(code **)(*plVar6 + 0x20))
                               (plVar6,uVar23,
                                -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar22 = *(long *)(this + 0xb8);
            *(long *)(this + 200) = lVar21;
            *(long *)(this + 0xb8) = lVar22 + 1;
            puVar13 = (undefined8 *)(lVar21 + lVar22 * 8);
          }
          else {
            *(ulong *)(this + 0xb8) = uVar12 + 1;
            puVar13 = (undefined8 *)(*(long *)(this + 200) + uVar12 * 8);
          }
          *puVar13 = puVar24;
LAB_00d5d1b4:
          uVar12 = *(ulong *)local_c8;
          if (uVar12 != 0) {
            uVar16 = 0;
            do {
              if (*(undefined8 **)(*(long *)(this + 0xf0) + uVar16 * 8) == puVar26)
              goto LAB_00d5d258;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar12);
          }
          if (uVar12 != *(ulong *)(this + 0xe8)) {
            lVar21 = *(long *)(this + 0xf0);
            *(ulong *)(this + 0xe0) = uVar12 + 1;
            goto LAB_00d5d250;
          }
          uVar8 = (uint)((float)uVar12 * 1.75);
          uVar23 = *(undefined8 *)(this + 0xf0);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          *(long *)(this + 0xe8) = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar21 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar23,
                              -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar22 = *(long *)(this + 0xe0);
          *(long *)(this + 0xf0) = lVar21;
          *(long *)(this + 0xe0) = lVar22 + 1;
          puVar24 = (undefined8 *)(lVar21 + lVar22 * 8);
        }
        else {
          uVar12 = *(ulong *)(this + 0x10);
          if (uVar12 == *(ulong *)(this + 0x18)) {
            uVar8 = (uint)((float)uVar12 * 1.75);
            uVar23 = *(undefined8 *)(this + 0x20);
            if (uVar8 < 9) {
              uVar8 = 8;
            }
            *(long *)(this + 0x18) = (long)(int)uVar8;
            plVar6 = (long *)SpineExtension::getInstance();
            lVar21 = (**(code **)(*plVar6 + 0x20))
                               (plVar6,uVar23,
                                -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar22 = *(long *)(this + 0x10);
            *(long *)(this + 0x20) = lVar21;
            *(long *)(this + 0x10) = lVar22 + 1;
            puVar13 = (undefined8 *)(lVar21 + lVar22 * 8);
          }
          else {
            puVar13 = (undefined8 *)(*(long *)(this + 0x20) + uVar12 * 8);
            *(ulong *)(this + 0x10) = uVar12 + 1;
          }
          *puVar13 = puVar24;
          uVar12 = *(ulong *)(this + 0x30);
          if (uVar12 == *(ulong *)(this + 0x38)) {
            uVar8 = (uint)((float)uVar12 * 1.75);
            uVar23 = *(undefined8 *)(this + 0x40);
            if (uVar8 < 9) {
              uVar8 = 8;
            }
            *(long *)(this + 0x38) = (long)(int)uVar8;
            plVar6 = (long *)SpineExtension::getInstance();
            lVar21 = (**(code **)(*plVar6 + 0x20))
                               (plVar6,uVar23,
                                -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar22 = *(long *)(this + 0x30);
            *(long *)(this + 0x40) = lVar21;
            *(long *)(this + 0x30) = lVar22 + 1;
            puVar24 = (undefined8 *)(lVar21 + lVar22 * 8);
          }
          else {
            lVar21 = *(long *)(this + 0x40);
            *(ulong *)(this + 0x30) = uVar12 + 1;
LAB_00d5d250:
            puVar24 = (undefined8 *)(lVar21 + uVar12 * 8);
          }
        }
        *puVar24 = puVar26;
LAB_00d5d258:
        if (*(long *)(this + 0xb8) == 0) {
          puVar24 = SpineObject::operator_new
                              (0x20,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Pool.h"
                               ,0x39);
          puVar24[2] = 0;
          puVar24[3] = 0;
          *puVar24 = &PTR__Vector_01c8d048;
          puVar24[1] = 0;
        }
        else {
          lVar21 = *(long *)(this + 0xb8) + -1;
          puVar24 = *(undefined8 **)(*(long *)(this + 200) + lVar21 * 8);
          *(long *)(this + 0xb8) = lVar21;
        }
        uVar12 = puVar24[2];
        puVar24[1] = 0;
        if (uVar12 == 0) {
          uVar23 = puVar24[3];
          puVar24[2] = 8;
          plVar6 = (long *)SpineExtension::getInstance();
          pfVar27 = (float *)(**(code **)(*plVar6 + 0x20))
                                       (plVar6,uVar23,0x20,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar21 = puVar24[1];
          puVar24[3] = pfVar27;
          uVar16 = lVar21 + 1;
          puVar24[1] = uVar16;
          pfVar27[lVar21] = fVar29;
          uVar12 = puVar24[2];
          uVar19 = uVar12;
          if (uVar16 == uVar12) goto LAB_00d5d2c4;
LAB_00d5d3d0:
          uVar19 = uVar16 + 1;
          puVar24[1] = uVar19;
          pfVar27[uVar16] = fVar35;
          if (uVar19 != uVar12) goto LAB_00d5d328;
LAB_00d5d3e8:
          uVar8 = (uint)((float)uVar12 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar24[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          pfVar27 = (float *)(**(code **)(*plVar6 + 0x20))
                                       (plVar6,pfVar27,
                                        -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar8 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar21 = puVar24[1];
          puVar24[3] = pfVar27;
          uVar16 = lVar21 + 1;
          puVar24[1] = uVar16;
          pfVar27[lVar21] = fVar30;
          uVar12 = puVar24[2];
          if (uVar16 != uVar12) goto LAB_00d5d340;
LAB_00d5d44c:
          uVar8 = (uint)((float)uVar12 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar24[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          pfVar27 = (float *)(**(code **)(*plVar6 + 0x20))
                                       (plVar6,pfVar27,
                                        -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar8 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar21 = puVar24[1];
          puVar24[3] = pfVar27;
          uVar19 = lVar21 + 1;
          puVar24[1] = uVar19;
          pfVar27[lVar21] = fVar36;
          uVar12 = puVar24[2];
          if (uVar19 != uVar12) goto LAB_00d5d358;
LAB_00d5d4b0:
          uVar8 = (uint)((float)uVar12 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar24[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          pfVar27 = (float *)(**(code **)(*plVar6 + 0x20))
                                       (plVar6,pfVar27,
                                        -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar8 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar21 = puVar24[1];
          puVar24[3] = pfVar27;
          uVar16 = lVar21 + 1;
          puVar24[1] = uVar16;
          pfVar27[lVar21] = fVar33;
          uVar12 = puVar24[2];
          if (uVar16 != uVar12) goto LAB_00d5d370;
LAB_00d5d514:
          uVar8 = (uint)((float)uVar12 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar24[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar21 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,pfVar27,
                              -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar22 = puVar24[1];
          puVar24[3] = lVar21;
          puVar24[1] = lVar22 + 1;
          pfVar27 = (float *)(lVar21 + lVar22 * 4);
        }
        else {
          pfVar27 = (float *)puVar24[3];
          puVar24[1] = 1;
          uVar16 = 1;
          *pfVar27 = fVar29;
          uVar19 = 1;
          if (uVar12 != 1) goto LAB_00d5d3d0;
LAB_00d5d2c4:
          uVar8 = (uint)((float)uVar19 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar24[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          pfVar27 = (float *)(**(code **)(*plVar6 + 0x20))
                                       (plVar6,pfVar27,
                                        -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar8 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar21 = puVar24[1];
          puVar24[3] = pfVar27;
          uVar19 = lVar21 + 1;
          puVar24[1] = uVar19;
          pfVar27[lVar21] = fVar35;
          uVar12 = puVar24[2];
          if (uVar19 == uVar12) goto LAB_00d5d3e8;
LAB_00d5d328:
          uVar16 = uVar19 + 1;
          puVar24[1] = uVar16;
          pfVar27[uVar19] = fVar30;
          if (uVar16 == uVar12) goto LAB_00d5d44c;
LAB_00d5d340:
          uVar19 = uVar16 + 1;
          puVar24[1] = uVar19;
          pfVar27[uVar16] = fVar36;
          if (uVar19 == uVar12) goto LAB_00d5d4b0;
LAB_00d5d358:
          uVar16 = uVar19 + 1;
          puVar24[1] = uVar16;
          pfVar27[uVar19] = fVar33;
          if (uVar16 == uVar12) goto LAB_00d5d514;
LAB_00d5d370:
          puVar24[1] = uVar16 + 1;
          pfVar27 = pfVar27 + uVar16;
        }
        *pfVar27 = fVar34;
        if (*(long *)local_c8 == 0) {
          puVar26 = SpineObject::operator_new
                              (0x20,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Pool.h"
                               ,0x39);
          puVar26[2] = 0;
          puVar26[3] = 0;
          *puVar26 = &PTR__Vector_01c8e510;
          puVar26[1] = 0;
        }
        else {
          lVar21 = *(long *)local_c8 + -1;
          puVar26 = *(undefined8 **)(*(long *)(this + 0xf0) + lVar21 * 8);
          *(long *)(this + 0xe0) = lVar21;
        }
        uVar12 = puVar26[2];
        puVar26[1] = 0;
        if (uVar12 == 0) {
          uVar23 = puVar26[3];
          puVar26[2] = 8;
          plVar6 = (long *)SpineExtension::getInstance();
          puVar28 = (uint *)(**(code **)(*plVar6 + 0x20))
                                      (plVar6,uVar23,0x20,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                       ,0x6a);
          lVar21 = puVar26[1];
          puVar26[3] = puVar28;
          uVar16 = lVar21 + 1;
          puVar26[1] = uVar16;
          puVar28[lVar21] = uVar9;
          uVar12 = puVar26[2];
          uVar19 = uVar12;
          if (uVar16 == uVar12) goto LAB_00d5d5d8;
LAB_00d5d69c:
          uVar19 = uVar16 + 1;
          puVar26[1] = uVar19;
          puVar28[uVar16] = uVar5;
          if (uVar19 != uVar12) goto LAB_00d5d640;
LAB_00d5d6b0:
          uVar8 = (uint)((float)uVar12 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar26[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar21 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,puVar28,
                              -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar22 = puVar26[1];
          puVar26[3] = lVar21;
          puVar26[1] = lVar22 + 1;
          puVar28 = (uint *)(lVar21 + lVar22 * 4);
        }
        else {
          puVar28 = (uint *)puVar26[3];
          uVar16 = 1;
          puVar26[1] = 1;
          *puVar28 = uVar9;
          uVar19 = 1;
          if (uVar12 != 1) goto LAB_00d5d69c;
LAB_00d5d5d8:
          uVar8 = (uint)((float)uVar19 * 1.75);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          puVar26[2] = (long)(int)uVar8;
          plVar6 = (long *)SpineExtension::getInstance();
          puVar28 = (uint *)(**(code **)(*plVar6 + 0x20))
                                      (plVar6,puVar28,
                                       -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar8 << 2,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                       ,0x6a);
          lVar21 = puVar26[1];
          puVar26[3] = puVar28;
          uVar19 = lVar21 + 1;
          puVar26[1] = uVar19;
          puVar28[lVar21] = uVar5;
          uVar12 = puVar26[2];
          if (uVar19 == uVar12) goto LAB_00d5d6b0;
LAB_00d5d640:
          puVar26[1] = uVar19 + 1;
          puVar28 = puVar28 + uVar19;
        }
        *puVar28 = uVar4;
        iVar10 = -1;
        uVar8 = uVar9;
        if (0.0 <= ((fVar30 - fVar29) * fVar35 +
                   ((fVar36 - fVar35) * fVar33 - (fVar30 - fVar29) * fVar34)) -
                   (fVar36 - fVar35) * fVar29) {
          iVar10 = 1;
        }
      }
      uVar17 = uVar17 + 3;
    } while (uVar17 < uVar11);
  }
  if (puVar24[1] != 0) {
    uVar11 = *(ulong *)(this + 0x10);
    if (uVar11 == *(ulong *)(this + 0x18)) {
      uVar8 = (uint)((float)uVar11 * 1.75);
      uVar23 = *(undefined8 *)(this + 0x20);
      if (uVar8 < 9) {
        uVar8 = 8;
      }
      *(long *)(this + 0x18) = (long)(int)uVar8;
      plVar6 = (long *)SpineExtension::getInstance();
      lVar21 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar23,
                          -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x6a);
      lVar22 = *(long *)(this + 0x10);
      *(long *)(this + 0x20) = lVar21;
      *(long *)(this + 0x10) = lVar22 + 1;
      puVar13 = (undefined8 *)(lVar21 + lVar22 * 8);
    }
    else {
      *(ulong *)(this + 0x10) = uVar11 + 1;
      puVar13 = (undefined8 *)(*(long *)(this + 0x20) + uVar11 * 8);
    }
    *puVar13 = puVar24;
    uVar11 = *(ulong *)(this + 0x30);
    if (uVar11 == *(ulong *)(this + 0x38)) {
      uVar8 = (uint)((float)uVar11 * 1.75);
      uVar23 = *(undefined8 *)(this + 0x40);
      if (uVar8 < 9) {
        uVar8 = 8;
      }
      *(long *)(this + 0x38) = (long)(int)uVar8;
      plVar6 = (long *)SpineExtension::getInstance();
      lVar21 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar23,
                          -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x6a);
      lVar22 = *(long *)(this + 0x30);
      *(long *)(this + 0x40) = lVar21;
      *(long *)(this + 0x30) = lVar22 + 1;
      puVar24 = (undefined8 *)(lVar21 + lVar22 * 8);
    }
    else {
      *(ulong *)(this + 0x30) = uVar11 + 1;
      puVar24 = (undefined8 *)(*(long *)(this + 0x40) + uVar11 * 8);
    }
    *puVar24 = puVar26;
  }
  uVar11 = *(ulong *)(this + 0x10);
  if (uVar11 != 0) {
    uVar17 = 0;
    do {
      lVar21 = *(long *)(*(long *)(this + 0x40) + uVar17 * 8);
      if (*(long *)(lVar21 + 8) != 0) {
        uVar12 = 0;
        lVar25 = *(long *)(*(long *)(this + 0x20) + uVar17 * 8);
        iVar1 = **(int **)(lVar21 + 0x18);
        iVar14 = (*(int **)(lVar21 + 0x18))[*(long *)(lVar21 + 8) + -1];
        lVar22 = *(long *)(lVar25 + 8);
        pfVar27 = *(float **)(lVar25 + 0x18);
        fVar29 = pfVar27[lVar22 + -4];
        fVar30 = pfVar27[lVar22 + -3];
        fVar35 = pfVar27[lVar22 + -2];
        fVar36 = pfVar27[lVar22 + -1];
        fVar33 = *pfVar27;
        fVar34 = pfVar27[1];
        fVar38 = pfVar27[2];
        fVar39 = pfVar27[3];
        iVar10 = -1;
        if (0.0 <= (fVar30 * (fVar35 - fVar29) +
                   ((fVar36 - fVar30) * fVar33 - (fVar35 - fVar29) * fVar34)) -
                   fVar29 * (fVar36 - fVar30)) {
          iVar10 = 1;
        }
        do {
          uVar16 = uVar17;
          if ((((uVar12 != uVar17) &&
               (lVar22 = *(long *)(*(long *)(this + 0x40) + uVar12 * 8), uVar16 = uVar12,
               *(long *)(lVar22 + 8) == 3)) &&
              (piVar18 = *(int **)(lVar22 + 0x18), *piVar18 == iVar1)) && (piVar18[1] == iVar14)) {
            lVar15 = *(long *)(*(long *)(this + 0x20) + uVar12 * 8);
            lVar7 = *(long *)(lVar15 + 0x18) + *(long *)(lVar15 + 8) * 4;
            fVar3 = *(float *)(lVar7 + -8);
            fVar37 = *(float *)(lVar7 + -4);
            fVar31 = fVar33 - fVar3;
            fVar32 = fVar34 - fVar37;
            iVar20 = -1;
            iVar2 = iVar20;
            if (0.0 <= (fVar30 * (fVar35 - fVar29) +
                       ((fVar36 - fVar30) * fVar3 - (fVar35 - fVar29) * fVar37)) -
                       (fVar36 - fVar30) * fVar29) {
              iVar2 = 1;
            }
            if (0.0 <= (fVar37 * fVar31 + (fVar38 * fVar32 - fVar39 * fVar31)) - fVar32 * fVar3) {
              iVar20 = 1;
            }
            if ((iVar2 == iVar10) && (iVar20 == iVar10)) {
              iVar2 = piVar18[2];
              *(undefined8 *)(lVar15 + 8) = 0;
              *(undefined8 *)(lVar22 + 8) = 0;
              uVar12 = *(ulong *)(lVar25 + 8);
              uVar16 = *(ulong *)(lVar25 + 0x10);
              if (uVar12 == uVar16) {
                uVar8 = (uint)((float)uVar12 * 1.75);
                uVar23 = *(undefined8 *)(lVar25 + 0x18);
                if (uVar8 < 9) {
                  uVar8 = 8;
                }
                *(long *)(lVar25 + 0x10) = (long)(int)uVar8;
                plVar6 = (long *)SpineExtension::getInstance();
                lVar22 = (**(code **)(*plVar6 + 0x20))
                                   (plVar6,uVar23,
                                    -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2
                                    ,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
                lVar7 = *(long *)(lVar25 + 8);
                *(long *)(lVar25 + 0x18) = lVar22;
                uVar19 = lVar7 + 1;
                *(ulong *)(lVar25 + 8) = uVar19;
                *(float *)(lVar22 + lVar7 * 4) = fVar3;
                uVar16 = *(ulong *)(lVar25 + 0x10);
                if (uVar19 == uVar16) goto LAB_00d5d910;
LAB_00d5db70:
                *(ulong *)(lVar25 + 8) = uVar19 + 1;
                pfVar27 = (float *)(lVar22 + uVar19 * 4);
              }
              else {
                lVar22 = *(long *)(lVar25 + 0x18);
                uVar19 = uVar12 + 1;
                *(ulong *)(lVar25 + 8) = uVar19;
                *(float *)(lVar22 + uVar12 * 4) = fVar3;
                if (uVar19 != uVar16) goto LAB_00d5db70;
LAB_00d5d910:
                uVar8 = (uint)((float)uVar16 * 1.75);
                if (uVar8 < 9) {
                  uVar8 = 8;
                }
                *(long *)(lVar25 + 0x10) = (long)(int)uVar8;
                plVar6 = (long *)SpineExtension::getInstance();
                lVar22 = (**(code **)(*plVar6 + 0x20))
                                   (plVar6,lVar22,
                                    -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2
                                    ,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
                lVar7 = *(long *)(lVar25 + 8);
                *(long *)(lVar25 + 0x18) = lVar22;
                *(long *)(lVar25 + 8) = lVar7 + 1;
                pfVar27 = (float *)(lVar22 + lVar7 * 4);
              }
              *pfVar27 = fVar37;
              uVar12 = *(ulong *)(lVar21 + 8);
              if (uVar12 == *(ulong *)(lVar21 + 0x10)) {
                uVar8 = (uint)((float)uVar12 * 1.75);
                uVar23 = *(undefined8 *)(lVar21 + 0x18);
                if (uVar8 < 9) {
                  uVar8 = 8;
                }
                *(long *)(lVar21 + 0x10) = (long)(int)uVar8;
                plVar6 = (long *)SpineExtension::getInstance();
                lVar22 = (**(code **)(*plVar6 + 0x20))
                                   (plVar6,uVar23,
                                    -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2
                                    ,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
                lVar7 = *(long *)(lVar21 + 8);
                *(long *)(lVar21 + 0x18) = lVar22;
                *(long *)(lVar21 + 8) = lVar7 + 1;
                *(int *)(lVar22 + lVar7 * 4) = iVar2;
              }
              else {
                *(ulong *)(lVar21 + 8) = uVar12 + 1;
                *(int *)(*(long *)(lVar21 + 0x18) + uVar12 * 4) = iVar2;
              }
              uVar16 = 0;
              fVar29 = fVar35;
              fVar35 = fVar3;
              fVar30 = fVar36;
              fVar36 = fVar37;
            }
          }
          uVar12 = uVar16 + 1;
        } while (uVar12 < uVar11);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar11);
    uVar11 = *(ulong *)(this + 0x10);
    iVar10 = (int)uVar11;
    if (0 < iVar10) {
      lVar21 = (-(uVar11 >> 0x1f & 1) & 0xfffffff800000000 | (uVar11 & 0xffffffff) << 3) + 8;
      uVar11 = ~(long)iVar10;
      uVar17 = (long)iVar10;
      do {
        lVar22 = *(long *)(this + 0x20);
        uVar12 = uVar17 - 1;
        lVar25 = *(long *)(lVar22 + uVar12 * 8);
        if (*(long *)(lVar25 + 8) == 0) {
          lVar7 = *(long *)(this + 0x10);
          uVar16 = lVar7 - 1;
          *(ulong *)(this + 0x10) = uVar16;
          if (uVar12 < uVar16) {
            uVar23 = *(undefined8 *)(lVar22 + uVar12 * 8);
            *(undefined8 *)(lVar22 + uVar12 * 8) = *(undefined8 *)(lVar22 + uVar17 * 8);
            *(undefined8 *)(*(long *)(this + 0x20) + uVar17 * 8) = uVar23;
            if (uVar17 != uVar16) {
              lVar7 = lVar7 + uVar11;
              lVar22 = lVar21;
              do {
                lVar7 = lVar7 + -1;
                puVar26 = (undefined8 *)(*(long *)(this + 0x20) + lVar22);
                uVar23 = puVar26[-1];
                puVar26[-1] = *puVar26;
                *(undefined8 *)(*(long *)(this + 0x20) + lVar22) = uVar23;
                lVar22 = lVar22 + 8;
              } while (lVar7 != 0);
            }
          }
          uVar16 = *(ulong *)(this + 0xb8);
          if (uVar16 != 0) {
            uVar19 = 0;
            do {
              if (*(long *)(*(long *)(this + 200) + uVar19 * 8) == lVar25) goto LAB_00d5dcf0;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar16);
          }
          if (uVar16 == *(ulong *)(this + 0xc0)) {
            uVar8 = (uint)((float)uVar16 * 1.75);
            uVar23 = *(undefined8 *)(this + 200);
            if (uVar8 < 9) {
              uVar8 = 8;
            }
            *(long *)(this + 0xc0) = (long)(int)uVar8;
            plVar6 = (long *)SpineExtension::getInstance();
            lVar22 = (**(code **)(*plVar6 + 0x20))
                               (plVar6,uVar23,
                                -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar7 = *(long *)(this + 0xb8);
            *(long *)(this + 200) = lVar22;
            *(long *)(this + 0xb8) = lVar7 + 1;
            plVar6 = (long *)(lVar22 + lVar7 * 8);
          }
          else {
            *(ulong *)(this + 0xb8) = uVar16 + 1;
            plVar6 = (long *)(*(long *)(this + 200) + uVar16 * 8);
          }
          *plVar6 = lVar25;
LAB_00d5dcf0:
          lVar25 = *(long *)(this + 0x40);
          lVar22 = *(long *)(this + 0x30);
          lVar7 = *(long *)(lVar25 + uVar12 * 8);
          uVar16 = lVar22 - 1;
          *(ulong *)(this + 0x30) = uVar16;
          if (uVar12 < uVar16) {
            *(undefined8 *)(lVar25 + uVar12 * 8) = *(undefined8 *)(lVar25 + uVar17 * 8);
            *(long *)(*(long *)(this + 0x40) + uVar17 * 8) = lVar7;
            if (uVar17 != uVar16) {
              lVar22 = lVar22 + uVar11;
              lVar25 = lVar21;
              do {
                lVar22 = lVar22 + -1;
                puVar26 = (undefined8 *)(*(long *)(this + 0x40) + lVar25);
                uVar23 = puVar26[-1];
                puVar26[-1] = *puVar26;
                *(undefined8 *)(*(long *)(this + 0x40) + lVar25) = uVar23;
                lVar25 = lVar25 + 8;
              } while (lVar22 != 0);
            }
          }
          uVar17 = *(ulong *)local_c8;
          if (uVar17 != 0) {
            uVar16 = 0;
            do {
              if (*(long *)(*(long *)(this + 0xf0) + uVar16 * 8) == lVar7) goto LAB_00d5de14;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar17);
          }
          if (uVar17 == *(ulong *)(this + 0xe8)) {
            uVar8 = (uint)((float)uVar17 * 1.75);
            uVar23 = *(undefined8 *)(this + 0xf0);
            if (uVar8 < 9) {
              uVar8 = 8;
            }
            *(long *)(this + 0xe8) = (long)(int)uVar8;
            plVar6 = (long *)SpineExtension::getInstance();
            lVar22 = (**(code **)(*plVar6 + 0x20))
                               (plVar6,uVar23,
                                -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar25 = *(long *)(this + 0xe0);
            *(long *)(this + 0xf0) = lVar22;
            *(long *)(this + 0xe0) = lVar25 + 1;
            *(long *)(lVar22 + lVar25 * 8) = lVar7;
          }
          else {
            *(ulong *)(this + 0xe0) = uVar17 + 1;
            *(long *)(*(long *)(this + 0xf0) + uVar17 * 8) = lVar7;
          }
        }
LAB_00d5de14:
        lVar21 = lVar21 + -8;
        uVar11 = uVar11 + 1;
        uVar17 = uVar12;
      } while (0 < (long)uVar12);
    }
  }
  return this + 8;
}

