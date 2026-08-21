
/* v8::debug::Script::IsModule() const */

byte __thiscall v8::debug::Script::IsModule(Script *this)

{
  return *(byte *)(*(long *)this + 0x2f) >> 7;
}

