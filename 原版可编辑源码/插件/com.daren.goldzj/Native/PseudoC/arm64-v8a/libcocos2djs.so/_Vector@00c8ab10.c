
/* spine::Vector<spine::PathConstraintData*>::~Vector() */

void __thiscall
spine::Vector<spine::PathConstraintData*>::~Vector(Vector<spine::PathConstraintData*> *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18);
  *(undefined ***)this = &PTR__Vector_01c8d358;
  *(undefined8 *)(this + 8) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

