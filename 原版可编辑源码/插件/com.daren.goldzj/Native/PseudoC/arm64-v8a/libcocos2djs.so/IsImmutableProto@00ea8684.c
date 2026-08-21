
/* v8::ObjectTemplate::IsImmutableProto() */

byte __thiscall v8::ObjectTemplate::IsImmutableProto(ObjectTemplate *this)

{
  return *(byte *)(*(long *)this + 0x1b) >> 1 & 1;
}

