
/* spine::PathConstraintData::~PathConstraintData() */

void __thiscall spine::PathConstraintData::~PathConstraintData(PathConstraintData *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PathConstraintData_01c8f010;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d0f0;
  lVar2 = *(long *)(this + 0x48);
  *(undefined8 *)(this + 0x38) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x30));
  ConstraintData::~ConstraintData((ConstraintData *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

