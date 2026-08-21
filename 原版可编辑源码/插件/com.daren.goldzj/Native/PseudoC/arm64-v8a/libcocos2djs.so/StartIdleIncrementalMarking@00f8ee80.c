
/* v8::internal::Heap::StartIdleIncrementalMarking(v8::internal::GarbageCollectionReason,
   v8::GCCallbackFlags) */

void __thiscall
v8::internal::Heap::StartIdleIncrementalMarking(Heap *this,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(this + 0xad4) = 1;
  *(undefined4 *)(this + 0xad8) = param_3;
  IncrementalMarking::Start(*(IncrementalMarking **)(this + 0x828));
  return;
}

