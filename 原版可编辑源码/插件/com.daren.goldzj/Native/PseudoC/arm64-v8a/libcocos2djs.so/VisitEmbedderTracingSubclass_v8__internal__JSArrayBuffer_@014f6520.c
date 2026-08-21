
/* int v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::VisitEmbedderTracingSubclass<v8::internal::JSArrayBuffer>(v8::internal::Map,
   v8::internal::JSArrayBuffer) */

int __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
VisitEmbedderTracingSubclass<v8::internal::JSArrayBuffer>
          (MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
           *this,long param_2,long param_3)

{
  uint *puVar1;
  MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
  *pMVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined **local_60;
  MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
  *local_58;
  
  bVar4 = *(byte *)(param_2 + 3);
  bVar5 = *(byte *)(param_2 + 5);
  if (bVar5 < 3) {
    bVar5 = *(byte *)(param_2 + 3);
  }
  puVar11 = (uint *)(param_3 + -1);
  puVar1 = (uint *)(param_3 + 3);
  pMVar2 = this + 0x48;
  local_60 = &PTR__ObjectVisitor_01cc6d88;
  *(undefined4 *)(this + 0x48) = 0;
  if (puVar11 < puVar1) {
    uVar3 = *puVar11;
    *(int *)pMVar2 = 1;
    *(uint **)(this + 0x50) = puVar11;
    *(ulong *)(this + 0x58) = (ulong)puVar11 & 0xffffffff00000000 | (ulong)uVar3;
  }
  if (puVar1 < (uint *)(param_3 + 0xbU)) {
    uVar3 = *(uint *)(param_3 + 3);
    iVar6 = *(int *)pMVar2;
    *(int *)pMVar2 = iVar6 + 1;
    *(uint **)(pMVar2 + (long)iVar6 * 0x10 + 8) = puVar1;
    *(ulong *)(pMVar2 + (long)iVar6 * 0x10 + 0x10) =
         (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
    for (puVar1 = (uint *)(param_3 + 7); puVar1 < (uint *)(param_3 + 0xbU); puVar1 = puVar1 + 1) {
      uVar3 = *puVar1;
      iVar6 = *(int *)pMVar2;
      *(int *)pMVar2 = iVar6 + 1;
      *(uint **)(pMVar2 + (long)iVar6 * 0x10 + 8) = puVar1;
      *(ulong *)(pMVar2 + (long)iVar6 * 0x10 + 0x10) =
           (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
    }
  }
  local_58 = pMVar2;
  if (*(short *)(param_2 + 7) == 0x421) {
    iVar6 = 0xc;
  }
  else {
    iVar6 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
  }
  lVar9 = (ulong)*(byte *)(param_2 + 4) * 4;
  if (iVar6 < (int)lVar9) {
    lVar13 = (long)iVar6;
    for (puVar1 = (uint *)(param_3 + 0x1f); puVar1 < (uint *)((long)puVar11 + lVar13);
        puVar1 = puVar1 + 1) {
      uVar3 = *puVar1;
      iVar6 = *(int *)local_58;
      *(int *)local_58 = iVar6 + 1;
      *(uint **)(local_58 + (long)iVar6 * 0x10 + 8) = puVar1;
      *(ulong *)(local_58 + (long)iVar6 * 0x10 + 0x10) =
           (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
    }
    do {
      (*(code *)local_60[2])(&local_60,param_3,param_3 + lVar13 + -1,param_3 + lVar13 + 3);
      lVar13 = lVar13 + 8;
    } while (lVar13 < lVar9);
  }
  else {
    lVar9 = 0x20;
  }
  for (puVar1 = (uint *)((long)puVar11 + lVar9); puVar1 < puVar11 + bVar5; puVar1 = puVar1 + 1) {
    uVar3 = *puVar1;
    iVar6 = *(int *)local_58;
    *(int *)local_58 = iVar6 + 1;
    *(uint **)(local_58 + (long)iVar6 * 0x10 + 8) = puVar1;
    *(ulong *)(local_58 + (long)iVar6 * 0x10 + 0x10) =
         (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
  }
  uVar7 = ConcurrentMarkingVisitor::ShouldVisit((ConcurrentMarkingVisitor *)this,param_3);
  if ((uVar7 & 1) != 0) {
    ConcurrentMarkingVisitor::VisitPointersInSnapshot
              ((ConcurrentMarkingVisitor *)this,param_3,pMVar2);
    if (bVar4 != 0) {
      iVar6 = (uint)bVar4 << 2;
      if (this[0x34] ==
          (MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
           )0x0) {
        return iVar6;
      }
      lVar13 = *(long *)(this + 0x10);
      puVar10 = (undefined8 *)(lVar13 + (long)*(int *)(this + 0x28) * 0x50);
      puVar12 = (undefined8 *)*puVar10;
      lVar9 = puVar12[1];
      if (lVar9 == 0x10) {
        base::Mutex::Lock((Mutex *)(lVar13 + 0x280));
        *puVar12 = *(undefined8 *)(lVar13 + 0x2a8);
        *(undefined8 **)(lVar13 + 0x2a8) = puVar12;
        base::Mutex::Unlock((Mutex *)(lVar13 + 0x280));
        pvVar8 = operator_new(0x90);
        *(undefined8 *)((long)pvVar8 + 0x88) = 0;
        *(undefined8 *)((long)pvVar8 + 0x20) = 0;
        *(undefined8 *)((long)pvVar8 + 0x18) = 0;
        *(undefined8 *)((long)pvVar8 + 0x30) = 0;
        *(undefined8 *)((long)pvVar8 + 0x28) = 0;
        *(undefined8 *)((long)pvVar8 + 0x40) = 0;
        *(undefined8 *)((long)pvVar8 + 0x38) = 0;
        *(undefined8 *)((long)pvVar8 + 0x50) = 0;
        *(undefined8 *)((long)pvVar8 + 0x48) = 0;
        *(undefined8 *)((long)pvVar8 + 0x60) = 0;
        *(undefined8 *)((long)pvVar8 + 0x58) = 0;
        *(undefined8 *)((long)pvVar8 + 0x70) = 0;
        *(undefined8 *)((long)pvVar8 + 0x68) = 0;
        *(undefined8 *)((long)pvVar8 + 0x80) = 0;
        *(undefined8 *)((long)pvVar8 + 0x78) = 0;
        *puVar10 = pvVar8;
        *(undefined8 *)((long)pvVar8 + 8) = 1;
        *(long *)((long)pvVar8 + 0x10) = param_3;
        return iVar6;
      }
      puVar12[1] = lVar9 + 1;
      puVar12[lVar9 + 2] = param_3;
      return iVar6;
    }
  }
  return 0;
}

