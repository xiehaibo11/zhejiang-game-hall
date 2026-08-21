
/* v8::internal::compiler::LinearScanAllocator::SpillBetweenUntil(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition, v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::SpillBetweenUntil
          (LinearScanAllocator *this,long param_1,int param_3,uint param_4,ulong param_5,
          undefined4 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  LiveRange *pLVar5;
  long lVar6;
  LiveRange *pLVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = (uint)param_5;
  if ((int)uVar11 <= param_3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","start < end");
  }
  pLVar5 = (LiveRange *)RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1,param_3);
  if ((int)uVar11 <= (int)**(uint **)(pLVar5 + 0x10)) {
    AddToUnhandled(this,pLVar5);
    return;
  }
  uVar9 = (ulong)**(uint **)(pLVar5 + 0x10) | 1;
  uVar10 = (ulong)param_4;
  if ((int)param_4 <= (int)uVar9) {
    uVar10 = uVar9;
  }
  uVar3 = uVar11 - 2 | 1;
  uVar9 = (ulong)uVar3;
  if ((int)uVar3 <= (int)uVar10) {
    uVar9 = uVar10;
  }
  if ((uVar11 >> 1 & 1) == 0) {
    iVar12 = (int)(param_5 & 0xfffffffe);
    iVar1 = iVar12 + 3;
    if (-1 < iVar12) {
      iVar1 = iVar12;
    }
    lVar6 = InstructionSequence::GetInstructionBlock
                      (*(InstructionSequence **)(*(long *)this + 0x10),iVar1 >> 2);
    if ((*(int *)(lVar6 + 0x70) == iVar1 >> 2) &&
       (uVar9 = param_5 & 0xfffffffe, iVar12 <= (int)uVar10)) {
      uVar9 = uVar10;
    }
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Splitting live range %d:%d in position between [%d, %d]\n",
           (ulong)*(uint *)(*(long *)(pLVar5 + 0x20) + 0x5c),(ulong)*(uint *)pLVar5,uVar10,uVar9);
  }
  uVar4 = RegisterAllocator::FindOptimalSplitPos((RegisterAllocator *)this,uVar10,uVar9);
  pLVar7 = (LiveRange *)RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,pLVar5,uVar4);
  iVar12 = **(int **)(pLVar5 + 0x10);
  iVar1 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar1 = iVar12;
  }
  lVar6 = InstructionSequence::GetInstructionBlock
                    (*(InstructionSequence **)(*(long *)this + 0x10),iVar1 >> 2);
  if (*(char *)(lVar6 + 0x78) != '\0') {
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      uVar10 = (ulong)(*(uint *)(param_1 + 4) >> 0x16) & 0x3f;
      if ((int)uVar10 == 0x20) {
        pcVar8 = "unassigned";
      }
      else {
        puVar2 = &RegisterName(v8::internal::Register)::Names;
        if (*(int *)(this + 8) != 0) {
          puVar2 = &RegisterName(v8::internal::VRegister)::Names;
        }
        pcVar8 = (char *)puVar2[uVar10];
      }
      PrintF("Setting control flow hint for %d:%d to %s\n",
             (ulong)*(uint *)(*(long *)(pLVar7 + 0x20) + 0x5c),(ulong)*(uint *)pLVar7,pcVar8);
    }
    *(uint *)(pLVar7 + 4) =
         *(uint *)(pLVar7 + 4) & 0xf0000000 |
         *(uint *)(pLVar7 + 4) & 0x3fffff | (*(uint *)(param_1 + 4) >> 0x16 & 0x3f) << 0x16;
  }
  AddToUnhandled(this,pLVar7);
  if (pLVar7 == pLVar5) {
    return;
  }
  RegisterAllocator::Spill((RegisterAllocator *)this,pLVar5,param_6);
  return;
}

