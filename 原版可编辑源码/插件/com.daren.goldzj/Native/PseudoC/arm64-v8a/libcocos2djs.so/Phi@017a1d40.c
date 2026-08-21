
/* v8::internal::compiler::RawMachineAssembler::Phi(v8::internal::MachineRepresentation, int,
   v8::internal::compiler::Node* const*) */

Node * __thiscall
v8::internal::compiler::RawMachineAssembler::Phi
          (RawMachineAssembler *this,undefined4 param_2,int param_3,void *param_4)

{
  uint uVar1;
  Zone *this_00;
  Operator *pOVar2;
  Node *pNVar3;
  Node **__dest;
  ulong uVar4;
  
  uVar1 = param_3 + 1;
  this_00 = (Zone *)**(undefined8 **)(this + 8);
  uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  __dest = *(Node ***)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar4) {
    __dest = (Node **)Zone::NewExpand(this_00,uVar4);
  }
  else {
    *(ulong *)(this_00 + 0x10) = (long)__dest + uVar4;
  }
  if (param_3 != 0) {
    memmove(__dest,param_4,(long)param_3 << 3);
  }
  __dest[param_3] = *(Node **)(*(long *)(this + 8) + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(this + 0x48),param_2,param_3);
  pNVar3 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar2,uVar1,__dest,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar3);
  return pNVar3;
}

