
/* v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>::MarkDescriptorArrayFromWriteBarrier(v8::internal::HeapObject,
   v8::internal::DescriptorArray, int) */

void __thiscall
v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>::
MarkDescriptorArrayFromWriteBarrier
          (MainMarkingVisitor<v8::internal::MajorMarkingState> *this,undefined8 param_2,
          ulong param_3,short param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong local_28;
  
  uVar11 = param_3 & 0xfffffffffffc0000;
  puVar10 = (uint *)(*(long *)(uVar11 + 0x10) + (param_3 - uVar11 >> 7 & 0x1ffffff) * 4);
  while( true ) {
    uVar2 = *puVar10;
    uVar8 = (uint)(1L << (param_3 - uVar11 >> 2 & 0x1f));
    if ((uVar8 & (uVar2 ^ 0xffffffff)) == 0) break;
    while (*puVar10 == uVar2) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar5) {
        *puVar10 = uVar2 | uVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00fb8844;
    }
    ClearExclusiveLocal();
  }
LAB_00fb8844:
  puVar10 = (uint *)(*(long *)(uVar11 + 0x10) + (~uVar11 + param_3 >> 7 & 0x1ffffff) * 4);
  uVar2 = 1 << (ulong)((uint)(~uVar11 + param_3 >> 2) & 0x1f);
  if ((*puVar10 & uVar2) != 0) {
    uVar2 = uVar2 << 1;
    bVar5 = uVar2 == 0;
    puVar1 = puVar10;
    if (bVar5) {
      uVar2 = 1;
      puVar1 = puVar10 + 1;
    }
    while (uVar8 = puVar10[bVar5], (uVar2 & (uVar8 ^ 0xffffffff)) != 0) {
      while (*puVar1 == uVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 | uVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          local_28 = param_3;
          iVar7 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_28,
                             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 - 1));
          puVar10 = (uint *)(param_3 - 1);
          *(long *)(uVar11 + 0x68) = *(long *)(uVar11 + 0x68) + (long)iVar7;
          if (puVar10 < (uint *)0xfffffffffffffffc) {
            uVar2 = *puVar10;
            while( true ) {
              if ((uVar2 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this,param_3,puVar10,
                           (ulong)puVar10 & 0xffffffff00000000 | (ulong)uVar2);
              }
              puVar10 = puVar10 + 1;
              if ((uint *)(param_3 + 3) <= puVar10) break;
              uVar2 = *puVar10;
            }
          }
          for (puVar10 = (uint *)(param_3 + 0xb); puVar10 < (uint *)(param_3 + 0xf);
              puVar10 = puVar10 + 1) {
            if ((*puVar10 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this,param_3,puVar10,
                         (ulong)puVar10 & 0xffffffff00000000 | (ulong)*puVar10);
            }
          }
          goto LAB_00fb8974;
        }
      }
      ClearExclusiveLocal();
    }
  }
LAB_00fb8974:
  local_28 = param_3;
  sVar6 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                    ((DescriptorArray *)&local_28,*(uint *)(this + 0x2c),param_4);
  uVar11 = local_28;
  if ((int)sVar6 < (int)param_4) {
    puVar1 = (uint *)(local_28 + (long)(param_4 * 0xc + 0xf));
    for (puVar10 = (uint *)(local_28 + (long)(sVar6 * 0xc + 0xf)); puVar10 < puVar1;
        puVar10 = puVar10 + 1) {
      uVar2 = *puVar10;
      uVar9 = (ulong)uVar2 & 3;
      if (uVar9 == 1) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this,uVar11,puVar10);
      }
      else if ((uVar2 != 3) && (uVar9 == 3)) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this,uVar11,puVar10,
                   (ulong)puVar10 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd);
      }
    }
  }
  return;
}

