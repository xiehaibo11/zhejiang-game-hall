
/* v8::internal::RegExpResultsCache::Clear(v8::internal::FixedArray) */

void v8::internal::RegExpResultsCache::Clear(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 7 + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x400);
  return;
}

