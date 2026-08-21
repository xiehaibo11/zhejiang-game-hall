
/* spine::Skin::setAttachment(unsigned long, spine::String const&, spine::Attachment*) */

void __thiscall
spine::Skin::setAttachment(Skin *this,ulong param_1,String *param_2,Attachment *param_3)

{
  AttachmentMap::put((AttachmentMap *)(this + 0x20),param_1,param_2,param_3);
  return;
}

