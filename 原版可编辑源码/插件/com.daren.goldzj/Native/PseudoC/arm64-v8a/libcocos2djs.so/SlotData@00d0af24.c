
/* spine::SlotData::SlotData(int, spine::String const&, spine::BoneData&) */

void __thiscall
spine::SlotData::SlotData(SlotData *this,int param_1,String *param_2,BoneData *param_3)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__SlotData_01c8f720;
  *(undefined ***)(this + 0x10) = &PTR__String_01c67868;
  if (*(long *)(param_2 + 0x10) == 0) {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 8);
    plVar1 = (long *)SpineExtension::getInstance();
    __dest = (void *)(**(code **)(*plVar1 + 0x18))
                               (plVar1,lVar2 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    *(void **)(this + 0x20) = __dest;
    memcpy(__dest,*(void **)(param_2 + 0x10),*(long *)(param_2 + 8) + 1);
  }
  auVar4 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0x40) = auVar4._8_8_;
  *(long *)(this + 0x38) = auVar4._0_8_;
  *(BoneData **)(this + 0x28) = param_3;
  *(undefined ***)(this + 0x30) = &PTR__SpineObject_01c8eb68;
  uVar3 = MathUtil::clamp(1.0,0.0,1.0);
  *(undefined4 *)(this + 0x38) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x3c),0.0,1.0);
  *(undefined4 *)(this + 0x3c) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x40),0.0,1.0);
  *(undefined4 *)(this + 0x40) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x44),0.0,1.0);
  *(undefined4 *)(this + 0x44) = uVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x48) = &PTR__SpineObject_01c8eb68;
  uVar3 = MathUtil::clamp(0.0,0.0,1.0);
  *(undefined4 *)(this + 0x50) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x54),0.0,1.0);
  *(undefined4 *)(this + 0x54) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x58),0.0,1.0);
  *(undefined4 *)(this + 0x58) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x5c),0.0,1.0);
  *(undefined4 *)(this + 0x5c) = uVar3;
  this[0x60] = (SlotData)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x68) = &PTR__String_01c67868;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}

