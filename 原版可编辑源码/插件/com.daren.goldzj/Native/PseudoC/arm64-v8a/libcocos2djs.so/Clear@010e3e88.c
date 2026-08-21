
/* v8::internal::DescriptorLookupCache::Clear() */

void __thiscall v8::internal::DescriptorLookupCache::Clear(DescriptorLookupCache *this)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(this + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x400);
  return;
}

