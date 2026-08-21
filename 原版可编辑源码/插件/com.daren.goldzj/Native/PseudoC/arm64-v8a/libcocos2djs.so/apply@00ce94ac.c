
/* spine::EventTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*, float,
   spine::MixBlend, spine::MixDirection) */

void spine::EventTimeline::apply
               (float param_2,float param_3,long *param_1,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  if (param_5 != 0) {
    uVar12 = param_1[2];
    if (param_2 <= param_3) {
      pfVar5 = (float *)param_1[4];
      if (pfVar5[uVar12 - 1] <= param_2) {
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_2,0x7f7fffff,param_1,param_4,param_5);
      pfVar5 = (float *)param_1[4];
      param_2 = -1.0;
    }
    if (*pfVar5 <= param_3) {
      if (*pfVar5 <= param_2) {
        uVar4 = Animation::binarySearch((Vector *)(param_1 + 1),param_2);
        lVar6 = param_1[4];
        lVar9 = (long)(int)uVar4;
        lVar7 = (ulong)uVar4 << 0x20;
        do {
          lVar10 = lVar7;
          if (lVar9 < 1) break;
          lVar1 = lVar9 * 4;
          lVar9 = lVar9 + -1;
          lVar7 = lVar10 + -0x100000000;
        } while (*(float *)(lVar6 + lVar1 + -4) == *(float *)(lVar6 + (long)(int)uVar4 * 4));
        uVar13 = lVar10 >> 0x20;
        if (uVar12 <= uVar13) {
          return;
        }
      }
      else {
        uVar13 = 0;
        if (uVar12 == 0) {
          return;
        }
      }
      do {
        if (param_3 < *(float *)(param_1[4] + uVar13 * 4)) {
          return;
        }
        uVar2 = *(ulong *)(param_5 + 8);
        lVar9 = param_1[8];
        if (uVar2 == *(ulong *)(param_5 + 0x10)) {
          uVar4 = (uint)((float)uVar2 * 1.75);
          uVar14 = *(undefined8 *)(lVar9 + uVar13 * 8);
          uVar11 = *(undefined8 *)(param_5 + 0x18);
          if (uVar4 < 9) {
            uVar4 = 8;
          }
          *(long *)(param_5 + 0x10) = (long)(int)uVar4;
          plVar3 = (long *)SpineExtension::getInstance();
          lVar9 = (**(code **)(*plVar3 + 0x20))
                            (plVar3,uVar11,
                             -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar7 = *(long *)(param_5 + 8);
          *(long *)(param_5 + 0x18) = lVar9;
          *(long *)(param_5 + 8) = lVar7 + 1;
          puVar8 = (undefined8 *)(lVar9 + lVar7 * 8);
        }
        else {
          *(ulong *)(param_5 + 8) = uVar2 + 1;
          uVar14 = *(undefined8 *)(lVar9 + uVar13 * 8);
          puVar8 = (undefined8 *)(*(long *)(param_5 + 0x18) + uVar2 * 8);
        }
        uVar13 = uVar13 + 1;
        *puVar8 = uVar14;
      } while (uVar13 < uVar12);
    }
  }
  return;
}

