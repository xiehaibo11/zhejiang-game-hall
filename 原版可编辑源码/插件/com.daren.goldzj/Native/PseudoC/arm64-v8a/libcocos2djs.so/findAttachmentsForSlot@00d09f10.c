
/* spine::Skin::findAttachmentsForSlot(unsigned long, spine::Vector<spine::Attachment*>&) */

void __thiscall spine::Skin::findAttachmentsForSlot(Skin *this,ulong param_1,Vector *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar6 = *(ulong *)(this + 0x30);
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar8 = 0;
    do {
      while( true ) {
        plVar3 = (long *)(*(long *)(this + 0x40) + uVar10 * 0x20 + 0x18);
        while ((ulong)plVar3[-2] <= uVar8) {
          uVar10 = uVar10 + 1;
          uVar8 = 0;
          plVar3 = plVar3 + 4;
          if (uVar6 <= uVar10) {
            return;
          }
        }
        if (*(ulong *)(*plVar3 + uVar8 * 0x28) == param_1) break;
LAB_00d0a024:
        uVar8 = uVar8 + 1;
        if (uVar6 <= uVar10) {
          return;
        }
      }
      uVar2 = *(ulong *)(param_2 + 8);
      puVar1 = (undefined8 *)(*plVar3 + uVar8 * 0x28 + 0x20);
      if (uVar2 == *(ulong *)(param_2 + 0x10)) {
        uVar5 = (uint)((float)uVar2 * 1.75);
        uVar11 = *puVar1;
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        *(long *)(param_2 + 0x10) = (long)(int)uVar5;
        plVar3 = (long *)SpineExtension::getInstance();
        lVar4 = (**(code **)(*plVar3 + 0x20))
                          (plVar3,uVar9,
                           -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(param_2 + 8);
        *(long *)(param_2 + 0x18) = lVar4;
        *(long *)(param_2 + 8) = lVar7 + 1;
        *(undefined8 *)(lVar4 + lVar7 * 8) = uVar11;
        uVar6 = *(ulong *)(this + 0x30);
        goto LAB_00d0a024;
      }
      *(ulong *)(param_2 + 8) = uVar2 + 1;
      *(undefined8 *)(*(long *)(param_2 + 0x18) + uVar2 * 8) = *puVar1;
      uVar8 = uVar8 + 1;
    } while (uVar10 < uVar6);
  }
  return;
}

