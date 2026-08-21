
/* spine::Slot::getAttachmentTime() */

float __thiscall spine::Slot::getAttachmentTime(Slot *this)

{
  float fVar1;
  
  fVar1 = (float)Skeleton::getTime(*(Skeleton **)(this + 0x18));
  return fVar1 - *(float *)(this + 0x60);
}

