
/* v8::internal::StubCache::SecondaryOffsetForTesting(v8::internal::Name, int) */

uint v8::internal::StubCache::SecondaryOffsetForTesting(int param_1,int param_2)

{
  return (param_2 - param_1) + 0x6e5U & 0x7fc;
}

