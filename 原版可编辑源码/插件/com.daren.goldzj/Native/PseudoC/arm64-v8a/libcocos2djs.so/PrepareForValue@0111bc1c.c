
/* v8::internal::PropertyCell::PrepareForValue(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, v8::internal::InternalIndex,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails) */

ulong * v8::internal::PropertyCell::PrepareForValue
                  (Isolate *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_68;
  
  uVar9 = *param_2 & 0xffffffff00000000 |
          (ulong)*(uint *)(*param_2 + (long)((int)param_3 * 4 + 0x14) + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar5;
  }
  uVar2 = *(uint *)(uVar9 + 7);
  uVar1 = (int)uVar2 >> 1;
  if (((param_5 & 1) == 0) || ((uVar2 >> 1 & 1) != 0)) {
    if ((uVar2 >> 4 & 1) == 0) {
      uVar10 = param_5 >> 3 & 1;
      uVar7 = *(uint *)(uVar9 + 0xb);
    }
    else {
      uVar10 = 0;
      uVar7 = *(uint *)(uVar9 + 0xb);
    }
  }
  else {
    uVar10 = 1;
    uVar7 = *(uint *)(uVar9 + 0xb);
  }
  if (((uVar7 & 1) == 0) || (uVar7 != *(uint *)(param_1 + 0xa8))) {
    uVar7 = uVar1 >> 8 & 0x7fffff;
  }
  else {
    iVar3 = *(int *)(*param_2 + 0x13);
    uVar7 = iVar3 >> 1;
    *(uint *)(*param_2 + 0x13) = iVar3 + 2U & 0xfffffffe;
  }
  uVar4 = UpdatedType(param_1,puVar5,param_4,uVar1);
  if (uVar10 != 0) {
    puVar5 = (ulong *)InvalidateEntry(param_1,param_2,param_3);
  }
  *(uint *)(*puVar5 + 7) = (param_5 & 0x3f) << 1 | uVar7 << 9 | uVar4 << 7;
  if (uVar4 - 1 < 2) {
    uVar8 = *puVar5;
    uVar9 = *param_4;
    *(int *)(uVar8 + 0xb) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
        uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
      }
    }
  }
  if ((uVar10 == 0) && (((uVar1 >> 6 & 3) != uVar4 || ((param_5 >> 3 & 1) != (uVar2 & 0x10) >> 4))))
  {
    local_68 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_68,param_1,2);
  }
  return puVar5;
}

