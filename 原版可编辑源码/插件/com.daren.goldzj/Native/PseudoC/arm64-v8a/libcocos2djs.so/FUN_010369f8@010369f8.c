
void FUN_010369f8(Isolate *param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  pIVar2 = param_1 + 0x95a0;
  uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar2;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  v8::internal::JSObject::AddProperty(param_1,param_2,param_1 + 0xb90,puVar3,0);
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar2;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  uVar5 = *param_2;
  lVar1 = uVar6 + (long)(int)(param_3 << 2);
  *(int *)(lVar1 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
      return;
    }
  }
  return;
}

