
/* v8::debug::Script::LineOffset() const */

int __thiscall v8::debug::Script::LineOffset(Script *this)

{
  return *(int *)(*(long *)this + 0xb) >> 1;
}

