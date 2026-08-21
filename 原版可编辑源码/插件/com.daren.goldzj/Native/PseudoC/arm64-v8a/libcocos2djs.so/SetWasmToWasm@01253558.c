
/* v8::internal::ImportedFunctionEntry::SetWasmToWasm(v8::internal::WasmInstanceObject, unsigned
   long) */

void __thiscall
v8::internal::ImportedFunctionEntry::SetWasmToWasm
          (ImportedFunctionEntry *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)*(uint *)(**(ulong **)this + 0x2b);
  uVar2 = **(ulong **)this & 0xffffffff00000000;
  uVar5 = uVar2 | uVar4;
  lVar1 = uVar5 + (long)(*(int *)(this + 8) << 2);
  *(int *)(lVar1 + 7) = (int)param_2;
  if ((param_2 & 1) != 0) {
    uVar3 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,lVar1,param_2);
      uVar3 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 | uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(uVar5,lVar1,param_2);
    }
  }
  *(undefined8 *)(*(long *)(**(long **)this + 0x2f) + (long)*(int *)(this + 8) * 8) = param_3;
  return;
}

