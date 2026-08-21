
/* spine::IkConstraint::~IkConstraint() */

void __thiscall spine::IkConstraint::~IkConstraint(IkConstraint *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__IkConstraint_01c8edf8;
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

