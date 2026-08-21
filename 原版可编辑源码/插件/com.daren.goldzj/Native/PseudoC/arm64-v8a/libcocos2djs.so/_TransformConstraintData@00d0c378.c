
/* spine::TransformConstraintData::~TransformConstraintData() */

void __thiscall
spine::TransformConstraintData::~TransformConstraintData(TransformConstraintData *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__TransformConstraintData_01c8f850;
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
  return;
}

