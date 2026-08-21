
/* spine::SlotData::~SlotData() */

void __thiscall spine::SlotData::~SlotData(SlotData *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)this = &PTR__SlotData_01c8f720;
  *(undefined ***)(this + 0x68) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x78);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x68));
  SpineObject::~SpineObject((SpineObject *)(this + 0x48));
  SpineObject::~SpineObject((SpineObject *)(this + 0x30));
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
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

