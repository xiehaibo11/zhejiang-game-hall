
/* spine::CurveTimeline::~CurveTimeline() */

void __thiscall spine::CurveTimeline::~CurveTimeline(CurveTimeline *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x20);
  *(undefined ***)(this + 8) = &PTR__Vector_01c8d048;
  *(undefined ***)this = &PTR__CurveTimeline_01c8ebd8;
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  Timeline::~Timeline((Timeline *)this);
  return;
}

