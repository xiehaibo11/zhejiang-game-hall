
/* v8::internal::NormalizedMapCache::NormalizedMapCacheVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::NormalizedMapCache::NormalizedMapCacheVerify
          (NormalizedMapCache *this,Isolate *param_1)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  WeakFixedArray::WeakFixedArrayVerify((WeakFixedArray *)&local_18,param_1);
  return;
}

