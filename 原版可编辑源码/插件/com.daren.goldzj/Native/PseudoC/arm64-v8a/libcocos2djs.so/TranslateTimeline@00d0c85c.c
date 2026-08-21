
/* spine::TranslateTimeline::TranslateTimeline(int) */

void __thiscall spine::TranslateTimeline::TranslateTimeline(TranslateTimeline *this,int param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  CurveTimeline::CurveTimeline((CurveTimeline *)this,param_1);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  uVar6 = (ulong)(param_1 * 3);
  *(undefined ***)this = &PTR__TranslateTimeline_01c8f8d8;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  if (param_1 == 0) {
    lVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    *(ulong *)(this + 0x38) = uVar6;
    plVar1 = (long *)SpineExtension::getInstance();
    lVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,0,uVar6 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    uVar5 = *(ulong *)(this + 0x30);
    uVar4 = *(ulong *)(this + 0x38);
    *(long *)(this + 0x40) = lVar2;
  }
  *(ulong *)(this + 0x30) = uVar6;
  if (uVar4 < uVar6) {
    uVar3 = (uint)((float)uVar6 * 1.75);
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    *(long *)(this + 0x38) = (long)(int)uVar3;
    plVar1 = (long *)SpineExtension::getInstance();
    lVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,lVar2,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2
                       ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x52);
    uVar6 = *(ulong *)(this + 0x30);
    *(long *)(this + 0x40) = lVar2;
  }
  if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
    memset((void *)(lVar2 + uVar5 * 4),0,(uVar6 - uVar5) * 4);
  }
  return;
}

