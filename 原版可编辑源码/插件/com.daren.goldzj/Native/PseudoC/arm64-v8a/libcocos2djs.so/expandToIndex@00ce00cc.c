
/* spine::AnimationState::expandToIndex(unsigned long) */

undefined8 __thiscall spine::AnimationState::expandToIndex(AnimationState *this,ulong param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar5 = *(ulong *)(this + 0x58);
  if (param_1 < uVar5) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x68) + param_1 * 8);
  }
  else {
    do {
      if (uVar5 == *(ulong *)(this + 0x60)) {
        uVar4 = (uint)((float)uVar5 * 1.75);
        uVar1 = *(undefined8 *)(this + 0x68);
        if (uVar4 < 9) {
          uVar4 = 8;
        }
        *(long *)(this + 0x60) = (long)(int)uVar4;
        plVar2 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,uVar1,
                           -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar6 = *(long *)(this + 0x58);
        *(long *)(this + 0x68) = lVar3;
        uVar5 = lVar6 + 1;
        *(ulong *)(this + 0x58) = uVar5;
        puVar7 = (undefined8 *)(lVar3 + lVar6 * 8);
      }
      else {
        puVar7 = (undefined8 *)(*(long *)(this + 0x68) + uVar5 * 8);
        uVar5 = uVar5 + 1;
        *(ulong *)(this + 0x58) = uVar5;
      }
      *puVar7 = 0;
    } while (uVar5 <= param_1);
    uVar1 = 0;
  }
  return uVar1;
}

