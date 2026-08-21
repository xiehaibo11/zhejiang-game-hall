
/* spine::Skeleton::setSkin(spine::String const&) */

void __thiscall spine::Skeleton::setSkin(Skeleton *this,String *param_1)

{
  Skin *pSVar1;
  
  pSVar1 = (Skin *)SkeletonData::findSkin(*(SkeletonData **)(this + 8),param_1);
  setSkin(this,pSVar1);
  return;
}

