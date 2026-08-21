
/* spine::TrackEntry::~TrackEntry() */

void __thiscall spine::TrackEntry::~TrackEntry(TrackEntry *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)(this + 8) = &PTR__TrackEntry_01c8e3a0;
  *(undefined ***)this = &PTR__TrackEntry_01c8e380;
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
  *(undefined ***)(this + 0xb8) = &PTR__Vector_01c8d010;
  lVar2 = *(long *)(this + 0xd0);
  *(undefined8 *)(this + 0xc0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xb8));
  *(undefined ***)(this + 0x98) = &PTR__Vector_01c8e510;
  lVar2 = *(long *)(this + 0xb0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x98));
  *(undefined ***)(this + 8) = &PTR__HasRendererObject_01c8e4f0;
  if ((*(code **)(this + 0x18) != (code *)0x0) && (*(long *)(this + 0x10) != 0)) {
    (**(code **)(this + 0x18))();
  }
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

