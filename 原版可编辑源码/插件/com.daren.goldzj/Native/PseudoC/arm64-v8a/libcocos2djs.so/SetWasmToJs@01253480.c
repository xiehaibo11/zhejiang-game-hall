
/* v8::internal::ImportedFunctionEntry::SetWasmToJs(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::wasm::WasmCode const*) */

void __thiscall
v8::internal::ImportedFunctionEntry::SetWasmToJs
          (ImportedFunctionEntry *this,Factory *param_1,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = (ulong *)Factory::NewTuple2(param_1,*(undefined8 *)this,param_3,1);
  uVar6 = *puVar2;
  uVar4 = (ulong)*(uint *)(**(ulong **)this + 0x2b);
  uVar3 = **(ulong **)this & 0xffffffff00000000;
  uVar7 = uVar3 | uVar4;
  lVar1 = uVar7 + (long)(*(int *)(this + 8) << 2);
  *(int *)(lVar1 + 7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,lVar1,uVar6);
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 | uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar6);
    }
  }
  *(undefined8 *)(*(long *)(**(long **)this + 0x2f) + (long)*(int *)(this + 8) * 8) = *param_4;
  return;
}

