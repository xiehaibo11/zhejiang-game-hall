
/* spine::Skeleton::getBounds(float&, float&, float&, float&, spine::Vector<float>&) */

void __thiscall
spine::Skeleton::getBounds
          (Skeleton *this,float *param_1,float *param_2,float *param_3,float *param_4,
          Vector *param_5)

{
  float *pfVar1;
  VertexAttachment *this_00;
  RTTI *pRVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  Bone *pBVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  Slot *this_01;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(long *)(this + 0x58) == 0) {
    fVar15 = 3.4028235e+38;
    fVar14 = 1.1754944e-38;
    fVar17 = fVar14;
    fVar16 = fVar15;
  }
  else {
    fVar14 = 1.1754944e-38;
    fVar15 = 3.4028235e+38;
    uVar11 = 0;
    fVar17 = fVar14;
    fVar16 = fVar15;
    do {
      this_01 = *(Slot **)(*(long *)(this + 0x68) + uVar11 * 8);
      if ((*(char *)(*(long *)(this_01 + 0x10) + 0x95) != '\0') &&
         (this_00 = (VertexAttachment *)Slot::getAttachment(this_01),
         this_00 != (VertexAttachment *)0x0)) {
        pRVar2 = (RTTI *)(**(code **)(*(long *)this_00 + 0x10))();
        uVar3 = RTTI::instanceOf(pRVar2,(RTTI *)RegionAttachment::rtti);
        if ((uVar3 & 1) == 0) {
          pRVar2 = (RTTI *)(**(code **)(*(long *)this_00 + 0x10))(this_00);
          uVar3 = RTTI::instanceOf(pRVar2,(RTTI *)MeshAttachment::rtti);
          if ((uVar3 & 1) == 0) goto LAB_00cf3480;
          uVar3 = VertexAttachment::getWorldVerticesLength(this_00);
          uVar8 = *(ulong *)(param_5 + 8);
          if (uVar8 < uVar3) {
            *(ulong *)(param_5 + 8) = uVar3;
            uVar9 = uVar3;
            if (*(ulong *)(param_5 + 0x10) < uVar3) {
              uVar10 = *(undefined8 *)(param_5 + 0x18);
              uVar7 = (uint)((float)uVar3 * 1.75);
              if (uVar7 < 9) {
                uVar7 = 8;
              }
              *(long *)(param_5 + 0x10) = (long)(int)uVar7;
              plVar4 = (long *)SpineExtension::getInstance();
              uVar10 = (**(code **)(*plVar4 + 0x20))
                                 (plVar4,uVar10,
                                  -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar9 = *(ulong *)(param_5 + 8);
              *(undefined8 *)(param_5 + 0x18) = uVar10;
            }
            if (uVar8 <= uVar9 && uVar9 - uVar8 != 0) {
              memset((void *)(*(long *)(param_5 + 0x18) + uVar8 * 4),0,(uVar9 - uVar8) * 4);
            }
            VertexAttachment::computeWorldVertices(this_00,this_01,0,uVar3,param_5,0,2);
          }
          else {
            VertexAttachment::computeWorldVertices(this_00,this_01,0,uVar3,param_5,0,2);
            if (uVar3 == 0) goto LAB_00cf3480;
          }
        }
        else {
          uVar3 = *(ulong *)(param_5 + 8);
          if (uVar3 < 8) {
            *(undefined8 *)(param_5 + 8) = 8;
            if (*(ulong *)(param_5 + 0x10) < 8) {
              uVar10 = *(undefined8 *)(param_5 + 0x18);
              *(undefined8 *)(param_5 + 0x10) = 0xe;
              plVar4 = (long *)SpineExtension::getInstance();
              lVar5 = (**(code **)(*plVar4 + 0x20))
                                (plVar4,uVar10,0x38,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0x52);
              uVar8 = *(ulong *)(param_5 + 8);
              *(long *)(param_5 + 0x18) = lVar5;
              if (uVar8 <= uVar3) goto LAB_00cf3420;
            }
            else {
              lVar5 = *(long *)(param_5 + 0x18);
              uVar8 = 8;
            }
            memset((void *)(lVar5 + uVar3 * 4),0,(uVar8 - uVar3) * 4);
          }
LAB_00cf3420:
          pBVar6 = (Bone *)Slot::getBone(this_01);
          RegionAttachment::computeWorldVertices((RegionAttachment *)this_00,pBVar6,param_5,0,2);
          uVar3 = 8;
        }
        uVar8 = 0;
        do {
          pfVar1 = (float *)(*(long *)(param_5 + 0x18) + uVar8 * 4);
          fVar12 = *pfVar1;
          fVar13 = pfVar1[1];
          uVar8 = uVar8 + 2;
          if (fVar12 <= fVar15) {
            fVar15 = fVar12;
          }
          if (fVar13 <= fVar16) {
            fVar16 = fVar13;
          }
          if (fVar14 <= fVar12) {
            fVar14 = fVar12;
          }
          if (fVar17 <= fVar13) {
            fVar17 = fVar13;
          }
        } while (uVar8 < uVar3);
      }
LAB_00cf3480:
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(this + 0x58));
  }
  *param_1 = fVar15;
  *param_2 = fVar16;
  *param_3 = fVar14 - fVar15;
  *param_4 = fVar17 - fVar16;
  return;
}

