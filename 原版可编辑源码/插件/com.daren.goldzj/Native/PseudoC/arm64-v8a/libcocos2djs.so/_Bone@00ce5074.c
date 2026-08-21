
/* spine::Bone::~Bone() */

void __thiscall spine::Bone::~Bone(Bone *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)this = &PTR__Bone_01c8e9f8;
  *(undefined ***)(this + 0x20) = &PTR__Vector_01c8d080;
  lVar2 = *(long *)(this + 0x38);
  *(undefined8 *)(this + 0x28) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x20));
  Updatable::~Updatable((Updatable *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

