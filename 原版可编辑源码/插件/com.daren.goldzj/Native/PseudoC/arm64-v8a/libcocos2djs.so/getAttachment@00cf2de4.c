
/* spine::Skeleton::getAttachment(spine::String const&, spine::String const&) */

void __thiscall spine::Skeleton::getAttachment(Skeleton *this,String *param_1,String *param_2)

{
  int iVar1;
  long lVar2;
  Skin *this_00;
  
  iVar1 = SkeletonData::findSlotIndex(*(SkeletonData **)(this + 8),param_1);
  if (((*(Skin **)(this + 0x110) == (Skin *)0x0) ||
      (lVar2 = Skin::getAttachment(*(Skin **)(this + 0x110),(long)iVar1,param_2), lVar2 == 0)) &&
     (lVar2 = SkeletonData::getDefaultSkin(*(SkeletonData **)(this + 8)), lVar2 != 0)) {
    this_00 = (Skin *)SkeletonData::getDefaultSkin(*(SkeletonData **)(this + 8));
    Skin::getAttachment(this_00,(long)iVar1,param_2);
    return;
  }
  return;
}

