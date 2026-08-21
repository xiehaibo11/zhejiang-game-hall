
/* v8::internal::JSArrayBufferDataEntryAllocator::AllocateEntry(void*) */

void __thiscall
v8::internal::JSArrayBufferDataEntryAllocator::AllocateEntry
          (JSArrayBufferDataEntryAllocator *this,void *param_1)

{
  V8HeapExplorer::AddEntry
            (*(V8HeapExplorer **)(this + 0x10),param_1,8,"system / JSArrayBufferData",
             *(undefined8 *)(this + 8));
  return;
}

