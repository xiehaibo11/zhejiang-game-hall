
/* v8::internal::OSROptimizedCodeCache::Clear(v8::internal::NativeContext) */

void v8::internal::OSROptimizedCodeCache::Clear(ulong param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)((param_1 & 0xffffffff00000000) + 0x420);
  puVar1 = (undefined4 *)(param_1 + 0x3cf);
  *puVar1 = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_1,puVar1,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((param_1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_1,puVar1,uVar3);
      return;
    }
  }
  return;
}

