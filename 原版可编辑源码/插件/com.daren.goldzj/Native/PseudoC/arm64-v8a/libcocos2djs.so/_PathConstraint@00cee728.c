
/* spine::PathConstraint::~PathConstraint() */

void __thiscall spine::PathConstraint::~PathConstraint(PathConstraint *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PathConstraint_01c8efb0;
  *(undefined ***)(this + 0xe8) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0x100);
  *(undefined8 *)(this + 0xf0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xe8));
  *(undefined ***)(this + 200) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0xe0);
  *(undefined8 *)(this + 0xd0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 200));
  *(undefined ***)(this + 0xa8) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0xc0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xa8));
  *(undefined ***)(this + 0x88) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0xa0);
  *(undefined8 *)(this + 0x90) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x88));
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
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d080;
  lVar2 = *(long *)(this + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x10));
  Updatable::~Updatable((Updatable *)this);
  return;
}

