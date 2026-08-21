
/* spine::AnimationState::setAnimation(unsigned long, spine::String const&, bool) */

void __thiscall
spine::AnimationState::setAnimation(AnimationState *this,ulong param_1,String *param_2,bool param_3)

{
  Animation *pAVar1;
  
  pAVar1 = (Animation *)
           SkeletonData::findAnimation(*(SkeletonData **)(*(long *)(this + 0x20) + 8),param_2);
  setAnimation(this,param_1,pAVar1,param_3);
  return;
}

