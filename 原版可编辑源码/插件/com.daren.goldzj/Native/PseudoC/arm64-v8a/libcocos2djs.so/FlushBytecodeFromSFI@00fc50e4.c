
/* v8::internal::MarkCompactCollector::FlushBytecodeFromSFI(v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::MarkCompactCollector::FlushBytecodeFromSFI(MarkCompactCollector *this,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  undefined **local_d0 [4];
  undefined ***local_b0;
  undefined **local_a0 [4];
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = param_2 & 0xffffffff00000000;
  local_f0 = param_2;
  if (((*(uint *)(param_2 + 7) & 1) == 0) ||
     (uVar12 = uVar9 | *(uint *)(param_2 + 7),
     *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x83)) {
    if (((*(uint *)(param_2 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | *(uint *)(param_2 + 3)) - 1)) - 0x95
       )) goto LAB_00fc51c0;
    uVar9 = param_2 & 0xffffffff00000000 |
            (ulong)*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 3)) + 3);
  }
  else {
    local_d8 = uVar12;
    uVar9 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_d8);
    if ((((uVar9 & 1) == 0) ||
        (uVar9 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_d8), (uVar9 & 1) == 0)) ||
       (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) {
LAB_00fc51c0:
      uVar9 = *(ulong *)((local_f0 & 0xffffffff00000000) + 200);
    }
  }
  uVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_f0);
  uVar6 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_f0);
  local_a0[0] = &PTR_FUN_01ca8d00;
  local_80 = local_a0;
  SharedFunctionInfo::DiscardCompiledMetadata
            ((SharedFunctionInfo *)&local_f0,*(long *)(this + 8) + -0x8850,local_a0);
  if (local_a0 == local_80) {
    pcVar10 = (code *)(*local_80)[4];
LAB_00fc5234:
    (*pcVar10)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_80)[5];
    goto LAB_00fc5234;
  }
  uVar12 = local_f0 & 0xffffffff00000000;
  uVar14 = uVar12 | *(uint *)(local_f0 + 0xf);
  uVar13 = uVar12 | 7;
  if ((*(short *)(uVar13 + *(uint *)(uVar14 - 1)) == 0x5b) &&
     (*(short *)(uVar13 + *(uint *)((uVar12 | *(uint *)(uVar14 + 0x13)) - 1)) == 0x86)) {
    uVar11 = *(uint *)(uVar14 + 0xf);
  }
  else if (((*(uint *)(local_f0 + 3) & 1) == 0) ||
          (*(short *)(uVar13 + *(uint *)((uVar12 | *(uint *)(local_f0 + 3)) - 1)) != 0x86)) {
    uVar11 = *(uint *)((local_f0 & 0xffffffff00000000 | (ulong)*(uint *)(local_f0 + 3)) + 3);
  }
  else {
    uVar11 = *(uint *)(local_f0 + 3);
  }
  local_f8 = local_f0 & 0xffffffff00000000 | (ulong)uVar11;
  uVar12 = local_f8 - 1;
  iVar7 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_f8,
                     local_f0 & 0xffffffff00000000 | (ulong)*(uint *)(local_f8 - 1));
  plVar17 = (long *)(uVar12 & 0xfffffffffffc0000);
  iVar8 = (int)uVar12;
  iVar16 = (int)plVar17;
  if (*(SlotSet **)((ulong)plVar17 | 0x30) != (SlotSet *)0x0) {
    SlotSet::RemoveRange
              (*(SlotSet **)((ulong)plVar17 | 0x30),(long)(iVar8 - iVar16),
               (long)((iVar8 + iVar7) - iVar16),*plVar17 + 0xfffU >> 0xc,0);
  }
  if ((SlotSet *)plVar17[7] != (SlotSet *)0x0) {
    SlotSet::RemoveRange
              ((SlotSet *)plVar17[7],(long)(iVar8 - iVar16),(long)((iVar8 + iVar7) - iVar16),
               *plVar17 + 0xfffU >> 0xc,0);
  }
  *(undefined4 *)(local_f8 - 1) = *(undefined4 *)(*(long *)(this + 8) + -0x85a8);
  uVar12 = Heap::IsLargeObject(local_f8);
  if ((uVar12 & 1) == 0) {
    Heap::CreateFillerObjectAt(*(Heap **)(this + 8),local_f8 + 0xf,iVar7 + -0x10,1,1);
  }
  uVar12 = local_f8;
  local_b0 = local_d0;
  lVar15 = local_f8 + 3;
  local_d0[0] = &PTR_FUN_01ca8d48;
  *(int *)(local_f8 + 3) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar13 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(local_f8,lVar15,uVar9);
      uVar13 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,lVar15,uVar9);
    }
  }
  local_d8 = uVar12;
  local_e8 = uVar9;
  local_e0 = lVar15;
  if (local_b0 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (*(code *)(*local_b0)[6])(local_b0,&local_d8,&local_e0,&local_e8);
  *(undefined4 *)(uVar12 + 7) = uVar5;
  *(undefined4 *)(uVar12 + 0xb) = uVar6;
  if (local_d0 == local_b0) {
    pcVar10 = (code *)(*local_b0)[4];
  }
  else {
    if (local_b0 == (undefined ***)0x0) goto LAB_00fc5460;
    pcVar10 = (code *)(*local_b0)[5];
  }
  (*pcVar10)();
LAB_00fc5460:
  uVar9 = uVar12 & 0xfffffffffffc0000;
  lVar15 = (uVar12 - uVar9 >> 7 & 0x1ffffff) * 4;
  uVar11 = *(uint *)(*(long *)(uVar9 + 0x10) + lVar15);
  uVar2 = 1 << (ulong)((uint)(uVar12 - uVar9 >> 2) & 0x1f);
  *(uint *)(*(long *)(uVar9 + 0x10) + lVar15) = uVar11 | uVar2;
  if ((uVar11 & uVar2) == 0) {
    local_d8 = uVar12;
    puVar1 = (uint *)(*(long *)(uVar9 + 0x10) + (uVar12 + ~uVar9 >> 7 & 0x1ffffff) * 4);
    uVar11 = 1 << (ulong)((uint)(uVar12 + ~uVar9 >> 2) & 0x1f);
    if ((*puVar1 & uVar11) != 0) {
      uVar11 = uVar11 << 1;
      bVar4 = uVar11 == 0;
      uVar2 = puVar1[bVar4];
      if (bVar4) {
        uVar11 = 1;
      }
      puVar1[bVar4] = uVar2 | uVar11;
      if ((uVar2 & uVar11) == 0) {
        iVar8 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_d8,
                           uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
        *(long *)(uVar9 + 0x68) = *(long *)(uVar9 + 0x68) + (long)iVar8;
      }
    }
  }
  *(int *)(local_f0 + 3) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar13 = *(ulong *)(uVar9 | 8);
    lVar15 = local_f0 + 3;
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(local_f0,lVar15,uVar12);
      uVar13 = *(ulong *)(uVar9 | 8);
      lVar15 = local_f0 + 3;
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((local_f0 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(local_f0,lVar15,uVar12);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

