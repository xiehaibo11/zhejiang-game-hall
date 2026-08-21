
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x014f6f04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* int v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>(v8::internal::Map,
   v8::internal::JSTypedArray) */

int __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>
          (MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
           *this,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  SlotSnapshot *pSVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  bVar1 = *(byte *)(param_2 + 3);
  bVar2 = *(byte *)(param_2 + 5);
  if (bVar2 < 3) {
    bVar2 = *(byte *)(param_2 + 3);
  }
  pSVar3 = ConcurrentMarkingVisitor::
           MakeSlotSnapshot<v8::internal::JSTypedArray,v8::internal::JSTypedArray::BodyDescriptor>
                     ((ConcurrentMarkingVisitor *)this,param_2,param_3,(uint)bVar2 << 2);
  uVar4 = ConcurrentMarkingVisitor::ShouldVisit((ConcurrentMarkingVisitor *)this,param_3);
  if (((uVar4 & 1) == 0) ||
     (ConcurrentMarkingVisitor::VisitPointersInSnapshot
                ((ConcurrentMarkingVisitor *)this,param_3,pSVar3), bVar1 == 0)) {
    return 0;
  }
  iVar7 = (uint)bVar1 << 2;
  if (this[0x34] ==
      (MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
       )0x0) {
    return iVar7;
  }
  lVar9 = *(long *)(this + 0x10);
  puVar8 = (undefined8 *)(lVar9 + (long)*(int *)(this + 0x28) * 0x50);
  puVar10 = (undefined8 *)*puVar8;
  lVar6 = puVar10[1];
  if (lVar6 == 0x10) {
    base::Mutex::Lock((Mutex *)(lVar9 + 0x280));
    *puVar10 = *(undefined8 *)(lVar9 + 0x2a8);
    *(undefined8 **)(lVar9 + 0x2a8) = puVar10;
    base::Mutex::Unlock((Mutex *)(lVar9 + 0x280));
    pvVar5 = operator_new(0x90);
    *(undefined8 *)((long)pvVar5 + 0x88) = 0;
    *(undefined8 *)((long)pvVar5 + 0x20) = 0;
    *(undefined8 *)((long)pvVar5 + 0x18) = 0;
    *(undefined8 *)((long)pvVar5 + 0x30) = 0;
    *(undefined8 *)((long)pvVar5 + 0x28) = 0;
    *(undefined8 *)((long)pvVar5 + 0x40) = 0;
    *(undefined8 *)((long)pvVar5 + 0x38) = 0;
    *(undefined8 *)((long)pvVar5 + 0x50) = 0;
    *(undefined8 *)((long)pvVar5 + 0x48) = 0;
    *(undefined8 *)((long)pvVar5 + 0x60) = 0;
    *(undefined8 *)((long)pvVar5 + 0x58) = 0;
    *(undefined8 *)((long)pvVar5 + 0x70) = 0;
    *(undefined8 *)((long)pvVar5 + 0x68) = 0;
    *(undefined8 *)((long)pvVar5 + 0x80) = 0;
    *(undefined8 *)((long)pvVar5 + 0x78) = 0;
    *puVar8 = pvVar5;
    *(undefined8 *)((long)pvVar5 + 8) = 1;
    *(undefined8 *)((long)pvVar5 + 0x10) = param_3;
    return iVar7;
  }
  puVar10[1] = lVar6 + 1;
  puVar10[lVar6 + 2] = param_3;
  return iVar7;
}

