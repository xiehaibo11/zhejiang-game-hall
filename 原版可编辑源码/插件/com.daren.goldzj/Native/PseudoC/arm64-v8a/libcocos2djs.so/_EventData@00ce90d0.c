
/* spine::EventData::~EventData() */

void __thiscall spine::EventData::~EventData(EventData *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__EventData_01c8ed70;
  *(undefined ***)(this + 0x40) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x50);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x40));
  *(undefined ***)(this + 0x28) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  *(undefined ***)(this + 8) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

