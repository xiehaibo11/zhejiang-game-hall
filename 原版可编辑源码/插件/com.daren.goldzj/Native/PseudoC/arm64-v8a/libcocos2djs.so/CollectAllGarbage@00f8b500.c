
/* v8::internal::Heap::CollectAllGarbage(int, v8::internal::GarbageCollectionReason,
   v8::GCCallbackFlags) */

void v8::internal::Heap::CollectAllGarbage(Heap *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xad4) = param_2;
  CollectGarbage(param_1,2);
  *(undefined4 *)(param_1 + 0xad4) = 0;
  return;
}

