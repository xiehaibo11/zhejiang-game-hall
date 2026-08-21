
/* v8::debug::Script::GetIsolate() const */

long __thiscall v8::debug::Script::GetIsolate(Script *this)

{
  return (ulong)*(uint *)(this + 4) << 0x20;
}

