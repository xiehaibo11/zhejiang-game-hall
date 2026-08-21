
/* spine::Skeleton::getAttachment(int, spine::String const&) */

void __thiscall spine::Skeleton::getAttachment(Skeleton *this,int param_1,String *param_2)

{
  long lVar1;
  Skin *this_00;
  
  if (((*(Skin **)(this + 0x110) == (Skin *)0x0) ||
      (lVar1 = Skin::getAttachment(*(Skin **)(this + 0x110),(long)param_1,param_2), lVar1 == 0)) &&
     (lVar1 = SkeletonData::getDefaultSkin(*(SkeletonData **)(this + 8)), lVar1 != 0)) {
    this_00 = (Skin *)SkeletonData::getDefaultSkin(*(SkeletonData **)(this + 8));
    Skin::getAttachment(this_00,(long)param_1,param_2);
    return;
  }
  return;
}

