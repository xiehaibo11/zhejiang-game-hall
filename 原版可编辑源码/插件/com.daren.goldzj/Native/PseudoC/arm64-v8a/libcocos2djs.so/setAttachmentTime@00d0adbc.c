
/* spine::Slot::setAttachmentTime(float) */

void __thiscall spine::Slot::setAttachmentTime(Slot *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)Skeleton::getTime(*(Skeleton **)(this + 0x18));
  *(float *)(this + 0x60) = fVar1 - param_1;
  return;
}

