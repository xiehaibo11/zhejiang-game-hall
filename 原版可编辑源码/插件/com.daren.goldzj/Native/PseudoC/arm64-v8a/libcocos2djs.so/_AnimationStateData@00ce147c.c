
/* spine::AnimationStateData::~AnimationStateData() */

void __thiscall spine::AnimationStateData::~AnimationStateData(AnimationStateData *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)this = &PTR__AnimationStateData_01c8e5b8;
  *(undefined ***)(this + 0x18) = &PTR__HashMap_01c8e628;
  plVar1 = *(long **)(this + 0x20);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)plVar1[5];
    (**(code **)(lVar2 + 8))();
  }
  *(long *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  SpineObject::~SpineObject((SpineObject *)(this + 0x18));
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

