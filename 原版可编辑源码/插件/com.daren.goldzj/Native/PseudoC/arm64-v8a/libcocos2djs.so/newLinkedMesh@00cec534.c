
/* spine::MeshAttachment::newLinkedMesh() */

VertexAttachment * __thiscall spine::MeshAttachment::newLinkedMesh(MeshAttachment *this)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  VertexAttachment *this_00;
  String *pSVar4;
  long lVar5;
  long *plVar6;
  void *__dest;
  long lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  this_00 = SpineObject::operator_new
                      (400,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/MeshAttachment.cpp"
                       ,0x149);
  pSVar4 = (String *)Attachment::getName((Attachment *)this);
  VertexAttachment::VertexAttachment(this_00,pSVar4);
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined ***)this_00 = &PTR__MeshAttachment_01c8eee0;
  *(undefined ***)(this_00 + 0x80) = &PTR__MeshAttachment_01c8ef10;
  *(undefined ***)(this_00 + 0x138) = &PTR__String_01c67868;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  auVar9 = NEON_fmov(0x3f800000,4);
  *(long *)(this_00 + 0x178) = auVar9._8_8_;
  *(long *)(this_00 + 0x170) = auVar9._0_8_;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined ***)(this_00 + 0xb8) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined ***)(this_00 + 0xd8) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined ***)(this_00 + 0xf8) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined ***)(this_00 + 0x118) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined ***)(this_00 + 0x168) = &PTR__SpineObject_01c8eb68;
  uVar8 = MathUtil::clamp(1.0,0.0,1.0);
  *(undefined4 *)(this_00 + 0x170) = uVar8;
  uVar8 = MathUtil::clamp(*(float *)(this_00 + 0x174),0.0,1.0);
  *(undefined4 *)(this_00 + 0x174) = uVar8;
  uVar8 = MathUtil::clamp(*(float *)(this_00 + 0x178),0.0,1.0);
  *(undefined4 *)(this_00 + 0x178) = uVar8;
  uVar8 = MathUtil::clamp(*(float *)(this_00 + 0x17c),0.0,1.0);
  *(undefined4 *)(this_00 + 0x17c) = uVar8;
  *(undefined4 *)(this_00 + 0x180) = 0;
  this_00[0x184] = (VertexAttachment)0x0;
  *(undefined4 *)(this_00 + 0x188) = 0;
  lVar7 = *(long *)(this + 0x88);
  if (((*(code **)(this_00 + 0x90) != (code *)0x0) &&
      (lVar5 = *(long *)(this_00 + 0x88), lVar5 != 0)) && (lVar5 != lVar7)) {
    (**(code **)(this_00 + 0x90))();
  }
  *(long *)(this_00 + 0x88) = lVar7;
  *(undefined8 *)(this_00 + 0x90) = 0;
  uVar1 = *(undefined8 *)(this + 0x150);
  *(undefined8 *)(this_00 + 0x158) = *(undefined8 *)(this + 0x158);
  *(undefined8 *)(this_00 + 0x150) = uVar1;
  *(MeshAttachment *)(this_00 + 0x184) = this[0x184];
  *(undefined4 *)(this_00 + 0x188) = *(undefined4 *)(this + 0x188);
  uVar1 = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this_00 + 0xa0) = *(undefined8 *)(this + 0xa0);
  *(undefined8 *)(this_00 + 0x98) = uVar1;
  *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)(this_00 + 0xac) = *(undefined4 *)(this + 0xac);
  if (this + 0x138 != (MeshAttachment *)(this_00 + 0x138)) {
    lVar7 = *(long *)(this_00 + 0x148);
    if (lVar7 != 0) {
      plVar6 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar6 + 0x28))
                (plVar6,lVar7,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
    }
    if (*(long *)(this + 0x148) == 0) {
      *(undefined8 *)(this_00 + 0x140) = 0;
      *(undefined8 *)(this_00 + 0x148) = 0;
    }
    else {
      *(undefined8 *)(this_00 + 0x140) = *(undefined8 *)(this + 0x140);
      lVar7 = *(long *)(this + 0x140);
      plVar6 = (long *)SpineExtension::getInstance();
      __dest = (void *)(**(code **)(*plVar6 + 0x18))
                                 (plVar6,lVar7 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x81);
      *(void **)(this_00 + 0x148) = __dest;
      memcpy(__dest,*(void **)(this + 0x148),*(long *)(this + 0x140) + 1);
    }
  }
  fVar2 = *(float *)(this + 0x170);
  uVar8 = *(undefined4 *)(this + 0x174);
  uVar3 = *(undefined4 *)(this + 0x17c);
  *(undefined4 *)(this_00 + 0x178) = *(undefined4 *)(this + 0x178);
  *(undefined4 *)(this_00 + 0x17c) = uVar3;
  *(float *)(this_00 + 0x170) = fVar2;
  *(undefined4 *)(this_00 + 0x174) = uVar8;
  uVar8 = MathUtil::clamp(fVar2,0.0,1.0);
  *(undefined4 *)(this_00 + 0x170) = uVar8;
  uVar8 = MathUtil::clamp(*(float *)(this_00 + 0x174),0.0,1.0);
  *(undefined4 *)(this_00 + 0x174) = uVar8;
  uVar8 = MathUtil::clamp(*(float *)(this_00 + 0x178),0.0,1.0);
  *(undefined4 *)(this_00 + 0x178) = uVar8;
  uVar8 = MathUtil::clamp(*(float *)(this_00 + 0x17c),0.0,1.0);
  *(undefined4 *)(this_00 + 0x17c) = uVar8;
  *(undefined8 *)(this_00 + 0x70) = *(undefined8 *)(this + 0x70);
  if (*(MeshAttachment **)(this + 0xb0) != (MeshAttachment *)0x0) {
    this = *(MeshAttachment **)(this + 0xb0);
  }
  setParentMesh((MeshAttachment *)this_00,this);
  updateUVs((MeshAttachment *)this_00);
  return this_00;
}

