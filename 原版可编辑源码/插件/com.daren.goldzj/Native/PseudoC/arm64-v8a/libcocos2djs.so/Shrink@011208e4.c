
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashMap, 2>::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashMap>) */

long * v8::internal::OrderedHashTable<v8::internal::OrderedHashMap,2>::Shrink
                 (undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*param_2 + 0xf);
  if (*(int *)(*param_2 + 7) >> 1 < (int)uVar2 >> 2) {
    uVar1 = uVar2 & 0xfffffffe | 1;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2 & 0xfffffffe;
    }
    param_2 = (long *)Rehash(param_1,param_2,(int)uVar1 >> 1);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  return param_2;
}

