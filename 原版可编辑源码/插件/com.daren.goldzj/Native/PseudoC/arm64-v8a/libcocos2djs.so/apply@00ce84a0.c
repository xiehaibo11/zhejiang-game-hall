
/* spine::DrawOrderTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void spine::DrawOrderTimeline::apply
               (undefined1 param_1_00 [16],float param_3,long param_1,long param_4,
               undefined8 param_5,uint param_6,int param_7)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((param_6 == 0) && (param_7 == 1)) {
    uVar13 = *(ulong *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x58) = 0;
    if (*(ulong *)(param_4 + 0x60) < uVar13) {
      uVar11 = *(undefined8 *)(param_4 + 0x68);
      *(ulong *)(param_4 + 0x60) = uVar13;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar11 = (**(code **)(*plVar2 + 0x20))
                         (plVar2,uVar11,uVar13 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      uVar13 = *(ulong *)(param_4 + 0x38);
      *(undefined8 *)(param_4 + 0x68) = uVar11;
    }
    if (uVar13 != 0) {
      uVar14 = 0;
      uVar5 = *(ulong *)(param_4 + 0x58);
      do {
        if (uVar5 == *(ulong *)(param_4 + 0x60)) {
          uVar4 = (uint)((float)uVar5 * 1.75);
          uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x48) + uVar14 * 8);
          uVar12 = *(undefined8 *)(param_4 + 0x68);
          if (uVar4 < 9) {
            uVar4 = 8;
          }
          *(long *)(param_4 + 0x60) = (long)(int)uVar4;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar3 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar12,
                             -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar7 = *(long *)(param_4 + 0x58);
          *(long *)(param_4 + 0x68) = lVar3;
          uVar6 = lVar7 + 1;
          *(ulong *)(param_4 + 0x58) = uVar6;
          puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
        }
        else {
          uVar6 = uVar5 + 1;
          *(ulong *)(param_4 + 0x58) = uVar6;
          uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x48) + uVar14 * 8);
          puVar10 = (undefined8 *)(*(long *)(param_4 + 0x68) + uVar5 * 8);
        }
        uVar14 = uVar14 + 1;
        *puVar10 = uVar11;
        uVar5 = uVar6;
      } while (uVar13 != uVar14);
    }
  }
  else if (**(float **)(param_1 + 0x20) <= param_3) {
    lVar3 = *(long *)(param_1 + 0x10) + -1;
    if (param_3 < (*(float **)(param_1 + 0x20))[lVar3]) {
      iVar1 = Animation::binarySearch((Vector *)(param_1 + 8),param_3);
      lVar3 = (long)iVar1 + -1;
    }
    lVar3 = *(long *)(param_1 + 0x40) + lVar3 * 0x20;
    lVar7 = *(long *)(lVar3 + 8);
    if (lVar7 == 0) {
      lVar3 = *(long *)(param_4 + 0x38);
      *(undefined8 *)(param_4 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        uVar13 = 0;
        do {
          if (uVar13 == *(ulong *)(param_4 + 0x60)) {
            uVar4 = (uint)((float)uVar13 * 1.75);
            uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x48) + lVar7 * 8);
            uVar12 = *(undefined8 *)(param_4 + 0x68);
            if (uVar4 < 9) {
              uVar4 = 8;
            }
            *(long *)(param_4 + 0x60) = (long)(int)uVar4;
            plVar2 = (long *)SpineExtension::getInstance();
            lVar8 = (**(code **)(*plVar2 + 0x20))
                              (plVar2,uVar12,
                               -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar9 = *(long *)(param_4 + 0x58);
            *(long *)(param_4 + 0x68) = lVar8;
            uVar14 = lVar9 + 1;
            *(ulong *)(param_4 + 0x58) = uVar14;
            puVar10 = (undefined8 *)(lVar8 + lVar9 * 8);
          }
          else {
            uVar14 = uVar13 + 1;
            *(ulong *)(param_4 + 0x58) = uVar14;
            uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x48) + lVar7 * 8);
            puVar10 = (undefined8 *)(*(long *)(param_4 + 0x68) + uVar13 * 8);
          }
          lVar7 = lVar7 + 1;
          *puVar10 = uVar11;
          uVar13 = uVar14;
        } while (lVar3 != lVar7);
      }
    }
    else {
      lVar8 = 0;
      do {
        *(undefined8 *)(*(long *)(param_4 + 0x68) + lVar8 * 8) =
             *(undefined8 *)
              (*(long *)(param_4 + 0x48) + (long)*(int *)(*(long *)(lVar3 + 0x18) + lVar8 * 4) * 8);
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
    }
  }
  else if (param_6 < 2) {
    uVar13 = *(ulong *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x58) = 0;
    if (*(ulong *)(param_4 + 0x60) < uVar13) {
      uVar11 = *(undefined8 *)(param_4 + 0x68);
      *(ulong *)(param_4 + 0x60) = uVar13;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar11 = (**(code **)(*plVar2 + 0x20))
                         (plVar2,uVar11,uVar13 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      uVar13 = *(ulong *)(param_4 + 0x38);
      *(undefined8 *)(param_4 + 0x68) = uVar11;
    }
    if (uVar13 != 0) {
      uVar14 = 0;
      uVar5 = *(ulong *)(param_4 + 0x58);
      do {
        if (uVar5 == *(ulong *)(param_4 + 0x60)) {
          uVar4 = (uint)((float)uVar5 * 1.75);
          uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x48) + uVar14 * 8);
          uVar12 = *(undefined8 *)(param_4 + 0x68);
          if (uVar4 < 9) {
            uVar4 = 8;
          }
          *(long *)(param_4 + 0x60) = (long)(int)uVar4;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar3 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar12,
                             -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar7 = *(long *)(param_4 + 0x58);
          *(long *)(param_4 + 0x68) = lVar3;
          uVar6 = lVar7 + 1;
          *(ulong *)(param_4 + 0x58) = uVar6;
          puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
        }
        else {
          uVar6 = uVar5 + 1;
          *(ulong *)(param_4 + 0x58) = uVar6;
          uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x48) + uVar14 * 8);
          puVar10 = (undefined8 *)(*(long *)(param_4 + 0x68) + uVar5 * 8);
        }
        uVar14 = uVar14 + 1;
        *puVar10 = uVar11;
        uVar5 = uVar6;
      } while (uVar13 != uVar14);
    }
  }
  return;
}

