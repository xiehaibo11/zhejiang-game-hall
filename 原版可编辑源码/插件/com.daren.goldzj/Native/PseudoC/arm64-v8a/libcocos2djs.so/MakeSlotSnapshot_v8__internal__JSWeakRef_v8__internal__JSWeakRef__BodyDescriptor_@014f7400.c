
/* WARNING: Removing unreachable block (ram,0x014f7470) */
/* WARNING: Removing unreachable block (ram,0x014f7474) */
/* v8::internal::SlotSnapshot const&
   v8::internal::ConcurrentMarkingVisitor::MakeSlotSnapshot<v8::internal::JSWeakRef,
   v8::internal::JSWeakRef::BodyDescriptor>(v8::internal::Map, v8::internal::JSWeakRef, int) */

SlotSnapshot * __thiscall
v8::internal::ConcurrentMarkingVisitor::
MakeSlotSnapshot<v8::internal::JSWeakRef,v8::internal::JSWeakRef::BodyDescriptor>
          (ConcurrentMarkingVisitor *this,long param_2,long param_3,int param_4)

{
  uint *puVar1;
  ConcurrentMarkingVisitor *pCVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined **local_60;
  ConcurrentMarkingVisitor *local_58;
  
  puVar6 = (uint *)(param_3 + -1);
  puVar1 = (uint *)(param_3 + 3);
  pCVar2 = this + 0x48;
  local_60 = &PTR__ObjectVisitor_01cc6d88;
  *(undefined4 *)(this + 0x48) = 0;
  if (puVar6 < puVar1) {
    uVar3 = *(uint *)(param_3 + -1);
    *(undefined4 *)(this + 0x48) = 1;
    *(uint **)(this + 0x50) = puVar6;
    *(ulong *)(this + 0x58) = (ulong)puVar6 & 0xffffffff00000000 | (ulong)uVar3;
  }
  for (; puVar1 < (uint *)(param_3 + 0xbU); puVar1 = puVar1 + 1) {
    uVar3 = *puVar1;
    iVar4 = *(int *)pCVar2;
    *(int *)pCVar2 = iVar4 + 1;
    *(uint **)(pCVar2 + (long)iVar4 * 0x10 + 8) = puVar1;
    *(ulong *)(pCVar2 + (long)iVar4 * 0x10 + 0x10) =
         (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
  }
  puVar1 = (uint *)(param_3 + 0xf);
  local_58 = pCVar2;
  SlotSnapshottingVisitor::VisitCustomWeakPointers
            (&local_60,param_3,(uint *)(param_3 + 0xbU),puVar1);
  if (*(short *)(param_2 + 7) == 0x421) {
    iVar4 = 0xc;
  }
  else {
    iVar4 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
  }
  lVar5 = (ulong)*(byte *)(param_2 + 4) * 4;
  if (iVar4 < (int)lVar5) {
    lVar7 = (long)iVar4;
    for (; puVar1 < (uint *)((long)puVar6 + lVar7); puVar1 = puVar1 + 1) {
      uVar3 = *puVar1;
      iVar4 = *(int *)local_58;
      *(int *)local_58 = iVar4 + 1;
      *(uint **)(local_58 + (long)iVar4 * 0x10 + 8) = puVar1;
      *(ulong *)(local_58 + (long)iVar4 * 0x10 + 0x10) =
           (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
    }
    do {
      (*(code *)local_60[2])(&local_60,param_3,param_3 + lVar7 + -1,param_3 + lVar7 + 3);
      lVar7 = lVar7 + 8;
    } while (lVar7 < lVar5);
  }
  else {
    lVar5 = 0x10;
  }
  for (puVar1 = (uint *)(lVar5 + (long)puVar6); puVar1 < (uint *)((long)puVar6 + (long)param_4);
      puVar1 = puVar1 + 1) {
    uVar3 = *puVar1;
    iVar4 = *(int *)local_58;
    *(int *)local_58 = iVar4 + 1;
    *(uint **)(local_58 + (long)iVar4 * 0x10 + 8) = puVar1;
    *(ulong *)(local_58 + (long)iVar4 * 0x10 + 0x10) =
         (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
  }
  return (SlotSnapshot *)pCVar2;
}

