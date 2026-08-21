
/* spine::DrawOrderTimeline::setFrame(unsigned long, float, spine::Vector<int>&) */

void __thiscall
spine::DrawOrderTimeline::setFrame
          (DrawOrderTimeline *this,ulong param_1,float param_2,Vector *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  
  *(float *)(*(long *)(this + 0x20) + param_1 * 4) = param_2;
  lVar11 = *(long *)(this + 0x40);
  lVar6 = lVar11 + param_1 * 0x20;
  puVar9 = (ulong *)(lVar6 + 8);
  *puVar9 = 0;
  uVar12 = *(ulong *)(param_3 + 8);
  puVar10 = (ulong *)(lVar6 + 0x10);
  if (*puVar10 < uVar12) {
    *puVar10 = uVar12;
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    plVar2 = (long *)SpineExtension::getInstance();
    uVar8 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar8,uVar12 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    uVar12 = *(ulong *)(param_3 + 8);
  }
  if (uVar12 != 0) {
    uVar12 = 0;
    plVar2 = (long *)(lVar11 + param_1 * 0x20 + 0x18);
    uVar7 = *puVar9;
    do {
      lVar6 = *(long *)(param_3 + 0x18);
      if (uVar7 == *puVar10) {
        uVar4 = (uint)((float)uVar7 * 1.75);
        if (uVar4 < 9) {
          uVar4 = 8;
        }
        uVar1 = *(undefined4 *)(lVar6 + uVar12 * 4);
        *puVar10 = (long)(int)uVar4;
        lVar6 = *plVar2;
        plVar3 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar3 + 0x20))
                          (plVar3,lVar6,
                           -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        *plVar2 = lVar6;
        uVar7 = *puVar9;
        uVar5 = uVar7 + 1;
        *puVar9 = uVar5;
        *(undefined4 *)(lVar6 + uVar7 * 4) = uVar1;
      }
      else {
        uVar5 = uVar7 + 1;
        lVar11 = *plVar2;
        *puVar9 = uVar5;
        *(undefined4 *)(lVar11 + uVar7 * 4) = *(undefined4 *)(lVar6 + uVar12 * 4);
      }
      uVar12 = uVar12 + 1;
      uVar7 = uVar5;
    } while (uVar12 < *(ulong *)(param_3 + 8));
  }
  return;
}

