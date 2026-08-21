
/* spine::AnimationStateData::setMix(spine::String const&, spine::String const&, float) */

void __thiscall
spine::AnimationStateData::setMix
          (AnimationStateData *this,String *param_1,String *param_2,float param_3)

{
  Animation *pAVar1;
  Animation *pAVar2;
  
  pAVar1 = (Animation *)SkeletonData::findAnimation(*(SkeletonData **)(this + 8),param_1);
  pAVar2 = (Animation *)SkeletonData::findAnimation(*(SkeletonData **)(this + 8),param_2);
  setMix(this,pAVar1,pAVar2,param_3);
  return;
}

