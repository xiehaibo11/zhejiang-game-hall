
/* v8::Object::GetIsolate() */

long __thiscall v8::Object::GetIsolate(Object *this)

{
  return (ulong)*(uint *)(this + 4) << 0x20;
}

