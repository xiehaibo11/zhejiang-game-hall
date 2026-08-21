
/* v8::internal::WasmTableObject::SetFunctionTablePlaceholder(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, int,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int) */

void v8::internal::WasmTableObject::SetFunctionTablePlaceholder
               (Isolate *param_1,ulong *param_2,int param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = -(param_5 >> 0x1f & 1) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  puVar2 = (ulong *)Factory::NewTuple2((Factory *)param_1,param_4,puVar2,0);
  uVar5 = *puVar2;
  uVar3 = (ulong)*(uint *)(*param_2 + 0xb);
  uVar7 = *param_2 & 0xffffffff00000000;
  uVar6 = uVar7 | uVar3;
  lVar1 = uVar6 + (long)(param_3 << 2);
  *(int *)(lVar1 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 | uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
      return;
    }
  }
  return;
}

