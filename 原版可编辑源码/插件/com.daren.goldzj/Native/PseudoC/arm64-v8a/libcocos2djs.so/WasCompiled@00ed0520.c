
/* v8::debug::Script::WasCompiled() const */

byte __thiscall v8::debug::Script::WasCompiled(Script *this)

{
  return *(byte *)(*(long *)this + 0x2f) >> 2 & 1;
}

