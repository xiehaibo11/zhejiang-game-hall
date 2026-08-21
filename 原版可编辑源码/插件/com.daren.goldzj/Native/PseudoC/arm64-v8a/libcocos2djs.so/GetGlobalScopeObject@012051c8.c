
/* v8::internal::wasm::GetGlobalScopeObject(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

undefined8 v8::internal::wasm::GetGlobalScopeObject(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  Factory *this;
  long lVar10;
  char *local_c0;
  ulong uStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  char local_a0;
  char *local_90;
  undefined8 uStack_88;
  char local_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar3 = Factory::NewJSObjectWithNullProto(this);
  local_90 = (char *)*param_1;
  if (*(int *)(local_90 + 0x7b) != *(int *)(((ulong)local_90 & 0xffffffff00000000) + 0xa0)) {
    local_90 = "memory";
    uStack_88 = 6;
    uVar4 = Factory::InternalizeString<unsigned_char>(this,(Vector *)&local_90,false);
    uVar9 = *param_1 & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*param_1 + 0x7b)) + 0xb);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this + 0x95a0);
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar9);
      uVar9 = *puVar5;
    }
    uVar6 = Factory::NewJSTypedArray(this,2,puVar5,0,*(undefined8 *)(uVar9 + 0xb));
    JSObject::SetOwnPropertyIgnoreAttributes(uVar3,uVar4,uVar6,0);
    local_90 = (char *)*param_1;
  }
  lVar7 = WasmInstanceObject::module((WasmInstanceObject *)&local_90);
  if (*(long *)(lVar7 + 0x20) != *(long *)(lVar7 + 0x18)) {
    uVar4 = Factory::NewJSObjectWithNullProto(this);
    local_90 = "globals";
    uStack_88 = 7;
    uVar6 = Factory::InternalizeString<unsigned_char>(this,(Vector *)&local_90,false);
    JSObject::SetOwnPropertyIgnoreAttributes(uVar3,uVar6,uVar4,0);
    if (*(long *)(lVar7 + 0x20) != *(long *)(lVar7 + 0x18)) {
      lVar10 = 0;
      uVar9 = 0;
      do {
        uStack_88 = 0x15;
        local_90 = local_80;
        uVar2 = SNPrintF(local_80,0x15,"global#%d",uVar9);
        if (((int)uVar2 < 1) || ((int)uStack_88 <= (int)uVar2)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","len > 0 && len < value.length()");
        }
        uStack_b8 = (ulong)uVar2;
        local_c0 = local_90;
        uVar6 = Factory::InternalizeString<unsigned_char>(this,(Vector *)&local_c0,false);
        WasmInstanceObject::GetGlobalValue
                  ((WasmInstanceObject *)&local_90,param_1,*(long *)(lVar7 + 0x18) + lVar10);
        uStack_a8 = uStack_88;
        local_b0 = local_90;
        local_a0 = local_80[0];
        uVar8 = FUN_01205458(this,&local_b0);
        JSObject::SetOwnPropertyIgnoreAttributes(uVar4,uVar6,uVar8,0);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar9 < (ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18) >> 5));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

