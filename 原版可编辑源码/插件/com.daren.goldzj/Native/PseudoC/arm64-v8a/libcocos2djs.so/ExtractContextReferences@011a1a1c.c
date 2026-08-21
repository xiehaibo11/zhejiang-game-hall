
/* v8::internal::V8HeapExplorer::ExtractContextReferences(v8::internal::HeapEntry*,
   v8::internal::Context) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractContextReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong local_48;
  long local_28;
  
  local_48 = param_3;
  if ((*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x8f) &&
     (uVar2 = Context::is_declaration_context((Context *)&local_48), (uVar2 & 1) != 0)) {
    local_28 = Context::scope_info((Context *)&local_48);
    if ((1 < *(int *)(local_28 + 3)) && (iVar1 = *(int *)(local_28 + 0xf), 1 < iVar1)) {
      uVar2 = 0;
      iVar5 = 8;
      do {
        uVar3 = ScopeInfo::ContextLocalName((ScopeInfo *)&local_28,(int)uVar2);
        SetContextReference(this,param_1,uVar3,
                            local_48 & 0xffffffff00000000 |
                            (ulong)*(uint *)(local_48 + (long)iVar5 + 7),iVar5 + 8);
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 4;
      } while ((uint)(iVar1 >> 1) != uVar2);
    }
    uVar2 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_28);
    if ((uVar2 & 1) != 0) {
      uVar3 = ScopeInfo::FunctionName((ScopeInfo *)&local_28);
      iVar1 = ScopeInfo::FunctionContextSlotIndex((ScopeInfo *)&local_28,uVar3);
      if (-1 < iVar1) {
        SetContextReference(this,param_1,uVar3,
                            local_48 & 0xffffffff00000000 |
                            (ulong)*(uint *)(local_48 + (long)(iVar1 * 4) + 7),iVar1 * 4 + 8);
      }
    }
  }
  SetInternalReference
            (this,param_1,"scope_info",
             local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 7),8);
  SetInternalReference
            (this,param_1,"previous",
             local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0xb),0xc);
  local_28 = Context::scope_info((Context *)&local_48);
  uVar2 = ScopeInfo::HasContextExtensionSlot((ScopeInfo *)&local_28);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(local_48 + 0xf) != *(int *)((local_48 & 0xffffffff00000000) + 0xa0)) {
      SetInternalReference
                (this,param_1,"extension",
                 local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0xf),0x10);
    }
  }
  if (*(short *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0x8f) {
    TagObject(this,local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0x1eb),
              "(context norm. map cache)");
    TagObject(this,local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0x17),
              "(context data)");
    lVar4 = -0x1010;
    do {
      SetInternalReference
                (this,param_1,*(undefined8 *)(&UNK_01cb7458 + lVar4),
                 local_48 & 0xffffffff00000000 |
                 (ulong)*(uint *)(local_48 +
                                  (long)(*(int *)(&HeapSnapshotGenerator::vtable + lVar4) * 4) + 7),
                 *(int *)(&HeapSnapshotGenerator::vtable + lVar4) * 4 + 8);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0);
    SetWeakReference(this,param_1,"optimized_code_list",
                     local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0x417),0x418);
    SetWeakReference(this,param_1,"deoptimized_code_list",
                     local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0x41b),0x41c);
  }
  return;
}

