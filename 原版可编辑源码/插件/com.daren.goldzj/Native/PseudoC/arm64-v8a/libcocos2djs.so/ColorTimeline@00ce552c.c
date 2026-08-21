
/* spine::ColorTimeline::ColorTimeline(int) */

void __thiscall spine::ColorTimeline::ColorTimeline(ColorTimeline *this,int param_1)

{
  long *plVar1;
  void *__s;
  uint uVar2;
  
  CurveTimeline::CurveTimeline((CurveTimeline *)this,param_1);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__ColorTimeline_01c8eb18;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d048;
  *(long *)(this + 0x38) = (long)(param_1 * 5);
  if (param_1 != 0) {
    uVar2 = (uint)((float)(ulong)(long)(param_1 * 5) * 1.75);
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    *(long *)(this + 0x40) = (long)(int)uVar2;
    plVar1 = (long *)SpineExtension::getInstance();
    __s = (void *)(**(code **)(*plVar1 + 0x20))
                            (plVar1,0,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar2 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x52);
    *(void **)(this + 0x48) = __s;
    if (*(long *)(this + 0x38) != 0) {
      memset(__s,0,*(long *)(this + 0x38) << 2);
    }
  }
  return;
}

