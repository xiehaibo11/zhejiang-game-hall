
/* v8::internal::compiler::Int64Lowering::Int64Lowering(v8::internal::compiler::Graph*,
   v8::internal::compiler::MachineOperatorBuilder*, v8::internal::compiler::CommonOperatorBuilder*,
   v8::internal::Zone*, v8::internal::Signature<v8::internal::MachineRepresentation>*,
   std::__ndk1::unique_ptr<v8::internal::compiler::Int64LoweringSpecialCase,
   std::__ndk1::default_delete<v8::internal::compiler::Int64LoweringSpecialCase> >) */

void __thiscall
v8::internal::compiler::Int64Lowering::Int64Lowering
          (Int64Lowering *this,Graph *param_1,undefined8 param_2,CommonOperatorBuilder *param_3,
          Zone *param_4,undefined8 param_5,undefined8 *param_7)

{
  Operator *pOVar1;
  undefined8 uVar2;
  void *__s;
  ulong uVar3;
  Node *local_48;
  
  *(Zone **)this = param_4;
  *(Graph **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = param_2;
  *(CommonOperatorBuilder **)(this + 0x18) = param_3;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x20),param_1,3);
  *(Zone **)(this + 0x48) = param_4;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(Zone **)(this + 0x68) = param_4;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = param_5;
  pOVar1 = (Operator *)CommonOperatorBuilder::Parameter(param_3,-2,"placeholder");
  local_48 = *(Node **)(param_1 + 8);
  uVar2 = Graph::NewNode(param_1,pOVar1,1,&local_48,false);
  *(undefined8 *)(this + 0x88) = uVar2;
  uVar2 = *param_7;
  *param_7 = 0;
  *(undefined8 *)(this + 0x90) = uVar2;
  __s = *(void **)(param_4 + 0x10);
  uVar3 = (ulong)*(uint *)(param_1 + 0x1c) * 0x10;
  if (uVar3 < (ulong)(*(long *)(param_4 + 0x18) - (long)__s) ||
      uVar3 - (*(long *)(param_4 + 0x18) - (long)__s) == 0) {
    *(void **)(param_4 + 0x10) = (void *)(uVar3 + (long)__s);
  }
  else {
    __s = (void *)Zone::NewExpand(param_4,uVar3);
  }
  *(void **)(this + 0x78) = __s;
  memset(__s,0,(ulong)*(uint *)(param_1 + 0x1c) << 4);
  return;
}

