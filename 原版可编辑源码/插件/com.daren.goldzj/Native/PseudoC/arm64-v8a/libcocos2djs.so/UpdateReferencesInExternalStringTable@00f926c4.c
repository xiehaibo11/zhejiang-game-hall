
/* v8::internal::Heap::UpdateReferencesInExternalStringTable(v8::internal::String
   (*)(v8::internal::Heap*, v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::Heap::UpdateReferencesInExternalStringTable
          (Heap *this,_func_String_Heap_ptr_FullObjectSlot *param_1)

{
  long lVar1;
  String SVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  puVar3 = *(ulong **)(this + 0xb00);
  lVar1 = *(long *)(this + 0xb08) - (long)puVar3;
  if ((lVar1 != 0) && (0 < lVar1)) {
    puVar4 = puVar3;
    do {
      SVar2 = (*param_1)(*(Heap **)(this + 0xae0),(char)puVar4);
      puVar5 = puVar4 + 1;
      *puVar4 = (ulong)(byte)SVar2;
      puVar4 = puVar5;
    } while (puVar5 < (ulong *)((long)puVar3 + lVar1));
  }
  ExternalStringTable::UpdateYoungReferences((ExternalStringTable *)(this + 0xae0),param_1);
  return;
}

