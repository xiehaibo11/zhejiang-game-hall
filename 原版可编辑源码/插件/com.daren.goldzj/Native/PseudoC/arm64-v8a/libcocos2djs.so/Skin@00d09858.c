
/* spine::Skin::Skin(spine::String const&) */

void __thiscall spine::Skin::Skin(Skin *this,String *param_1)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  
  *(undefined ***)(this + 8) = &PTR__String_01c67868;
  *(undefined ***)this = &PTR__Skin_01c8f628;
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
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8d0f0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c8d400;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8f678;
  *(undefined ***)(this + 0x20) = &PTR__AttachmentMap_01c8f608;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

