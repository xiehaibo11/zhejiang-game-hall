
/* v8::internal::compiler::PipelineImpl::GenerateCode(v8::internal::compiler::CallDescriptor*) */

undefined8 __thiscall
v8::internal::compiler::PipelineImpl::GenerateCode(PipelineImpl *this,CallDescriptor *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *local_28;
  CallDescriptor *local_8;
  
  local_8 = param_1;
  uVar2 = SelectInstructions(this,(Linkage *)&local_8);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    local_28 = (long *)0x0;
    AssembleCode(this,&local_8,&local_28);
    plVar1 = local_28;
    local_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    uVar3 = FinalizeCode(this,true);
  }
  return uVar3;
}

