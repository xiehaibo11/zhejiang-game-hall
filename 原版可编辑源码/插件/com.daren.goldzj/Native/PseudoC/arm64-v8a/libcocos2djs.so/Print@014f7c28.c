
/* v8::internal::GCIdleTimeHeapState::Print() */

void __thiscall v8::internal::GCIdleTimeHeapState::Print(GCIdleTimeHeapState *this)

{
  PrintF("contexts_disposed=%d ",(ulong)*(uint *)this);
  PrintF("contexts_disposal_rate=%f ",*(undefined8 *)(this + 8));
  PrintF("size_of_objects=%zu ",*(undefined8 *)(this + 0x10));
  PrintF("incremental_marking_stopped=%d ",(ulong)(byte)this[0x18]);
  return;
}

