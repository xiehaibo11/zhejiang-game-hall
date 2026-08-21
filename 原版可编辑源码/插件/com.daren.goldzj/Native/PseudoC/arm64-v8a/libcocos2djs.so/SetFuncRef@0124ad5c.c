
/* v8::internal::WasmGlobalObject::SetFuncRef(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::WasmGlobalObject::SetFuncRef(WasmGlobalObject *this,long param_1,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_3;
  if (((((uVar4 & 1) == 0) || ((int)uVar4 != *(int *)(param_1 + 0xb0))) &&
      (uVar4 = WasmExternalFunction::IsWasmExternalFunction(uVar4), (uVar4 & 1) == 0)) &&
     (uVar4 = WasmCapiFunction::IsWasmCapiFunction(*param_3), (uVar4 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar4 = *(ulong *)this;
    uVar6 = *param_3;
    uVar2 = *(uint *)(uVar4 + 0xf);
    uVar7 = uVar4 & 0xffffffff00000000 | (ulong)uVar2;
    lVar1 = uVar7 + (long)(int)((*(uint *)(uVar4 + 0x13) & 0x7ffffffe) << 1);
    *(int *)(lVar1 + 7) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar1,uVar6);
        uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) &&
         ((*(byte *)((uVar4 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18)
          == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar6);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

