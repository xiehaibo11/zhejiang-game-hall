
/* spine::Skin::addSkin(spine::Skin*) */

void __thiscall spine::Skin::addSkin(Skin *this,Skin *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar11 = 0;
    uVar3 = *(ulong *)(this + 0x50);
    do {
      lVar6 = *(long *)(param_1 + 0x60);
      if (uVar3 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar3;
          if (*(long *)(*(long *)(this + 0x60) + uVar9 * 8) == *(long *)(lVar6 + uVar11 * 8))
          goto LAB_00d0a308;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
      if (uVar3 == *(ulong *)(this + 0x58)) {
        uVar2 = (uint)((float)uVar3 * 1.75);
        uVar12 = *(undefined8 *)(lVar6 + uVar11 * 8);
        uVar10 = *(undefined8 *)(this + 0x60);
        if (uVar2 < 9) {
          uVar2 = 8;
        }
        *(long *)(this + 0x58) = (long)(int)uVar2;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar10,
                           -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x50);
        *(long *)(this + 0x60) = lVar6;
        uVar8 = lVar7 + 1;
        *(ulong *)(this + 0x50) = uVar8;
        puVar4 = (undefined8 *)(lVar6 + lVar7 * 8);
      }
      else {
        uVar8 = uVar3 + 1;
        *(ulong *)(this + 0x50) = uVar8;
        uVar12 = *(undefined8 *)(lVar6 + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(this + 0x60) + uVar3 * 8);
      }
      *puVar4 = uVar12;
LAB_00d0a308:
      uVar11 = uVar11 + 1;
      uVar3 = uVar8;
    } while (uVar11 < *(ulong *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar11 = 0;
    do {
      uVar3 = *(ulong *)(this + 0x70);
      lVar6 = *(long *)(param_1 + 0x80);
      if (uVar3 != 0) {
        uVar9 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x80) + uVar9 * 8) == *(long *)(lVar6 + uVar11 * 8))
          goto LAB_00d0a3e4;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
      if (uVar3 == *(ulong *)(this + 0x78)) {
        uVar2 = (uint)((float)uVar3 * 1.75);
        uVar12 = *(undefined8 *)(lVar6 + uVar11 * 8);
        uVar10 = *(undefined8 *)(this + 0x80);
        if (uVar2 < 9) {
          uVar2 = 8;
        }
        *(long *)(this + 0x78) = (long)(int)uVar2;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar10,
                           -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x70);
        *(long *)(this + 0x80) = lVar6;
        *(long *)(this + 0x70) = lVar7 + 1;
        puVar4 = (undefined8 *)(lVar6 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x70) = uVar3 + 1;
        uVar12 = *(undefined8 *)(lVar6 + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(this + 0x80) + uVar3 * 8);
      }
      *puVar4 = uVar12;
LAB_00d0a3e4:
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(param_1 + 0x70));
  }
  uVar11 = *(ulong *)(param_1 + 0x30);
  if (uVar11 != 0) {
    uVar9 = 0;
    uVar3 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + uVar3 * 0x20 + 0x18);
      uVar8 = uVar9;
      while ((ulong)plVar1[-2] <= uVar8) {
        uVar3 = uVar3 + 1;
        uVar8 = 0;
        plVar1 = plVar1 + 4;
        if (uVar11 <= uVar3) {
          return;
        }
      }
      uVar9 = uVar8 + 1;
      puVar5 = (ulong *)(*plVar1 + uVar8 * 0x28);
      AttachmentMap::put((AttachmentMap *)(this + 0x20),*puVar5,(String *)(puVar5 + 1),
                         (Attachment *)puVar5[4]);
      uVar11 = *(ulong *)(param_1 + 0x30);
    } while (uVar3 < uVar11);
  }
  return;
}

