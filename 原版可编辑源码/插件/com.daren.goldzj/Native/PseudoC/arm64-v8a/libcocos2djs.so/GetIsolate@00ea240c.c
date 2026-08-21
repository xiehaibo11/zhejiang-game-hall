
/* v8::Context::GetIsolate() */

long __thiscall v8::Context::GetIsolate(Context *this)

{
  return (ulong)*(uint *)(this + 4) << 0x20;
}

