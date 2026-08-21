
/* v8::internal::StubCache::PrimaryOffsetForTesting(v8::internal::Name, v8::internal::Map) */

uint v8::internal::StubCache::PrimaryOffsetForTesting(long param_1,uint param_2)

{
  return *(int *)(param_1 + 3) + (param_2 ^ param_2 >> 0xd) & 0x1ffc;
}

