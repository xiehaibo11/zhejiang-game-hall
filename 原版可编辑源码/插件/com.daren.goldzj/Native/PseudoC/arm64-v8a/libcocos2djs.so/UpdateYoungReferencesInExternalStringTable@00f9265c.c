
/* v8::internal::Heap::UpdateYoungReferencesInExternalStringTable(v8::internal::String
   (*)(v8::internal::Heap*, v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::Heap::UpdateYoungReferencesInExternalStringTable
          (Heap *this,_func_String_Heap_ptr_FullObjectSlot *param_1)

{
  ExternalStringTable::UpdateYoungReferences((ExternalStringTable *)(this + 0xae0),param_1);
  return;
}

