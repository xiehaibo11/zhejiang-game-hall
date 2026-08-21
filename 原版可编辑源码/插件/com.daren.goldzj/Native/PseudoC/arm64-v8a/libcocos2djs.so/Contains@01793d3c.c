
/* v8::internal::compiler::MemoryLowering::AllocationGroup::Contains(v8::internal::compiler::Node*)
   const */

undefined8 __thiscall
v8::internal::compiler::MemoryLowering::AllocationGroup::Contains
          (AllocationGroup *this,Node *param_1)

{
  AllocationGroup *pAVar1;
  uint uVar2;
  ushort uVar3;
  AllocationGroup *pAVar4;
  AllocationGroup *pAVar5;
  
  pAVar1 = this + 8;
  pAVar4 = *(AllocationGroup **)pAVar1;
  if (pAVar4 != (AllocationGroup *)0x0) goto LAB_01793d70;
  do {
    do {
      uVar3 = *(ushort *)(*(long *)param_1 + 0x10);
      if (uVar3 < 0x1b6) {
        if ((uVar3 != 0x12f) && (uVar3 != 0x142)) {
          return 0;
        }
      }
      else if ((uVar3 != 0x1b8) && (uVar3 != 0x1b6)) {
        return 0;
      }
      param_1 = (Node *)NodeProperties::GetValueInput(param_1,0);
      pAVar4 = *(AllocationGroup **)pAVar1;
    } while (pAVar4 == (AllocationGroup *)0x0);
LAB_01793d70:
    uVar2 = *(uint *)(param_1 + 0x14) & 0xffffff;
    pAVar5 = pAVar1;
    do {
      if (*(uint *)(pAVar4 + 0x1c) >= uVar2) {
        pAVar5 = pAVar4;
      }
      pAVar4 = *(AllocationGroup **)(pAVar4 + (ulong)(*(uint *)(pAVar4 + 0x1c) < uVar2) * 8);
    } while (pAVar4 != (AllocationGroup *)0x0);
  } while ((pAVar5 == pAVar1) || (uVar2 < *(uint *)(pAVar5 + 0x1c)));
  return 1;
}

