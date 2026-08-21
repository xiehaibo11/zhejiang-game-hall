
/* spine::Skin::removeAttachment(unsigned long, spine::String const&) */

void __thiscall spine::Skin::removeAttachment(Skin *this,ulong param_1,String *param_2)

{
  AttachmentMap::remove((AttachmentMap *)(this + 0x20),param_1,param_2);
  return;
}

