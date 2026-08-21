
/* spine::AnimationState::addAnimation(unsigned long, spine::String const&, bool, float) */

void __thiscall
spine::AnimationState::addAnimation
          (AnimationState *this,ulong param_1,String *param_2,bool param_3,float param_4)

{
  Animation *pAVar1;
  
  pAVar1 = (Animation *)
           SkeletonData::findAnimation(*(SkeletonData **)(*(long *)(this + 0x20) + 8),param_2);
  addAnimation(this,param_1,pAVar1,param_3,param_4);
  return;
}

