
/* v8::internal::WasmTableObject::AddDispatchTable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int) */

void v8::internal::WasmTableObject::AddDispatchTable
               (Isolate *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  if (param_3 != (ulong *)0x0) {
    iVar2 = (*(uint *)(uVar5 + 3) & 0x7ffffffe) * 2;
    puVar3 = (ulong *)Factory::CopyFixedArrayAndGrow(param_1,puVar3,3);
    uVar6 = *puVar3;
    uVar5 = *param_3;
    lVar1 = uVar6 + (long)iVar2;
    *(int *)(lVar1 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
      }
    }
    *(int *)(*puVar3 + (long)(iVar2 + 4) + 7) = param_4 << 1;
    uVar6 = *param_2;
    uVar5 = *puVar3;
    *(int *)(uVar6 + 0x17) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x17,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x17,uVar5);
        return;
      }
    }
  }
  return;
}

