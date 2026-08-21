
/* spine::VertexAttachment::~VertexAttachment() */

void __thiscall spine::VertexAttachment::~VertexAttachment(VertexAttachment *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__VertexAttachment_01c8f9d0;
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0x60);
  *(undefined8 *)(this + 0x50) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x48));
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8f5d0;
  lVar2 = *(long *)(this + 0x40);
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  Attachment::~Attachment((Attachment *)this);
  return;
}

