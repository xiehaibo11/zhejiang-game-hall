
/* spine::Attachment::dereference() */

void __thiscall spine::Attachment::dereference(Attachment *this)

{
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + -1;
  return;
}

