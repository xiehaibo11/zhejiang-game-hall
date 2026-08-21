
/* spine::Skeleton::setSkin(spine::Skin*) */

void __thiscall spine::Skeleton::setSkin(Skeleton *this,Skin *param_1)

{
  String *pSVar1;
  Attachment *pAVar2;
  Skin *pSVar3;
  ulong uVar4;
  Slot *this_00;
  ulong uVar5;
  
  pSVar3 = *(Skin **)(this + 0x110);
  if (pSVar3 != param_1) {
    if (param_1 != (Skin *)0x0) {
      if (pSVar3 == (Skin *)0x0) {
        uVar5 = *(ulong *)(this + 0x38);
        if (uVar5 != 0) {
          uVar4 = 0;
          do {
            this_00 = *(Slot **)(*(long *)(this + 0x48) + uVar4 * 8);
            pSVar1 = (String *)SlotData::getAttachmentName(*(SlotData **)(this_00 + 8));
            if ((*(long *)(pSVar1 + 8) != 0) &&
               (pAVar2 = (Attachment *)Skin::getAttachment(param_1,uVar4,pSVar1),
               pAVar2 != (Attachment *)0x0)) {
              Slot::setAttachment(this_00,pAVar2);
            }
            uVar4 = uVar4 + 1;
          } while (uVar5 != uVar4);
        }
      }
      else {
        Skin::attachAll(param_1,this,pSVar3);
      }
    }
    *(Skin **)(this + 0x110) = param_1;
    updateCache(this);
    return;
  }
  return;
}

