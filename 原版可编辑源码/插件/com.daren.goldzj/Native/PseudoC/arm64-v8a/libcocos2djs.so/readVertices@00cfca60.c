
/* spine::SkeletonBinary::readVertices(spine::SkeletonBinary::DataInput*, spine::VertexAttachment*,
   int) */

void __thiscall
spine::SkeletonBinary::readVertices
          (SkeletonBinary *this,DataInput *param_1,VertexAttachment *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  Vector *pVVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  ulong uVar21;
  DataInput *pDVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  
  fVar24 = *(float *)(this + 0x48);
  VertexAttachment::setWorldVerticesLength(param_2,(long)(param_3 << 1));
  pDVar22 = param_1 + 8;
  pcVar12 = *(char **)pDVar22;
  *(char **)pDVar22 = pcVar12 + 1;
  cVar2 = *pcVar12;
  pVVar6 = (Vector *)VertexAttachment::getVertices(param_2);
  if (cVar2 != '\0') {
    lVar7 = VertexAttachment::getBones(param_2);
    uVar21 = (ulong)(param_3 * 0x12);
    if (*(ulong *)(pVVar6 + 0x10) < uVar21) {
      uVar19 = *(undefined8 *)(pVVar6 + 0x18);
      *(ulong *)(pVVar6 + 0x10) = uVar21;
      plVar8 = (long *)SpineExtension::getInstance();
      uVar19 = (**(code **)(*plVar8 + 0x20))
                         (plVar8,uVar19,uVar21 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(pVVar6 + 0x18) = uVar19;
    }
    uVar21 = (ulong)(param_3 * 6);
    if (*(ulong *)(lVar7 + 0x10) < uVar21) {
      uVar19 = *(undefined8 *)(lVar7 + 0x18);
      *(ulong *)(lVar7 + 0x10) = uVar21;
      plVar8 = (long *)SpineExtension::getInstance();
      uVar19 = (**(code **)(*plVar8 + 0x20))
                         (plVar8,uVar19,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(lVar7 + 0x18) = uVar19;
    }
    if (0 < param_3) {
      iVar20 = 0;
      do {
        pbVar13 = *(byte **)pDVar22;
        *(byte **)pDVar22 = pbVar13 + 1;
        uVar23 = *pbVar13 & 0x7f;
        if ((char)*pbVar13 < '\0') {
          *(byte **)pDVar22 = pbVar13 + 2;
          uVar23 = uVar23 | (pbVar13[1] & 0x7f) << 7;
          if ((char)pbVar13[1] < '\0') {
            *(byte **)pDVar22 = pbVar13 + 3;
            uVar23 = uVar23 | (pbVar13[2] & 0x7f) << 0xe;
            if ((char)pbVar13[2] < '\0') {
              *(byte **)pDVar22 = pbVar13 + 4;
              uVar23 = uVar23 | (pbVar13[3] & 0x7f) << 0x15;
              if ((char)pbVar13[3] < '\0') {
                *(byte **)pDVar22 = pbVar13 + 5;
                uVar23 = uVar23 | (uint)pbVar13[4] << 0x1c;
              }
            }
          }
        }
        uVar21 = *(ulong *)(lVar7 + 8);
        if (uVar21 == *(ulong *)(lVar7 + 0x10)) {
          uVar10 = (uint)((float)uVar21 * 1.75);
          uVar19 = *(undefined8 *)(lVar7 + 0x18);
          if (uVar10 < 9) {
            uVar10 = 8;
          }
          *(long *)(lVar7 + 0x10) = (long)(int)uVar10;
          plVar8 = (long *)SpineExtension::getInstance();
          lVar9 = (**(code **)(*plVar8 + 0x20))
                            (plVar8,uVar19,
                             -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar14 = *(long *)(lVar7 + 8);
          *(long *)(lVar7 + 0x18) = lVar9;
          *(long *)(lVar7 + 8) = lVar14 + 1;
          plVar8 = (long *)(lVar9 + lVar14 * 8);
        }
        else {
          *(ulong *)(lVar7 + 8) = uVar21 + 1;
          plVar8 = (long *)(*(long *)(lVar7 + 0x18) + uVar21 * 8);
        }
        *plVar8 = (long)(int)uVar23;
        if (0 < (int)uVar23) {
          do {
            pbVar17 = *(byte **)pDVar22;
            pbVar13 = pbVar17 + 1;
            *(byte **)pDVar22 = pbVar13;
            uVar10 = *pbVar17 & 0x7f;
            if ((char)*pbVar17 < '\0') {
              pbVar13 = pbVar17 + 2;
              *(byte **)pDVar22 = pbVar13;
              uVar10 = uVar10 | (pbVar17[1] & 0x7f) << 7;
              if ((char)pbVar17[1] < '\0') {
                pbVar13 = pbVar17 + 3;
                *(byte **)pDVar22 = pbVar13;
                uVar10 = uVar10 | (pbVar17[2] & 0x7f) << 0xe;
                if ((char)pbVar17[2] < '\0') {
                  pbVar13 = pbVar17 + 4;
                  *(byte **)pDVar22 = pbVar13;
                  uVar10 = uVar10 | (pbVar17[3] & 0x7f) << 0x15;
                  if ((char)pbVar17[3] < '\0') {
                    pbVar13 = pbVar17 + 5;
                    *(byte **)pDVar22 = pbVar13;
                    uVar10 = uVar10 | (uint)pbVar17[4] << 0x1c;
                  }
                }
              }
            }
            uVar21 = *(ulong *)(lVar7 + 8);
            if (uVar21 == *(ulong *)(lVar7 + 0x10)) {
              uVar11 = (uint)((float)uVar21 * 1.75);
              uVar19 = *(undefined8 *)(lVar7 + 0x18);
              if (uVar11 < 9) {
                uVar11 = 8;
              }
              *(long *)(lVar7 + 0x10) = (long)(int)uVar11;
              plVar8 = (long *)SpineExtension::getInstance();
              lVar9 = (**(code **)(*plVar8 + 0x20))
                                (plVar8,uVar19,
                                 -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0x6a);
              lVar14 = *(long *)(lVar7 + 8);
              *(long *)(lVar7 + 0x18) = lVar9;
              *(long *)(lVar7 + 8) = lVar14 + 1;
              *(long *)(lVar9 + lVar14 * 8) = (long)(int)uVar10;
              pbVar13 = *(byte **)pDVar22;
            }
            else {
              *(ulong *)(lVar7 + 8) = uVar21 + 1;
              *(long *)(*(long *)(lVar7 + 0x18) + uVar21 * 8) = (long)(int)uVar10;
            }
            *(byte **)pDVar22 = pbVar13 + 1;
            pbVar17 = pbVar13 + 4;
            bVar1 = *pbVar13;
            *(byte **)pDVar22 = pbVar13 + 2;
            bVar3 = pbVar13[1];
            *(byte **)pDVar22 = pbVar13 + 3;
            bVar4 = pbVar13[2];
            *(byte **)pDVar22 = pbVar17;
            uVar21 = *(ulong *)(pVVar6 + 8);
            uVar15 = *(ulong *)(pVVar6 + 0x10);
            fVar25 = fVar24 * (float)CONCAT31(CONCAT21(CONCAT11(bVar1,bVar3),bVar4),pbVar13[3]);
            if (uVar21 == uVar15) {
              uVar10 = (uint)((float)uVar21 * 1.75);
              uVar19 = *(undefined8 *)(pVVar6 + 0x18);
              if (uVar10 < 9) {
                uVar10 = 8;
              }
              *(long *)(pVVar6 + 0x10) = (long)(int)uVar10;
              plVar8 = (long *)SpineExtension::getInstance();
              lVar9 = (**(code **)(*plVar8 + 0x20))
                                (plVar8,uVar19,
                                 -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0x6a);
              lVar14 = *(long *)(pVVar6 + 8);
              *(long *)(pVVar6 + 0x18) = lVar9;
              uVar18 = lVar14 + 1;
              *(ulong *)(pVVar6 + 8) = uVar18;
              *(float *)(lVar9 + lVar14 * 4) = fVar25;
              pbVar17 = *(byte **)pDVar22;
              uVar15 = *(ulong *)(pVVar6 + 0x10);
            }
            else {
              lVar9 = *(long *)(pVVar6 + 0x18);
              uVar18 = uVar21 + 1;
              *(ulong *)(pVVar6 + 8) = uVar18;
              *(float *)(lVar9 + uVar21 * 4) = fVar25;
            }
            *(byte **)pDVar22 = pbVar17 + 1;
            pbVar13 = pbVar17 + 4;
            bVar1 = *pbVar17;
            *(byte **)pDVar22 = pbVar17 + 2;
            bVar3 = pbVar17[1];
            *(byte **)pDVar22 = pbVar17 + 3;
            bVar4 = pbVar17[2];
            *(byte **)pDVar22 = pbVar13;
            fVar25 = fVar24 * (float)CONCAT31(CONCAT21(CONCAT11(bVar1,bVar3),bVar4),pbVar17[3]);
            if (uVar18 == uVar15) {
              uVar10 = (uint)((float)uVar15 * 1.75);
              if (uVar10 < 9) {
                uVar10 = 8;
              }
              *(long *)(pVVar6 + 0x10) = (long)(int)uVar10;
              plVar8 = (long *)SpineExtension::getInstance();
              lVar9 = (**(code **)(*plVar8 + 0x20))
                                (plVar8,lVar9,
                                 -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0x6a);
              lVar14 = *(long *)(pVVar6 + 8);
              *(long *)(pVVar6 + 0x18) = lVar9;
              uVar21 = lVar14 + 1;
              *(ulong *)(pVVar6 + 8) = uVar21;
              *(float *)(lVar9 + lVar14 * 4) = fVar25;
              pbVar13 = *(byte **)pDVar22;
              uVar15 = *(ulong *)(pVVar6 + 0x10);
            }
            else {
              uVar21 = uVar18 + 1;
              *(ulong *)(pVVar6 + 8) = uVar21;
              *(float *)(lVar9 + uVar18 * 4) = fVar25;
            }
            *(byte **)pDVar22 = pbVar13 + 1;
            bVar1 = *pbVar13;
            *(byte **)pDVar22 = pbVar13 + 2;
            bVar3 = pbVar13[1];
            *(byte **)pDVar22 = pbVar13 + 3;
            bVar4 = pbVar13[2];
            *(byte **)pDVar22 = pbVar13 + 4;
            bVar5 = pbVar13[3];
            if (uVar21 == uVar15) {
              uVar10 = (uint)((float)uVar15 * 1.75);
              if (uVar10 < 9) {
                uVar10 = 8;
              }
              *(long *)(pVVar6 + 0x10) = (long)(int)uVar10;
              plVar8 = (long *)SpineExtension::getInstance();
              lVar9 = (**(code **)(*plVar8 + 0x20))
                                (plVar8,lVar9,
                                 -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0x6a);
              lVar14 = *(long *)(pVVar6 + 8);
              *(long *)(pVVar6 + 0x18) = lVar9;
              *(long *)(pVVar6 + 8) = lVar14 + 1;
              puVar16 = (undefined4 *)(lVar9 + lVar14 * 4);
            }
            else {
              *(ulong *)(pVVar6 + 8) = uVar21 + 1;
              puVar16 = (undefined4 *)(lVar9 + uVar21 * 4);
            }
            uVar23 = uVar23 - 1;
            *puVar16 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar3),bVar4),bVar5);
          } while (uVar23 != 0);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != param_3);
    }
    return;
  }
  readFloatArray(this,param_1,param_3 << 1,fVar24,pVVar6);
  return;
}

