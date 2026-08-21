
/* v8::debug::Script::OriginOptions() const */

uint __thiscall v8::debug::Script::OriginOptions(Script *this)

{
  return *(uint *)(*(long *)this + 0x2f) >> 4 & 0xf;
}

