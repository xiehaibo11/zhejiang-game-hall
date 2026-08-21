
/* spine::DeformTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void spine::DeformTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  VertexAttachment *this;
  RTTI *this_00;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  ulong uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  Slot *this_01;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  float fVar37;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  undefined8 uVar41;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  
  this_01 = *(Slot **)(*(long *)(param_4 + 0x48) + (long)*(int *)(param_1 + 0x28) * 8);
  uVar10 = (**(code **)(**(long **)(this_01 + 0x10) + 0x20))();
  if ((uVar10 & 1) == 0) {
    return;
  }
  this = (VertexAttachment *)Slot::getAttachment(this_01);
  if (this == (VertexAttachment *)0x0) {
    return;
  }
  this_00 = (RTTI *)(**(code **)(*(long *)this + 0x10))();
  uVar10 = RTTI::instanceOf(this_00,(RTTI *)VertexAttachment::rtti);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(long *)(this + 0x70) != *(long *)(param_1 + 0x70)) {
    return;
  }
  uVar29 = *(ulong *)(this_01 + 0x70);
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x68) + 8);
  iVar1 = 0;
  if (uVar29 != 0) {
    iVar1 = param_7;
  }
  if (**(float **)(param_1 + 0x48) <= param_3) {
LAB_00ce6750:
    *(ulong *)(this_01 + 0x70) = uVar10;
    uVar13 = uVar10;
    if (*(ulong *)(this_01 + 0x78) < uVar10) {
      uVar15 = (uint)((float)uVar10 * 1.75);
      uVar27 = *(undefined8 *)(this_01 + 0x80);
      if (uVar15 < 9) {
        uVar15 = 8;
      }
      *(long *)(this_01 + 0x78) = (long)(int)uVar15;
      plVar11 = (long *)SpineExtension::getInstance();
      uVar27 = (**(code **)(*plVar11 + 0x20))
                         (plVar11,uVar27,
                          -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar13 = *(ulong *)(this_01 + 0x70);
      *(undefined8 *)(this_01 + 0x80) = uVar27;
    }
    if (uVar29 <= uVar13 && uVar13 - uVar29 != 0) {
      memset((void *)(*(long *)(this_01 + 0x80) + uVar29 * 4),0,(uVar13 - uVar29) * 4);
    }
    lVar28 = *(long *)(param_1 + 0x38) + -1;
    if (*(float *)(*(long *)(param_1 + 0x48) + lVar28 * 4) <= param_3) {
      lVar30 = *(long *)(param_1 + 0x68);
      if (param_5 == 1.0) {
        if (iVar1 != 3) {
          memcpy(*(void **)(this_01 + 0x80),*(void **)(lVar30 + lVar28 * 0x20 + 0x18),uVar10 << 2);
          return;
        }
        lVar12 = VertexAttachment::getBones(this);
        if (*(long *)(lVar12 + 8) == 0) {
          lVar12 = VertexAttachment::getVertices(this);
          if (uVar10 != 0) {
            uVar13 = *(ulong *)(lVar12 + 0x18);
            uVar29 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
            uVar17 = *(ulong *)(this_01 + 0x80);
            if (uVar10 < 8) {
              uVar20 = 0;
            }
            else {
              lVar28 = uVar10 * 4;
              uVar20 = 0;
              if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
                 (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
                uVar20 = uVar10 & 0xfffffffffffffff8;
                puVar18 = (undefined8 *)(uVar29 + 0x10);
                puVar23 = (undefined8 *)(uVar13 + 0x10);
                puVar24 = (undefined8 *)(uVar17 + 0x10);
                uVar25 = uVar20;
                do {
                  puVar26 = puVar18 + -1;
                  uVar27 = puVar18[-2];
                  uVar41 = puVar18[1];
                  uVar36 = *puVar18;
                  puVar2 = puVar23 + -1;
                  uVar33 = puVar23[-2];
                  uVar44 = puVar23[1];
                  uVar43 = *puVar23;
                  puVar18 = puVar18 + 4;
                  puVar23 = puVar23 + 4;
                  uVar25 = uVar25 - 8;
                  puVar24[-1] = CONCAT44(((float)((ulong)*puVar26 >> 0x20) -
                                         (float)((ulong)*puVar2 >> 0x20)) +
                                         (float)((ulong)puVar24[-1] >> 0x20),
                                         ((float)*puVar26 - (float)*puVar2) + (float)puVar24[-1]);
                  puVar24[-2] = CONCAT44(((float)((ulong)uVar27 >> 0x20) -
                                         (float)((ulong)uVar33 >> 0x20)) +
                                         (float)((ulong)puVar24[-2] >> 0x20),
                                         ((float)uVar27 - (float)uVar33) + (float)puVar24[-2]);
                  puVar24[1] = CONCAT44(((float)((ulong)uVar41 >> 0x20) -
                                        (float)((ulong)uVar44 >> 0x20)) +
                                        (float)((ulong)puVar24[1] >> 0x20),
                                        ((float)uVar41 - (float)uVar44) + (float)puVar24[1]);
                  *puVar24 = CONCAT44(((float)((ulong)uVar36 >> 0x20) -
                                      (float)((ulong)uVar43 >> 0x20)) +
                                      (float)((ulong)*puVar24 >> 0x20),
                                      ((float)uVar36 - (float)uVar43) + (float)*puVar24);
                  puVar24 = puVar24 + 4;
                } while (uVar25 != 0);
                if (uVar10 == uVar20) {
                  return;
                }
              }
            }
            lVar28 = uVar10 - uVar20;
            lVar30 = uVar20 * 4;
            pfVar14 = (float *)(uVar29 + lVar30);
            pfVar16 = (float *)(uVar13 + lVar30);
            pfVar19 = (float *)(uVar17 + lVar30);
            do {
              lVar28 = lVar28 + -1;
              *pfVar19 = (*pfVar14 - *pfVar16) + *pfVar19;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar19 = pfVar19 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar13 = *(ulong *)(this_01 + 0x80);
          if ((uVar10 < 8) || ((uVar13 < uVar29 + uVar10 * 4 && (uVar29 < uVar13 + uVar10 * 4)))) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar10 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(uVar29 + 0x10);
            puVar23 = (undefined8 *)(uVar13 + 0x10);
            uVar20 = uVar17;
            do {
              puVar24 = puVar18 + -1;
              uVar27 = puVar18[-2];
              uVar36 = puVar18[1];
              uVar33 = *puVar18;
              puVar18 = puVar18 + 4;
              uVar20 = uVar20 - 8;
              puVar23[-1] = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                     (float)((ulong)puVar23[-1] >> 0x20),
                                     (float)*puVar24 + (float)puVar23[-1]);
              puVar23[-2] = CONCAT44((float)((ulong)uVar27 >> 0x20) +
                                     (float)((ulong)puVar23[-2] >> 0x20),
                                     (float)uVar27 + (float)puVar23[-2]);
              puVar23[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) +
                                    (float)((ulong)puVar23[1] >> 0x20),
                                    (float)uVar36 + (float)puVar23[1]);
              *puVar23 = CONCAT44((float)((ulong)uVar33 >> 0x20) + (float)((ulong)*puVar23 >> 0x20),
                                  (float)uVar33 + (float)*puVar23);
              puVar23 = puVar23 + 4;
            } while (uVar20 != 0);
            if (uVar10 == uVar17) {
              return;
            }
          }
          lVar28 = uVar10 - uVar17;
          pfVar14 = (float *)(uVar29 + uVar17 * 4);
          pfVar16 = (float *)(uVar13 + uVar17 * 4);
          do {
            lVar28 = lVar28 + -1;
            *pfVar16 = *pfVar14 + *pfVar16;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar28 != 0);
        }
      }
      else if (iVar1 - 1U < 2) {
        if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar13 = *(ulong *)(this_01 + 0x80);
          if ((uVar10 < 8) || ((uVar13 < uVar29 + uVar10 * 4 && (uVar29 < uVar13 + uVar10 * 4)))) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar10 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(uVar29 + 0x10);
            puVar23 = (undefined8 *)(uVar13 + 0x10);
            uVar20 = uVar17;
            do {
              puVar24 = puVar18 + -1;
              uVar27 = puVar18[-2];
              uVar36 = puVar18[1];
              uVar33 = *puVar18;
              puVar18 = puVar18 + 4;
              uVar20 = uVar20 - 8;
              fVar31 = (float)puVar23[-2];
              fVar32 = (float)((ulong)puVar23[-2] >> 0x20);
              fVar34 = (float)puVar23[-1];
              fVar35 = (float)((ulong)puVar23[-1] >> 0x20);
              fVar37 = (float)*puVar23;
              fVar38 = (float)((ulong)*puVar23 >> 0x20);
              fVar39 = (float)puVar23[1];
              fVar40 = (float)((ulong)puVar23[1] >> 0x20);
              puVar23[-1] = CONCAT44(fVar35 + ((float)((ulong)*puVar24 >> 0x20) - fVar35) * param_5,
                                     fVar34 + ((float)*puVar24 - fVar34) * param_5);
              puVar23[-2] = CONCAT44(fVar32 + ((float)((ulong)uVar27 >> 0x20) - fVar32) * param_5,
                                     fVar31 + ((float)uVar27 - fVar31) * param_5);
              puVar23[1] = CONCAT44(fVar40 + ((float)((ulong)uVar36 >> 0x20) - fVar40) * param_5,
                                    fVar39 + ((float)uVar36 - fVar39) * param_5);
              *puVar23 = CONCAT44(fVar38 + ((float)((ulong)uVar33 >> 0x20) - fVar38) * param_5,
                                  fVar37 + ((float)uVar33 - fVar37) * param_5);
              puVar23 = puVar23 + 4;
            } while (uVar20 != 0);
            if (uVar10 == uVar17) {
              return;
            }
          }
          lVar28 = uVar10 - uVar17;
          pfVar14 = (float *)(uVar29 + uVar17 * 4);
          pfVar16 = (float *)(uVar13 + uVar17 * 4);
          do {
            lVar28 = lVar28 + -1;
            *pfVar16 = *pfVar16 + (*pfVar14 - *pfVar16) * param_5;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar28 != 0);
        }
      }
      else if (iVar1 == 3) {
        lVar12 = VertexAttachment::getBones(this);
        if (*(long *)(lVar12 + 8) == 0) {
          lVar12 = VertexAttachment::getVertices(this);
          if (uVar10 != 0) {
            uVar13 = *(ulong *)(lVar12 + 0x18);
            uVar29 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
            uVar17 = *(ulong *)(this_01 + 0x80);
            if (uVar10 < 8) {
              uVar20 = 0;
            }
            else {
              lVar28 = uVar10 * 4;
              uVar20 = 0;
              if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
                 (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
                uVar20 = uVar10 & 0xfffffffffffffff8;
                puVar18 = (undefined8 *)(uVar29 + 0x10);
                puVar23 = (undefined8 *)(uVar13 + 0x10);
                puVar24 = (undefined8 *)(uVar17 + 0x10);
                uVar25 = uVar20;
                do {
                  puVar26 = puVar18 + -1;
                  uVar27 = puVar18[-2];
                  uVar41 = puVar18[1];
                  uVar36 = *puVar18;
                  puVar2 = puVar23 + -1;
                  uVar33 = puVar23[-2];
                  uVar44 = puVar23[1];
                  uVar43 = *puVar23;
                  puVar18 = puVar18 + 4;
                  puVar23 = puVar23 + 4;
                  uVar25 = uVar25 - 8;
                  puVar24[-1] = CONCAT44((float)((ulong)puVar24[-1] >> 0x20) +
                                         ((float)((ulong)*puVar26 >> 0x20) -
                                         (float)((ulong)*puVar2 >> 0x20)) * param_5,
                                         (float)puVar24[-1] +
                                         ((float)*puVar26 - (float)*puVar2) * param_5);
                  puVar24[-2] = CONCAT44((float)((ulong)puVar24[-2] >> 0x20) +
                                         ((float)((ulong)uVar27 >> 0x20) -
                                         (float)((ulong)uVar33 >> 0x20)) * param_5,
                                         (float)puVar24[-2] +
                                         ((float)uVar27 - (float)uVar33) * param_5);
                  puVar24[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                        ((float)((ulong)uVar41 >> 0x20) -
                                        (float)((ulong)uVar44 >> 0x20)) * param_5,
                                        (float)puVar24[1] +
                                        ((float)uVar41 - (float)uVar44) * param_5);
                  *puVar24 = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                      ((float)((ulong)uVar36 >> 0x20) -
                                      (float)((ulong)uVar43 >> 0x20)) * param_5,
                                      (float)*puVar24 + ((float)uVar36 - (float)uVar43) * param_5);
                  puVar24 = puVar24 + 4;
                } while (uVar25 != 0);
                if (uVar10 == uVar20) {
                  return;
                }
              }
            }
            lVar28 = uVar10 - uVar20;
            lVar30 = uVar20 * 4;
            pfVar14 = (float *)(uVar29 + lVar30);
            pfVar16 = (float *)(uVar13 + lVar30);
            pfVar19 = (float *)(uVar17 + lVar30);
            do {
              lVar28 = lVar28 + -1;
              *pfVar19 = *pfVar19 + (*pfVar14 - *pfVar16) * param_5;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar19 = pfVar19 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar13 = *(ulong *)(this_01 + 0x80);
          if ((uVar10 < 8) || ((uVar13 < uVar29 + uVar10 * 4 && (uVar29 < uVar13 + uVar10 * 4)))) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar10 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(uVar29 + 0x10);
            puVar23 = (undefined8 *)(uVar13 + 0x10);
            uVar20 = uVar17;
            do {
              puVar24 = puVar18 + -1;
              uVar27 = puVar18[-2];
              uVar36 = puVar18[1];
              uVar33 = *puVar18;
              puVar18 = puVar18 + 4;
              uVar20 = uVar20 - 8;
              puVar23[-1] = CONCAT44((float)((ulong)*puVar24 >> 0x20) * param_5 +
                                     (float)((ulong)puVar23[-1] >> 0x20),
                                     (float)*puVar24 * param_5 + (float)puVar23[-1]);
              puVar23[-2] = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_5 +
                                     (float)((ulong)puVar23[-2] >> 0x20),
                                     (float)uVar27 * param_5 + (float)puVar23[-2]);
              puVar23[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_5 +
                                    (float)((ulong)puVar23[1] >> 0x20),
                                    (float)uVar36 * param_5 + (float)puVar23[1]);
              *puVar23 = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_5 +
                                  (float)((ulong)*puVar23 >> 0x20),
                                  (float)uVar33 * param_5 + (float)*puVar23);
              puVar23 = puVar23 + 4;
            } while (uVar20 != 0);
            if (uVar10 == uVar17) {
              return;
            }
          }
          lVar28 = uVar10 - uVar17;
          pfVar14 = (float *)(uVar29 + uVar17 * 4);
          pfVar16 = (float *)(uVar13 + uVar17 * 4);
          do {
            lVar28 = lVar28 + -1;
            *pfVar16 = *pfVar14 * param_5 + *pfVar16;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar28 != 0);
        }
      }
      else if (iVar1 == 0) {
        lVar12 = VertexAttachment::getBones(this);
        if (*(long *)(lVar12 + 8) == 0) {
          lVar12 = VertexAttachment::getVertices(this);
          if (uVar10 != 0) {
            uVar29 = *(ulong *)(lVar12 + 0x18);
            uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
            uVar17 = *(ulong *)(this_01 + 0x80);
            if (uVar10 < 8) {
              uVar20 = 0;
            }
            else {
              lVar28 = uVar10 * 4;
              uVar20 = 0;
              if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
                 (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
                uVar20 = uVar10 & 0xfffffffffffffff8;
                puVar18 = (undefined8 *)(uVar29 + 0x10);
                puVar23 = (undefined8 *)(uVar13 + 0x10);
                puVar24 = (undefined8 *)(uVar17 + 0x10);
                uVar25 = uVar20;
                do {
                  puVar26 = puVar18 + -2;
                  puVar2 = puVar18 + -1;
                  puVar3 = puVar18 + 1;
                  uVar27 = *puVar18;
                  puVar4 = puVar23 + -1;
                  uVar33 = puVar23[-2];
                  uVar41 = puVar23[1];
                  uVar36 = *puVar23;
                  puVar18 = puVar18 + 4;
                  puVar23 = puVar23 + 4;
                  uVar25 = uVar25 - 8;
                  fVar31 = (float)*puVar26;
                  fVar32 = (float)((ulong)*puVar26 >> 0x20);
                  fVar34 = (float)*puVar2;
                  fVar35 = (float)((ulong)*puVar2 >> 0x20);
                  fVar37 = (float)uVar27;
                  fVar38 = (float)((ulong)uVar27 >> 0x20);
                  fVar39 = (float)*puVar3;
                  fVar40 = (float)((ulong)*puVar3 >> 0x20);
                  puVar24[-1] = CONCAT44(fVar35 + ((float)((ulong)*puVar4 >> 0x20) - fVar35) *
                                                  param_5,
                                         fVar34 + ((float)*puVar4 - fVar34) * param_5);
                  puVar24[-2] = CONCAT44(fVar32 + ((float)((ulong)uVar33 >> 0x20) - fVar32) *
                                                  param_5,
                                         fVar31 + ((float)uVar33 - fVar31) * param_5);
                  puVar24[1] = CONCAT44(fVar40 + ((float)((ulong)uVar41 >> 0x20) - fVar40) * param_5
                                        ,fVar39 + ((float)uVar41 - fVar39) * param_5);
                  *puVar24 = CONCAT44(fVar38 + ((float)((ulong)uVar36 >> 0x20) - fVar38) * param_5,
                                      fVar37 + ((float)uVar36 - fVar37) * param_5);
                  puVar24 = puVar24 + 4;
                } while (uVar25 != 0);
                if (uVar10 == uVar20) {
                  return;
                }
              }
            }
            lVar28 = uVar10 - uVar20;
            lVar30 = uVar20 * 4;
            pfVar14 = (float *)(uVar29 + lVar30);
            pfVar16 = (float *)(uVar13 + lVar30);
            pfVar19 = (float *)(uVar17 + lVar30);
            do {
              lVar28 = lVar28 + -1;
              *pfVar19 = *pfVar14 + (*pfVar16 - *pfVar14) * param_5;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar19 = pfVar19 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar13 = *(ulong *)(this_01 + 0x80);
          if ((uVar10 < 8) || ((uVar13 < uVar29 + uVar10 * 4 && (uVar29 < uVar13 + uVar10 * 4)))) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar10 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(uVar29 + 0x10);
            puVar23 = (undefined8 *)(uVar13 + 0x10);
            uVar20 = uVar17;
            do {
              puVar24 = puVar18 + -1;
              uVar27 = puVar18[-2];
              uVar36 = puVar18[1];
              uVar33 = *puVar18;
              puVar18 = puVar18 + 4;
              uVar20 = uVar20 - 8;
              puVar23[-1] = CONCAT44((float)((ulong)*puVar24 >> 0x20) * param_5,
                                     (float)*puVar24 * param_5);
              puVar23[-2] = CONCAT44((float)((ulong)uVar27 >> 0x20) * param_5,
                                     (float)uVar27 * param_5);
              puVar23[1] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_5,(float)uVar36 * param_5
                                   );
              *puVar23 = CONCAT44((float)((ulong)uVar33 >> 0x20) * param_5,(float)uVar33 * param_5);
              puVar23 = puVar23 + 4;
            } while (uVar20 != 0);
            if (uVar10 == uVar17) {
              return;
            }
          }
          lVar28 = uVar10 - uVar17;
          pfVar14 = (float *)(uVar29 + uVar17 * 4);
          pfVar16 = (float *)(uVar13 + uVar17 * 4);
          do {
            lVar28 = lVar28 + -1;
            *pfVar16 = *pfVar14 * param_5;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar28 != 0);
        }
      }
    }
    else {
      iVar9 = Animation::binarySearch((Vector *)(param_1 + 0x30),param_3);
      lVar28 = (long)iVar9;
      uVar29 = lVar28 - 1;
      lVar30 = *(long *)(param_1 + 0x68);
      fVar31 = *(float *)(*(long *)(param_1 + 0x48) + (long)iVar9 * 4);
      fVar31 = (float)CurveTimeline::getCurvePercent
                                (param_1,uVar29,
                                 1.0 - (param_3 - fVar31) /
                                       (*(float *)(*(long *)(param_1 + 0x48) + uVar29 * 4) - fVar31)
                                );
      if (param_5 == 1.0) {
        if (iVar1 == 3) {
          lVar12 = VertexAttachment::getBones(this);
          if (*(long *)(lVar12 + 8) == 0) {
            lVar12 = VertexAttachment::getVertices(this);
            if (uVar10 != 0) {
              uVar17 = *(ulong *)(lVar12 + 0x18);
              uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
              uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
              uVar20 = *(ulong *)(this_01 + 0x80);
              if (uVar10 < 8) {
                uVar22 = 0;
              }
              else {
                lVar28 = uVar10 * 4;
                uVar25 = uVar20 + lVar28;
                uVar22 = 0;
                if (((uVar29 + lVar28 <= uVar20 || uVar25 <= uVar29) &&
                    (uVar13 + lVar28 <= uVar20 || uVar25 <= uVar13)) &&
                   (uVar17 + lVar28 <= uVar20 || uVar25 <= uVar17)) {
                  uVar22 = uVar10 & 0xfffffffffffffff8;
                  puVar18 = (undefined8 *)(uVar29 + 0x10);
                  puVar23 = (undefined8 *)(uVar13 + 0x10);
                  puVar24 = (undefined8 *)(uVar17 + 0x10);
                  puVar26 = (undefined8 *)(uVar20 + 0x10);
                  uVar25 = uVar22;
                  do {
                    puVar2 = puVar18 + -2;
                    puVar3 = puVar18 + -1;
                    puVar5 = puVar18 + 1;
                    uVar41 = *puVar18;
                    puVar4 = puVar23 + -1;
                    uVar27 = puVar23[-2];
                    uVar44 = puVar23[1];
                    uVar43 = *puVar23;
                    puVar18 = puVar18 + 4;
                    puVar23 = puVar23 + 4;
                    uVar25 = uVar25 - 8;
                    fVar32 = (float)*puVar2;
                    fVar34 = (float)((ulong)*puVar2 >> 0x20);
                    fVar35 = (float)*puVar3;
                    fVar37 = (float)((ulong)*puVar3 >> 0x20);
                    puVar2 = puVar24 + -1;
                    uVar50 = puVar24[-2];
                    uVar36 = puVar24[1];
                    uVar33 = *puVar24;
                    fVar38 = (float)uVar41;
                    fVar39 = (float)((ulong)uVar41 >> 0x20);
                    fVar40 = (float)*puVar5;
                    fVar42 = (float)((ulong)*puVar5 >> 0x20);
                    puVar24 = puVar24 + 4;
                    puVar26[-1] = CONCAT44((float)((ulong)puVar26[-1] >> 0x20) +
                                           ((fVar37 + fVar31 * ((float)((ulong)*puVar4 >> 0x20) -
                                                               fVar37)) -
                                           (float)((ulong)*puVar2 >> 0x20)),
                                           (float)puVar26[-1] +
                                           ((fVar35 + fVar31 * ((float)*puVar4 - fVar35)) -
                                           (float)*puVar2));
                    puVar26[-2] = CONCAT44((float)((ulong)puVar26[-2] >> 0x20) +
                                           ((fVar34 + fVar31 * ((float)((ulong)uVar27 >> 0x20) -
                                                               fVar34)) -
                                           (float)((ulong)uVar50 >> 0x20)),
                                           (float)puVar26[-2] +
                                           ((fVar32 + fVar31 * ((float)uVar27 - fVar32)) -
                                           (float)uVar50));
                    puVar26[1] = CONCAT44((float)((ulong)puVar26[1] >> 0x20) +
                                          ((fVar42 + fVar31 * ((float)((ulong)uVar44 >> 0x20) -
                                                              fVar42)) -
                                          (float)((ulong)uVar36 >> 0x20)),
                                          (float)puVar26[1] +
                                          ((fVar40 + fVar31 * ((float)uVar44 - fVar40)) -
                                          (float)uVar36));
                    *puVar26 = CONCAT44((float)((ulong)*puVar26 >> 0x20) +
                                        ((fVar39 + fVar31 * ((float)((ulong)uVar43 >> 0x20) - fVar39
                                                            )) - (float)((ulong)uVar33 >> 0x20)),
                                        (float)*puVar26 +
                                        ((fVar38 + fVar31 * ((float)uVar43 - fVar38)) -
                                        (float)uVar33));
                    puVar26 = puVar26 + 4;
                  } while (uVar25 != 0);
                  if (uVar10 == uVar22) {
                    return;
                  }
                }
              }
              lVar28 = uVar10 - uVar22;
              lVar30 = uVar22 * 4;
              pfVar14 = (float *)(uVar29 + lVar30);
              pfVar16 = (float *)(uVar13 + lVar30);
              pfVar19 = (float *)(uVar17 + lVar30);
              pfVar21 = (float *)(uVar20 + lVar30);
              do {
                lVar28 = lVar28 + -1;
                *pfVar21 = *pfVar21 + ((*pfVar14 + fVar31 * (*pfVar16 - *pfVar14)) - *pfVar19);
                pfVar14 = pfVar14 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar21 = pfVar21 + 1;
              } while (lVar28 != 0);
            }
          }
          else if (uVar10 != 0) {
            uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
            uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
            uVar17 = *(ulong *)(this_01 + 0x80);
            if (uVar10 < 8) {
              uVar20 = 0;
            }
            else {
              lVar28 = uVar10 * 4;
              uVar20 = 0;
              if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
                 (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
                uVar20 = uVar10 & 0xfffffffffffffff8;
                puVar18 = (undefined8 *)(uVar29 + 0x10);
                puVar23 = (undefined8 *)(uVar13 + 0x10);
                puVar24 = (undefined8 *)(uVar17 + 0x10);
                uVar25 = uVar20;
                do {
                  puVar26 = puVar18 + -2;
                  puVar2 = puVar18 + -1;
                  puVar4 = puVar18 + 1;
                  uVar33 = *puVar18;
                  puVar3 = puVar23 + -1;
                  uVar27 = puVar23[-2];
                  uVar41 = puVar23[1];
                  uVar36 = *puVar23;
                  puVar18 = puVar18 + 4;
                  puVar23 = puVar23 + 4;
                  uVar25 = uVar25 - 8;
                  fVar32 = (float)*puVar26;
                  fVar34 = (float)((ulong)*puVar26 >> 0x20);
                  fVar35 = (float)*puVar2;
                  fVar37 = (float)((ulong)*puVar2 >> 0x20);
                  fVar38 = (float)uVar33;
                  fVar39 = (float)((ulong)uVar33 >> 0x20);
                  fVar40 = (float)*puVar4;
                  fVar42 = (float)((ulong)*puVar4 >> 0x20);
                  puVar24[-1] = CONCAT44((float)((ulong)puVar24[-1] >> 0x20) +
                                         fVar37 + fVar31 * ((float)((ulong)*puVar3 >> 0x20) - fVar37
                                                           ),
                                         (float)puVar24[-1] +
                                         fVar35 + fVar31 * ((float)*puVar3 - fVar35));
                  puVar24[-2] = CONCAT44((float)((ulong)puVar24[-2] >> 0x20) +
                                         fVar34 + fVar31 * ((float)((ulong)uVar27 >> 0x20) - fVar34)
                                         ,(float)puVar24[-2] +
                                          fVar32 + fVar31 * ((float)uVar27 - fVar32));
                  puVar24[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                        fVar42 + fVar31 * ((float)((ulong)uVar41 >> 0x20) - fVar42),
                                        (float)puVar24[1] +
                                        fVar40 + fVar31 * ((float)uVar41 - fVar40));
                  *puVar24 = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                      fVar39 + fVar31 * ((float)((ulong)uVar36 >> 0x20) - fVar39),
                                      (float)*puVar24 + fVar38 + fVar31 * ((float)uVar36 - fVar38));
                  puVar24 = puVar24 + 4;
                } while (uVar25 != 0);
                if (uVar10 == uVar20) {
                  return;
                }
              }
            }
            lVar28 = uVar10 - uVar20;
            lVar30 = uVar20 * 4;
            pfVar14 = (float *)(uVar29 + lVar30);
            pfVar16 = (float *)(uVar13 + lVar30);
            pfVar19 = (float *)(uVar17 + lVar30);
            do {
              lVar28 = lVar28 + -1;
              *pfVar19 = *pfVar19 + *pfVar14 + fVar31 * (*pfVar16 - *pfVar14);
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar19 = pfVar19 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
          uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar17 = *(ulong *)(this_01 + 0x80);
          if (uVar10 < 8) {
            uVar20 = 0;
          }
          else {
            lVar28 = uVar10 * 4;
            uVar20 = 0;
            if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
               (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
              uVar20 = uVar10 & 0xfffffffffffffff8;
              puVar18 = (undefined8 *)(uVar29 + 0x10);
              puVar23 = (undefined8 *)(uVar13 + 0x10);
              puVar24 = (undefined8 *)(uVar17 + 0x10);
              uVar25 = uVar20;
              do {
                puVar26 = puVar18 + -2;
                puVar2 = puVar18 + -1;
                puVar3 = puVar18 + 1;
                uVar27 = *puVar18;
                puVar4 = puVar23 + -1;
                uVar33 = puVar23[-2];
                uVar41 = puVar23[1];
                uVar36 = *puVar23;
                puVar18 = puVar18 + 4;
                puVar23 = puVar23 + 4;
                uVar25 = uVar25 - 8;
                fVar32 = (float)*puVar26;
                fVar34 = (float)((ulong)*puVar26 >> 0x20);
                fVar35 = (float)*puVar2;
                fVar37 = (float)((ulong)*puVar2 >> 0x20);
                fVar38 = (float)uVar27;
                fVar39 = (float)((ulong)uVar27 >> 0x20);
                fVar40 = (float)*puVar3;
                fVar42 = (float)((ulong)*puVar3 >> 0x20);
                puVar24[-1] = CONCAT44(fVar37 + fVar31 * ((float)((ulong)*puVar4 >> 0x20) - fVar37),
                                       fVar35 + fVar31 * ((float)*puVar4 - fVar35));
                puVar24[-2] = CONCAT44(fVar34 + fVar31 * ((float)((ulong)uVar33 >> 0x20) - fVar34),
                                       fVar32 + fVar31 * ((float)uVar33 - fVar32));
                puVar24[1] = CONCAT44(fVar42 + fVar31 * ((float)((ulong)uVar41 >> 0x20) - fVar42),
                                      fVar40 + fVar31 * ((float)uVar41 - fVar40));
                *puVar24 = CONCAT44(fVar39 + fVar31 * ((float)((ulong)uVar36 >> 0x20) - fVar39),
                                    fVar38 + fVar31 * ((float)uVar36 - fVar38));
                puVar24 = puVar24 + 4;
              } while (uVar25 != 0);
              if (uVar10 == uVar20) {
                return;
              }
            }
          }
          lVar28 = uVar10 - uVar20;
          lVar30 = uVar20 * 4;
          pfVar14 = (float *)(uVar29 + lVar30);
          pfVar16 = (float *)(uVar13 + lVar30);
          pfVar19 = (float *)(uVar17 + lVar30);
          do {
            lVar28 = lVar28 + -1;
            *pfVar19 = *pfVar14 + fVar31 * (*pfVar16 - *pfVar14);
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar28 != 0);
        }
      }
      else if (iVar1 - 1U < 2) {
        if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
          uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar17 = *(ulong *)(this_01 + 0x80);
          if (uVar10 < 8) {
            uVar20 = 0;
          }
          else {
            lVar28 = uVar10 * 4;
            uVar20 = 0;
            if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
               (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
              uVar20 = uVar10 & 0xfffffffffffffff8;
              puVar18 = (undefined8 *)(uVar29 + 0x10);
              puVar23 = (undefined8 *)(uVar13 + 0x10);
              puVar24 = (undefined8 *)(uVar17 + 0x10);
              uVar25 = uVar20;
              do {
                puVar26 = puVar18 + -2;
                puVar2 = puVar18 + -1;
                puVar4 = puVar18 + 1;
                uVar33 = *puVar18;
                puVar3 = puVar23 + -1;
                uVar27 = puVar23[-2];
                uVar41 = puVar23[1];
                uVar36 = *puVar23;
                puVar18 = puVar18 + 4;
                puVar23 = puVar23 + 4;
                uVar25 = uVar25 - 8;
                fVar32 = (float)*puVar26;
                fVar34 = (float)((ulong)*puVar26 >> 0x20);
                fVar35 = (float)*puVar2;
                fVar37 = (float)((ulong)*puVar2 >> 0x20);
                fVar45 = (float)uVar33;
                fVar46 = (float)((ulong)uVar33 >> 0x20);
                fVar47 = (float)*puVar4;
                fVar48 = (float)((ulong)*puVar4 >> 0x20);
                fVar38 = (float)puVar24[-2];
                fVar39 = (float)((ulong)puVar24[-2] >> 0x20);
                fVar40 = (float)puVar24[-1];
                fVar42 = (float)((ulong)puVar24[-1] >> 0x20);
                fVar49 = (float)*puVar24;
                fVar51 = (float)((ulong)*puVar24 >> 0x20);
                fVar52 = (float)puVar24[1];
                fVar53 = (float)((ulong)puVar24[1] >> 0x20);
                puVar24[-1] = CONCAT44(fVar42 + ((fVar37 + fVar31 * ((float)((ulong)*puVar3 >> 0x20)
                                                                    - fVar37)) - fVar42) * param_5,
                                       fVar40 + ((fVar35 + fVar31 * ((float)*puVar3 - fVar35)) -
                                                fVar40) * param_5);
                puVar24[-2] = CONCAT44(fVar39 + ((fVar34 + fVar31 * ((float)((ulong)uVar27 >> 0x20)
                                                                    - fVar34)) - fVar39) * param_5,
                                       fVar38 + ((fVar32 + fVar31 * ((float)uVar27 - fVar32)) -
                                                fVar38) * param_5);
                puVar24[1] = CONCAT44(fVar53 + ((fVar48 + fVar31 * ((float)((ulong)uVar41 >> 0x20) -
                                                                   fVar48)) - fVar53) * param_5,
                                      fVar52 + ((fVar47 + fVar31 * ((float)uVar41 - fVar47)) -
                                               fVar52) * param_5);
                *puVar24 = CONCAT44(fVar51 + ((fVar46 + fVar31 * ((float)((ulong)uVar36 >> 0x20) -
                                                                 fVar46)) - fVar51) * param_5,
                                    fVar49 + ((fVar45 + fVar31 * ((float)uVar36 - fVar45)) - fVar49)
                                             * param_5);
                puVar24 = puVar24 + 4;
              } while (uVar25 != 0);
              if (uVar10 == uVar20) {
                return;
              }
            }
          }
          lVar28 = uVar10 - uVar20;
          lVar30 = uVar20 * 4;
          pfVar14 = (float *)(uVar29 + lVar30);
          pfVar16 = (float *)(uVar13 + lVar30);
          pfVar19 = (float *)(uVar17 + lVar30);
          do {
            lVar28 = lVar28 + -1;
            *pfVar19 = *pfVar19 + ((*pfVar14 + fVar31 * (*pfVar16 - *pfVar14)) - *pfVar19) * param_5
            ;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar28 != 0);
        }
      }
      else if (iVar1 == 3) {
        lVar12 = VertexAttachment::getBones(this);
        if (*(long *)(lVar12 + 8) == 0) {
          lVar12 = VertexAttachment::getVertices(this);
          if (uVar10 != 0) {
            uVar17 = *(ulong *)(lVar12 + 0x18);
            uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
            uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
            uVar20 = *(ulong *)(this_01 + 0x80);
            if (uVar10 < 8) {
              uVar22 = 0;
            }
            else {
              lVar28 = uVar10 * 4;
              uVar25 = uVar20 + lVar28;
              uVar22 = 0;
              if (((uVar29 + lVar28 <= uVar20 || uVar25 <= uVar29) &&
                  (uVar13 + lVar28 <= uVar20 || uVar25 <= uVar13)) &&
                 (uVar17 + lVar28 <= uVar20 || uVar25 <= uVar17)) {
                uVar22 = uVar10 & 0xfffffffffffffff8;
                puVar18 = (undefined8 *)(uVar29 + 0x10);
                puVar23 = (undefined8 *)(uVar13 + 0x10);
                puVar24 = (undefined8 *)(uVar17 + 0x10);
                puVar26 = (undefined8 *)(uVar20 + 0x10);
                uVar25 = uVar22;
                do {
                  puVar2 = puVar18 + -2;
                  puVar3 = puVar18 + -1;
                  puVar5 = puVar18 + 1;
                  uVar41 = *puVar18;
                  puVar4 = puVar23 + -1;
                  uVar27 = puVar23[-2];
                  uVar44 = puVar23[1];
                  uVar43 = *puVar23;
                  puVar18 = puVar18 + 4;
                  puVar23 = puVar23 + 4;
                  uVar25 = uVar25 - 8;
                  fVar32 = (float)*puVar2;
                  fVar34 = (float)((ulong)*puVar2 >> 0x20);
                  fVar35 = (float)*puVar3;
                  fVar37 = (float)((ulong)*puVar3 >> 0x20);
                  puVar2 = puVar24 + -1;
                  uVar50 = puVar24[-2];
                  uVar36 = puVar24[1];
                  uVar33 = *puVar24;
                  fVar38 = (float)uVar41;
                  fVar39 = (float)((ulong)uVar41 >> 0x20);
                  fVar40 = (float)*puVar5;
                  fVar42 = (float)((ulong)*puVar5 >> 0x20);
                  puVar24 = puVar24 + 4;
                  puVar26[-1] = CONCAT44((float)((ulong)puVar26[-1] >> 0x20) +
                                         ((fVar37 + fVar31 * ((float)((ulong)*puVar4 >> 0x20) -
                                                             fVar37)) -
                                         (float)((ulong)*puVar2 >> 0x20)) * param_5,
                                         (float)puVar26[-1] +
                                         ((fVar35 + fVar31 * ((float)*puVar4 - fVar35)) -
                                         (float)*puVar2) * param_5);
                  puVar26[-2] = CONCAT44((float)((ulong)puVar26[-2] >> 0x20) +
                                         ((fVar34 + fVar31 * ((float)((ulong)uVar27 >> 0x20) -
                                                             fVar34)) -
                                         (float)((ulong)uVar50 >> 0x20)) * param_5,
                                         (float)puVar26[-2] +
                                         ((fVar32 + fVar31 * ((float)uVar27 - fVar32)) -
                                         (float)uVar50) * param_5);
                  puVar26[1] = CONCAT44((float)((ulong)puVar26[1] >> 0x20) +
                                        ((fVar42 + fVar31 * ((float)((ulong)uVar44 >> 0x20) - fVar42
                                                            )) - (float)((ulong)uVar36 >> 0x20)) *
                                        param_5,(float)puVar26[1] +
                                                ((fVar40 + fVar31 * ((float)uVar44 - fVar40)) -
                                                (float)uVar36) * param_5);
                  *puVar26 = CONCAT44((float)((ulong)*puVar26 >> 0x20) +
                                      ((fVar39 + fVar31 * ((float)((ulong)uVar43 >> 0x20) - fVar39))
                                      - (float)((ulong)uVar33 >> 0x20)) * param_5,
                                      (float)*puVar26 +
                                      ((fVar38 + fVar31 * ((float)uVar43 - fVar38)) - (float)uVar33)
                                      * param_5);
                  puVar26 = puVar26 + 4;
                } while (uVar25 != 0);
                if (uVar10 == uVar22) {
                  return;
                }
              }
            }
            lVar28 = uVar10 - uVar22;
            lVar30 = uVar22 * 4;
            pfVar14 = (float *)(uVar29 + lVar30);
            pfVar16 = (float *)(uVar13 + lVar30);
            pfVar19 = (float *)(uVar17 + lVar30);
            pfVar21 = (float *)(uVar20 + lVar30);
            do {
              lVar28 = lVar28 + -1;
              *pfVar21 = *pfVar21 +
                         ((*pfVar14 + fVar31 * (*pfVar16 - *pfVar14)) - *pfVar19) * param_5;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar19 = pfVar19 + 1;
              pfVar21 = pfVar21 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
          uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar17 = *(ulong *)(this_01 + 0x80);
          if (uVar10 < 8) {
            uVar20 = 0;
          }
          else {
            lVar28 = uVar10 * 4;
            uVar20 = 0;
            if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
               (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
              uVar20 = uVar10 & 0xfffffffffffffff8;
              puVar18 = (undefined8 *)(uVar29 + 0x10);
              puVar23 = (undefined8 *)(uVar13 + 0x10);
              puVar24 = (undefined8 *)(uVar17 + 0x10);
              uVar25 = uVar20;
              do {
                puVar26 = puVar18 + -2;
                puVar2 = puVar18 + -1;
                puVar4 = puVar18 + 1;
                uVar33 = *puVar18;
                puVar3 = puVar23 + -1;
                uVar27 = puVar23[-2];
                uVar41 = puVar23[1];
                uVar36 = *puVar23;
                puVar18 = puVar18 + 4;
                puVar23 = puVar23 + 4;
                uVar25 = uVar25 - 8;
                fVar32 = (float)*puVar26;
                fVar34 = (float)((ulong)*puVar26 >> 0x20);
                fVar35 = (float)*puVar2;
                fVar37 = (float)((ulong)*puVar2 >> 0x20);
                fVar38 = (float)uVar33;
                fVar39 = (float)((ulong)uVar33 >> 0x20);
                fVar40 = (float)*puVar4;
                fVar42 = (float)((ulong)*puVar4 >> 0x20);
                puVar24[-1] = CONCAT44((float)((ulong)puVar24[-1] >> 0x20) +
                                       (fVar37 + fVar31 * ((float)((ulong)*puVar3 >> 0x20) - fVar37)
                                       ) * param_5,
                                       (float)puVar24[-1] +
                                       (fVar35 + fVar31 * ((float)*puVar3 - fVar35)) * param_5);
                puVar24[-2] = CONCAT44((float)((ulong)puVar24[-2] >> 0x20) +
                                       (fVar34 + fVar31 * ((float)((ulong)uVar27 >> 0x20) - fVar34))
                                       * param_5,
                                       (float)puVar24[-2] +
                                       (fVar32 + fVar31 * ((float)uVar27 - fVar32)) * param_5);
                puVar24[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                      (fVar42 + fVar31 * ((float)((ulong)uVar41 >> 0x20) - fVar42))
                                      * param_5,
                                      (float)puVar24[1] +
                                      (fVar40 + fVar31 * ((float)uVar41 - fVar40)) * param_5);
                *puVar24 = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                    (fVar39 + fVar31 * ((float)((ulong)uVar36 >> 0x20) - fVar39)) *
                                    param_5,(float)*puVar24 +
                                            (fVar38 + fVar31 * ((float)uVar36 - fVar38)) * param_5);
                puVar24 = puVar24 + 4;
              } while (uVar25 != 0);
              if (uVar10 == uVar20) {
                return;
              }
            }
          }
          lVar28 = uVar10 - uVar20;
          lVar30 = uVar20 * 4;
          pfVar14 = (float *)(uVar29 + lVar30);
          pfVar16 = (float *)(uVar13 + lVar30);
          pfVar19 = (float *)(uVar17 + lVar30);
          do {
            lVar28 = lVar28 + -1;
            *pfVar19 = *pfVar19 + (*pfVar14 + fVar31 * (*pfVar16 - *pfVar14)) * param_5;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar28 != 0);
        }
      }
      else if (iVar1 == 0) {
        lVar12 = VertexAttachment::getBones(this);
        if (*(long *)(lVar12 + 8) == 0) {
          lVar12 = VertexAttachment::getVertices(this);
          if (uVar10 != 0) {
            uVar13 = *(ulong *)(lVar12 + 0x18);
            uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
            uVar17 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
            uVar20 = *(ulong *)(this_01 + 0x80);
            if (uVar10 < 8) {
              uVar22 = 0;
            }
            else {
              lVar28 = uVar10 * 4;
              uVar25 = uVar20 + lVar28;
              uVar22 = 0;
              if (((uVar29 + lVar28 <= uVar20 || uVar25 <= uVar29) &&
                  (uVar13 + lVar28 <= uVar20 || uVar25 <= uVar13)) &&
                 (uVar17 + lVar28 <= uVar20 || uVar25 <= uVar17)) {
                uVar22 = uVar10 & 0xfffffffffffffff8;
                puVar18 = (undefined8 *)(uVar29 + 0x10);
                puVar23 = (undefined8 *)(uVar13 + 0x10);
                puVar24 = (undefined8 *)(uVar17 + 0x10);
                puVar26 = (undefined8 *)(uVar20 + 0x10);
                uVar25 = uVar22;
                do {
                  puVar2 = puVar18 + -2;
                  puVar4 = puVar18 + -1;
                  puVar5 = puVar18 + 1;
                  uVar27 = *puVar18;
                  puVar8 = puVar24 + -1;
                  uVar36 = puVar24[-2];
                  uVar43 = puVar24[1];
                  uVar41 = *puVar24;
                  puVar3 = puVar23 + -2;
                  puVar6 = puVar23 + -1;
                  puVar7 = puVar23 + 1;
                  uVar33 = *puVar23;
                  puVar18 = puVar18 + 4;
                  puVar23 = puVar23 + 4;
                  fVar32 = (float)*puVar2;
                  fVar34 = (float)((ulong)*puVar2 >> 0x20);
                  fVar35 = (float)*puVar4;
                  fVar37 = (float)((ulong)*puVar4 >> 0x20);
                  fVar38 = (float)uVar27;
                  fVar39 = (float)((ulong)uVar27 >> 0x20);
                  fVar40 = (float)*puVar5;
                  fVar42 = (float)((ulong)*puVar5 >> 0x20);
                  fVar45 = (float)*puVar3;
                  fVar46 = (float)((ulong)*puVar3 >> 0x20);
                  fVar47 = (float)*puVar6;
                  fVar48 = (float)((ulong)*puVar6 >> 0x20);
                  fVar49 = (float)uVar33;
                  fVar51 = (float)((ulong)uVar33 >> 0x20);
                  fVar52 = (float)*puVar7;
                  fVar53 = (float)((ulong)*puVar7 >> 0x20);
                  puVar24 = puVar24 + 4;
                  uVar25 = uVar25 - 8;
                  puVar26[-1] = CONCAT44(fVar48 + ((fVar37 + fVar31 * ((float)((ulong)*puVar8 >>
                                                                              0x20) - fVar37)) -
                                                  fVar48) * param_5,
                                         fVar47 + ((fVar35 + fVar31 * ((float)*puVar8 - fVar35)) -
                                                  fVar47) * param_5);
                  puVar26[-2] = CONCAT44(fVar46 + ((fVar34 + fVar31 * ((float)((ulong)uVar36 >> 0x20
                                                                              ) - fVar34)) - fVar46)
                                                  * param_5,
                                         fVar45 + ((fVar32 + fVar31 * ((float)uVar36 - fVar32)) -
                                                  fVar45) * param_5);
                  puVar26[1] = CONCAT44(fVar53 + ((fVar42 + fVar31 * ((float)((ulong)uVar43 >> 0x20)
                                                                     - fVar42)) - fVar53) * param_5,
                                        fVar52 + ((fVar40 + fVar31 * ((float)uVar43 - fVar40)) -
                                                 fVar52) * param_5);
                  *puVar26 = CONCAT44(fVar51 + ((fVar39 + fVar31 * ((float)((ulong)uVar41 >> 0x20) -
                                                                   fVar39)) - fVar51) * param_5,
                                      fVar49 + ((fVar38 + fVar31 * ((float)uVar41 - fVar38)) -
                                               fVar49) * param_5);
                  puVar26 = puVar26 + 4;
                } while (uVar25 != 0);
                if (uVar10 == uVar22) {
                  return;
                }
              }
            }
            lVar28 = uVar10 - uVar22;
            lVar30 = uVar22 * 4;
            pfVar14 = (float *)(uVar29 + lVar30);
            pfVar16 = (float *)(uVar13 + lVar30);
            pfVar19 = (float *)(uVar17 + lVar30);
            pfVar21 = (float *)(uVar20 + lVar30);
            do {
              lVar28 = lVar28 + -1;
              *pfVar21 = *pfVar16 +
                         ((*pfVar14 + fVar31 * (*pfVar19 - *pfVar14)) - *pfVar16) * param_5;
              pfVar14 = pfVar14 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar19 = pfVar19 + 1;
              pfVar21 = pfVar21 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (uVar10 != 0) {
          uVar29 = *(ulong *)(lVar30 + uVar29 * 0x20 + 0x18);
          uVar13 = *(ulong *)(lVar30 + lVar28 * 0x20 + 0x18);
          uVar17 = *(ulong *)(this_01 + 0x80);
          if (uVar10 < 8) {
            uVar20 = 0;
          }
          else {
            lVar28 = uVar10 * 4;
            uVar20 = 0;
            if ((uVar29 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar29) &&
               (uVar13 + lVar28 <= uVar17 || uVar17 + lVar28 <= uVar13)) {
              uVar20 = uVar10 & 0xfffffffffffffff8;
              puVar18 = (undefined8 *)(uVar29 + 0x10);
              puVar23 = (undefined8 *)(uVar13 + 0x10);
              puVar24 = (undefined8 *)(uVar17 + 0x10);
              uVar25 = uVar20;
              do {
                puVar26 = puVar18 + -2;
                puVar2 = puVar18 + -1;
                puVar3 = puVar18 + 1;
                uVar27 = *puVar18;
                puVar4 = puVar23 + -1;
                uVar33 = puVar23[-2];
                uVar41 = puVar23[1];
                uVar36 = *puVar23;
                puVar18 = puVar18 + 4;
                puVar23 = puVar23 + 4;
                uVar25 = uVar25 - 8;
                fVar32 = (float)*puVar26;
                fVar34 = (float)((ulong)*puVar26 >> 0x20);
                fVar35 = (float)*puVar2;
                fVar37 = (float)((ulong)*puVar2 >> 0x20);
                fVar38 = (float)uVar27;
                fVar39 = (float)((ulong)uVar27 >> 0x20);
                fVar40 = (float)*puVar3;
                fVar42 = (float)((ulong)*puVar3 >> 0x20);
                puVar24[-1] = CONCAT44((fVar37 + fVar31 * ((float)((ulong)*puVar4 >> 0x20) - fVar37)
                                       ) * param_5,
                                       (fVar35 + fVar31 * ((float)*puVar4 - fVar35)) * param_5);
                puVar24[-2] = CONCAT44((fVar34 + fVar31 * ((float)((ulong)uVar33 >> 0x20) - fVar34))
                                       * param_5,
                                       (fVar32 + fVar31 * ((float)uVar33 - fVar32)) * param_5);
                puVar24[1] = CONCAT44((fVar42 + fVar31 * ((float)((ulong)uVar41 >> 0x20) - fVar42))
                                      * param_5,
                                      (fVar40 + fVar31 * ((float)uVar41 - fVar40)) * param_5);
                *puVar24 = CONCAT44((fVar39 + fVar31 * ((float)((ulong)uVar36 >> 0x20) - fVar39)) *
                                    param_5,(fVar38 + fVar31 * ((float)uVar36 - fVar38)) * param_5);
                puVar24 = puVar24 + 4;
              } while (uVar25 != 0);
              if (uVar10 == uVar20) {
                return;
              }
            }
          }
          lVar28 = uVar10 - uVar20;
          lVar30 = uVar20 * 4;
          pfVar14 = (float *)(uVar29 + lVar30);
          pfVar16 = (float *)(uVar13 + lVar30);
          pfVar19 = (float *)(uVar17 + lVar30);
          do {
            lVar28 = lVar28 + -1;
            *pfVar19 = (*pfVar14 + fVar31 * (*pfVar16 - *pfVar14)) * param_5;
            pfVar14 = pfVar14 + 1;
            pfVar16 = pfVar16 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar28 != 0);
        }
      }
    }
    return;
  }
  if (iVar1 - 2U < 2) {
    return;
  }
  if (iVar1 == 1) {
    if (param_5 != 1.0) {
      *(ulong *)(this_01 + 0x70) = uVar10;
      uVar13 = uVar10;
      if (*(ulong *)(this_01 + 0x78) < uVar10) {
        uVar15 = (uint)((float)uVar10 * 1.75);
        uVar27 = *(undefined8 *)(this_01 + 0x80);
        if (uVar15 < 9) {
          uVar15 = 8;
        }
        *(long *)(this_01 + 0x78) = (long)(int)uVar15;
        plVar11 = (long *)SpineExtension::getInstance();
        uVar27 = (**(code **)(*plVar11 + 0x20))
                           (plVar11,uVar27,
                            -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x52);
        uVar13 = *(ulong *)(this_01 + 0x70);
        *(undefined8 *)(this_01 + 0x80) = uVar27;
      }
      if (uVar29 <= uVar13 && uVar13 - uVar29 != 0) {
        memset((void *)(*(long *)(this_01 + 0x80) + uVar29 * 4),0,(uVar13 - uVar29) * 4);
      }
      lVar28 = VertexAttachment::getBones(this);
      if (*(long *)(lVar28 + 8) != 0) {
        if (uVar10 == 0) {
          return;
        }
        lVar28 = *(long *)(this_01 + 0x80);
        param_5 = 1.0 - param_5;
        if (uVar10 < 8) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar10 & 0xfffffffffffffff8;
          puVar18 = (undefined8 *)(lVar28 + 0x10);
          uVar29 = uVar13;
          do {
            uVar29 = uVar29 - 8;
            puVar18[-1] = CONCAT44(param_5 * (float)((ulong)puVar18[-1] >> 0x20),
                                   param_5 * (float)puVar18[-1]);
            puVar18[-2] = CONCAT44(param_5 * (float)((ulong)puVar18[-2] >> 0x20),
                                   param_5 * (float)puVar18[-2]);
            puVar18[1] = CONCAT44(param_5 * (float)((ulong)puVar18[1] >> 0x20),
                                  param_5 * (float)puVar18[1]);
            *puVar18 = CONCAT44(param_5 * (float)((ulong)*puVar18 >> 0x20),param_5 * (float)*puVar18
                               );
            puVar18 = puVar18 + 4;
          } while (uVar29 != 0);
          if (uVar10 == uVar13) {
            return;
          }
        }
        lVar30 = uVar10 - uVar13;
        pfVar14 = (float *)(lVar28 + uVar13 * 4);
        do {
          lVar30 = lVar30 + -1;
          *pfVar14 = param_5 * *pfVar14;
          pfVar14 = pfVar14 + 1;
        } while (lVar30 != 0);
        return;
      }
      lVar28 = VertexAttachment::getVertices(this);
      if (uVar10 == 0) {
        return;
      }
      uVar29 = *(ulong *)(lVar28 + 0x18);
      uVar13 = *(ulong *)(this_01 + 0x80);
      if ((uVar10 < 8) || ((uVar13 < uVar29 + uVar10 * 4 && (uVar29 < uVar13 + uVar10 * 4)))) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar10 & 0xfffffffffffffff8;
        puVar18 = (undefined8 *)(uVar29 + 0x10);
        puVar23 = (undefined8 *)(uVar13 + 0x10);
        uVar20 = uVar17;
        do {
          puVar24 = puVar18 + -1;
          uVar27 = puVar18[-2];
          uVar36 = puVar18[1];
          uVar33 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar20 = uVar20 - 8;
          fVar31 = (float)puVar23[-2];
          fVar32 = (float)((ulong)puVar23[-2] >> 0x20);
          fVar34 = (float)puVar23[-1];
          fVar35 = (float)((ulong)puVar23[-1] >> 0x20);
          fVar37 = (float)*puVar23;
          fVar38 = (float)((ulong)*puVar23 >> 0x20);
          fVar39 = (float)puVar23[1];
          fVar40 = (float)((ulong)puVar23[1] >> 0x20);
          puVar23[-1] = CONCAT44(fVar35 + ((float)((ulong)*puVar24 >> 0x20) - fVar35) * param_5,
                                 fVar34 + ((float)*puVar24 - fVar34) * param_5);
          puVar23[-2] = CONCAT44(fVar32 + ((float)((ulong)uVar27 >> 0x20) - fVar32) * param_5,
                                 fVar31 + ((float)uVar27 - fVar31) * param_5);
          puVar23[1] = CONCAT44(fVar40 + ((float)((ulong)uVar36 >> 0x20) - fVar40) * param_5,
                                fVar39 + ((float)uVar36 - fVar39) * param_5);
          *puVar23 = CONCAT44(fVar38 + ((float)((ulong)uVar33 >> 0x20) - fVar38) * param_5,
                              fVar37 + ((float)uVar33 - fVar37) * param_5);
          puVar23 = puVar23 + 4;
        } while (uVar20 != 0);
        if (uVar10 == uVar17) {
          return;
        }
      }
      lVar28 = uVar10 - uVar17;
      pfVar14 = (float *)(uVar29 + uVar17 * 4);
      pfVar16 = (float *)(uVar13 + uVar17 * 4);
      do {
        lVar28 = lVar28 + -1;
        *pfVar16 = *pfVar16 + (*pfVar14 - *pfVar16) * param_5;
        pfVar14 = pfVar14 + 1;
        pfVar16 = pfVar16 + 1;
      } while (lVar28 != 0);
      return;
    }
  }
  else if (iVar1 != 0) goto LAB_00ce6750;
  *(undefined8 *)(this_01 + 0x70) = 0;
  return;
}

