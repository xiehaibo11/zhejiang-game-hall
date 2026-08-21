
/* spine::Slot::setAttachment(spine::Attachment*) */

void __thiscall spine::Slot::setAttachment(Slot *this,Attachment *param_1)

{
  undefined4 uVar1;
  
  if (*(Attachment **)(this + 0x58) != param_1) {
    *(Attachment **)(this + 0x58) = param_1;
    uVar1 = Skeleton::getTime(*(Skeleton **)(this + 0x18));
    *(undefined4 *)(this + 0x60) = uVar1;
    *(undefined8 *)(this + 0x70) = 0;
  }
  return;
}

