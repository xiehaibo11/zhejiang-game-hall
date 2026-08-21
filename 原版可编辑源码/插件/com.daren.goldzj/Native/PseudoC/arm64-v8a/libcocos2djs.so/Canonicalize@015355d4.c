
/* v8::internal::CharacterSet::Canonicalize() */

void __thiscall v8::internal::CharacterSet::Canonicalize(CharacterSet *this)

{
  if (*(ZoneList **)this != (ZoneList *)0x0) {
    CharacterRange::Canonicalize(*(ZoneList **)this);
    return;
  }
  return;
}

