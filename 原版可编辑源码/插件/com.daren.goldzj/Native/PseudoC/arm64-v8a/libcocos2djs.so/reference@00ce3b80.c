
/* spine::Attachment::reference() */

void __thiscall spine::Attachment::reference(Attachment *this)

{
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  return;
}

