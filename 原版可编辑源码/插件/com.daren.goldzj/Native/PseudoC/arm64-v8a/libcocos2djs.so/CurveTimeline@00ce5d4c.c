
/* spine::CurveTimeline::CurveTimeline(int) */

void __thiscall spine::CurveTimeline::CurveTimeline(CurveTimeline *this,int param_1)

{
  int iVar1;
  long *plVar2;
  void *__s;
  uint uVar3;
  
  Timeline::Timeline((Timeline *)this);
  iVar1 = param_1 * 0x13 + -0x13;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)(this + 8) = &PTR__Vector_01c8d048;
  *(undefined ***)this = &PTR__CurveTimeline_01c8ebd8;
  *(long *)(this + 0x10) = (long)iVar1;
  if (iVar1 != 0) {
    uVar3 = (uint)((float)(ulong)(long)iVar1 * 1.75);
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    *(long *)(this + 0x18) = (long)(int)uVar3;
    plVar2 = (long *)SpineExtension::getInstance();
    __s = (void *)(**(code **)(*plVar2 + 0x20))
                            (plVar2,0,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar3 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x52);
    *(void **)(this + 0x20) = __s;
    if (*(long *)(this + 0x10) != 0) {
      memset(__s,0,*(long *)(this + 0x10) << 2);
    }
  }
  return;
}

