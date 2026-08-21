
/* v8::internal::DateCache::~DateCache() */

void __thiscall v8::internal::DateCache::~DateCache(DateCache *this)

{
  *(undefined ***)this = &PTR__DateCache_01ca44c0;
  if (*(long **)(this + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x250) + 0x28))();
  }
  operator_delete(this);
  return;
}

