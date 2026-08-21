
/* spine::AttachmentTimeline::~AttachmentTimeline() */

void __thiscall spine::AttachmentTimeline::~AttachmentTimeline(AttachmentTimeline *this)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__AttachmentTimeline_01c8e9a8;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c678a0;
  uVar2 = *(ulong *)(this + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    lVar4 = -1;
    do {
      (*(code *)**(undefined8 **)(*(long *)(this + 0x48) + (uVar2 + lVar4) * 0x18))();
      uVar2 = *(ulong *)(this + 0x38);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar3 < uVar2);
  }
  lVar4 = *(long *)(this + 0x48);
  *(undefined8 *)(this + 0x38) = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x30));
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d048;
  lVar4 = *(long *)(this + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x10));
  Timeline::~Timeline((Timeline *)this);
  return;
}

