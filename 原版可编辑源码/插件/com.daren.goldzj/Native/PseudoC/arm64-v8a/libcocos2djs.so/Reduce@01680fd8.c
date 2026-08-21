
/* v8::internal::compiler::CheckpointElimination::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::CheckpointElimination::Reduce(CheckpointElimination *this,Node *param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(*(long *)param_1 + 0x10) == 0x26) {
    uVar1 = ReduceCheckpoint(this,param_1);
    return uVar1;
  }
  return 0;
}

