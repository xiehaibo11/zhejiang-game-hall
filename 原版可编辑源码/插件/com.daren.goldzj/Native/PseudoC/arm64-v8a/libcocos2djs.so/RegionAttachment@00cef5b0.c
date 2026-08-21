
/* spine::RegionAttachment::RegionAttachment(spine::String const&) */

void __thiscall spine::RegionAttachment::RegionAttachment(RegionAttachment *this,String *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  Attachment::Attachment((Attachment *)this,param_1);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined ***)this = &PTR__RegionAttachment_01c8f180;
  *(undefined8 *)(this + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x40) = 0;
  auVar6 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0xf0) = auVar6._8_8_;
  *(long *)(this + 0xe8) = auVar6._0_8_;
  *(undefined ***)(this + 0x28) = &PTR__RegionAttachment_01c8f1b0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 0x78) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)(this + 0x98) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined ***)(this + 0xb8) = &PTR__String_01c67868;
  *(undefined ***)(this + 0xe0) = &PTR__SpineObject_01c8eb68;
  uVar5 = MathUtil::clamp(1.0,0.0,1.0);
  *(undefined4 *)(this + 0xe8) = uVar5;
  uVar5 = MathUtil::clamp(*(float *)(this + 0xec),0.0,1.0);
  *(undefined4 *)(this + 0xec) = uVar5;
  uVar5 = MathUtil::clamp(*(float *)(this + 0xf0),0.0,1.0);
  *(undefined4 *)(this + 0xf0) = uVar5;
  uVar5 = MathUtil::clamp(*(float *)(this + 0xf4),0.0,1.0);
  uVar1 = *(ulong *)(this + 0x80);
  uVar3 = 8;
  *(undefined4 *)(this + 0xf4) = uVar5;
  *(undefined8 *)(this + 0x80) = 8;
  if (*(ulong *)(this + 0x88) < 8) {
    uVar4 = *(undefined8 *)(this + 0x90);
    *(undefined8 *)(this + 0x88) = 0xe;
    plVar2 = (long *)SpineExtension::getInstance();
    uVar4 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar4,0x38,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x52);
    uVar3 = *(ulong *)(this + 0x80);
    *(undefined8 *)(this + 0x90) = uVar4;
  }
  if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
    memset((void *)(*(long *)(this + 0x90) + uVar1 * 4),0,(uVar3 - uVar1) * 4);
  }
  uVar1 = *(ulong *)(this + 0xa0);
  uVar3 = 8;
  *(undefined8 *)(this + 0xa0) = 8;
  if (*(ulong *)(this + 0xa8) < 8) {
    uVar4 = *(undefined8 *)(this + 0xb0);
    *(undefined8 *)(this + 0xa8) = 0xe;
    plVar2 = (long *)SpineExtension::getInstance();
    uVar4 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar4,0x38,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x52);
    uVar3 = *(ulong *)(this + 0xa0);
    *(undefined8 *)(this + 0xb0) = uVar4;
  }
  if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
    memset((void *)(*(long *)(this + 0xb0) + uVar1 * 4),0,(uVar3 - uVar1) * 4);
  }
  return;
}

