
/* spine::HashMap<spine::AnimationStateData::AnimationPair, float>::Entry::~Entry() */

void __thiscall
spine::HashMap<spine::AnimationStateData::AnimationPair,float>::Entry::~Entry(Entry *this)

{
  void *extraout_x1;
  
  *(undefined ***)this = &PTR__Entry_01c8e660;
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

