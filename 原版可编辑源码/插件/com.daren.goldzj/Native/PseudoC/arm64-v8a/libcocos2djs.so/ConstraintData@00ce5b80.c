
/* spine::ConstraintData::ConstraintData(spine::String const&) */

void __thiscall spine::ConstraintData::ConstraintData(ConstraintData *this,String *param_1)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  
  *(undefined ***)(this + 8) = &PTR__String_01c67868;
  *(undefined ***)this = &PTR__ConstraintData_01c8eba0;
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 8);
    plVar1 = (long *)SpineExtension::getInstance();
    __dest = (void *)(**(code **)(*plVar1 + 0x18))
                               (plVar1,lVar2 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    *(void **)(this + 0x18) = __dest;
    memcpy(__dest,*(void **)(param_1 + 0x10),*(long *)(param_1 + 8) + 1);
  }
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (ConstraintData)0x0;
  return;
}

