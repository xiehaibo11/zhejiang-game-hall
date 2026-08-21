
/* int 
   v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>::VisitLeftTrimmableArray<v8::internal::FixedArray>(v8::internal::Map,
   v8::internal::FixedArray) */

int __thiscall
v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>::
VisitLeftTrimmableArray<v8::internal::FixedArray>
          (MainMarkingVisitor<v8::internal::MajorMarkingState> *this,undefined8 param_2,
          ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  ulong local_48;
  
  uVar8 = param_3 & 0xfffffffffffc0000;
  puVar9 = (uint *)(*(long *)(uVar8 + 0x10) + (~uVar8 + param_3 >> 7 & 0x1ffffff) * 4);
  uVar3 = 1 << (ulong)((uint)(~uVar8 + param_3 >> 2) & 0x1f);
  local_48 = param_3;
  if ((*puVar9 & uVar3) != 0) {
    uVar3 = uVar3 << 1;
    bVar6 = uVar3 == 0;
    puVar1 = puVar9;
    if (bVar6) {
      uVar3 = 1;
      puVar1 = puVar9 + 1;
    }
    while (uVar2 = puVar9[bVar6], (uVar3 & (uVar2 ^ 0xffffffff)) != 0) {
      while (*puVar1 == uVar2) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar2 | uVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          iVar7 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_48,
                             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 - 1));
          *(long *)(uVar8 + 0x68) = *(long *)(uVar8 + 0x68) + (long)iVar7;
          goto LAB_00fe7668;
        }
      }
      ClearExclusiveLocal();
    }
  }
  if (this[0x40] == (MainMarkingVisitor<v8::internal::MajorMarkingState>)0x0) {
    iVar7 = 0;
  }
  else {
LAB_00fe7668:
    puVar9 = (uint *)(param_3 - 1);
    iVar7 = (*(uint *)(param_3 + 3) & 0x7ffffffe) * 2 + 8;
    if (puVar9 < (uint *)0xfffffffffffffffc) {
      uVar3 = *puVar9;
      puVar1 = puVar9;
      while( true ) {
        if ((uVar3 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this,param_3,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3);
        }
        puVar1 = puVar1 + 1;
        if ((uint *)(param_3 + 3) <= puVar1) break;
        uVar3 = *puVar1;
      }
    }
    for (puVar1 = (uint *)(param_3 + 7); puVar1 < (uint *)((long)puVar9 + (long)iVar7);
        puVar1 = puVar1 + 1) {
      if ((*puVar1 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this,param_3,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
      }
    }
  }
  return iVar7;
}

