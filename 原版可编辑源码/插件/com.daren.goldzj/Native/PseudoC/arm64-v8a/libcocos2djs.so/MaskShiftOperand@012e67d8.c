
/* v8::internal::compiler::RepresentationSelector::MaskShiftOperand(v8::internal::compiler::Node*,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::RepresentationSelector::MaskShiftOperand
          (RepresentationSelector *this,Node *param_1,long param_3)

{
  ulong uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *this_00;
  Node *this_01;
  Graph *this_02;
  Node *pNVar4;
  long local_48;
  Node *local_40;
  undefined8 uStack_38;
  
  if ((*(long *)(*(long *)(this + 0x138) + 0x138) != param_3) &&
     (local_48 = param_3,
     uVar1 = Type::SlowIs((Type *)&local_48,*(long *)(*(long *)(this + 0x138) + 0x138)),
     (uVar1 & 1) == 0)) {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
    this_02 = (Graph *)**(undefined8 **)this;
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x1f);
    local_40 = pNVar2;
    this_00 = (Node *)Graph::NewNode(this_02,pOVar3,2,&local_40,false);
    pNVar2 = param_1 + 0x20;
    pNVar4 = pNVar2;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    this_01 = *(Node **)(pNVar4 + 8);
    if (this_01 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        param_1 = *(Node **)pNVar2;
      }
      if (this_01 != (Node *)0x0) {
        Node::RemoveUse(this_01,(Use *)(param_1 + -0x30));
      }
      *(Node **)(pNVar4 + 8) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,(Use *)(param_1 + -0x30));
      }
    }
  }
  return;
}

