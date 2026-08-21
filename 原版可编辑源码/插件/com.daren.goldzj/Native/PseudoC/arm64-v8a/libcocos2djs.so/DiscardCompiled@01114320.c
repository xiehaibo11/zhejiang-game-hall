
/* v8::internal::SharedFunctionInfo::DiscardCompiled(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void v8::internal::SharedFunctionInfo::DiscardCompiled(Isolate *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CanonicalHandleScope *this;
  ulong *puVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  Heap *pHVar10;
  ulong uVar11;
  ulong local_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar7 = *param_2;
  uVar11 = uVar7 & 0xffffffff00000000;
  if (((*(uint *)(uVar7 + 7) & 1) == 0) ||
     (uVar9 = uVar11 | *(uint *)(uVar7 + 7),
     *(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83)) {
    if (((*(uint *)(uVar7 + 3) & 1) != 0) &&
       (*(ushort *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | *(uint *)(uVar7 + 3)) - 1)) - 0x95 < 2
       )) {
      uVar7 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar7 + 3)) + 3);
      goto LAB_011143f8;
    }
LAB_01114410:
    uVar7 = *(ulong *)(uVar11 + 200);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (this != (CanonicalHandleScope *)0x0) goto LAB_01114400;
LAB_0111441c:
    puVar6 = *(ulong **)(param_1 + 0x95a0);
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    local_98 = uVar9;
    uVar7 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_98);
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_98), (uVar7 & 1) == 0)) ||
       (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1))))
    goto LAB_01114410;
LAB_011143f8:
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (this == (CanonicalHandleScope *)0x0) goto LAB_0111441c;
LAB_01114400:
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(this,uVar7);
  }
  local_98 = *param_2;
  uVar4 = StartPosition((SharedFunctionInfo *)&local_98);
  local_98 = *param_2;
  uVar5 = EndPosition((SharedFunctionInfo *)&local_98);
  local_98 = *param_2;
  local_90[0] = &PTR_FUN_01cb4e10;
  local_70 = local_90;
  DiscardCompiledMetadata((SharedFunctionInfo *)&local_98,param_1,local_90);
  if (local_90 == local_70) {
    pcVar8 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_011144bc;
    pcVar8 = (code *)(*local_70)[5];
  }
  (*pcVar8)();
LAB_011144bc:
  uVar2 = *(uint *)(*param_2 + 3);
  if (((uVar2 & 1) == 0) ||
     (uVar7 = *param_2 & 0xffffffff00000000,
     *(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) != 0x95)) {
    puVar6 = (ulong *)Factory::NewUncompiledDataWithoutPreparseData
                                ((Factory *)param_1,puVar6,uVar4,uVar5);
    uVar11 = *param_2;
    uVar7 = *puVar6;
    puVar1 = (undefined4 *)(uVar11 + 3);
    *puVar1 = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,puVar1,uVar7);
        uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar7);
      }
    }
  }
  else {
    uVar11 = *param_2 & 0xffffffff00000000;
    pHVar10 = (Heap *)(uVar11 | 0x8850);
    uVar7 = uVar11 | *(uint *)(*param_2 + 3);
    Heap::NotifyObjectLayoutChange(pHVar10,uVar7,&local_98,0);
    uVar11 = *(ulong *)(uVar11 + 0x2a8);
    if ((int)uVar11 == 0) {
      *(undefined4 *)(uVar7 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange(pHVar10,uVar7,uVar11);
      *(int *)(uVar7 - 1) = (int)uVar11;
      if (((uVar11 & 1) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar7,0,uVar11);
      }
    }
    Heap::CreateFillerObjectAt(pHVar10,uVar7 + 0xf,4,0,1);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

