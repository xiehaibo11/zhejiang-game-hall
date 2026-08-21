
/* spine::SkeletonClipping::clipStart(spine::Slot&, spine::ClippingAttachment*) */

ulong __thiscall
spine::SkeletonClipping::clipStart(SkeletonClipping *this,Slot *param_1,ClippingAttachment *param_2)

{
  Vector *pVVar1;
  int iVar2;
  long *plVar3;
  Vector *pVVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (*(long *)(this + 0x1c0) == 0) {
    *(ClippingAttachment **)(this + 0x1c0) = param_2;
    iVar2 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)param_2);
    uVar6 = *(ulong *)(this + 0x108);
    uVar17 = (ulong)iVar2;
    pVVar1 = (Vector *)(this + 0x100);
    *(ulong *)(this + 0x108) = uVar17;
    uVar7 = uVar17;
    if (*(ulong *)(this + 0x110) < uVar17) {
      uVar9 = (uint)((float)uVar17 * 1.75);
      uVar18 = *(undefined8 *)(this + 0x118);
      if (uVar9 < 9) {
        uVar9 = 8;
      }
      *(long *)(this + 0x110) = (long)(int)uVar9;
      plVar3 = (long *)SpineExtension::getInstance();
      uVar18 = (**(code **)(*plVar3 + 0x20))
                         (plVar3,uVar18,
                          -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar7 = *(ulong *)(this + 0x108);
      *(undefined8 *)(this + 0x118) = uVar18;
    }
    if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
      memset((void *)(*(long *)(this + 0x118) + uVar6 * 4),0,(uVar7 - uVar6) * 4);
    }
    VertexAttachment::computeWorldVertices((VertexAttachment *)param_2,param_1,0,uVar17,pVVar1,0,2);
    uVar6 = *(ulong *)(this + 0x108);
    pfVar8 = *(float **)(this + 0x118);
    fVar19 = pfVar8[uVar6 - 2] * pfVar8[1] - *pfVar8 * pfVar8[uVar6 - 1];
    if (uVar6 != 3) {
      uVar7 = 0;
      fVar20 = *pfVar8;
      do {
        lVar5 = uVar7 + 2;
        lVar11 = uVar7 + 3;
        lVar15 = uVar7 + 1;
        uVar7 = uVar7 + 2;
        fVar19 = fVar19 + (fVar20 * pfVar8[lVar11] - pfVar8[lVar15] * pfVar8[lVar5]);
        fVar20 = pfVar8[lVar5];
      } while (uVar7 < uVar6 - 3);
    }
    if ((0.0 <= fVar19) && (uVar6 >> 1 != 0)) {
      lVar11 = uVar6 << 0x20;
      uVar7 = 0;
      lVar5 = lVar11 + -0x100000000;
      do {
        lVar11 = lVar11 + -0x200000000;
        pfVar16 = pfVar8 + uVar7;
        lVar15 = lVar5 >> 0x1e;
        fVar19 = *pfVar16;
        fVar20 = pfVar16[1];
        *pfVar16 = *(float *)((long)pfVar8 + (lVar11 >> 0x1e));
        uVar7 = uVar7 + 2;
        lVar5 = lVar5 + -0x200000000;
        pfVar16[1] = *(float *)((long)pfVar8 + lVar15);
        *(float *)((long)pfVar8 + (lVar11 >> 0x1e)) = fVar19;
        *(float *)((long)pfVar8 + lVar15) = fVar20;
      } while (uVar7 < uVar6 >> 1);
    }
    pVVar4 = (Vector *)Triangulator::triangulate((Triangulator *)(this + 8),pVVar1);
    lVar5 = Triangulator::decompose((Triangulator *)(this + 8),pVVar1,pVVar4);
    *(long *)(this + 0x1c8) = lVar5;
    uVar6 = 0;
    if (*(long *)(lVar5 + 8) != 0) {
      uVar7 = 0;
      do {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x18) + uVar7 * 8);
        uVar6 = *(ulong *)(lVar5 + 8);
        pfVar16 = *(float **)(lVar5 + 0x18);
        uVar17 = uVar6 - 2;
        pfVar8 = pfVar16 + 1;
        fVar19 = *pfVar16;
        fVar20 = pfVar16[uVar17] * *pfVar8 - fVar19 * pfVar16[uVar6 - 1];
        if (uVar6 != 3) {
          uVar10 = 0;
          fVar21 = fVar19;
          do {
            lVar11 = uVar10 + 2;
            lVar15 = uVar10 + 3;
            lVar12 = uVar10 + 1;
            uVar10 = uVar10 + 2;
            fVar20 = fVar20 + (fVar21 * pfVar16[lVar15] - pfVar16[lVar12] * pfVar16[lVar11]);
            fVar21 = pfVar16[lVar11];
          } while (uVar10 < uVar6 - 3);
        }
        if ((0.0 <= fVar20) && (uVar6 >> 1 != 0)) {
          uVar10 = -(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar17 & 0xffffffff) << 2;
          lVar11 = (long)((uVar17 << 0x20) + 0x100000000) >> 0x1e;
          *pfVar16 = *(float *)((long)pfVar16 + uVar10);
          fVar20 = pfVar16[1];
          pfVar16[1] = *(float *)((long)pfVar16 + lVar11);
          *(float *)((long)pfVar16 + uVar10) = fVar19;
          *(float *)((long)pfVar16 + lVar11) = fVar20;
          if (5 < uVar6) {
            lVar11 = (uVar6 << 0x20) + -0x300000000;
            lVar15 = (uVar6 << 0x20) + -0x400000000;
            lVar12 = 0;
            do {
              lVar13 = lVar15 >> 0x1e;
              lVar14 = lVar11 >> 0x1e;
              fVar19 = pfVar16[lVar12 + 2];
              fVar20 = pfVar16[lVar12 + 3];
              pfVar16[lVar12 + 2] = *(float *)((long)pfVar16 + lVar13);
              uVar17 = lVar12 + 4;
              lVar11 = lVar11 + -0x200000000;
              lVar15 = lVar15 + -0x200000000;
              pfVar16[lVar12 + 3] = *(float *)((long)pfVar16 + lVar14);
              *(float *)((long)pfVar16 + lVar13) = fVar19;
              *(float *)((long)pfVar16 + lVar14) = fVar20;
              lVar12 = lVar12 + 2;
            } while (uVar17 < uVar6 >> 1);
          }
        }
        uVar17 = *(ulong *)(lVar5 + 0x10);
        if (uVar6 == uVar17) {
          uVar9 = (uint)((float)uVar6 * 1.75);
          fVar19 = *pfVar16;
          if (uVar9 < 9) {
            uVar9 = 8;
          }
          *(long *)(lVar5 + 0x10) = (long)(int)uVar9;
          plVar3 = (long *)SpineExtension::getInstance();
          pfVar16 = (float *)(**(code **)(*plVar3 + 0x20))
                                       (plVar3,pfVar16,
                                        -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar9 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
          lVar11 = *(long *)(lVar5 + 8);
          *(float **)(lVar5 + 0x18) = pfVar16;
          uVar10 = lVar11 + 1;
          *(ulong *)(lVar5 + 8) = uVar10;
          pfVar16[lVar11] = fVar19;
          uVar17 = *(ulong *)(lVar5 + 0x10);
          pfVar8 = pfVar16 + 1;
          if (uVar10 != uVar17) goto LAB_00d59cc8;
LAB_00d59cf4:
          fVar19 = *pfVar8;
          uVar9 = (uint)((float)uVar17 * 1.75);
          if (uVar9 < 9) {
            uVar9 = 8;
          }
          *(long *)(lVar5 + 0x10) = (long)(int)uVar9;
          plVar3 = (long *)SpineExtension::getInstance();
          lVar11 = (**(code **)(*plVar3 + 0x20))
                             (plVar3,pfVar16,
                              -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar15 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 0x18) = lVar11;
          *(long *)(lVar5 + 8) = lVar15 + 1;
          pfVar16 = (float *)(lVar11 + lVar15 * 4);
        }
        else {
          uVar10 = uVar6 + 1;
          *(ulong *)(lVar5 + 8) = uVar10;
          pfVar16[uVar6] = *pfVar16;
          if (uVar10 == uVar17) goto LAB_00d59cf4;
LAB_00d59cc8:
          *(ulong *)(lVar5 + 8) = uVar10 + 1;
          fVar19 = *pfVar8;
          pfVar16 = pfVar16 + uVar10;
        }
        *pfVar16 = fVar19;
        lVar5 = *(long *)(this + 0x1c8);
        uVar7 = uVar7 + 1;
        uVar6 = *(ulong *)(lVar5 + 8);
      } while (uVar7 < uVar6);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

