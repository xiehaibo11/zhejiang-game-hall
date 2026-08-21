
/* v8::internal::compiler::PipelineImpl::AllocateRegisters(v8::internal::RegisterConfiguration
   const*, v8::internal::compiler::CallDescriptor*, bool) */

void __thiscall
v8::internal::compiler::PipelineImpl::AllocateRegisters
          (PipelineImpl *this,RegisterConfiguration *param_1,CallDescriptor *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  Zone *this_00;
  Zone *this_01;
  ulong uVar3;
  RegisterAllocationData *pRVar4;
  RegisterAllocatorVerifier *this_02;
  long lVar5;
  char *local_1c0;
  undefined8 uStack_1b8;
  TurboCfgFile aTStack_1b0 [328];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)this;
  if (param_3) {
    this_00 = operator_new(0x40);
    Zone::Zone(this_00,*(AccountingAllocator **)(lVar5 + 0x10),"register-allocator-verifier-zone");
    this_02 = *(RegisterAllocatorVerifier **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_02) < 0x80) {
      this_02 = (RegisterAllocatorVerifier *)Zone::NewExpand(this_00,0x80);
    }
    else {
      *(RegisterAllocatorVerifier **)(this_00 + 0x10) = this_02 + 0x80;
    }
    RegisterAllocatorVerifier::RegisterAllocatorVerifier
              (this_02,this_00,param_1,*(InstructionSequence **)(lVar5 + 0x110));
  }
  else {
    this_00 = (Zone *)0x0;
    this_02 = (RegisterAllocatorVerifier *)0x0;
  }
  this_01 = *(Zone **)(lVar5 + 0x168);
  uVar1 = **(uint **)(lVar5 + 0x18);
  pRVar4 = *(RegisterAllocationData **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)pRVar4) < 0x1e0) {
    pRVar4 = (RegisterAllocationData *)Zone::NewExpand(this_01,0x1e0);
  }
  else {
    *(RegisterAllocationData **)(this_01 + 0x10) = pRVar4 + 0x1e0;
  }
  RegisterAllocationData::RegisterAllocationData
            (pRVar4,param_1,*(undefined8 *)(lVar5 + 0x168),*(undefined8 *)(lVar5 + 0x148),
             *(undefined8 *)(lVar5 + 0x110),uVar1 >> 0xe & 4 | uVar1 >> 0x13 & 3,
             *(long *)(lVar5 + 0x18) + 0x98,*(undefined8 *)(lVar5 + 0x20));
  *(RegisterAllocationData **)(lVar5 + 0x170) = pRVar4;
  if (*(int *)(*(long *)(*(long *)this + 0x18) + 0x38) != -1) {
    OsrHelper::SetupFrame((OsrHelper *)(lVar5 + 0x50),*(Frame **)(lVar5 + 0x148));
  }
  Run<v8::internal::compiler::MeetRegisterConstraintsPhase>(this);
  Run<v8::internal::compiler::ResolvePhisPhase>(this);
  Run<v8::internal::compiler::BuildLiveRangesPhase>(this);
  Run<v8::internal::compiler::BuildBundlesPhase>(this);
  FUN_012aa6c0(*(undefined8 *)(*(long *)this + 0x18),lVar5,"before register allocation");
  if (this_02 != (RegisterAllocatorVerifier *)0x0) {
    uVar3 = RegisterAllocationData::ExistsUseWithoutDefinition
                      (*(RegisterAllocationData **)(lVar5 + 0x170));
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!data->register_allocation_data()->ExistsUseWithoutDefinition()"
              );
    }
    uVar3 = RegisterAllocationData::RangesDefinedInDeferredStayInDeferred
                      (*(RegisterAllocationData **)(lVar5 + 0x170));
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "data->register_allocation_data() ->RangesDefinedInDeferredStayInDeferred()");
    }
  }
  uVar1 = *(uint *)(*(undefined8 **)this)[3];
  if (((uVar1 >> 0xd & 1) != 0) && (*(char *)(lVar5 + 0x28) == '\0')) {
    TurboCfgFile::TurboCfgFile(aTStack_1b0,(Isolate *)**(undefined8 **)this);
    uStack_1b8 = *(undefined8 *)(lVar5 + 0x170);
    local_1c0 = "PreAllocation";
    compiler::operator<<((basic_ostream *)aTStack_1b0,(AsC1VRegisterAllocationData *)&local_1c0);
    TurboCfgFile::~TurboCfgFile(aTStack_1b0);
    uVar1 = **(uint **)(*(long *)this + 0x18);
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    Run<v8::internal::compiler::SplinterLiveRangesPhase>(this);
    if (((*(byte *)((*(undefined8 **)this)[3] + 1) >> 5 & 1) != 0) &&
       (*(char *)(lVar5 + 0x28) == '\0')) {
      TurboCfgFile::TurboCfgFile(aTStack_1b0,(Isolate *)**(undefined8 **)this);
      uStack_1b8 = *(undefined8 *)(lVar5 + 0x170);
      local_1c0 = "PostSplinter";
      compiler::operator<<((basic_ostream *)aTStack_1b0,(AsC1VRegisterAllocationData *)&local_1c0);
      TurboCfgFile::~TurboCfgFile(aTStack_1b0);
    }
  }
  Run<v8::internal::compiler::AllocateGeneralRegistersPhase<v8::internal::compiler::LinearScanAllocator>>
            (this);
  if ((*(byte *)(*(long *)(lVar5 + 0x110) + 0x149) & 0x38) != 0) {
    Run<v8::internal::compiler::AllocateFPRegistersPhase<v8::internal::compiler::LinearScanAllocator>>
              (this);
  }
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 2) >> 4 & 1) != 0) {
    Run<v8::internal::compiler::MergeSplintersPhase>(this);
  }
  Run<v8::internal::compiler::DecideSpillingModePhase>(this);
  Run<v8::internal::compiler::AssignSpillSlotsPhase>(this);
  Run<v8::internal::compiler::CommitAssignmentPhase>(this);
  if (this_02 != (RegisterAllocatorVerifier *)0x0) {
    RegisterAllocatorVerifier::VerifyAssignment(this_02,"Immediately after CommitAssignmentPhase.");
  }
  Run<v8::internal::compiler::PopulateReferenceMapsPhase>(this);
  Run<v8::internal::compiler::ConnectRangesPhase>(this);
  Run<v8::internal::compiler::ResolveControlFlowPhase>(this);
  if (FLAG_turbo_move_optimization != '\0') {
    Run<v8::internal::compiler::OptimizeMovesPhase>(this);
  }
  Run<v8::internal::compiler::LocateSpillSlotsPhase>(this);
  FUN_012aa6c0(*(undefined8 *)(*(long *)this + 0x18),lVar5,"after register allocation");
  if (this_02 != (RegisterAllocatorVerifier *)0x0) {
    RegisterAllocatorVerifier::VerifyAssignment(this_02,"End of regalloc pipeline.");
    RegisterAllocatorVerifier::VerifyGapMoves(this_02);
  }
  if (((*(byte *)((*(undefined8 **)this)[3] + 1) >> 5 & 1) != 0) &&
     (*(char *)(lVar5 + 0x28) == '\0')) {
    TurboCfgFile::TurboCfgFile(aTStack_1b0,(Isolate *)**(undefined8 **)this);
    uStack_1b8 = *(undefined8 *)(lVar5 + 0x170);
    local_1c0 = "CodeGen";
    compiler::operator<<((basic_ostream *)aTStack_1b0,(AsC1VRegisterAllocationData *)&local_1c0);
    TurboCfgFile::~TurboCfgFile(aTStack_1b0);
  }
  if (*(long *)(lVar5 + 0x168) != 0) {
    if (*(long *)(lVar5 + 0x160) != 0) {
      ZoneStats::ReturnZone(*(Zone **)(lVar5 + 0x158));
    }
    *(undefined8 *)(lVar5 + 0x160) = 0;
    *(undefined8 *)(lVar5 + 0x168) = 0;
    *(undefined8 *)(lVar5 + 0x170) = 0;
  }
  if (this_00 != (Zone *)0x0) {
    Zone::~Zone(this_00);
    operator_delete(this_00);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

