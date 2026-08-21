
/* spine::EventTimeline::EventTimeline(int) */

void __thiscall spine::EventTimeline::EventTimeline(EventTimeline *this,int param_1)

{
  long *plVar1;
  void *__s;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  Timeline::Timeline((Timeline *)this);
  uVar4 = (ulong)param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8d0b8;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(ulong *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 8) = &PTR__Vector_01c8d048;
  *(undefined ***)this = &PTR__EventTimeline_01c8eda8;
  if (param_1 != 0) {
    uVar2 = (uint)((float)uVar4 * 1.75);
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    *(long *)(this + 0x18) = (long)(int)uVar2;
    plVar1 = (long *)SpineExtension::getInstance();
    __s = (void *)(**(code **)(*plVar1 + 0x20))
                            (plVar1,0,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar2 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x52);
    *(void **)(this + 0x20) = __s;
    if (*(long *)(this + 0x10) != 0) {
      memset(__s,0,*(long *)(this + 0x10) << 2);
    }
  }
  uVar5 = *(ulong *)(this + 0x30);
  *(ulong *)(this + 0x30) = uVar4;
  if (*(ulong *)(this + 0x38) < uVar4) {
    uVar2 = (uint)((float)uVar4 * 1.75);
    uVar3 = *(undefined8 *)(this + 0x40);
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    *(long *)(this + 0x38) = (long)(int)uVar2;
    plVar1 = (long *)SpineExtension::getInstance();
    uVar3 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar3,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3
                       ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x52);
    uVar4 = *(ulong *)(this + 0x30);
    *(undefined8 *)(this + 0x40) = uVar3;
  }
  if (uVar5 < uVar4) {
    do {
      *(undefined8 *)(*(long *)(this + 0x40) + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}

