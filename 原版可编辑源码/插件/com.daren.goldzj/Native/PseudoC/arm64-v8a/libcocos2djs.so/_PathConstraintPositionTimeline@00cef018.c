
/* spine::PathConstraintPositionTimeline::~PathConstraintPositionTimeline() */

void __thiscall
spine::PathConstraintPositionTimeline::~PathConstraintPositionTimeline
          (PathConstraintPositionTimeline *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PathConstraintPositionTimeline_01c8f098;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8d048;
  lVar2 = *(long *)(this + 0x40);
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  CurveTimeline::~CurveTimeline((CurveTimeline *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

