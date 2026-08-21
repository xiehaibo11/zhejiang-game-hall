
/* spine::IkConstraintTimeline::IkConstraintTimeline(int) */

void __thiscall
spine::IkConstraintTimeline::IkConstraintTimeline(IkConstraintTimeline *this,int param_1)

{
  long *plVar1;
  void *__s;
  uint uVar2;
  
  CurveTimeline::CurveTimeline((CurveTimeline *)this,param_1);
  *(undefined ***)this = &PTR__IkConstraintTimeline_01c8ee90;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8d048;
  *(long *)(this + 0x30) = (long)(param_1 * 6);
  if (param_1 != 0) {
    uVar2 = (uint)((float)(ulong)(long)(param_1 * 6) * 1.75);
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    *(long *)(this + 0x38) = (long)(int)uVar2;
    plVar1 = (long *)SpineExtension::getInstance();
    __s = (void *)(**(code **)(*plVar1 + 0x20))
                            (plVar1,0,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar2 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x52);
    *(void **)(this + 0x40) = __s;
    if (*(long *)(this + 0x30) != 0) {
      memset(__s,0,*(long *)(this + 0x30) << 2);
    }
  }
  return;
}

