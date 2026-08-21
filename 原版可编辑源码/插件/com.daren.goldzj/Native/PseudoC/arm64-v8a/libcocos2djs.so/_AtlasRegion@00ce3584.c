
/* spine::AtlasRegion::~AtlasRegion() */

void __thiscall spine::AtlasRegion::~AtlasRegion(AtlasRegion *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__AtlasRegion_01c8e7c8;
  *(undefined ***)(this + 0x88) = &PTR__Vector_01c8e510;
  lVar2 = *(long *)(this + 0xa0);
  *(undefined8 *)(this + 0x90) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x88));
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c8e510;
  lVar2 = *(long *)(this + 0x80);
  *(undefined8 *)(this + 0x70) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x68));
  *(undefined ***)(this + 0x10) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x10));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

