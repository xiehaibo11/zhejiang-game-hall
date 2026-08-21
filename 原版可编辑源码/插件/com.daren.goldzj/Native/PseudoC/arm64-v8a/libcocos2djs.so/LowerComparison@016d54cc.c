
/* v8::internal::compiler::Int64Lowering::LowerComparison(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::compiler::Operator const*) */

void __thiscall
v8::internal::compiler::Int64Lowering::LowerComparison
          (Int64Lowering *this,Node *param_1,Operator *param_2,Operator *param_3)

{
  long lVar1;
  Graph *this_00;
  Graph *this_01;
  Graph *this_02;
  long lVar2;
  Operator *pOVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Operator *pOVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node *local_70;
  undefined8 uStack_68;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  lVar1 = *(long *)pNVar4;
  lVar2 = *(long *)(pNVar4 + 8);
  this_00 = *(Graph **)(this + 8);
  pOVar3 = (Operator *)MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
  uStack_68 = *(undefined8 *)
               (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar2 + 0x14) & 0xffffff) * 0x10 + 8);
  local_70 = *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar1 + 0x14) & 0xffffff) * 0x10
                       + 8);
  pNVar4 = (Node *)Graph::NewNode(*(Graph **)(this + 8),param_2,2,&local_70,false);
  this_01 = *(Graph **)(this + 8);
  pOVar5 = (Operator *)MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
  this_02 = *(Graph **)(this + 8);
  pOVar6 = (Operator *)
           MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(this + 0x10));
  uStack_68 = *(undefined8 *)
               (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar2 + 0x14) & 0xffffff) * 0x10 + 8);
  local_70 = *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar1 + 0x14) & 0xffffff) * 0x10
                       + 8);
  pNVar7 = (Node *)Graph::NewNode(this_02,pOVar6,2,&local_70,false);
  uStack_68 = *(undefined8 *)
               (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar2 + 0x14) & 0xffffff) * 0x10);
  local_70 = *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar1 + 0x14) & 0xffffff) * 0x10)
  ;
  uStack_68 = Graph::NewNode(*(Graph **)(this + 8),param_3,2,&local_70,false);
  local_70 = pNVar7;
  uStack_68 = Graph::NewNode(this_01,pOVar5,2,&local_70,false);
  local_70 = pNVar4;
  uVar8 = Graph::NewNode(this_00,pOVar3,2,&local_70,false);
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       uVar8;
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8)
       = 0;
  return;
}

