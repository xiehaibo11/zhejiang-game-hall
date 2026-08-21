
/* v8::internal::Heap::PreciseCollectAllGarbage(int, v8::internal::GarbageCollectionReason,
   v8::GCCallbackFlags) */

void __thiscall
v8::internal::Heap::PreciseCollectAllGarbage
          (Heap *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*(long *)(this + 0x828) + 0x58) != 0) {
    CollectGarbage(this,2,param_3,*(undefined4 *)(this + 0xad8));
    *(undefined4 *)(this + 0xad4) = 0;
  }
  *(undefined4 *)(this + 0xad4) = param_1;
  CollectGarbage(this,2,param_3,param_4);
  *(undefined4 *)(this + 0xad4) = 0;
  return;
}

