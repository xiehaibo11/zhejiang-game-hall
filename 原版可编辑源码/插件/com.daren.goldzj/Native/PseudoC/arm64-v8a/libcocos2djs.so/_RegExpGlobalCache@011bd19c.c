
/* v8::internal::RegExpGlobalCache::~RegExpGlobalCache() */

void __thiscall v8::internal::RegExpGlobalCache::~RegExpGlobalCache(RegExpGlobalCache *this)

{
  if ((0x80 < *(int *)(this + 0x18)) && (*(void **)(this + 0x10) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}

