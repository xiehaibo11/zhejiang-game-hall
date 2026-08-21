
/* spine::Slot::~Slot() */

void __thiscall spine::Slot::~Slot(Slot *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__Slot_01c8f6e8;
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0x80);
  *(undefined8 *)(this + 0x70) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x68));
  SpineObject::~SpineObject((SpineObject *)(this + 0x38));
  SpineObject::~SpineObject((SpineObject *)(this + 0x20));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

