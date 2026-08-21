
/* spine::SkeletonBounds::update(spine::Skeleton&, bool) */

void __thiscall spine::SkeletonBounds::update(SkeletonBounds *this,Skeleton *param_1,bool param_2)

{
  float *pfVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  VertexAttachment *this_00;
  RTTI *this_01;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  Slot *this_02;
  undefined8 uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar12 = *(long *)(this + 0x50);
  lVar9 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar12 != 0) {
    lVar13 = 0;
    uVar5 = *(ulong *)(this + 0x10);
    do {
      if (uVar5 == *(ulong *)(this + 0x18)) {
        uVar6 = (uint)((float)uVar5 * 1.75);
        uVar14 = *(undefined8 *)(*(long *)(this + 0x60) + lVar13 * 8);
        uVar11 = *(undefined8 *)(this + 0x20);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(this + 0x18) = (long)(int)uVar6;
        plVar3 = (long *)SpineExtension::getInstance();
        lVar4 = (**(code **)(*plVar3 + 0x20))
                          (plVar3,uVar11,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar8 = *(long *)(this + 0x10);
        *(long *)(this + 0x20) = lVar4;
        uVar10 = lVar8 + 1;
        *(ulong *)(this + 0x10) = uVar10;
        puVar15 = (undefined8 *)(lVar4 + lVar8 * 8);
      }
      else {
        uVar10 = uVar5 + 1;
        *(ulong *)(this + 0x10) = uVar10;
        uVar14 = *(undefined8 *)(*(long *)(this + 0x60) + lVar13 * 8);
        puVar15 = (undefined8 *)(*(long *)(this + 0x20) + uVar5 * 8);
      }
      lVar13 = lVar13 + 1;
      *puVar15 = uVar14;
      uVar5 = uVar10;
    } while (lVar12 != lVar13);
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (lVar9 != 0) {
    lVar12 = 0;
    do {
      this_02 = *(Slot **)(*(long *)(param_1 + 0x48) + lVar12 * 8);
      plVar3 = (long *)Slot::getBone(this_02);
      uVar5 = (**(code **)(*plVar3 + 0x20))();
      if (((uVar5 & 1) != 0) &&
         (this_00 = (VertexAttachment *)Slot::getAttachment(this_02),
         this_00 != (VertexAttachment *)0x0)) {
        this_01 = (RTTI *)(**(code **)(*(long *)this_00 + 0x10))();
        uVar5 = RTTI::instanceOf(this_01,(RTTI *)BoundingBoxAttachment::rtti);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(this + 0x30);
          if (uVar5 == *(ulong *)(this + 0x38)) {
            uVar6 = (uint)((float)uVar5 * 1.75);
            uVar14 = *(undefined8 *)(this + 0x40);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(this + 0x38) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar13 = (**(code **)(*plVar3 + 0x20))
                               (plVar3,uVar14,
                                -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar4 = *(long *)(this + 0x30);
            *(long *)(this + 0x40) = lVar13;
            *(long *)(this + 0x30) = lVar4 + 1;
            puVar15 = (undefined8 *)(lVar13 + lVar4 * 8);
          }
          else {
            *(ulong *)(this + 0x30) = uVar5 + 1;
            puVar15 = (undefined8 *)(*(long *)(this + 0x40) + uVar5 * 8);
          }
          *puVar15 = this_00;
          if (*(long *)(this + 0x10) == 0) {
            puVar15 = SpineObject::operator_new
                                (0x30,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBounds.cpp"
                                 ,0x4b);
            *(undefined4 *)(puVar15 + 5) = 0;
            puVar15[1] = &PTR__Vector_01c8d048;
            *puVar15 = &PTR__Polygon_01c8f448;
            puVar15[2] = 0;
            puVar15[3] = 0x10;
            puVar15[4] = 0;
            plVar3 = (long *)SpineExtension::getInstance();
            uVar14 = (**(code **)(*plVar3 + 0x20))
                               (plVar3,0,0x40,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x5e);
            puVar15[4] = uVar14;
          }
          else {
            lVar13 = *(long *)(this + 0x10) + -1;
            puVar15 = *(undefined8 **)(*(long *)(this + 0x20) + lVar13 * 8);
            *(long *)(this + 0x10) = lVar13;
          }
          uVar5 = *(ulong *)(this + 0x50);
          if (uVar5 == *(ulong *)(this + 0x58)) {
            uVar6 = (uint)((float)uVar5 * 1.75);
            uVar14 = *(undefined8 *)(this + 0x60);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            *(long *)(this + 0x58) = (long)(int)uVar6;
            plVar3 = (long *)SpineExtension::getInstance();
            lVar13 = (**(code **)(*plVar3 + 0x20))
                               (plVar3,uVar14,
                                -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
            lVar4 = *(long *)(this + 0x50);
            *(long *)(this + 0x60) = lVar13;
            *(long *)(this + 0x50) = lVar4 + 1;
            puVar7 = (undefined8 *)(lVar13 + lVar4 * 8);
          }
          else {
            *(ulong *)(this + 0x50) = uVar5 + 1;
            puVar7 = (undefined8 *)(*(long *)(this + 0x60) + uVar5 * 8);
          }
          *puVar7 = puVar15;
          uVar5 = VertexAttachment::getWorldVerticesLength(this_00);
          uVar10 = puVar15[2];
          *(int *)(puVar15 + 5) = (int)uVar5;
          if (uVar10 < uVar5) {
            puVar15[2] = uVar5;
            if ((ulong)puVar15[3] < uVar5) {
              uVar14 = puVar15[4];
              uVar6 = (uint)((float)uVar5 * 1.75);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              puVar15[3] = (long)(int)uVar6;
              plVar3 = (long *)SpineExtension::getInstance();
              uVar14 = (**(code **)(*plVar3 + 0x20))
                                 (plVar3,uVar14,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar5 = puVar15[2];
              puVar15[4] = uVar14;
            }
            if (uVar10 <= uVar5 && uVar5 - uVar10 != 0) {
              memset((void *)(puVar15[4] + uVar10 * 4),0,(uVar5 - uVar10) * 4);
            }
          }
          VertexAttachment::computeWorldVertices(this_00,this_02,(Vector *)(puVar15 + 1));
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar9 != lVar12);
  }
  fVar16 = 3.4028235e+38;
  fVar18 = 1.1754944e-38;
  fVar17 = fVar16;
  fVar19 = fVar18;
  if ((param_2) && (*(long *)(this + 0x50) != 0)) {
    fVar17 = 3.4028235e+38;
    fVar18 = 1.1754944e-38;
    lVar9 = 0;
    fVar16 = fVar17;
    fVar19 = fVar18;
    do {
      lVar12 = *(long *)(*(long *)(this + 0x60) + lVar9 * 8);
      iVar2 = *(int *)(lVar12 + 0x28);
      if (0 < iVar2) {
        lVar13 = 0;
        do {
          pfVar1 = (float *)(*(long *)(lVar12 + 0x20) + lVar13 * 4);
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          lVar13 = lVar13 + 2;
          if (fVar20 <= fVar18) {
            fVar18 = fVar20;
          }
          if (fVar21 <= fVar19) {
            fVar19 = fVar21;
          }
          if (fVar16 <= fVar20) {
            fVar16 = fVar20;
          }
          if (fVar17 <= fVar21) {
            fVar17 = fVar21;
          }
        } while (lVar13 < iVar2);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != *(long *)(this + 0x50));
  }
  *(float *)(this + 0x68) = fVar18;
  *(float *)(this + 0x6c) = fVar19;
  *(float *)(this + 0x70) = fVar16;
  *(float *)(this + 0x74) = fVar17;
  return;
}

