
/* v8::ObjectTemplate::InternalFieldCount() */

uint __thiscall v8::ObjectTemplate::InternalFieldCount(ObjectTemplate *this)

{
  return *(uint *)(*(long *)this + 0x1b) >> 2 & 0x1fffffff;
}

