
/* int 
   v8::internal::MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,
   v8::internal::MajorMarkingState>::VisitEmbedderTracingSubclass<v8::internal::JSObject>(v8::internal::Map,
   v8::internal::JSObject) */

int __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
::VisitEmbedderTracingSubclass<v8::internal::JSObject>
          (MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
           *this,long param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong local_48;
  
  uVar12 = param_3 & 0xfffffffffffc0000;
  puVar13 = (uint *)(*(long *)(uVar12 + 0x10) + (~uVar12 + param_3 >> 7 & 0x1ffffff) * 4);
  uVar4 = 1 << (ulong)((uint)(~uVar12 + param_3 >> 2) & 0x1f);
  local_48 = param_3;
  if ((*puVar13 & uVar4) != 0) {
    uVar4 = uVar4 << 1;
    bVar7 = uVar4 == 0;
    puVar1 = puVar13;
    if (bVar7) {
      uVar4 = 1;
      puVar1 = puVar13 + 1;
    }
    while (uVar2 = puVar13[bVar7], (uVar4 & (uVar2 ^ 0xffffffff)) != 0) {
      while (*puVar1 == uVar2) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar2 | uVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          iVar8 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_48,
                             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 - 1));
          *(long *)(uVar12 + 0x68) = *(long *)(uVar12 + 0x68) + (long)iVar8;
          goto LAB_00fe8220;
        }
      }
      ClearExclusiveLocal();
    }
  }
  if (this[0x40] !=
      (MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
       )0x0) {
LAB_00fe8220:
    puVar13 = (uint *)(param_3 - 1);
    if (puVar13 < (uint *)0xfffffffffffffffc) {
      uVar4 = *puVar13;
      while( true ) {
        if ((uVar4 & 1) != 0) {
          ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    (this,param_3,puVar13,(ulong)puVar13 & 0xffffffff00000000 | (ulong)uVar4);
        }
        puVar13 = puVar13 + 1;
        if ((uint *)(param_3 + 3) <= puVar13) break;
        uVar4 = *puVar13;
      }
    }
    bVar3 = *(byte *)(param_2 + 3);
    iVar8 = (uint)bVar3 << 2;
    BodyDescriptorBase::
    IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
              (param_2,param_3,4,(ulong)bVar3 << 2,this);
    if (bVar3 != 0) {
      if (this[0x34] ==
          (MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
           )0x0) {
        return iVar8;
      }
      lVar14 = *(long *)(this + 0x10);
      puVar11 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x28) * 0x50);
      puVar15 = (undefined8 *)*puVar11;
      lVar10 = puVar15[1];
      if (lVar10 == 0x10) {
        base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
        *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
        *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
        base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
        pvVar9 = operator_new(0x90);
        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
        *puVar11 = pvVar9;
        *(undefined8 *)((long)pvVar9 + 8) = 1;
        *(ulong *)((long)pvVar9 + 0x10) = param_3;
        return iVar8;
      }
      puVar15[1] = lVar10 + 1;
      puVar15[lVar10 + 2] = param_3;
      return iVar8;
    }
  }
  return 0;
}

