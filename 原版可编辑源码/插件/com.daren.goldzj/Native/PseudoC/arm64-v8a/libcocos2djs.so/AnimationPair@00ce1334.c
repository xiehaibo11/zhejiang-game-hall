
/* spine::AnimationStateData::AnimationPair::AnimationPair(spine::Animation*, spine::Animation*) */

void __thiscall
spine::AnimationStateData::AnimationPair::AnimationPair
          (AnimationPair *this,Animation *param_1,Animation *param_2)

{
  *(Animation **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__SpineObject_01c8e5d8;
  *(Animation **)(this + 8) = param_1;
  return;
}

