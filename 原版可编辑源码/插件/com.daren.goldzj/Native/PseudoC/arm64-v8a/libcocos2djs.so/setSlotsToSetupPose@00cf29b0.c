
/* spine::Skeleton::setSlotsToSetupPose() */

void __thiscall spine::Skeleton::setSlotsToSetupPose(Skeleton *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)(this + 0x38);
  *(undefined8 *)(this + 0x58) = 0;
  if (lVar9 != 0) {
    lVar10 = 0;
    uVar4 = 0;
    do {
      if (uVar4 == *(ulong *)(this + 0x60)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar11 = *(undefined8 *)(*(long *)(this + 0x48) + lVar10 * 8);
        uVar8 = *(undefined8 *)(this + 0x68);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this + 0x60) = (long)(int)uVar3;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar2 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar8,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar6 = *(long *)(this + 0x58);
        *(long *)(this + 0x68) = lVar2;
        uVar5 = lVar6 + 1;
        *(ulong *)(this + 0x58) = uVar5;
        puVar7 = (undefined8 *)(lVar2 + lVar6 * 8);
      }
      else {
        uVar5 = uVar4 + 1;
        *(ulong *)(this + 0x58) = uVar5;
        uVar11 = *(undefined8 *)(*(long *)(this + 0x48) + lVar10 * 8);
        puVar7 = (undefined8 *)(*(long *)(this + 0x68) + uVar4 * 8);
      }
      lVar10 = lVar10 + 1;
      *puVar7 = uVar11;
      uVar4 = uVar5;
    } while (lVar9 != lVar10);
    lVar9 = *(long *)(this + 0x38);
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        Slot::setToSetupPose(*(Slot **)(*(long *)(this + 0x48) + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
    }
  }
  return;
}

