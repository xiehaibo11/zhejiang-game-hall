
/* spine::RegionAttachment::~RegionAttachment() */

void __thiscall spine::RegionAttachment::~RegionAttachment(RegionAttachment *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__RegionAttachment_01c8f180;
  *(undefined ***)(this + 0x28) = &PTR__RegionAttachment_01c8f1b0;
  SpineObject::~SpineObject((SpineObject *)(this + 0xe0));
  *(undefined ***)(this + 0xb8) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 200);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xb8));
  *(undefined ***)(this + 0x98) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0xb0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x98));
  *(undefined ***)(this + 0x78) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0x90);
  *(undefined8 *)(this + 0x80) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x78));
  *(undefined ***)(this + 0x28) = &PTR__HasRendererObject_01c8e4f0;
  if ((*(code **)(this + 0x38) != (code *)0x0) && (*(long *)(this + 0x30) != 0)) {
    (**(code **)(this + 0x38))();
  }
  Attachment::~Attachment((Attachment *)this);
  return;
}

