
/* int v8::internal::ConcurrentMarkingVisitor::VisitJSObjectSubclass<v8::internal::JSWeakCollection,
   v8::internal::JSWeakCollection::BodyDescriptorImpl>(v8::internal::Map,
   v8::internal::JSWeakCollection) */

int __thiscall
v8::internal::ConcurrentMarkingVisitor::
VisitJSObjectSubclass<v8::internal::JSWeakCollection,v8::internal::JSWeakCollection::BodyDescriptorImpl>
          (ConcurrentMarkingVisitor *this,long param_2,long param_3)

{
  uint *puVar1;
  ConcurrentMarkingVisitor *pCVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ConcurrentMarkingVisitor *pCVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  undefined **local_70;
  ConcurrentMarkingVisitor *local_68;
  
  bVar4 = *(byte *)(param_2 + 3);
  bVar5 = *(byte *)(param_2 + 5);
  if (bVar5 < 3) {
    bVar5 = *(byte *)(param_2 + 3);
  }
  puVar10 = (uint *)(param_3 + -1);
  puVar1 = (uint *)(param_3 + 3);
  pCVar2 = this + 0x48;
  local_70 = &PTR__ObjectVisitor_01cc6d88;
  *(undefined4 *)(this + 0x48) = 0;
  if (puVar10 < puVar1) {
    uVar3 = *puVar10;
    *(undefined4 *)(this + 0x48) = 1;
    *(uint **)(this + 0x50) = puVar10;
    *(ulong *)(this + 0x58) = (ulong)puVar10 & 0xffffffff00000000 | (ulong)uVar3;
  }
  local_68 = pCVar2;
  if (*(short *)(param_2 + 7) == 0x421) {
    iVar6 = 0xc;
  }
  else {
    iVar6 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
  }
  lVar9 = (ulong)*(byte *)(param_2 + 4) * 4;
  if (iVar6 < (int)lVar9) {
    lVar11 = (long)iVar6;
    if (puVar1 < (uint *)((long)puVar10 + lVar11)) {
      uVar3 = *(uint *)(param_3 + 3);
      pCVar8 = this + 0x48;
      iVar6 = *(int *)pCVar8;
      *(int *)pCVar8 = iVar6 + 1;
      *(uint **)(pCVar8 + (long)iVar6 * 0x10 + 8) = puVar1;
      *(ulong *)(pCVar8 + (long)iVar6 * 0x10 + 0x10) =
           (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
      for (puVar1 = (uint *)(param_3 + 7); puVar1 < (uint *)((long)puVar10 + lVar11);
          puVar1 = puVar1 + 1) {
        uVar3 = *puVar1;
        iVar6 = *(int *)local_68;
        *(int *)local_68 = iVar6 + 1;
        *(uint **)(local_68 + (long)iVar6 * 0x10 + 8) = puVar1;
        *(ulong *)(local_68 + (long)iVar6 * 0x10 + 0x10) =
             (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
      }
    }
    do {
      (*(code *)local_70[2])(&local_70,param_3,param_3 + lVar11 + -1,param_3 + lVar11 + 3);
      lVar11 = lVar11 + 8;
    } while (lVar11 < lVar9);
  }
  else {
    lVar9 = 4;
  }
  for (puVar1 = (uint *)(lVar9 + (long)puVar10); puVar1 < puVar10 + bVar5; puVar1 = puVar1 + 1) {
    uVar3 = *puVar1;
    iVar6 = *(int *)local_68;
    *(int *)local_68 = iVar6 + 1;
    *(uint **)(local_68 + (long)iVar6 * 0x10 + 8) = puVar1;
    *(ulong *)(local_68 + (long)iVar6 * 0x10 + 0x10) =
         (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
  }
  uVar7 = ShouldVisit(this,param_3);
  if ((uVar7 & 1) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)bVar4 << 2;
    VisitPointersInSnapshot(this,param_3,pCVar2);
  }
  return iVar6;
}

