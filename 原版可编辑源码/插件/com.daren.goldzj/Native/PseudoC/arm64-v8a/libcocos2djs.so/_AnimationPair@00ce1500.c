
/* spine::AnimationStateData::AnimationPair::~AnimationPair() */

void __thiscall spine::AnimationStateData::AnimationPair::~AnimationPair(AnimationPair *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

