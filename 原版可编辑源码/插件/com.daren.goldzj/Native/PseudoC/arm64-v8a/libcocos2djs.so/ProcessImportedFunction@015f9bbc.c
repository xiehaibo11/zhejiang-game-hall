
/* v8::internal::wasm::InstanceBuilder::ProcessImportedFunction(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, int, v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::wasm::InstanceBuilder::ProcessImportedFunction
          (InstanceBuilder *this,ulong *param_2,undefined4 param_3,uint param_4,undefined8 param_5,
          undefined8 param_6,ulong *param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Isolate *pIVar10;
  NativeModule *pNVar11;
  Signature *pSVar12;
  undefined1 auVar13 [16];
  ulong *local_a8;
  uint local_a0;
  ulong *local_98;
  uint local_90;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_7;
  if (((uVar9 & 1) == 0) ||
     ((*(byte *)((uVar9 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar9 - 1)) >> 1 & 1) == 0)) {
    pcVar7 = "function import requires a callable";
LAB_015f9c20:
    ReportLinkError(this,pcVar7,param_3,param_5,param_6);
    uVar3 = 0;
  }
  else {
    uVar9 = WasmExternalFunction::IsWasmExternalFunction(uVar9);
    if ((uVar9 & 1) != 0) {
      WasmInstanceObject::SetWasmExternalFunction
                (*(undefined8 *)this,param_2,(ulong)param_4,param_7);
    }
    pSVar12 = *(Signature **)
               (*(long *)(*(long *)(this + 0x10) + 0x88) +
               (-(ulong)(param_4 >> 0x1f) & 0xffffffe000000000 | (ulong)param_4 << 5));
    auVar13 = compiler::ResolveWasmImportCall(param_7,pSVar12,this + 8);
    puVar8 = auVar13._8_8_;
    uVar1 = auVar13._0_4_ & 0xff;
    if (uVar1 == 3) {
      local_98 = (ulong *)*puVar8;
      uVar9 = WasmExportedFunction::instance((WasmExportedFunction *)&local_98);
      pIVar10 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar10 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar10);
        }
        *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar9;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar9);
      }
      local_98 = (ulong *)*puVar8;
      uVar3 = WasmExportedFunction::GetWasmCallTarget((WasmExportedFunction *)&local_98);
      uVar9 = *puVar4;
LAB_015f9e8c:
      local_98 = param_2;
      local_90 = param_4;
      ImportedFunctionEntry::SetWasmToWasm((ImportedFunctionEntry *)&local_98,uVar9,uVar3);
    }
    else if (uVar1 == 2) {
      uVar9 = *param_2 & 0xffffffff00000000;
      local_98 = (ulong *)*puVar8;
      pNVar11 = (NativeModule *)
                **(undefined8 **)
                  (*(long *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*param_2 + 0x6f)) + 0xb)) + 3) +
                  0x18);
      uVar9 = WasmCapiFunction::GetHostCallTarget((WasmCapiFunction *)&local_98);
      WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)&local_98);
      lVar5 = compiler::CompileWasmCapiCallWrapper
                        (*(WasmEngine **)(*(long *)this + 0xc770),pNVar11,pSVar12,uVar9);
      StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(*(long *)(*(long *)this + 0x9520) + 0x2020),
                 *(int *)(lVar5 + 8));
      StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(*(long *)(*(long *)this + 0x9520) + 0x2060),
                 *(int *)(lVar5 + 0x18));
      local_a8 = param_2;
      local_a0 = param_4;
      ImportedFunctionEntry::SetWasmToJs
                ((ImportedFunctionEntry *)&local_a8,*(undefined8 *)this,puVar8,lVar5);
      WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_98);
    }
    else {
      if ((auVar13._0_8_ & 0xff) == 0) {
        pcVar7 = "imported function does not match the expected type";
        goto LAB_015f9c20;
      }
      uVar9 = *param_2 & 0xffffffff00000000;
      puVar6 = (undefined8 *)
               WasmImportWrapperCache::Get
                         (*(WasmImportWrapperCache **)
                           (**(long **)(*(long *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*param_2 +
                                                                                       0x6f)) + 0xb)
                                                  ) + 3) + 0x18) + 0x108),auVar13._0_8_ & 0xffffffff
                          ,pSVar12);
      if (*(int *)((long)puVar6 + 0x3c) != 2) {
        uVar9 = *param_2;
        uVar3 = *puVar6;
        goto LAB_015f9e8c;
      }
      local_98 = param_2;
      local_90 = param_4;
      ImportedFunctionEntry::SetWasmToJs
                ((ImportedFunctionEntry *)&local_98,*(undefined8 *)this,puVar8);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

