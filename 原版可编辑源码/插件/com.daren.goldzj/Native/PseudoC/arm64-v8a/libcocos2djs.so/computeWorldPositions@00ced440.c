
/* spine::PathConstraint::computeWorldPositions(spine::PathAttachment&, int, bool, bool, bool) */

Vector * __thiscall
spine::PathConstraint::computeWorldPositions
          (PathConstraint *this,PathAttachment *param_1,int param_2,bool param_3,bool param_4,
          bool param_5)

{
  Vector *pVVar1;
  Vector *pVVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  Slot *pSVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_120;
  ulong local_110;
  ulong local_f0;
  ulong local_e0;
  
  pSVar6 = *(Slot **)(this + 0x30);
  fVar34 = *(float *)(this + 0x38);
  uVar5 = *(ulong *)(this + 0x70);
  uVar7 = (ulong)(param_2 * 3 + 2);
  uVar26 = (ulong)(uint)param_2;
  *(ulong *)(this + 0x70) = uVar7;
  if (*(ulong *)(this + 0x78) < uVar7) {
    uVar15 = (uint)((float)uVar7 * 1.75);
    uVar20 = *(undefined8 *)(this + 0x80);
    if (uVar15 < 9) {
      uVar15 = 8;
    }
    *(long *)(this + 0x78) = (long)(int)uVar15;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar20 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar20,
                        -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    uVar7 = *(ulong *)(this + 0x70);
    *(undefined8 *)(this + 0x80) = uVar20;
  }
  pVVar1 = (Vector *)(this + 0x68);
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
    memset((void *)(*(long *)(this + 0x80) + uVar5 * 4),0,(uVar7 - uVar5) * 4);
  }
  pVVar2 = (Vector *)(this + 0x88);
  uVar3 = PathAttachment::isClosed(param_1);
  uVar5 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)param_1);
  iVar17 = (int)uVar5;
  uVar15 = iVar17 / 6;
  uVar7 = PathAttachment::isConstantSpeed(param_1);
  if ((uVar7 & 1) == 0) {
    lVar23 = PathAttachment::getLengths(param_1);
    iVar17 = 1;
    if ((uVar3 & 1) == 0) {
      iVar17 = 2;
    }
    fVar33 = *(float *)(*(long *)(lVar23 + 0x18) + (long)(int)(uVar15 - iVar17) * 4);
    fVar46 = fVar34 * fVar33;
    if (!param_4) {
      fVar46 = fVar34;
    }
    if ((1 < param_2) && (param_5)) {
      lVar21 = *(long *)(this + 0x60);
      if (uVar26 - 1 < 8) {
        lVar13 = 1;
      }
      else {
        uVar16 = param_2 - 1U & 7;
        lVar10 = (uVar26 - 1) - (ulong)uVar16;
        lVar13 = lVar10 + 1;
        puVar19 = (undefined8 *)(lVar21 + 0x14);
        do {
          lVar10 = lVar10 + -8;
          puVar19[-1] = CONCAT44(fVar33 * (float)((ulong)puVar19[-1] >> 0x20),
                                 fVar33 * (float)puVar19[-1]);
          puVar19[-2] = CONCAT44(fVar33 * (float)((ulong)puVar19[-2] >> 0x20),
                                 fVar33 * (float)puVar19[-2]);
          puVar19[1] = CONCAT44(fVar33 * (float)((ulong)puVar19[1] >> 0x20),
                                fVar33 * (float)puVar19[1]);
          *puVar19 = CONCAT44(fVar33 * (float)((ulong)*puVar19 >> 0x20),fVar33 * (float)*puVar19);
          puVar19 = puVar19 + 4;
        } while (lVar10 != 0);
        if (uVar16 == 0) goto LAB_00cedaac;
      }
      lVar10 = uVar26 - lVar13;
      pfVar14 = (float *)(lVar21 + lVar13 * 4);
      do {
        lVar10 = lVar10 + -1;
        *pfVar14 = fVar33 * *pfVar14;
        pfVar14 = pfVar14 + 1;
      } while (lVar10 != 0);
    }
LAB_00cedaac:
    uVar7 = *(ulong *)(this + 0x90);
    uVar11 = 8;
    *(undefined8 *)(this + 0x90) = 8;
    if (*(ulong *)(this + 0x98) < 8) {
      uVar20 = *(undefined8 *)(this + 0xa0);
      *(undefined8 *)(this + 0x98) = 0xe;
      plVar4 = (long *)SpineExtension::getInstance();
      uVar20 = (**(code **)(*plVar4 + 0x20))
                         (plVar4,uVar20,0x38,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar11 = *(ulong *)(this + 0x90);
      *(undefined8 *)(this + 0xa0) = uVar20;
    }
    if (uVar7 <= uVar11 && uVar11 - uVar7 != 0) {
      memset((void *)(*(long *)(this + 0xa0) + uVar7 * 4),0,(uVar11 - uVar7) * 4);
    }
    if (param_2 < 1) {
      return pVVar1;
    }
    lVar21 = 0;
    uVar7 = 0;
    iVar24 = 0;
    iVar22 = -1;
    do {
      fVar34 = *(float *)(*(long *)(this + 0x60) + uVar7 * 4);
      fVar46 = fVar46 + fVar34;
      if ((uVar3 & 1) == 0) {
        if (0.0 <= fVar46) {
          fVar43 = fVar46;
          if (fVar46 <= fVar33) goto LAB_00cedbbc;
          if (iVar22 != -3) {
            VertexAttachment::computeWorldVertices
                      ((VertexAttachment *)param_1,pSVar6,
                       (long)((uVar5 << 0x20) + -0x600000000) >> 0x20,4,pVVar2,0,2);
          }
          pfVar14 = *(float **)(this + 0xa0);
          fVar44 = pfVar14[2];
          fVar28 = pfVar14[3];
          fVar34 = (float)MathUtil::atan2(fVar28 - pfVar14[1],fVar44 - *pfVar14);
          fVar43 = (float)MathUtil::cos(fVar34);
          *(float *)(*(long *)(this + 0x80) + lVar21 * 4) = fVar44 + (fVar46 - fVar33) * fVar43;
          fVar43 = (float)MathUtil::sin(fVar34);
          lVar13 = *(long *)(this + 0x80) + lVar21 * 4;
          *(float *)(lVar13 + 4) = fVar28 + (fVar46 - fVar33) * fVar43;
          *(float *)(lVar13 + 8) = fVar34;
          iVar22 = -3;
        }
        else {
          if (iVar22 != -2) {
            VertexAttachment::computeWorldVertices
                      ((VertexAttachment *)param_1,pSVar6,2,4,pVVar2,0,2);
          }
          pfVar14 = *(float **)(this + 0xa0);
          fVar44 = *pfVar14;
          fVar28 = pfVar14[1];
          fVar34 = (float)MathUtil::atan2(pfVar14[3] - fVar28,pfVar14[2] - fVar44);
          fVar43 = (float)MathUtil::cos(fVar34);
          *(float *)(*(long *)(this + 0x80) + lVar21 * 4) = fVar44 + fVar46 * fVar43;
          fVar43 = (float)MathUtil::sin(fVar34);
          lVar13 = *(long *)(this + 0x80) + lVar21 * 4;
          *(float *)(lVar13 + 4) = fVar28 + fVar46 * fVar43;
          *(float *)(lVar13 + 8) = fVar34;
          iVar22 = -2;
        }
      }
      else {
        fVar44 = (float)MathUtil::fmod(fVar46,fVar33);
        iVar24 = 0;
        fVar43 = fVar33 + fVar44;
        if (0.0 <= fVar44) {
          fVar43 = fVar44;
        }
LAB_00cedbbc:
        lVar13 = 0;
        lVar12 = (long)iVar24 * 0x600000000 + -0x400000000;
        lVar10 = ((long)iVar24 << 0x20) + -0x200000000;
        do {
          fVar44 = *(float *)(*(long *)(lVar23 + 0x18) + (long)iVar24 * 4 + lVar13 * 4);
          lVar12 = lVar12 + 0x600000000;
          lVar10 = lVar10 + 0x100000000;
          lVar13 = lVar13 + 1;
        } while (fVar44 < fVar43);
        iVar18 = (int)lVar13;
        if (1 - iVar24 != iVar18) {
          fVar28 = *(float *)(*(long *)(lVar23 + 0x18) + (lVar10 >> 0x1e));
          fVar43 = fVar43 - fVar28;
          fVar44 = fVar44 - fVar28;
        }
        iVar25 = iVar24 + -1 + iVar18;
        if ((iVar22 + 1) - iVar24 != iVar18) {
          if (((uVar15 + 1) - iVar17) - iVar24 == iVar18 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
            VertexAttachment::computeWorldVertices
                      ((VertexAttachment *)param_1,pSVar6,
                       (long)((uVar5 << 0x20) + -0x400000000) >> 0x20,4,pVVar2,0,2);
            VertexAttachment::computeWorldVertices
                      ((VertexAttachment *)param_1,pSVar6,0,4,pVVar2,4,2);
            iVar22 = uVar15 - iVar17;
          }
          else {
            VertexAttachment::computeWorldVertices
                      ((VertexAttachment *)param_1,pSVar6,lVar12 >> 0x20,8,pVVar2,0,2);
            iVar22 = iVar25;
          }
        }
        pfVar14 = *(float **)(this + 0xa0);
        addCurvePosition(fVar43 / fVar44,*pfVar14,pfVar14[1],pfVar14[2],pfVar14[3],pfVar14[4],
                         pfVar14[5],pfVar14[6],pfVar14[7],pVVar1,(int)lVar21,
                         param_3 || uVar7 != 0 && fVar34 < 1e-05);
        iVar24 = iVar25;
      }
      uVar7 = uVar7 + 1;
      lVar21 = lVar21 + 3;
      if (uVar7 == uVar26) {
        return pVVar1;
      }
    } while( true );
  }
  if ((uVar3 & 1) == 0) {
    uVar5 = *(ulong *)(this + 0x90);
    iVar17 = iVar17 + -4;
    uVar26 = (ulong)iVar17;
    *(ulong *)(this + 0x90) = uVar26;
    uVar7 = uVar26;
    if (*(ulong *)(this + 0x98) < uVar26) {
      uVar16 = (uint)((float)uVar26 * 1.75);
      uVar20 = *(undefined8 *)(this + 0xa0);
      if (uVar16 < 9) {
        uVar16 = 8;
      }
      *(long *)(this + 0x98) = (long)(int)uVar16;
      plVar4 = (long *)SpineExtension::getInstance();
      uVar20 = (**(code **)(*plVar4 + 0x20))
                         (plVar4,uVar20,
                          -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar7 = *(ulong *)(this + 0x90);
      *(undefined8 *)(this + 0xa0) = uVar20;
    }
    uVar15 = uVar15 - 1;
    if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
      memset((void *)(*(long *)(this + 0xa0) + uVar5 * 4),0,(uVar7 - uVar5) * 4);
    }
    VertexAttachment::computeWorldVertices((VertexAttachment *)param_1,pSVar6,2,uVar26,pVVar2,0,2);
  }
  else {
    uVar7 = *(ulong *)(this + 0x90);
    iVar17 = iVar17 + 2;
    uVar26 = (ulong)iVar17;
    *(ulong *)(this + 0x90) = uVar26;
    if (*(ulong *)(this + 0x98) < uVar26) {
      uVar16 = (uint)((float)uVar26 * 1.75);
      uVar20 = *(undefined8 *)(this + 0xa0);
      if (uVar16 < 9) {
        uVar16 = 8;
      }
      *(long *)(this + 0x98) = (long)(int)uVar16;
      plVar4 = (long *)SpineExtension::getInstance();
      uVar20 = (**(code **)(*plVar4 + 0x20))
                         (plVar4,uVar20,
                          -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar26 = *(ulong *)(this + 0x90);
      *(undefined8 *)(this + 0xa0) = uVar20;
    }
    if (uVar7 <= uVar26 && uVar26 - uVar7 != 0) {
      memset((void *)(*(long *)(this + 0xa0) + uVar7 * 4),0,(uVar26 - uVar7) * 4);
    }
    uVar7 = (long)((uVar5 << 0x20) + -0x200000000) >> 0x20;
    VertexAttachment::computeWorldVertices((VertexAttachment *)param_1,pSVar6,2,uVar7,pVVar2,0,2);
    VertexAttachment::computeWorldVertices((VertexAttachment *)param_1,pSVar6,0,2,pVVar2,uVar7,2);
    puVar8 = *(undefined4 **)(this + 0xa0);
    *(undefined4 *)
     ((long)puVar8 + (-(uVar5 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar5 & 0xffffffff) << 2)) =
         *puVar8;
    *(undefined4 *)((long)puVar8 + ((long)((uVar5 << 0x20) + 0x100000000) >> 0x1e)) = puVar8[1];
  }
  uVar5 = *(ulong *)(this + 0xb0);
  uVar7 = (ulong)(int)uVar15;
  *(ulong *)(this + 0xb0) = uVar7;
  if (*(ulong *)(this + 0xb8) < uVar7) {
    uVar16 = (uint)((float)uVar7 * 1.75);
    uVar20 = *(undefined8 *)(this + 0xc0);
    if (uVar16 < 9) {
      uVar16 = 8;
    }
    *(long *)(this + 0xb8) = (long)(int)uVar16;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar20 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar20,
                        -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    uVar7 = *(ulong *)(this + 0xb0);
    *(undefined8 *)(this + 0xc0) = uVar20;
  }
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
    memset((void *)(*(long *)(this + 0xc0) + uVar5 * 4),0,(uVar7 - uVar5) * 4);
  }
  puVar9 = *(ulong **)(this + 0xa0);
  local_e0 = *puVar9;
  if ((int)uVar15 < 1) {
    local_110 = 0;
    fVar33 = 0.0;
    fVar43 = 0.0;
    local_f0 = 0;
    fVar44 = 0.0;
    uVar5 = 0;
    fVar46 = 0.0;
    local_120 = (float)(local_e0 >> 0x20);
  }
  else {
    lVar21 = 0;
    lVar23 = 0;
    uVar20 = NEON_fmov(0x3e400000,4);
    uVar35 = NEON_fmov(0x40400000,4);
    uVar37 = NEON_fmov(0x3f400000,4);
    fVar33 = 0.0;
    while( true ) {
      local_110 = *(ulong *)((long)puVar9 + lVar21 + 8);
      local_f0 = *(ulong *)((long)puVar9 + lVar21 + 0x10);
      uVar5 = *(ulong *)((long)puVar9 + lVar21 + 0x18);
      fVar40 = (float)local_110;
      fVar43 = (float)(local_110 >> 0x20);
      fVar44 = (float)(local_f0 >> 0x20);
      fVar28 = (float)local_e0;
      fVar29 = (float)(local_e0 >> 0x20);
      fVar31 = ((fVar28 - (fVar40 + fVar40)) + (float)local_f0) * (float)uVar20;
      fVar32 = ((fVar29 - (fVar43 + fVar43)) + fVar44) * (float)((ulong)uVar20 >> 0x20);
      fVar46 = (float)(uVar5 >> 0x20);
      fVar27 = ((float)uVar5 + ((fVar40 - (float)local_f0) * (float)uVar35 - fVar28)) * 0.09375;
      fVar30 = (fVar46 + ((fVar43 - fVar44) * (float)((ulong)uVar35 >> 0x20) - fVar29)) * 0.09375;
      fVar38 = fVar31 + fVar31 + fVar27;
      fVar39 = fVar32 + fVar32 + fVar30;
      fVar40 = (fVar40 - fVar28) * (float)uVar37 + fVar31 + fVar27 * 0.16666667;
      fVar32 = (fVar43 - fVar29) * (float)((ulong)uVar37 >> 0x20) + fVar32 + fVar30 * 0.16666667;
      fVar28 = (float)MathUtil::sqrt(fVar40 * fVar40 + fVar32 * fVar32);
      fVar40 = fVar38 + fVar40;
      fVar32 = fVar39 + fVar32;
      fVar38 = fVar27 + fVar38;
      fVar39 = fVar30 + fVar39;
      fVar29 = (float)MathUtil::sqrt(fVar40 * fVar40 + fVar32 * fVar32);
      fVar40 = fVar38 + fVar40;
      fVar32 = fVar39 + fVar32;
      fVar31 = (float)MathUtil::sqrt(fVar40 * fVar40 + fVar32 * fVar32);
      fVar40 = fVar27 + fVar38 + fVar40;
      fVar32 = fVar30 + fVar39 + fVar32;
      fVar27 = (float)MathUtil::sqrt(fVar40 * fVar40 + fVar32 * fVar32);
      fVar33 = fVar33 + fVar28 + fVar29 + fVar31 + fVar27;
      *(float *)(*(long *)(this + 0xc0) + lVar23 * 4) = fVar33;
      local_120 = fVar46;
      local_e0 = uVar5;
      if ((ulong)uVar15 - 1 == lVar23) break;
      puVar9 = *(ulong **)(this + 0xa0);
      lVar23 = lVar23 + 1;
      lVar21 = lVar21 + 0x18;
    }
  }
  fVar28 = fVar33;
  if (!param_4) {
    lVar23 = PathAttachment::getLengths(param_1);
    fVar28 = fVar33 / *(float *)(*(long *)(lVar23 + 0x18) + (long)(int)(uVar15 - 1) * 4);
  }
  if ((param_2 - 1U != 0 && 0 < param_2) && (param_5)) {
    lVar23 = *(long *)(this + 0x60);
    uVar7 = (ulong)(uint)param_2 - 1;
    if (uVar7 < 8) {
      lVar21 = 1;
    }
    else {
      uVar15 = param_2 - 1U & 7;
      lVar13 = uVar7 - uVar15;
      lVar21 = lVar13 + 1;
      puVar19 = (undefined8 *)(lVar23 + 0x14);
      do {
        lVar13 = lVar13 + -8;
        puVar19[-1] = CONCAT44(fVar33 * (float)((ulong)puVar19[-1] >> 0x20),
                               fVar33 * (float)puVar19[-1]);
        puVar19[-2] = CONCAT44(fVar33 * (float)((ulong)puVar19[-2] >> 0x20),
                               fVar33 * (float)puVar19[-2]);
        puVar19[1] = CONCAT44(fVar33 * (float)((ulong)puVar19[1] >> 0x20),fVar33 * (float)puVar19[1]
                             );
        *puVar19 = CONCAT44(fVar33 * (float)((ulong)*puVar19 >> 0x20),fVar33 * (float)*puVar19);
        puVar19 = puVar19 + 4;
      } while (lVar13 != 0);
      if (uVar15 == 0) goto LAB_00cedea8;
    }
    lVar13 = (ulong)(uint)param_2 - lVar21;
    pfVar14 = (float *)(lVar23 + lVar21 * 4);
    do {
      lVar13 = lVar13 + -1;
      *pfVar14 = fVar33 * *pfVar14;
      pfVar14 = pfVar14 + 1;
    } while (lVar13 != 0);
  }
LAB_00cedea8:
  if (0 < param_2) {
    fVar34 = fVar34 * fVar28;
    uVar7 = 0;
    lVar21 = (long)iVar17;
    lVar23 = 0;
    iVar24 = 0;
    iVar17 = 0;
    fVar28 = 0.0;
    iVar22 = -1;
    do {
      fVar27 = *(float *)(*(long *)(this + 0x60) + uVar7 * 4);
      fVar34 = fVar34 + fVar27;
      if ((uVar3 & 1) == 0) {
        if (0.0 <= fVar34) {
          fVar38 = fVar34;
          if (fVar34 <= fVar33) goto LAB_00cedf50;
          lVar13 = *(long *)(this + 0xa0);
          fVar29 = *(float *)(lVar13 + (lVar21 + -2) * 4);
          fVar31 = *(float *)(lVar13 + (lVar21 + -1) * 4);
          fVar27 = (float)MathUtil::atan2(fVar31 - *(float *)(lVar13 + (lVar21 + -3) * 4),
                                          fVar29 - *(float *)(lVar13 + (lVar21 + -4) * 4));
          fVar38 = (float)MathUtil::cos(fVar27);
          *(float *)(*(long *)(this + 0x80) + lVar23 * 4) = fVar29 + (fVar34 - fVar33) * fVar38;
          fVar38 = (float)MathUtil::sin(fVar27);
          lVar13 = *(long *)(this + 0x80);
          fVar38 = (fVar34 - fVar33) * fVar38;
        }
        else {
          pfVar14 = *(float **)(this + 0xa0);
          fVar29 = *pfVar14;
          fVar31 = pfVar14[1];
          fVar27 = (float)MathUtil::atan2(pfVar14[3] - fVar31,pfVar14[2] - fVar29);
          fVar38 = (float)MathUtil::cos(fVar27);
          *(float *)(*(long *)(this + 0x80) + lVar23 * 4) = fVar29 + fVar34 * fVar38;
          fVar38 = (float)MathUtil::sin(fVar27);
          lVar13 = *(long *)(this + 0x80);
          fVar38 = fVar34 * fVar38;
        }
        lVar13 = lVar13 + lVar23 * 4;
        *(float *)(lVar13 + 4) = fVar31 + fVar38;
        *(float *)(lVar13 + 8) = fVar27;
      }
      else {
        fVar29 = (float)MathUtil::fmod(fVar34,fVar33);
        iVar17 = 0;
        fVar38 = fVar33 + fVar29;
        if (0.0 <= fVar29) {
          fVar38 = fVar29;
        }
LAB_00cedf50:
        lVar13 = ((long)iVar17 << 0x20) + -0x200000000;
        uVar15 = iVar17 * 6;
        pfVar14 = (float *)(*(long *)(this + 0xc0) + (long)iVar17 * 4);
        iVar17 = iVar17 + -1;
        uVar15 = uVar15 | 1;
        do {
          uVar16 = uVar15;
          fVar29 = *pfVar14;
          lVar13 = lVar13 + 0x100000000;
          iVar17 = iVar17 + 1;
          pfVar14 = pfVar14 + 1;
          uVar15 = uVar16 + 6;
        } while (fVar29 < fVar38);
        if (iVar17 != 0) {
          fVar31 = *(float *)(*(long *)(this + 0xc0) + (lVar13 >> 0x1e));
          fVar38 = fVar38 - fVar31;
          fVar29 = fVar29 - fVar31;
        }
        if (iVar22 != iVar17) {
          lVar13 = *(long *)(this + 0xa0);
          fVar32 = *(float *)(lVar13 + (long)(int)(uVar16 - 1) * 4);
          local_120 = *(float *)(lVar13 + (long)(int)uVar16 * 4);
          fVar31 = *(float *)(lVar13 + (long)(int)(uVar16 + 1) * 4);
          local_110 = (ulong)(uint)fVar31;
          fVar43 = *(float *)(lVar13 + (long)(int)(uVar16 + 2) * 4);
          fVar42 = *(float *)(lVar13 + (long)(int)(uVar16 + 3) * 4);
          fVar44 = *(float *)(lVar13 + (long)(int)(uVar16 + 4) * 4);
          fVar45 = *(float *)(lVar13 + (long)(int)(uVar16 + 5) * 4);
          fVar46 = *(float *)(lVar13 + (long)(int)(uVar16 + 6) * 4);
          fVar40 = ((fVar32 - (fVar31 + fVar31)) + fVar42) * 0.03;
          fVar28 = ((local_120 - (fVar43 + fVar43)) + fVar44) * 0.03;
          fVar36 = (fVar45 + ((fVar31 - fVar42) * 3.0 - fVar32)) * 0.006;
          fVar41 = (fVar46 + ((fVar43 - fVar44) * 3.0 - local_120)) * 0.006;
          fVar30 = (fVar31 - fVar32) * 0.3 + fVar40 + fVar36 * 0.16666667;
          fVar39 = (fVar43 - local_120) * 0.3 + fVar28 + fVar41 * 0.16666667;
          local_f0 = (ulong)(uint)fVar42;
          local_e0 = (ulong)(uint)fVar32;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar28 + fVar28;
          fVar32 = fVar36 + fVar40 + fVar40;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          **(float **)(this + 0x100) = fVar31;
          fVar40 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          *(float *)(*(long *)(this + 0x100) + 4) = fVar31 + fVar40;
          fVar28 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          fVar28 = fVar31 + fVar40 + fVar28;
          *(float *)(*(long *)(this + 0x100) + 8) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          fVar28 = fVar28 + fVar31;
          *(float *)(*(long *)(this + 0x100) + 0xc) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          fVar28 = fVar28 + fVar31;
          *(float *)(*(long *)(this + 0x100) + 0x10) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          fVar28 = fVar28 + fVar31;
          *(float *)(*(long *)(this + 0x100) + 0x14) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          fVar28 = fVar28 + fVar31;
          *(float *)(*(long *)(this + 0x100) + 0x18) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar42 = fVar41 + fVar42;
          fVar32 = fVar36 + fVar32;
          fVar30 = fVar32 + fVar30;
          fVar39 = fVar42 + fVar39;
          fVar28 = fVar28 + fVar31;
          *(float *)(*(long *)(this + 0x100) + 0x1c) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar28 = fVar28 + fVar31;
          fVar30 = fVar36 + fVar32 + fVar30;
          uVar5 = (ulong)(uint)fVar45;
          fVar39 = fVar41 + fVar42 + fVar39;
          *(float *)(*(long *)(this + 0x100) + 0x20) = fVar28;
          fVar31 = (float)MathUtil::sqrt(fVar30 * fVar30 + fVar39 * fVar39);
          fVar28 = fVar28 + fVar31;
          iVar24 = 0;
          *(float *)(*(long *)(this + 0x100) + 0x24) = fVar28;
          iVar22 = iVar17;
        }
        fVar38 = (fVar38 / fVar29) * fVar28;
        lVar13 = ((long)iVar24 << 0x20) + -0x200000000;
        pfVar14 = (float *)(*(long *)(this + 0x100) + (long)iVar24 * 4);
        iVar24 = iVar24 + -1;
        do {
          fVar29 = *pfVar14;
          lVar13 = lVar13 + 0x100000000;
          iVar24 = iVar24 + 1;
          pfVar14 = pfVar14 + 1;
        } while (fVar29 < fVar38);
        if (iVar24 == 0) {
          fVar38 = fVar38 / fVar29;
        }
        else {
          fVar31 = *(float *)(*(long *)(this + 0x100) + (lVar13 >> 0x1e));
          fVar38 = (fVar38 - fVar31) / (fVar29 - fVar31) + (float)iVar24;
        }
        addCurvePosition(fVar38 * 0.1,(float)local_e0,local_120,(float)local_110,fVar43,
                         (float)local_f0,fVar44,(float)uVar5,fVar46,pVVar1,(int)lVar23,
                         param_3 || uVar7 != 0 && fVar27 < 1e-05);
      }
      uVar7 = uVar7 + 1;
      lVar23 = lVar23 + 3;
    } while (uVar7 != (uint)param_2);
  }
  return pVVar1;
}

