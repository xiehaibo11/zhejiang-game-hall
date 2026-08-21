
/* spine::MeshAttachment::setParentMesh(spine::MeshAttachment*) */

void __thiscall spine::MeshAttachment::setParentMesh(MeshAttachment *this,MeshAttachment *param_1)

{
  undefined2 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  *(MeshAttachment **)(this + 0xb0) = param_1;
  if (param_1 != (MeshAttachment *)0x0) {
    *(undefined8 *)(this + 0x30) = 0;
    uVar10 = *(ulong *)(param_1 + 0x30);
    if (*(ulong *)(this + 0x38) < uVar10) {
      uVar9 = *(undefined8 *)(this + 0x40);
      *(ulong *)(this + 0x38) = uVar10;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar9 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,uVar9,uVar10 << 3,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0x5e);
      *(undefined8 *)(this + 0x40) = uVar9;
      uVar10 = *(ulong *)(param_1 + 0x30);
    }
    if (uVar10 != 0) {
      uVar10 = 0;
      do {
        uVar5 = *(ulong *)(this + 0x30);
        lVar7 = *(long *)(param_1 + 0x40);
        if (uVar5 == *(ulong *)(this + 0x38)) {
          uVar3 = (uint)((float)uVar5 * 1.75);
          uVar12 = *(undefined8 *)(lVar7 + uVar10 * 8);
          uVar9 = *(undefined8 *)(this + 0x40);
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          *(long *)(this + 0x38) = (long)(int)uVar3;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar7 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar9,
                             -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar4 = *(long *)(this + 0x30);
          *(long *)(this + 0x40) = lVar7;
          *(long *)(this + 0x30) = lVar4 + 1;
          *(undefined8 *)(lVar7 + lVar4 * 8) = uVar12;
        }
        else {
          *(ulong *)(this + 0x30) = uVar5 + 1;
          *(undefined8 *)(*(long *)(this + 0x40) + uVar5 * 8) = *(undefined8 *)(lVar7 + uVar10 * 8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulong *)(param_1 + 0x30));
    }
    *(undefined8 *)(this + 0x50) = 0;
    uVar10 = *(ulong *)(param_1 + 0x50);
    if (*(ulong *)(this + 0x58) < uVar10) {
      uVar9 = *(undefined8 *)(this + 0x60);
      *(ulong *)(this + 0x58) = uVar10;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar9 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,uVar9,uVar10 << 2,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0x5e);
      *(undefined8 *)(this + 0x60) = uVar9;
      uVar10 = *(ulong *)(param_1 + 0x50);
    }
    if (uVar10 != 0) {
      uVar10 = 0;
      uVar5 = *(ulong *)(this + 0x50);
      do {
        lVar7 = *(long *)(param_1 + 0x60);
        if (uVar5 == *(ulong *)(this + 0x58)) {
          uVar3 = (uint)((float)uVar5 * 1.75);
          uVar11 = *(undefined4 *)(lVar7 + uVar10 * 4);
          uVar9 = *(undefined8 *)(this + 0x60);
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          *(long *)(this + 0x58) = (long)(int)uVar3;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar7 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar9,
                             -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar4 = *(long *)(this + 0x50);
          *(long *)(this + 0x60) = lVar7;
          uVar6 = lVar4 + 1;
          *(ulong *)(this + 0x50) = uVar6;
          puVar8 = (undefined4 *)(lVar7 + lVar4 * 4);
        }
        else {
          uVar6 = uVar5 + 1;
          *(ulong *)(this + 0x50) = uVar6;
          uVar11 = *(undefined4 *)(lVar7 + uVar10 * 4);
          puVar8 = (undefined4 *)(*(long *)(this + 0x60) + uVar5 * 4);
        }
        *puVar8 = uVar11;
        uVar10 = uVar10 + 1;
        uVar5 = uVar6;
      } while (uVar10 < *(ulong *)(param_1 + 0x50));
    }
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0x68) = uVar9;
    uVar10 = *(ulong *)(param_1 + 0xe0);
    if (*(ulong *)(this + 0xe8) < uVar10) {
      uVar9 = *(undefined8 *)(this + 0xf0);
      *(ulong *)(this + 0xe8) = uVar10;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar9 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,uVar9,uVar10 << 2,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0x5e);
      *(undefined8 *)(this + 0xf0) = uVar9;
      uVar10 = *(ulong *)(param_1 + 0xe0);
    }
    if (uVar10 != 0) {
      uVar10 = 0;
      uVar5 = *(ulong *)(this + 0xe0);
      do {
        lVar7 = *(long *)(param_1 + 0xf0);
        if (uVar5 == *(ulong *)(this + 0xe8)) {
          uVar3 = (uint)((float)uVar5 * 1.75);
          uVar11 = *(undefined4 *)(lVar7 + uVar10 * 4);
          uVar9 = *(undefined8 *)(this + 0xf0);
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          *(long *)(this + 0xe8) = (long)(int)uVar3;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar7 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar9,
                             -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar4 = *(long *)(this + 0xe0);
          *(long *)(this + 0xf0) = lVar7;
          uVar6 = lVar4 + 1;
          *(ulong *)(this + 0xe0) = uVar6;
          puVar8 = (undefined4 *)(lVar7 + lVar4 * 4);
        }
        else {
          uVar6 = uVar5 + 1;
          *(ulong *)(this + 0xe0) = uVar6;
          uVar11 = *(undefined4 *)(lVar7 + uVar10 * 4);
          puVar8 = (undefined4 *)(*(long *)(this + 0xf0) + uVar5 * 4);
        }
        *puVar8 = uVar11;
        uVar10 = uVar10 + 1;
        uVar5 = uVar6;
      } while (uVar10 < *(ulong *)(param_1 + 0xe0));
    }
    *(undefined8 *)(this + 0x100) = 0;
    uVar10 = *(ulong *)(param_1 + 0x100);
    if (*(ulong *)(this + 0x108) < uVar10) {
      uVar9 = *(undefined8 *)(this + 0x110);
      *(ulong *)(this + 0x108) = uVar10;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar9 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,uVar9,uVar10 << 1,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0x5e);
      *(undefined8 *)(this + 0x110) = uVar9;
      uVar10 = *(ulong *)(param_1 + 0x100);
    }
    if (uVar10 != 0) {
      uVar10 = 0;
      uVar5 = *(ulong *)(this + 0x100);
      do {
        lVar7 = *(long *)(param_1 + 0x110);
        if (uVar5 == *(ulong *)(this + 0x108)) {
          uVar3 = (uint)((float)uVar5 * 1.75);
          uVar1 = *(undefined2 *)(lVar7 + uVar10 * 2);
          uVar9 = *(undefined8 *)(this + 0x110);
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          *(long *)(this + 0x108) = (long)(int)uVar3;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar7 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar9,
                             -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar4 = *(long *)(this + 0x100);
          *(long *)(this + 0x110) = lVar7;
          uVar6 = lVar4 + 1;
          *(ulong *)(this + 0x100) = uVar6;
          *(undefined2 *)(lVar7 + lVar4 * 2) = uVar1;
        }
        else {
          uVar6 = uVar5 + 1;
          *(ulong *)(this + 0x100) = uVar6;
          *(undefined2 *)(*(long *)(this + 0x110) + uVar5 * 2) = *(undefined2 *)(lVar7 + uVar10 * 2)
          ;
        }
        uVar10 = uVar10 + 1;
        uVar5 = uVar6;
      } while (uVar10 < *(ulong *)(param_1 + 0x100));
    }
    uVar11 = *(undefined4 *)(param_1 + 0x180);
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x180) = uVar11;
    uVar10 = *(ulong *)(param_1 + 0x120);
    if (*(ulong *)(this + 0x128) < uVar10) {
      uVar9 = *(undefined8 *)(this + 0x130);
      *(ulong *)(this + 0x128) = uVar10;
      plVar2 = (long *)SpineExtension::getInstance();
      uVar9 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,uVar9,uVar10 << 1,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0x5e);
      *(undefined8 *)(this + 0x130) = uVar9;
      uVar10 = *(ulong *)(param_1 + 0x120);
    }
    if (uVar10 != 0) {
      uVar10 = 0;
      uVar5 = *(ulong *)(this + 0x120);
      do {
        lVar7 = *(long *)(param_1 + 0x130);
        if (uVar5 == *(ulong *)(this + 0x128)) {
          uVar3 = (uint)((float)uVar5 * 1.75);
          uVar1 = *(undefined2 *)(lVar7 + uVar10 * 2);
          uVar9 = *(undefined8 *)(this + 0x130);
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          *(long *)(this + 0x128) = (long)(int)uVar3;
          plVar2 = (long *)SpineExtension::getInstance();
          lVar7 = (**(code **)(*plVar2 + 0x20))
                            (plVar2,uVar9,
                             -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar4 = *(long *)(this + 0x120);
          *(long *)(this + 0x130) = lVar7;
          uVar6 = lVar4 + 1;
          *(ulong *)(this + 0x120) = uVar6;
          *(undefined2 *)(lVar7 + lVar4 * 2) = uVar1;
        }
        else {
          uVar6 = uVar5 + 1;
          *(ulong *)(this + 0x120) = uVar6;
          *(undefined2 *)(*(long *)(this + 0x130) + uVar5 * 2) = *(undefined2 *)(lVar7 + uVar10 * 2)
          ;
        }
        uVar10 = uVar10 + 1;
        uVar5 = uVar6;
      } while (uVar10 < *(ulong *)(param_1 + 0x120));
    }
    *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_1 + 0x160);
  }
  return;
}

