
void FUN_0164d178(TopLevelLiveRange *param_1,RegisterAllocationData *param_2,int param_3,int param_4
                 ,ulong param_5)

{
  int iVar1;
  int iVar2;
  TopLevelLiveRange *pTVar3;
  TopLevelLiveRange *this;
  long lVar4;
  int iVar5;
  TopLevelLiveRange *pTVar6;
  undefined8 uVar7;
  
  iVar2 = **(int **)(param_1 + 0x10);
  if (iVar2 < param_3) {
    iVar5 = *(int *)(*(long *)(param_1 + 8) + 4);
  }
  else {
    iVar5 = *(int *)(*(long *)(param_1 + 8) + 4);
    if (iVar5 <= (int)(param_4 + 4U & 0xfffffffc)) {
      return;
    }
  }
  if (iVar2 <= param_3) {
    iVar2 = param_3;
  }
  if (iVar5 <= param_4) {
    param_4 = iVar5;
  }
  if (param_4 <= iVar2) {
    return;
  }
  if (((*(uint *)(param_1 + 4) & 0x60) == 0x20) || (*(long *)(param_1 + 0x70) != 0)) {
    lVar4 = *(long *)(param_1 + 0x98);
  }
  else {
    v8::internal::compiler::RegisterAllocationData::CreateSpillRangeForLiveRange(param_2,param_1);
    lVar4 = *(long *)(param_1 + 0x98);
  }
  if (lVar4 == 0) {
    this = (TopLevelLiveRange *)
           v8::internal::compiler::RegisterAllocationData::NextLiveRange
                     (param_2,*(uint *)(param_1 + 4) >> 0xd);
    *(TopLevelLiveRange **)(*(long *)(param_2 + 0x88) + (long)*(int *)(this + 0x5c) * 8) = this;
    *(TopLevelLiveRange **)(param_1 + 0x98) = this;
    pTVar3 = param_1;
    do {
      pTVar6 = pTVar3;
      pTVar3 = *(TopLevelLiveRange **)(pTVar6 + 0x68);
    } while (*(TopLevelLiveRange **)(pTVar6 + 0x68) != (TopLevelLiveRange *)0x0);
    iVar5 = *(int *)(pTVar6 + 0x60);
    *(int *)(pTVar6 + 0x60) = iVar5 + 1;
    *(int *)this = iVar5 + 1;
    *(uint *)(this + 4) =
         *(uint *)(this + 4) & 0xffffff80 |
         *(uint *)(this + 4) & 0x1f | (*(uint *)(param_1 + 4) >> 5 & 3) << 5;
    v8::internal::compiler::TopLevelLiveRange::SetSplinteredFrom(this,param_1);
    if (*(long *)(param_1 + 0x50) != 0) {
      *(long *)(this + 0x50) = *(long *)(param_1 + 0x50);
      uVar7 = *(undefined8 *)param_2;
      goto joined_r0x0164d27c;
    }
  }
  uVar7 = *(undefined8 *)param_2;
joined_r0x0164d27c:
  if ((param_5 & 1) != 0) {
    iVar5 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    iVar1 = param_4 + 3;
    if (-1 < param_4) {
      iVar1 = param_4;
    }
    v8::internal::PrintF
              ("creating splinter %d for range %d between %d and %d\n",
               (ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x5c),(ulong)*(uint *)(param_1 + 0x5c),
               (ulong)(uint)(iVar5 >> 2),(ulong)(uint)(iVar1 >> 2));
  }
  v8::internal::compiler::TopLevelLiveRange::Splinter(param_1,iVar2,param_4,uVar7);
  return;
}

