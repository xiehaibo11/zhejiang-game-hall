
/* v8::internal::wasm::InstanceBuilder::InitializeImportedIndirectFunctionTable(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, int, v8::internal::Handle<v8::internal::WasmTableObject>) */

void __thiscall
v8::internal::wasm::InstanceBuilder::InitializeImportedIndirectFunctionTable
          (InstanceBuilder *this,ulong *param_2,int param_3,uint param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  undefined4 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  uint uVar10;
  Signature *pSVar11;
  long local_a0;
  int local_94;
  ulong *local_90;
  char local_88 [4];
  char local_84 [4];
  ulong *local_80;
  ulong *local_78;
  uint local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(*param_5 + 0xf);
  iVar1 = iVar2 >> 1;
  WasmInstanceObject::EnsureIndirectFunctionTableWithMinimumSize(param_2,param_3,iVar1);
  if (iVar2 < 2) {
    uVar7 = 1;
  }
  else {
    uVar10 = 0;
    do {
      local_90 = (ulong *)0x0;
      local_a0 = 0;
      WasmTableObject::GetFunctionTableEntry
                (*(undefined8 *)this,param_5,uVar10,local_84,local_88,&local_90,&local_94,&local_a0)
      ;
      puVar4 = local_90;
      if (local_84[0] == '\0') {
        ErrorThrower::LinkError
                  (*(char **)(this + 0x18),"table import %d[%d] is not a wasm function",
                   (ulong)param_4,(ulong)uVar10);
        uVar7 = 0;
        goto LAB_015fa09c;
      }
      if (local_88[0] == '\0') {
        if (local_a0 == 0) {
          if (local_90 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar8 = *local_90 & 0xffffffff00000000;
          pSVar11 = *(Signature **)
                     (*(long *)(*(long *)(**(long **)(*(long *)((uVar8 | *(uint *)((uVar8 | *(uint *
                                                  )(*local_90 + 0x6f)) + 0xb)) + 3) + 0x18) + 200) +
                               0x88) + (long)local_94 * 0x20);
          if (param_3 == 0) {
            puVar6 = (ulong *)0x0;
            local_80 = param_2;
          }
          else {
            local_80 = (ulong *)0x0;
            pIVar9 = (Isolate *)(*param_2 & 0xffffffff00000000);
            uVar8 = (ulong)pIVar9 |
                    (ulong)*(uint *)((long)(param_3 << 2) + 7 +
                                    ((ulong)pIVar9 | (ulong)*(uint *)(*param_2 + 0x93)));
            if (*(CanonicalHandleScope **)((ulong)pIVar9 | 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar6 = (ulong *)HandleScope::Extend(pIVar9);
              }
              *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
              *puVar6 = uVar8;
            }
            else {
              puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)((ulong)pIVar9 | 0x95b8),uVar8)
              ;
            }
          }
          local_78 = puVar6;
          local_70 = uVar10;
          uVar5 = SignatureMap::Find((SignatureMap *)(*(long *)(this + 0x10) + 0x148),pSVar11);
          IndirectFunctionTableEntry::Set
                    ((IndirectFunctionTableEntry *)&local_80,uVar5,puVar4,local_94);
        }
        else {
          WasmInstanceObject::ImportWasmJSFunctionIntoTable
                    (*(undefined8 *)this,param_2,param_3,uVar10);
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar1);
    uVar7 = 1;
  }
LAB_015fa09c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

