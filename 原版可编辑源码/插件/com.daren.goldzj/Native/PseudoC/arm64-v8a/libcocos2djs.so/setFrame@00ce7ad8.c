
/* spine::DeformTimeline::setFrame(int, float, spine::Vector<float>&) */

void __thiscall
spine::DeformTimeline::setFrame(DeformTimeline *this,int param_1,float param_2,Vector *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  *(float *)(*(long *)(this + 0x48) + (long)param_1 * 4) = param_2;
  lVar9 = *(long *)(this + 0x68);
  lVar5 = lVar9 + (long)param_1 * 0x20;
  puVar10 = (ulong *)(lVar5 + 8);
  *puVar10 = 0;
  uVar12 = *(ulong *)(param_3 + 8);
  puVar11 = (ulong *)(lVar5 + 0x10);
  if (*puVar11 < uVar12) {
    *puVar11 = uVar12;
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    plVar1 = (long *)SpineExtension::getInstance();
    uVar8 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar8,uVar12 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(lVar5 + 0x18) = uVar8;
    uVar12 = *(ulong *)(param_3 + 8);
  }
  if (uVar12 != 0) {
    uVar12 = 0;
    plVar1 = (long *)(lVar9 + (long)param_1 * 0x20 + 0x18);
    uVar6 = *puVar10;
    do {
      lVar5 = *(long *)(param_3 + 0x18);
      if (uVar6 == *puVar11) {
        uVar3 = (uint)((float)uVar6 * 1.75);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        uVar13 = *(undefined4 *)(lVar5 + uVar12 * 4);
        *puVar11 = (long)(int)uVar3;
        lVar5 = *plVar1;
        plVar2 = (long *)SpineExtension::getInstance();
        lVar5 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,lVar5,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        *plVar1 = lVar5;
        uVar6 = *puVar10;
        uVar4 = uVar6 + 1;
        *puVar10 = uVar4;
        puVar7 = (undefined4 *)(lVar5 + uVar6 * 4);
      }
      else {
        uVar4 = uVar6 + 1;
        lVar9 = *plVar1;
        *puVar10 = uVar4;
        uVar13 = *(undefined4 *)(lVar5 + uVar12 * 4);
        puVar7 = (undefined4 *)(lVar9 + uVar6 * 4);
      }
      *puVar7 = uVar13;
      uVar12 = uVar12 + 1;
      uVar6 = uVar4;
    } while (uVar12 < *(ulong *)(param_3 + 8));
  }
  return;
}

