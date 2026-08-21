
/* v8::debug::Script::IsWasm() const */

bool __thiscall v8::debug::Script::IsWasm(Script *this)

{
  return (*(uint *)(*(long *)this + 0x17) & 0xfffffffe) == 6;
}

