
/* spine::SkeletonClipping::clip(float, float, float, float, float, float, spine::Vector<float>*,
   spine::Vector<float>*) */

undefined4 __thiscall
spine::SkeletonClipping::clip
          (SkeletonClipping *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,Vector *param_7,Vector *param_8)

{
  SkeletonClipping *pSVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  SkeletonClipping *pSVar15;
  float *pfVar16;
  undefined8 uVar17;
  SkeletonClipping *pSVar18;
  SkeletonClipping *pSVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long local_e0;
  
  bVar2 = (*(ulong *)(param_7 + 8) & 2) != 0;
  pSVar1 = this + 0x1a0;
  if (bVar2) {
    pSVar1 = (SkeletonClipping *)param_8;
  }
  uVar7 = *(ulong *)(pSVar1 + 0x10);
  pSVar19 = (SkeletonClipping *)param_8;
  if (bVar2) {
    pSVar19 = this + 0x1a0;
  }
  *(undefined8 *)(pSVar1 + 8) = 0;
  if (uVar7 == 0) {
    uVar17 = *(undefined8 *)(pSVar1 + 0x18);
    *(undefined8 *)(pSVar1 + 0x10) = 8;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,uVar17,0x20,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    uVar14 = lVar8 + 1;
    *(ulong *)(pSVar1 + 8) = uVar14;
    pfVar16[lVar8] = param_1;
    uVar7 = *(ulong *)(pSVar1 + 0x10);
    uVar9 = uVar7;
    if (uVar14 == uVar7) goto LAB_00d5a740;
LAB_00d5a860:
    uVar9 = uVar14 + 1;
    *(ulong *)(pSVar1 + 8) = uVar9;
    pfVar16[uVar14] = param_2;
    if (uVar9 != uVar7) goto LAB_00d5a7ac;
LAB_00d5a874:
    uVar6 = (uint)((float)uVar7 * 1.75);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    uVar14 = lVar8 + 1;
    *(ulong *)(pSVar1 + 8) = uVar14;
    pfVar16[lVar8] = param_3;
    uVar7 = *(ulong *)(pSVar1 + 0x10);
    if (uVar14 != uVar7) goto LAB_00d5a7c0;
LAB_00d5a8e0:
    uVar6 = (uint)((float)uVar7 * 1.75);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    uVar9 = lVar8 + 1;
    *(ulong *)(pSVar1 + 8) = uVar9;
    pfVar16[lVar8] = param_4;
    uVar7 = *(ulong *)(pSVar1 + 0x10);
    if (uVar9 != uVar7) goto LAB_00d5a7d4;
LAB_00d5a94c:
    uVar6 = (uint)((float)uVar7 * 1.75);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    uVar14 = lVar8 + 1;
    *(ulong *)(pSVar1 + 8) = uVar14;
    pfVar16[lVar8] = param_5;
    uVar7 = *(ulong *)(pSVar1 + 0x10);
    if (uVar14 != uVar7) goto LAB_00d5a7e8;
LAB_00d5a9b8:
    uVar6 = (uint)((float)uVar7 * 1.75);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    uVar9 = lVar8 + 1;
    *(ulong *)(pSVar1 + 8) = uVar9;
    pfVar16[lVar8] = param_6;
    uVar7 = *(ulong *)(pSVar1 + 0x10);
    if (uVar9 == uVar7) {
LAB_00d5aa24:
      uVar6 = (uint)((float)uVar7 * 1.75);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
      plVar3 = (long *)SpineExtension::getInstance();
      pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                   (plVar3,pfVar16,
                                    -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2
                                    ,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
      lVar8 = *(long *)(pSVar1 + 8);
      *(float **)(pSVar1 + 0x18) = pfVar16;
      uVar14 = lVar8 + 1;
      *(ulong *)(pSVar1 + 8) = uVar14;
      pfVar16[lVar8] = param_1;
      uVar7 = *(ulong *)(pSVar1 + 0x10);
      goto LAB_00d5aa88;
    }
  }
  else {
    pfVar16 = *(float **)(pSVar1 + 0x18);
    uVar14 = 1;
    *(undefined8 *)(pSVar1 + 8) = 1;
    *pfVar16 = param_1;
    uVar9 = 1;
    if (uVar7 != 1) goto LAB_00d5a860;
LAB_00d5a740:
    uVar6 = (uint)((float)uVar9 * 1.75);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    uVar9 = lVar8 + 1;
    *(ulong *)(pSVar1 + 8) = uVar9;
    pfVar16[lVar8] = param_2;
    uVar7 = *(ulong *)(pSVar1 + 0x10);
    if (uVar9 == uVar7) goto LAB_00d5a874;
LAB_00d5a7ac:
    uVar14 = uVar9 + 1;
    *(ulong *)(pSVar1 + 8) = uVar14;
    pfVar16[uVar9] = param_3;
    if (uVar14 == uVar7) goto LAB_00d5a8e0;
LAB_00d5a7c0:
    uVar9 = uVar14 + 1;
    *(ulong *)(pSVar1 + 8) = uVar9;
    pfVar16[uVar14] = param_4;
    if (uVar9 == uVar7) goto LAB_00d5a94c;
LAB_00d5a7d4:
    uVar14 = uVar9 + 1;
    *(ulong *)(pSVar1 + 8) = uVar14;
    pfVar16[uVar9] = param_5;
    if (uVar14 == uVar7) goto LAB_00d5a9b8;
LAB_00d5a7e8:
    uVar9 = uVar14 + 1;
    *(ulong *)(pSVar1 + 8) = uVar9;
    pfVar16[uVar14] = param_6;
    if (uVar9 == uVar7) goto LAB_00d5aa24;
  }
  uVar14 = uVar9 + 1;
  *(ulong *)(pSVar1 + 8) = uVar14;
  pfVar16[uVar9] = param_1;
LAB_00d5aa88:
  if (uVar14 == uVar7) {
    uVar6 = (uint)((float)uVar7 * 1.75);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar1 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar8 = *(long *)(pSVar1 + 8);
    *(float **)(pSVar1 + 0x18) = pfVar16;
    *(long *)(pSVar1 + 8) = lVar8 + 1;
    pfVar11 = pfVar16 + lVar8;
  }
  else {
    *(ulong *)(pSVar1 + 8) = uVar14 + 1;
    pfVar11 = pfVar16 + uVar14;
  }
  *pfVar11 = param_2;
  *(undefined8 *)(pSVar19 + 8) = 0;
  pfVar11 = *(float **)(param_7 + 0x18);
  lVar8 = *(long *)(param_7 + 8);
  fVar23 = *pfVar11;
  fVar25 = pfVar11[1];
  fVar30 = pfVar11[2];
  fVar31 = pfVar11[3];
  pSVar15 = pSVar1 + 8;
  uVar7 = *(long *)pSVar15 - 2;
  if (uVar7 == 0) {
LAB_00d5b444:
    *(undefined8 *)(param_8 + 8) = 0;
    return 1;
  }
  uVar20 = 0;
  fVar34 = fVar25 - fVar31;
  fVar26 = fVar23 - fVar30;
  local_e0 = 0;
  lVar4 = 2;
LAB_00d5ab78:
  pSVar18 = pSVar1;
  lVar5 = lVar4;
  fVar21 = fVar30 - fVar23;
  uVar9 = 0;
  uVar14 = 0;
  fVar22 = fVar31 - fVar25;
  do {
    pfVar16 = pfVar16 + uVar14;
    fVar28 = *pfVar16;
    fVar32 = pfVar16[1];
    fVar29 = pfVar16[2];
    fVar33 = pfVar16[3];
    uVar14 = uVar14 + 2;
    fVar24 = fVar26 * (fVar33 - fVar31) - fVar34 * (fVar29 - fVar30);
    if (fVar26 * (fVar32 - fVar31) - fVar34 * (fVar28 - fVar30) <= 0.0) {
      if (0.0 < fVar24) {
        fVar27 = fVar21 * (fVar33 - fVar32) - fVar22 * (fVar29 - fVar28);
        fVar24 = (float)MathUtil::abs(fVar27);
        if (fVar24 <= 1e-06) {
          uVar9 = *(ulong *)(pSVar19 + 8);
          uVar12 = *(ulong *)(pSVar19 + 0x10);
          if (uVar9 == uVar12) {
            uVar6 = (uint)((float)uVar9 * 1.75);
            uVar17 = *(undefined8 *)(pSVar19 + 0x18);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,uVar17,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar13 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + lVar10 * 4) = fVar23;
            uVar12 = *(ulong *)(pSVar19 + 0x10);
          }
          else {
            lVar4 = *(long *)(pSVar19 + 0x18);
            uVar13 = uVar9 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + uVar9 * 4) = fVar23;
          }
          if (uVar13 == uVar12) {
            uVar6 = (uint)((float)uVar12 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,lVar4,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar9 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + lVar10 * 4) = fVar25;
          }
          else {
            uVar9 = uVar13 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + uVar13 * 4) = fVar25;
          }
        }
        else {
          uVar9 = *(ulong *)(pSVar19 + 8);
          uVar12 = *(ulong *)(pSVar19 + 0x10);
          fVar27 = ((fVar25 - fVar32) * (fVar29 - fVar28) - (fVar23 - fVar28) * (fVar33 - fVar32)) /
                   fVar27;
          fVar24 = fVar21 * fVar27 + fVar23;
          if (uVar9 == uVar12) {
            uVar6 = (uint)((float)uVar9 * 1.75);
            uVar17 = *(undefined8 *)(pSVar19 + 0x18);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,uVar17,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar13 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + lVar10 * 4) = fVar24;
            uVar12 = *(ulong *)(pSVar19 + 0x10);
          }
          else {
            lVar4 = *(long *)(pSVar19 + 0x18);
            uVar13 = uVar9 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + uVar9 * 4) = fVar24;
          }
          fVar24 = fVar22 * fVar27 + fVar25;
          if (uVar13 == uVar12) {
            uVar6 = (uint)((float)uVar12 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,lVar4,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar9 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + lVar10 * 4) = fVar24;
          }
          else {
            uVar9 = uVar13 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + uVar13 * 4) = fVar24;
          }
        }
        uVar12 = *(ulong *)(pSVar19 + 0x10);
        if (uVar9 == uVar12) {
          uVar6 = (uint)((float)uVar9 * 1.75);
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
          plVar3 = (long *)SpineExtension::getInstance();
          lVar4 = (**(code **)(*plVar3 + 0x20))
                            (plVar3,lVar4,
                             -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar10 = *(long *)(pSVar19 + 8);
          *(long *)(pSVar19 + 0x18) = lVar4;
          uVar13 = lVar10 + 1;
          *(ulong *)(pSVar19 + 8) = uVar13;
          *(float *)(lVar4 + lVar10 * 4) = fVar29;
          uVar12 = *(ulong *)(pSVar19 + 0x10);
          if (uVar13 == uVar12) {
LAB_00d5b268:
            uVar6 = (uint)((float)uVar12 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,lVar4,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar9 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + lVar10 * 4) = fVar33;
            goto LAB_00d5b2cc;
          }
        }
        else {
          uVar13 = uVar9 + 1;
          *(ulong *)(pSVar19 + 8) = uVar13;
          *(float *)(lVar4 + uVar9 * 4) = fVar29;
          if (uVar13 == uVar12) goto LAB_00d5b268;
        }
        uVar9 = uVar13 + 1;
        *(ulong *)(pSVar19 + 8) = uVar9;
        *(float *)(lVar4 + uVar13 * 4) = fVar33;
      }
