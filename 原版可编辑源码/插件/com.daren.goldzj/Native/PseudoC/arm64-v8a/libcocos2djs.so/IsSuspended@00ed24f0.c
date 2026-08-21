
/* v8::debug::GeneratorObject::IsSuspended() */

uint __thiscall v8::debug::GeneratorObject::IsSuspended(GeneratorObject *this)

{
  return ~*(uint *)(*(long *)this + 0x1f) >> 0x1f;
}

