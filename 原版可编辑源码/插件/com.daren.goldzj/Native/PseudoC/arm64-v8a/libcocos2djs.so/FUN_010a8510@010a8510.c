
undefined8 FUN_010a8510(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *extraout_x1;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  FUN_010a9bd0();
  pcStack_38 = FUN_010a851c;
  uStack_48 = *extraout_x1;
  if (((*(uint *)((uStack_48 & 0xffffffff00000000 | (ulong)*(uint *)(uStack_48 - 1)) + 0xb) >> 0x14
       & 1) != 0) ||
     (puStack_40 = &stack0xfffffffffffffff0,
     uVar3 = v8::internal::JSObject::WouldConvertToSlowElements((JSObject *)&uStack_48,param_3),
     (uVar3 & 1) != 0)) {
    return 0;
  }
  pIVar4 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar4 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar3;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8),uVar3);
  }
  uVar3 = (ulong)(param_3 + (param_3 + 1 >> 1) + 0x11);
  auVar12 = FUN_010a9be4(extraout_x1,puVar5);
  uVar6 = auVar12._0_8_;
  uVar8 = *auVar12._8_8_ & 0xffffffff00000000;
  uVar9 = uVar8 | *(uint *)(*auVar12._8_8_ + 7);
  uVar7 = (*(int *)(uVar9 + 3) >> 1) - 2;
  if ((uint)uVar3 < uVar7) {
    uVar10 = *(uint *)(uVar9 + 7 + (long)(int)((uint)uVar3 * 4 + 8));
    uVar7 = *(uint *)(uVar9 + 7);
  }
  else {
    uVar11 = uVar8 | *(uint *)(uVar9 + 0xb);
    lVar1 = uVar11 + ((long)((uVar3 - uVar7) * 0xc00000000 + 0x1400000000) >> 0x20);
    uVar7 = *(uint *)(lVar1 + 7);
    if (((uVar7 & 1) == 0) ||
       (uVar3 = uVar8 | uVar7, *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x53)) {
      puVar2 = (undefined4 *)(lVar1 + 7);
      *puVar2 = (int)param_4;
      if ((param_4 & 1) == 0) {
        return uVar6;
      }
      uVar3 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
      uVar7 = (uint)uVar3;
      goto joined_r0x010a86c4;
    }
    uVar7 = *(uint *)(uVar9 + 7);
    uVar10 = *(uint *)(uVar3 + 3);
  }
  uVar11 = uVar8 | uVar7;
  lVar1 = uVar11 + (long)(int)((uVar10 & 0x7ffffffe) << 1);
  *(int *)(lVar1 + 7) = (int)param_4;
  if ((param_4 & 1) == 0) {
    return uVar6;
  }
  uVar3 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
  puVar2 = (undefined4 *)(lVar1 + 7);
  uVar7 = (uint)uVar3;
joined_r0x010a86c4:
  if ((uVar7 >> 0x12 & 1) != 0) {
    uVar6 = v8::internal::Heap_MarkingBarrierSlow(uVar11,puVar2,param_4);
    uVar3 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
  }
  if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    uVar6 = v8::internal::Heap_GenerationalBarrierSlow(uVar11,puVar2,param_4);
    return uVar6;
  }
  return uVar6;
}

