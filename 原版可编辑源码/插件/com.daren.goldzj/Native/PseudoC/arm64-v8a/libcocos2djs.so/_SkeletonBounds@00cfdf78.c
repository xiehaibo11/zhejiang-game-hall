
/* spine::SkeletonBounds::~SkeletonBounds() */

void __thiscall spine::SkeletonBounds::~SkeletonBounds(SkeletonBounds *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__SkeletonBounds_01c8f410;
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8f480;
  lVar2 = *(long *)(this + 0x60);
  *(undefined8 *)(this + 0x50) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x48));
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8f4b8;
  lVar2 = *(long *)(this + 0x40);
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  *(undefined ***)(this + 8) = &PTR__Vector_01c8f480;
  lVar2 = *(long *)(this + 0x20);
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

