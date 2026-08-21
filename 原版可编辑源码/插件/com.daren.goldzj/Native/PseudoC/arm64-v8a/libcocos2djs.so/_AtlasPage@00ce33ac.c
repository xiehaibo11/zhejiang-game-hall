
/* spine::AtlasPage::~AtlasPage() */

void __thiscall spine::AtlasPage::~AtlasPage(AtlasPage *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)(this + 8) = &PTR__AtlasPage_01c8e770;
  *(undefined ***)this = &PTR__AtlasPage_01c8e750;
  *(undefined ***)(this + 0x38) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x48);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x38));
  *(undefined ***)(this + 0x20) = &PTR__String_01c67868;
  lVar2 = *(long *)(this + 0x30);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x20));
  *(undefined ***)(this + 8) = &PTR__HasRendererObject_01c8e4f0;
  if ((*(code **)(this + 0x18) != (code *)0x0) && (*(long *)(this + 0x10) != 0)) {
    (**(code **)(this + 0x18))();
  }
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

