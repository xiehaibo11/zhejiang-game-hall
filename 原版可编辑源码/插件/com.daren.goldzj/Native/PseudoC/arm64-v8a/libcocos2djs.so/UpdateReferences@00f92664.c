
/* v8::internal::Heap::ExternalStringTable::UpdateReferences(v8::internal::String
   (*)(v8::internal::Heap*, v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::Heap::ExternalStringTable::UpdateReferences
          (ExternalStringTable *this,_func_String_Heap_ptr_FullObjectSlot *param_1)

{
  ulong *puVar1;
  long lVar2;
  String SVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  puVar1 = *(ulong **)(this + 0x20);
  lVar2 = *(long *)(this + 0x28) - (long)puVar1;
  if ((lVar2 != 0) && (0 < lVar2)) {
    puVar4 = puVar1;
    do {
      SVar3 = (*param_1)(*(Heap **)this,(char)puVar4);
      puVar5 = puVar4 + 1;
      *puVar4 = (ulong)(byte)SVar3;
      puVar4 = puVar5;
    } while (puVar5 < (ulong *)((long)puVar1 + lVar2));
  }
  UpdateYoungReferences(this,param_1);
  return;
}

