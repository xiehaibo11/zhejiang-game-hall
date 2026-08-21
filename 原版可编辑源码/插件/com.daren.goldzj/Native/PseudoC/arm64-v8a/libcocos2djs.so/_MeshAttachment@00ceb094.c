
/* spine::MeshAttachment::~MeshAttachment() */

void __thiscall spine::MeshAttachment::~MeshAttachment(MeshAttachment *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__MeshAttachment_01c8eee0;
  *(undefined ***)(this + 0x80) = &PTR__MeshAttachment_01c8ef10;
  SpineObject::~SpineObject((SpineObject *)(this + 0x168));
  lVar2 = *(long *)(this + 0x148);
  *(undefined ***)(this + 0x138) = &PTR__String_01c67868;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x138));
  lVar2 = *(long *)(this + 0x130);
  *(undefined ***)(this + 0x118) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this + 0x120) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x118));
  *(undefined ***)(this + 0xf8) = &PTR__Vector_01c8d128;
  lVar2 = *(long *)(this + 0x110);
  *(undefined8 *)(this + 0x100) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xf8));
  *(undefined ***)(this + 0xd8) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0xf0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xd8));
  *(undefined ***)(this + 0xb8) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0xd0);
  *(undefined8 *)(this + 0xc0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xb8));
  *(undefined ***)(this + 0x80) = &PTR__HasRendererObject_01c8e4f0;
  if ((*(code **)(this + 0x90) != (code *)0x0) && (*(long *)(this + 0x88) != 0)) {
    (**(code **)(this + 0x90))();
  }
  VertexAttachment::~VertexAttachment((VertexAttachment *)this);
  return;
}

