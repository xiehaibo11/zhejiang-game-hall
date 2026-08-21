
/* v8::internal::wasm::InstanceBuilder::WriteGlobalAnyRef(v8::internal::wasm::WasmGlobal const&,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::wasm::InstanceBuilder::WriteGlobalAnyRef
          (InstanceBuilder *this,long param_1,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_3;
  uVar4 = **(ulong **)(this + 0x48);
  lVar1 = uVar4 + (long)(*(int *)(param_1 + 0x18) << 2);
  *(int *)(lVar1 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar1,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar1,uVar3);
      return;
    }
  }
  return;
}

