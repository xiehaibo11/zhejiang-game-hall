
/* v8::internal::TranslatedState::DecompressIfNeeded(long) */

ulong __thiscall
v8::internal::TranslatedState::DecompressIfNeeded(TranslatedState *this,long param_1)

{
  return param_1 & 0xffffffffU | (ulong)*(uint *)(this + 0x1c) << 0x20;
}