LAB_00d5b2cc:
      uVar20 = 1;
    }
    else {
      if (fVar24 <= 0.0) {
        fVar27 = fVar21 * (fVar33 - fVar32) - fVar22 * (fVar29 - fVar28);
        fVar24 = (float)MathUtil::abs(fVar27);
        if (fVar24 <= 1e-06) {
          uVar9 = *(ulong *)(pSVar19 + 8);
          uVar12 = *(ulong *)(pSVar19 + 0x10);
          if (uVar9 == uVar12) {
            uVar6 = (uint)((float)uVar9 * 1.75);
            uVar17 = *(undefined8 *)(pSVar19 + 0x18);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,uVar17,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar13 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + lVar10 * 4) = fVar23;
            uVar12 = *(ulong *)(pSVar19 + 0x10);
          }
          else {
            lVar4 = *(long *)(pSVar19 + 0x18);
            uVar13 = uVar9 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + uVar9 * 4) = fVar23;
          }
          if (uVar13 == uVar12) {
            uVar6 = (uint)((float)uVar12 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,lVar4,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar9 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + lVar10 * 4) = fVar25;
          }
          else {
            uVar9 = uVar13 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + uVar13 * 4) = fVar25;
          }
        }
        else {
          uVar9 = *(ulong *)(pSVar19 + 8);
          uVar12 = *(ulong *)(pSVar19 + 0x10);
          fVar27 = ((fVar25 - fVar32) * (fVar29 - fVar28) - (fVar23 - fVar28) * (fVar33 - fVar32)) /
                   fVar27;
          fVar29 = fVar21 * fVar27 + fVar23;
          if (uVar9 == uVar12) {
            uVar6 = (uint)((float)uVar9 * 1.75);
            uVar17 = *(undefined8 *)(pSVar19 + 0x18);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,uVar17,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar13 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + lVar10 * 4) = fVar29;
            uVar12 = *(ulong *)(pSVar19 + 0x10);
          }
          else {
            lVar4 = *(long *)(pSVar19 + 0x18);
            uVar13 = uVar9 + 1;
            *(ulong *)(pSVar19 + 8) = uVar13;
            *(float *)(lVar4 + uVar9 * 4) = fVar29;
          }
          fVar29 = fVar22 * fVar27 + fVar25;
          if (uVar13 == uVar12) {
            uVar6 = (uint)((float)uVar12 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar4 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,lVar4,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar10 = *(long *)(pSVar19 + 8);
            *(long *)(pSVar19 + 0x18) = lVar4;
            uVar9 = lVar10 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + lVar10 * 4) = fVar29;
          }
          else {
            uVar9 = uVar13 + 1;
            *(ulong *)(pSVar19 + 8) = uVar9;
            *(float *)(lVar4 + uVar13 * 4) = fVar29;
          }
        }
        goto LAB_00d5b2cc;
      }
      uVar12 = *(ulong *)(pSVar19 + 0x10);
      if (uVar9 == uVar12) {
        uVar6 = (uint)((float)uVar9 * 1.75);
        uVar17 = *(undefined8 *)(pSVar19 + 0x18);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
        plVar3 = (long *)SpineExtension::getInstance();
        lVar4 = (**(code **)(*plVar3 + 0x20))
                          (plVar3,uVar17,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar10 = *(long *)(pSVar19 + 8);
        *(long *)(pSVar19 + 0x18) = lVar4;
        uVar13 = lVar10 + 1;
        *(ulong *)(pSVar19 + 8) = uVar13;
        *(float *)(lVar4 + lVar10 * 4) = fVar29;
        uVar12 = *(ulong *)(pSVar19 + 0x10);
        if (uVar13 == uVar12) goto LAB_00d5ae44;
LAB_00d5ac70:
        uVar9 = uVar13 + 1;
        *(ulong *)(pSVar19 + 8) = uVar9;
        *(float *)(lVar4 + uVar13 * 4) = fVar33;
      }
      else {
        lVar4 = *(long *)(pSVar19 + 0x18);
        uVar13 = uVar9 + 1;
        *(ulong *)(pSVar19 + 8) = uVar13;
        *(float *)(lVar4 + uVar9 * 4) = fVar29;
        if (uVar13 != uVar12) goto LAB_00d5ac70;
LAB_00d5ae44:
        uVar6 = (uint)((float)uVar12 * 1.75);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
        plVar3 = (long *)SpineExtension::getInstance();
        lVar4 = (**(code **)(*plVar3 + 0x20))
                          (plVar3,lVar4,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar10 = *(long *)(pSVar19 + 8);
        *(long *)(pSVar19 + 0x18) = lVar4;
        uVar9 = lVar10 + 1;
        *(ulong *)(pSVar19 + 8) = uVar9;
        *(float *)(lVar4 + lVar10 * 4) = fVar33;
      }
    }
    if (uVar7 <= uVar14) break;
    pfVar16 = *(float **)(pSVar18 + 0x18);
  } while( true );
  if (uVar9 == 0) goto LAB_00d5b444;
  uVar7 = *(ulong *)(pSVar19 + 0x10);
  pfVar16 = *(float **)(pSVar19 + 0x18);
  if (uVar9 == uVar7) {
    uVar6 = (uint)((float)uVar9 * 1.75);
    fVar23 = *pfVar16;
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                 (plVar3,pfVar16,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
    lVar4 = *(long *)(pSVar19 + 8);
    *(float **)(pSVar19 + 0x18) = pfVar16;
    uVar14 = lVar4 + 1;
    *(ulong *)(pSVar19 + 8) = uVar14;
    pfVar16[lVar4] = fVar23;
    uVar7 = *(ulong *)(pSVar19 + 0x10);
    if (uVar14 == uVar7) {
LAB_00d5b37c:
      uVar6 = (uint)((float)uVar7 * 1.75);
      fVar23 = pfVar16[1];
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      *(long *)(pSVar19 + 0x10) = (long)(int)uVar6;
      plVar3 = (long *)SpineExtension::getInstance();
      pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                   (plVar3,pfVar16,
                                    -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2
                                    ,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
      lVar4 = *(long *)(pSVar19 + 8);
      *(float **)(pSVar19 + 0x18) = pfVar16;
      *(long *)(pSVar19 + 8) = lVar4 + 1;
      pfVar11 = pfVar16 + lVar4;
      goto LAB_00d5b3d4;
    }
  }
  else {
    uVar14 = uVar9 + 1;
    *(ulong *)(pSVar19 + 8) = uVar14;
    pfVar16[uVar9] = *pfVar16;
    if (uVar14 == uVar7) goto LAB_00d5b37c;
  }
  *(ulong *)(pSVar19 + 8) = uVar14 + 1;
  fVar23 = pfVar16[1];
  pfVar11 = pfVar16 + uVar14;
LAB_00d5b3d4:
  *pfVar11 = fVar23;
  if (local_e0 == lVar8 + -4) {
    if (pSVar19 != (SkeletonClipping *)param_8) {
      *(undefined8 *)(param_8 + 8) = 0;
      lVar8 = *(long *)(pSVar19 + 8);
      if (lVar8 == 2) {
        return uVar20;
      }
      lVar4 = 0;
      uVar7 = 0;
      while( true ) {
        if (uVar7 == *(ulong *)(param_8 + 0x10)) {
          uVar6 = (uint)((float)uVar7 * 1.75);
          fVar23 = pfVar16[lVar4];
          uVar17 = *(undefined8 *)(param_8 + 0x18);
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          *(long *)(param_8 + 0x10) = (long)(int)uVar6;
          plVar3 = (long *)SpineExtension::getInstance();
          lVar5 = (**(code **)(*plVar3 + 0x20))
                            (plVar3,uVar17,
                             -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar10 = *(long *)(param_8 + 8);
          *(long *)(param_8 + 0x18) = lVar5;
          uVar14 = lVar10 + 1;
          *(ulong *)(param_8 + 8) = uVar14;
          pfVar16 = (float *)(lVar5 + lVar10 * 4);
        }
        else {
          uVar14 = uVar7 + 1;
          *(ulong *)(param_8 + 8) = uVar14;
          fVar23 = pfVar16[lVar4];
          pfVar16 = (float *)(*(long *)(param_8 + 0x18) + uVar7 * 4);
        }
        *pfVar16 = fVar23;
        if (lVar8 + -3 == lVar4) break;
        pfVar16 = *(float **)(pSVar19 + 0x18);
        lVar4 = lVar4 + 1;
        uVar7 = uVar14;
      }
      return uVar20;
    }
    uVar7 = *(ulong *)(param_8 + 8);
    uVar14 = uVar7 - 2;
    *(ulong *)(param_8 + 8) = uVar14;
    if (*(ulong *)(param_8 + 0x10) < uVar14) {
      uVar6 = (uint)((float)uVar14 * 1.75);
      uVar17 = *(undefined8 *)(param_8 + 0x18);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      *(long *)(param_8 + 0x10) = (long)(int)uVar6;
      plVar3 = (long *)SpineExtension::getInstance();
      uVar17 = (**(code **)(*plVar3 + 0x20))
                         (plVar3,uVar17,
                          -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar14 = *(ulong *)(param_8 + 8);
      *(undefined8 *)(param_8 + 0x18) = uVar17;
    }
    if (uVar14 < uVar7 || uVar14 - uVar7 == 0) {
      return uVar20;
    }
    memset((void *)(*(long *)(param_8 + 0x18) + uVar7 * 4),0,(uVar14 - uVar7) * 4);
    return uVar20;
  }
  *(undefined8 *)pSVar15 = 0;
  lVar4 = *(long *)(param_7 + 0x18);
  pfVar11 = (float *)(lVar4 + lVar5 * 4);
  fVar25 = *(float *)(lVar4 + (lVar5 * 4 | 4U));
  fVar23 = *pfVar11;
  fVar30 = *(float *)(lVar4 + (lVar5 + 2) * 4);
  fVar31 = pfVar11[3];
  pSVar15 = pSVar19 + 8;
  fVar26 = fVar23 - fVar30;
  uVar7 = *(long *)pSVar15 - 2;
  fVar34 = fVar25 - fVar31;
  lVar4 = lVar5 + 2;
  pSVar1 = pSVar19;
  pSVar19 = pSVar18;
  local_e0 = lVar5;
  if (uVar7 == 0) goto LAB_00d5b444;
  goto LAB_00d5ab78;
}

