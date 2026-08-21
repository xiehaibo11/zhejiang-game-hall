
/* v8::debug::Script::Id() const */

int __thiscall v8::debug::Script::Id(Script *this)

{
  return *(int *)(*(long *)this + 0x1f) >> 1;
}

