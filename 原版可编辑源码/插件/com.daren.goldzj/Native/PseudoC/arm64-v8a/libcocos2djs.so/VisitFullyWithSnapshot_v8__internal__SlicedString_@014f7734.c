
/* WARNING: Removing unreachable block (ram,0x014f77e8) */
/* int 
   v8::internal::ConcurrentMarkingVisitor::VisitFullyWithSnapshot<v8::internal::SlicedString>(v8::internal::Map,
   v8::internal::SlicedString) */

int __thiscall
v8::internal::ConcurrentMarkingVisitor::VisitFullyWithSnapshot<v8::internal::SlicedString>
          (ConcurrentMarkingVisitor *this,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  ConcurrentMarkingVisitor *pCVar9;
  
  puVar7 = (uint *)(param_3 + -1);
  bVar4 = puVar7 < (uint *)(param_3 + 3U);
  *(undefined4 *)(this + 0x48) = 0;
  if (bVar4) {
    uVar8 = *puVar7;
    *(undefined4 *)(this + 0x48) = 1;
    *(uint **)(this + 0x50) = puVar7;
    *(ulong *)(this + 0x58) = (ulong)puVar7 & 0xffffffff00000000 | (ulong)uVar8;
  }
  uVar8 = (uint)bVar4;
  uVar6 = param_3 + 0xb;
  if (uVar6 < param_3 + 0x13U) {
    uVar3 = *(uint *)(param_3 + 0xb);
    uVar1 = uVar8 + 1;
    uVar2 = param_3 + 0xf;
    pCVar9 = this + 0x48;
    *(uint *)pCVar9 = uVar1;
    *(ulong *)(pCVar9 + (ulong)uVar8 * 0x10 + 8) = uVar6;
    *(ulong *)(pCVar9 + (ulong)uVar8 * 0x10 + 0x10) = uVar6 & 0xffffffff00000000 | (ulong)uVar3;
    if (uVar2 < param_3 + 0x13U) {
      uVar3 = *(uint *)(param_3 + 0xf);
      pCVar9 = this + 0x48;
      *(uint *)pCVar9 = uVar8 | 2;
      *(ulong *)(pCVar9 + (ulong)uVar1 * 0x10 + 8) = uVar2;
      *(ulong *)(pCVar9 + (ulong)uVar1 * 0x10 + 0x10) = uVar2 & 0xffffffff00000000 | (ulong)uVar3;
    }
  }
  uVar6 = ShouldVisit(this,param_3);
  if ((uVar6 & 1) == 0) {
    iVar5 = 0;
  }
  else {
    VisitPointersInSnapshot(this,param_3,this + 0x48);
    iVar5 = 0x14;
  }
  return iVar5;
}

