
/* v8::internal::Heap::AddHeapObjectAllocationTracker(v8::internal::HeapObjectAllocationTracker*) */

void __thiscall
v8::internal::Heap::AddHeapObjectAllocationTracker(Heap *this,HeapObjectAllocationTracker *param_1)

{
  undefined8 *puVar1;
  HeapObjectAllocationTracker *local_28;
  
  puVar1 = *(undefined8 **)(this + 0xc10);
  local_28 = param_1;
  if ((*(undefined8 **)(this + 0xc08) == puVar1) && (FLAG_inline_new != '\0')) {
    DisableInlineAllocation(this);
    puVar1 = *(undefined8 **)(this + 0xc10);
  }
  if (puVar1 == *(undefined8 **)(this + 0xc18)) {
    std::__ndk1::
    vector<v8::internal::HeapObjectAllocationTracker*,std::__ndk1::allocator<v8::internal::HeapObjectAllocationTracker*>>
    ::__push_back_slow_path<v8::internal::HeapObjectAllocationTracker*const&>
              ((vector<v8::internal::HeapObjectAllocationTracker*,std::__ndk1::allocator<v8::internal::HeapObjectAllocationTracker*>>
                *)(this + 0xc08),&local_28);
  }
  else {
    *puVar1 = param_1;
    *(long *)(this + 0xc10) = *(long *)(this + 0xc10) + 8;
  }
  return;
}

