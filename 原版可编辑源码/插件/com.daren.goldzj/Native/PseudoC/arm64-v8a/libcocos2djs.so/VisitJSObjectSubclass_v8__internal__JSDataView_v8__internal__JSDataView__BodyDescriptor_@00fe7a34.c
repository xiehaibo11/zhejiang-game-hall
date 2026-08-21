
/* int 
   v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>::VisitJSObjectSubclass<v8::internal::JSDataView,
   v8::internal::JSDataView::BodyDescriptor>(v8::internal::Map, v8::internal::JSDataView) */

int __thiscall
v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>::
VisitJSObjectSubclass<v8::internal::JSDataView,v8::internal::JSDataView::BodyDescriptor>
          (MainMarkingVisitor<v8::internal::MajorMarkingState> *this,long param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  ulong local_48;
  
  uVar9 = param_3 & 0xfffffffffffc0000;
  puVar1 = (uint *)(*(long *)(uVar9 + 0x10) + (~uVar9 + param_3 >> 7 & 0x1ffffff) * 4);
  uVar4 = 1 << (ulong)((uint)(~uVar9 + param_3 >> 2) & 0x1f);
  local_48 = param_3;
  if ((*puVar1 & uVar4) != 0) {
    uVar4 = uVar4 << 1;
    bVar7 = uVar4 == 0;
    puVar10 = puVar1;
    if (bVar7) {
      uVar4 = 1;
      puVar10 = puVar1 + 1;
    }
    while (uVar2 = puVar1[bVar7], (uVar4 & (uVar2 ^ 0xffffffff)) != 0) {
      while (*puVar10 == uVar2) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar6) {
          *puVar10 = uVar2 | uVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          iVar8 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_48,
                             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 - 1));
          *(long *)(uVar9 + 0x68) = *(long *)(uVar9 + 0x68) + (long)iVar8;
          goto LAB_00fe7b0c;
        }
      }
      ClearExclusiveLocal();
    }
  }
  if (this[0x40] == (MainMarkingVisitor<v8::internal::MajorMarkingState>)0x0) {
    iVar8 = 0;
  }
  else {
LAB_00fe7b0c:
    puVar10 = (uint *)(param_3 - 1);
    puVar1 = (uint *)(param_3 + 3);
    if (puVar10 < (uint *)0xfffffffffffffffc) {
      do {
        if ((*puVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this,param_3,puVar10,(ulong)puVar10 & 0xffffffff00000000 | (ulong)*puVar10);
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 < puVar1);
    }
    bVar3 = *(byte *)(param_2 + 3);
    iVar8 = (uint)bVar3 << 2;
    for (; puVar1 < (uint *)(param_3 + 0xf); puVar1 = puVar1 + 1) {
      if ((*puVar1 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this,param_3,puVar1,(ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1);
      }
    }
    BodyDescriptorBase::
    IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
              (param_2,param_3,0x28,(ulong)bVar3 << 2,this);
  }
  return iVar8;
}

