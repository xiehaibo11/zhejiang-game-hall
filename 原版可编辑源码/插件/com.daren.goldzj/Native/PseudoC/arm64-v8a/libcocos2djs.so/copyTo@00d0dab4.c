
/* spine::VertexAttachment::copyTo(spine::VertexAttachment*) */

void __thiscall spine::VertexAttachment::copyTo(VertexAttachment *this,VertexAttachment *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar9 = *(ulong *)(this + 0x30);
  if (*(ulong *)(param_1 + 0x38) < uVar9) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x38) = uVar9;
    plVar1 = (long *)SpineExtension::getInstance();
    uVar8 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar8,uVar9 << 3,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    uVar9 = *(ulong *)(this + 0x30);
  }
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + 0x30);
      lVar6 = *(long *)(this + 0x40);
      if (uVar4 == *(ulong *)(param_1 + 0x38)) {
        uVar2 = (uint)((float)uVar4 * 1.75);
        uVar11 = *(undefined8 *)(lVar6 + uVar9 * 8);
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        if (uVar2 < 9) {
          uVar2 = 8;
        }
        *(long *)(param_1 + 0x38) = (long)(int)uVar2;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar8,
                           -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar3 = *(long *)(param_1 + 0x30);
        *(long *)(param_1 + 0x40) = lVar6;
        *(long *)(param_1 + 0x30) = lVar3 + 1;
        *(undefined8 *)(lVar6 + lVar3 * 8) = uVar11;
      }
      else {
        *(ulong *)(param_1 + 0x30) = uVar4 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar4 * 8) = *(undefined8 *)(lVar6 + uVar9 * 8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulong *)(this + 0x30));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar9 = *(ulong *)(this + 0x50);
  if (*(ulong *)(param_1 + 0x58) < uVar9) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x58) = uVar9;
    plVar1 = (long *)SpineExtension::getInstance();
    uVar8 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar8,uVar9 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    uVar9 = *(ulong *)(this + 0x50);
  }
  if (uVar9 != 0) {
    uVar9 = 0;
    uVar4 = *(ulong *)(param_1 + 0x50);
    do {
      lVar6 = *(long *)(this + 0x60);
      if (uVar4 == *(ulong *)(param_1 + 0x58)) {
        uVar2 = (uint)((float)uVar4 * 1.75);
        uVar10 = *(undefined4 *)(lVar6 + uVar9 * 4);
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        if (uVar2 < 9) {
          uVar2 = 8;
        }
        *(long *)(param_1 + 0x58) = (long)(int)uVar2;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar8,
                           -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar3 = *(long *)(param_1 + 0x50);
        *(long *)(param_1 + 0x60) = lVar6;
        uVar5 = lVar3 + 1;
        *(ulong *)(param_1 + 0x50) = uVar5;
        puVar7 = (undefined4 *)(lVar6 + lVar3 * 4);
      }
      else {
        uVar5 = uVar4 + 1;
        *(ulong *)(param_1 + 0x50) = uVar5;
        uVar10 = *(undefined4 *)(lVar6 + uVar9 * 4);
        puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + uVar4 * 4);
      }
      *puVar7 = uVar10;
      uVar9 = uVar9 + 1;
      uVar4 = uVar5;
    } while (uVar9 < *(ulong *)(this + 0x50));
  }
  uVar8 = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  return;
}

