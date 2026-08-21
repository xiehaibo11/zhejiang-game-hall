
/* v8::internal::WasmDebugInfo::SetupForTesting(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

long v8::internal::WasmDebugInfo::SetupForTesting(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long local_48;
  ulong *local_28;
  
  puVar1 = (ulong *)New();
  local_48 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  local_28 = puVar1;
  puVar2 = (ulong *)FUN_01205894(local_48,(long)FLAG_stack_size << 0xb,&local_48,&local_28);
  uVar5 = *puVar1;
  uVar4 = *puVar2;
  *(int *)(uVar5 + 7) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar4);
    }
  }
  return **(long **)(*(long *)(*puVar2 + 3) + 0x18) + 0x10;
}

