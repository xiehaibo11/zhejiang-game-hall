
/* v8::internal::compiler::PipelineImpl::OptimizeGraphForMidTier(v8::internal::compiler::Linkage*)
    */

uint __thiscall
v8::internal::compiler::PipelineImpl::OptimizeGraphForMidTier(PipelineImpl *this,Linkage *param_1)

{
  uint uVar1;
  Typer *pTVar2;
  long lVar3;
  bool local_44 [4];
  Typer *local_28;
  
  lVar3 = *(long *)this;
  if (*(PipelineStatistics **)(lVar3 + 0x38) != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind(*(PipelineStatistics **)(lVar3 + 0x38),"V8.TFLowering");
  }
  pTVar2 = operator_new(0xb0);
  Typer::Typer(pTVar2,*(undefined8 *)(lVar3 + 0x140),*(undefined4 *)(lVar3 + 0x78),
               *(undefined8 *)(lVar3 + 0xa0),*(long *)(lVar3 + 0x18) + 0x98);
  *(Typer **)(lVar3 + 0x70) = pTVar2;
  local_28 = pTVar2;
  Run<v8::internal::compiler::TyperPhase,v8::internal::compiler::Typer*>(this,&local_28);
  local_28 = (Typer *)0x19fd251;
  local_44[0] = false;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  Run<v8::internal::compiler::TypedLoweringPhase>(this);
  local_28 = (Typer *)0x19fd25c;
  local_44[0] = false;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  Run<v8::internal::compiler::LoopExitEliminationPhase>(this);
  local_28 = (Typer *)0x19fd280;
  local_44[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  pTVar2 = *(Typer **)(lVar3 + 0x70);
  if (pTVar2 != (Typer *)0x0) {
    Typer::~Typer(pTVar2);
    operator_delete(pTVar2);
  }
  *(undefined8 *)(lVar3 + 0x70) = 0;
  if (FLAG_assert_types != '\0') {
    Run<v8::internal::compiler::TypeAssertionsPhase>(this);
    local_28 = (Typer *)0x19fd2c2;
    local_44[0] = false;
    if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
      Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
    }
    if (FLAG_turbo_verify != '\0') {
      Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
    }
  }
  Run<v8::internal::compiler::SimplifiedLoweringPhase>(this);
  local_28 = (Typer *)0x19fd2d6;
  local_44[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  Run<v8::internal::compiler::GenericLoweringPhase>(this);
  local_28 = (Typer *)0x19fd2ee;
  local_44[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  if (*(PipelineStatistics **)(lVar3 + 0x38) != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind(*(PipelineStatistics **)(lVar3 + 0x38),"V8.TFBlockBuilding");
  }
  ComputeScheduledGraph(this);
  Run<v8::internal::compiler::ScheduledEffectControlLinearizationPhase>(this);
  local_28 = (Typer *)0x19fd3d9;
  local_44[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  Run<v8::internal::compiler::ScheduledMachineLoweringPhase>(this);
  local_28 = (Typer *)0x19fd402;
  local_44[0] = true;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,(char **)&local_28);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_44);
  }
  SourcePositionTable::RemoveDecorator(*(SourcePositionTable **)(lVar3 + 0xa8));
  if ((*(byte *)(*(long *)(lVar3 + 0x18) + 1) >> 5 & 1) != 0) {
    NodeOriginTable::RemoveDecorator(*(NodeOriginTable **)(lVar3 + 0xb0));
  }
  uVar1 = SelectInstructions(this,param_1);
  return uVar1 & 1;
}

