
/* v8::internal::Heap::StartIncrementalMarking(int, v8::internal::GarbageCollectionReason,
   v8::GCCallbackFlags) */

void __thiscall
v8::internal::Heap::StartIncrementalMarking
          (Heap *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(this + 0xad4) = param_1;
  *(undefined4 *)(this + 0xad8) = param_4;
  IncrementalMarking::Start(*(IncrementalMarking **)(this + 0x828),param_3);
  return;
}

