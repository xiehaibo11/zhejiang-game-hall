
/* spine::ConstraintData::~ConstraintData() */

void __thiscall spine::ConstraintData::~ConstraintData(ConstraintData *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18);
  *(undefined ***)(this + 8) = &PTR__String_01c67868;
  *(undefined ***)this = &PTR__ConstraintData_01c8eba0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

