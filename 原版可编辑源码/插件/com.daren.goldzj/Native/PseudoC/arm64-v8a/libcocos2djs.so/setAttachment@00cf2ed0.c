
/* spine::Skeleton::setAttachment(spine::String const&, spine::String const&) */

ulong __thiscall spine::Skeleton::setAttachment(Skeleton *this,String *param_1,String *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *__s1;
  Attachment *pAVar4;
  Skin *this_00;
  Slot *this_01;
  char *__s2;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *(ulong *)(this + 0x38);
  if (uVar6 == 0) {
    __s2 = *(char **)(param_1 + 0x10);
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      this_01 = *(Slot **)(*(long *)(this + 0x48) + uVar7 * 8);
      lVar3 = SlotData::getName(*(SlotData **)(this_01 + 8));
      __s1 = *(char **)(lVar3 + 0x10);
      __s2 = *(char **)(param_1 + 0x10);
      if ((__s1 == __s2) ||
         (((*(long *)(lVar3 + 8) == *(long *)(param_1 + 8) && __s1 != (char *)0x0) &&
           __s2 != (char *)0x0 && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)))) {
        if (*(long *)(param_2 + 8) != 0) {
          if ((*(Skin **)(this + 0x110) != (Skin *)0x0) &&
             (pAVar4 = (Attachment *)
                       Skin::getAttachment(*(Skin **)(this + 0x110),lVar5 >> 0x20,param_2),
             pAVar4 != (Attachment *)0x0)) goto LAB_00cf2fe4;
          lVar3 = SkeletonData::getDefaultSkin(*(SkeletonData **)(this + 8));
          if (lVar3 != 0) {
            this_00 = (Skin *)SkeletonData::getDefaultSkin(*(SkeletonData **)(this + 8));
            pAVar4 = (Attachment *)Skin::getAttachment(this_00,lVar5 >> 0x20,param_2);
            goto LAB_00cf2fe4;
          }
        }
        pAVar4 = (Attachment *)0x0;
LAB_00cf2fe4:
        uVar6 = Slot::setAttachment(this_01,pAVar4);
        return uVar6;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x100000000;
    } while (uVar7 < uVar6);
  }
  uVar2 = printf("Slot not found: %s",__s2);
  return (ulong)uVar2;
}

