
/* spine::DeformTimeline::DeformTimeline(int) */

void __thiscall spine::DeformTimeline::DeformTimeline(DeformTimeline *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  CurveTimeline::CurveTimeline((CurveTimeline *)this,param_1);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__DeformTimeline_01c8ec28;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x50) = &PTR__Vector_01c8ec78;
  uVar7 = (ulong)param_1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if (param_1 != 0) {
    *(ulong *)(this + 0x40) = uVar7;
    plVar3 = (long *)SpineExtension::getInstance();
    uVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,0,uVar7 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x48) = uVar4;
    if (*(ulong *)(this + 0x60) < uVar7) {
      uVar4 = *(undefined8 *)(this + 0x68);
      *(ulong *)(this + 0x60) = uVar7;
      plVar3 = (long *)SpineExtension::getInstance();
      uVar4 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,uVar4,uVar7 << 5,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0x5e);
      *(undefined8 *)(this + 0x68) = uVar4;
    }
  }
  uVar1 = *(ulong *)(this + 0x38);
  *(ulong *)(this + 0x38) = uVar7;
  if (*(ulong *)(this + 0x40) < uVar7) {
    uVar6 = (uint)((float)uVar7 * 1.75);
    uVar4 = *(undefined8 *)(this + 0x48);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(this + 0x40) = (long)(int)uVar6;
    plVar3 = (long *)SpineExtension::getInstance();
    uVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,uVar4,-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2
                       ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x52);
    *(undefined8 *)(this + 0x48) = uVar4;
    lVar5 = *(ulong *)(this + 0x38) - uVar1;
    if (*(ulong *)(this + 0x38) < uVar1 || lVar5 == 0) goto joined_r0x00ce623c;
  }
  else {
    lVar5 = uVar7 - uVar1;
    if (uVar7 < uVar1 || lVar5 == 0) goto joined_r0x00ce623c;
  }
  memset((void *)(*(long *)(this + 0x48) + uVar1 * 4),0,lVar5 << 2);
joined_r0x00ce623c:
  if (0 < param_1) {
    do {
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_78 = &PTR__Vector_01c8d048;
      Vector<spine::Vector<float>>::add
                ((Vector<spine::Vector<float>> *)(this + 0x50),(Vector *)&local_78);
      lVar5 = local_60;
      local_70 = 0;
      local_78 = &PTR__Vector_01c8d048;
      if (local_60 != 0) {
        plVar3 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar3 + 0x28))
                  (plVar3,lVar5,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce)
        ;
      }
      SpineObject::~SpineObject((SpineObject *)&local_78);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

