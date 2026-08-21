
/* int v8::internal::ConcurrentMarkingVisitor::VisitJSObjectSubclass<v8::internal::JSObject,
   v8::internal::JSObject::FastBodyDescriptor>(v8::internal::Map, v8::internal::JSObject) */

int __thiscall
v8::internal::ConcurrentMarkingVisitor::
VisitJSObjectSubclass<v8::internal::JSObject,v8::internal::JSObject::FastBodyDescriptor>
          (ConcurrentMarkingVisitor *this,long param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  ConcurrentMarkingVisitor *pCVar10;
  int iVar11;
  
  bVar5 = *(byte *)(param_2 + 3);
  bVar6 = *(byte *)(param_2 + 5);
  if (bVar6 < 3) {
    bVar6 = *(byte *)(param_2 + 3);
  }
  puVar8 = (uint *)(param_3 + -1);
  puVar2 = (uint *)(param_3 + 3);
  *(undefined4 *)(this + 0x48) = 0;
  if (puVar8 < puVar2) {
    uVar9 = *puVar8;
    *(undefined4 *)(this + 0x48) = 1;
    *(uint **)(this + 0x50) = puVar8;
    *(ulong *)(this + 0x58) = (ulong)puVar8 & 0xffffffff00000000 | (ulong)uVar9;
  }
  uVar9 = (uint)(puVar8 < puVar2);
  puVar8 = puVar8 + bVar6;
  if (puVar2 < puVar8) {
    uVar4 = *(uint *)(param_3 + 3);
    uVar1 = uVar9 + 1;
    puVar3 = (uint *)(param_3 + 7);
    pCVar10 = this + 0x48;
    *(uint *)pCVar10 = uVar1;
    *(uint **)(pCVar10 + (ulong)uVar9 * 0x10 + 8) = puVar2;
    *(ulong *)(pCVar10 + (ulong)uVar9 * 0x10 + 0x10) =
         (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar4;
    if (puVar3 < puVar8) {
      uVar4 = *(uint *)(param_3 + 7);
      pCVar10 = this + 0x48;
      *(uint *)pCVar10 = uVar9 | 2;
      *(uint **)(pCVar10 + (ulong)uVar1 * 0x10 + 8) = puVar3;
      *(ulong *)(pCVar10 + (ulong)uVar1 * 0x10 + 0x10) =
           (ulong)puVar3 & 0xffffffff00000000 | (ulong)uVar4;
      for (puVar2 = (uint *)(param_3 + 0xb); puVar2 < puVar8; puVar2 = puVar2 + 1) {
        pCVar10 = this + 0x48;
        iVar11 = *(int *)pCVar10;
        uVar9 = *puVar2;
        *(int *)pCVar10 = iVar11 + 1;
        *(uint **)(pCVar10 + (long)iVar11 * 0x10 + 8) = puVar2;
        *(ulong *)(pCVar10 + (long)iVar11 * 0x10 + 0x10) =
             (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar9;
      }
    }
  }
  uVar7 = ShouldVisit(this,param_3);
  if ((uVar7 & 1) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (uint)bVar5 << 2;
    VisitPointersInSnapshot(this,param_3,this + 0x48);
  }
  return iVar11;
}

