
/* spine::PathAttachment::~PathAttachment() */

void __thiscall spine::PathAttachment::~PathAttachment(PathAttachment *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PathAttachment_01c8ef68;
  *(undefined ***)(this + 0x80) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0x98);
  *(undefined8 *)(this + 0x88) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x80));
  VertexAttachment::~VertexAttachment((VertexAttachment *)this);
  return;
}

