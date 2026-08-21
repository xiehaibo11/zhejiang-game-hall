
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::New(v8::internal::Isolate*, int,
   v8::internal::AllocationType, v8::internal::MinimumCapacity) */

void v8::internal::
     HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::New
               (long param_1,int param_2,undefined4 param_3,int param_4)

{
  long *plVar1;
  
  if ((param_4 == 1) ||
     (param_2 = base::bits::RoundUpToPowerOfTwo32(param_2 + (param_2 >> 1)), 4 < param_2)) {
    if (0x2aaaaa8 < param_2) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory((Heap *)(param_1 + 0x8850),"invalid table size");
    }
  }
  else {
    param_2 = 4;
  }
  plVar1 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                             (param_1,0xe,param_2 * 3 + 3,param_3);
  *(undefined4 *)(*plVar1 + 7) = 0;
  *(undefined4 *)(*plVar1 + 0xb) = 0;
  *(int *)(*plVar1 + 0xf) = param_2 * 2;
  return;
}

