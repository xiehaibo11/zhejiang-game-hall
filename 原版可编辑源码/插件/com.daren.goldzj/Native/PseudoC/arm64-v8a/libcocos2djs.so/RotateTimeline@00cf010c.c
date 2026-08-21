
/* spine::RotateTimeline::RotateTimeline(int) */

void __thiscall spine::RotateTimeline::RotateTimeline(RotateTimeline *this,int param_1)

{
  int iVar1;
  long *plVar2;
  void *__s;
  uint uVar3;
  
  CurveTimeline::CurveTimeline((CurveTimeline *)this,param_1);
  *(undefined4 *)(this + 0x28) = 0;
  iVar1 = param_1 << 1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__RotateTimeline_01c8f208;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d048;
  *(long *)(this + 0x38) = (long)iVar1;
  if (iVar1 != 0) {
    uVar3 = (uint)((float)(ulong)(long)iVar1 * 1.75);
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    *(long *)(this + 0x40) = (long)(int)uVar3;
    plVar2 = (long *)SpineExtension::getInstance();
    __s = (void *)(**(code **)(*plVar2 + 0x20))
                            (plVar2,0,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar3 << 2,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x52);
    *(void **)(this + 0x48) = __s;
    if (*(long *)(this + 0x38) != 0) {
      memset(__s,0,*(long *)(this + 0x38) << 2);
    }
  }
  return;
}

