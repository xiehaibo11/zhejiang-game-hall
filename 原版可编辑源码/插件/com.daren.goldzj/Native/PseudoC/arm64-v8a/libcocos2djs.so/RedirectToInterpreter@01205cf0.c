
/* v8::internal::WasmDebugInfo::RedirectToInterpreter(v8::internal::Handle<v8::internal::WasmDebugInfo>,
   v8::internal::Vector<int>) */

void v8::internal::WasmDebugInfo::RedirectToInterpreter
               (ulong *param_1,uint *param_2,long param_3,undefined8 param_4,Signature *param_5)

{
  uint uVar1;
  long lVar2;
  WasmCode *pWVar3;
  void *pvVar4;
  CanonicalHandleScope *this;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  NativeModule *this_00;
  Isolate *pIVar8;
  WasmCode *local_158;
  void *local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  WasmCode *local_130;
  ulong local_128 [10];
  void *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  void *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  NativeModuleModificationScope aNStack_a0 [8];
  WasmCodeRefScope aWStack_98 [48];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)((long)param_1 + 4);
  pIVar8 = (Isolate *)((ulong)uVar1 << 0x20);
  FUN_01205bac(pIVar8,param_1);
  this = *(CanonicalHandleScope **)((ulong)uVar1 << 0x20 | 0x95b8);
  local_128[0] = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 3);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
    *puVar5 = local_128[0];
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(this,local_128[0]);
    local_128[0] = *puVar5;
  }
  this_00 = (NativeModule *)
            **(undefined8 **)
              (*(long *)((local_128[0] & 0xffffffff00000000 |
                         (ulong)*(uint *)((local_128[0] & 0xffffffff00000000 |
                                          (ulong)*(uint *)(local_128[0] + 0x6f)) + 0xb)) + 3) + 0x18
              );
  lVar6 = WasmInstanceObject::module((WasmInstanceObject *)local_128);
  wasm::NativeModuleModificationScope::NativeModuleModificationScope(aNStack_a0,this_00);
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      uVar7 = wasm::NativeModule::IsRedirectedToInterpreter(this_00,uVar1);
      if ((uVar7 & 1) == 0) {
        wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_98);
        compiler::CompileWasmInterpreterEntry
                  (*(compiler **)(pIVar8 + 0xc770),(WasmEngine *)(this_00 + 0xc0),
                   (WasmFeatures *)(ulong)uVar1,
                   (uint)*(undefined8 *)(*(long *)(lVar6 + 0x88) + (long)(int)uVar1 * 0x20),param_5)
        ;
        local_140 = local_b8;
        uStack_148 = uStack_c0;
        local_150 = local_c8;
        param_5 = (Signature *)(ulong)uStack_cc;
        uStack_c0 = 0;
        local_b8 = (void *)0x0;
        local_c8 = (void *)0x0;
        uStack_138 = uStack_b0;
        wasm::NativeModule::AddCode
                  (&local_130,this_00,uVar1,local_128,local_d0,param_5,&local_140,&local_150,3,1);
        pvVar4 = local_150;
        local_150 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        pvVar4 = local_140;
        local_140 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        local_158 = local_130;
        local_130 = (WasmCode *)0x0;
        wasm::NativeModule::PublishCode(this_00,&local_158);
        pWVar3 = local_158;
        local_158 = (WasmCode *)0x0;
        if (pWVar3 != (WasmCode *)0x0) {
          wasm::WasmCode::~WasmCode(pWVar3);
          operator_delete(pWVar3);
        }
        pWVar3 = local_130;
        local_130 = (WasmCode *)0x0;
        if (pWVar3 != (WasmCode *)0x0) {
          wasm::WasmCode::~WasmCode(pWVar3);
          operator_delete(pWVar3);
        }
        pvVar4 = local_b8;
        local_b8 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        pvVar4 = local_c8;
        local_c8 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        pvVar4 = local_d8;
        local_d8 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_98);
      }
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  wasm::NativeModuleModificationScope::~NativeModuleModificationScope(aNStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

