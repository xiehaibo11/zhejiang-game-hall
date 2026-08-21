
/* v8::internal::EnumCache::EnumCacheVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::EnumCache::EnumCacheVerify(EnumCache *this,Isolate *param_1)

{
  long lVar1;
  
  TorqueGeneratedClassVerifiers::EnumCacheVerify(*(undefined8 *)this);
  lVar1 = *(long *)this;
  if ((int)lVar1 == *(int *)(param_1 + 0x3b0)) {
    if (*(int *)(lVar1 + 3) != *(int *)(param_1 + 0x168)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","ReadOnlyRoots(heap).empty_fixed_array() == keys()");
    }
    if (*(int *)(lVar1 + 7) != *(int *)(lVar1 + 3)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","ReadOnlyRoots(heap).empty_fixed_array() == indices()");
    }
  }
  return;
}

