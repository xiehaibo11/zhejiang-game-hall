
/* spine::HashMap<spine::AnimationStateData::AnimationPair, float>::~HashMap() */

void __thiscall
spine::HashMap<spine::AnimationStateData::AnimationPair,float>::~HashMap
          (HashMap<spine::AnimationStateData::AnimationPair,float> *this)

{
  long *plVar1;
  void *extraout_x1;
  long lVar2;
  
  *(undefined ***)this = &PTR__HashMap_01c8e628;
  plVar1 = *(long **)(this + 8);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)plVar1[5];
    (**(code **)(lVar2 + 8))();
  }
  *(long *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

