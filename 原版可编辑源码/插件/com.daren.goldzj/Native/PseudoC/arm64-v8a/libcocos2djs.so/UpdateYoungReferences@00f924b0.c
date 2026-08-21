
/* v8::internal::Heap::ExternalStringTable::UpdateYoungReferences(v8::internal::String
   (*)(v8::internal::Heap*, v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::Heap::ExternalStringTable::UpdateYoungReferences
          (ExternalStringTable *this,_func_String_Heap_ptr_FullObjectSlot *param_1)

{
  String SVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong local_58;
  
  puVar6 = *(ulong **)(this + 8);
  puVar9 = *(ulong **)(this + 0x10);
  if (puVar6 != puVar9) {
    lVar3 = (long)puVar9 - (long)puVar6;
    puVar2 = puVar6;
    puVar7 = puVar6;
    if (0 < lVar3) {
      puVar8 = puVar6;
      do {
        SVar1 = (*param_1)(*(Heap **)this,(char)puVar2);
        local_58 = (ulong)(byte)SVar1;
        puVar7 = puVar8;
        if (SVar1 != (String)0x0) {
          if ((DAT_00000008 & 0x18) == 0) {
            if (*(ulong **)(this + 0x28) == *(ulong **)(this + 0x30)) {
              std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>
              ::__push_back_slow_path<v8::internal::Object_const&>
                        ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>
                          *)(this + 0x20),(Object *)&local_58);
            }
            else {
              **(ulong **)(this + 0x28) = local_58;
              *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
            }
          }
          else {
            puVar7 = puVar8 + 1;
            *puVar8 = local_58;
          }
        }
        puVar2 = puVar2 + 1;
        puVar8 = puVar7;
      } while (puVar2 < puVar9);
      lVar3 = *(long *)(this + 0x10) - (long)*(ulong **)(this + 8);
      puVar2 = *(ulong **)(this + 8);
    }
    uVar5 = lVar3 >> 3;
    uVar4 = (ulong)((long)puVar7 - (long)puVar6) >> 3;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      if (uVar4 < uVar5) {
        *(ulong **)(this + 0x10) = puVar2 + uVar4;
      }
    }
    else {
      std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
      __append((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
               (this + 8),uVar4 - uVar5);
    }
  }
  return;
}

