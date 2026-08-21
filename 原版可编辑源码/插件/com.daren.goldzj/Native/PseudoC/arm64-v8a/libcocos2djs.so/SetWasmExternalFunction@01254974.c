
/* v8::internal::WasmInstanceObject::SetWasmExternalFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int,
   v8::internal::Handle<v8::internal::WasmExternalFunction>) */

void v8::internal::WasmInstanceObject::SetWasmExternalFunction
               (Isolate *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *param_2;
  uVar5 = uVar2 & 0xffffffff00000000;
  if (*(uint *)(uVar2 + 0x9f) == *(uint *)(uVar5 + 0xa0)) {
    lVar3 = *(long *)(**(long **)(*(long *)((uVar5 | *(uint *)((uVar5 | *(uint *)(uVar2 + 0x6f)) +
                                                              0xb)) + 3) + 0x18) + 200);
    puVar1 = (ulong *)Factory::NewFixedArray
                                ((Factory *)param_1,
                                 (ulong)(*(long *)(lVar3 + 0x90) - *(long *)(lVar3 + 0x88)) >> 5,0);
    uVar5 = *param_2;
    uVar2 = *puVar1;
    *(int *)(uVar5 + 0x9f) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x9f,uVar2);
        uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x9f,uVar2);
      }
    }
  }
  else {
    uVar5 = uVar5 | *(uint *)(uVar2 + 0x9f);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar5;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
  }
  uVar5 = *puVar1;
  uVar2 = *param_4;
  lVar3 = uVar5 + (long)(param_3 << 2);
  *(int *)(lVar3 + 7) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    lVar3 = lVar3 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,lVar3,uVar2);
      uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,lVar3,uVar2);
      return;
    }
  }
  return;
}

