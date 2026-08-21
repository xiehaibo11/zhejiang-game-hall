
/* v8::internal::compiler::SimplifiedLowering::Uint32Div(v8::internal::compiler::Node*) */

CommonOperatorBuilder * __thiscall
v8::internal::compiler::SimplifiedLowering::Uint32Div(SimplifiedLowering *this,Node *param_1)

{
  CommonOperatorBuilder *pCVar1;
  MachineOperatorBuilder *this_00;
  Operator *pOVar2;
  undefined8 uVar3;
  Graph **ppGVar4;
  Graph *pGVar5;
  Graph *local_b0;
  CommonOperatorBuilder *pCStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_80 [8];
  Graph *local_78;
  Graph *local_68;
  int local_60;
  char local_5c;
  Graph *local_58;
  Graph *pGStack_50;
  undefined8 local_48;
  
  ppGVar4 = &local_b0;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_80,param_1);
  pCVar1 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
  if ((local_5c == '\0') || (local_60 != 0)) {
    this_00 = (MachineOperatorBuilder *)(*(undefined8 **)this)[2];
    pGVar5 = (Graph *)**(undefined8 **)this;
    if ((((byte)this_00[0x15] >> 2 & 1) == 0) && (local_5c == '\0')) {
      pOVar2 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
      local_b0 = local_68;
      pCStack_a8 = pCVar1;
      uVar3 = Graph::NewNode(pGVar5,pOVar2,2,(Node **)&local_b0,false);
      Diamond::Diamond((Diamond *)&local_b0,**(undefined8 **)this,(*(undefined8 **)this)[1],uVar3,2)
      ;
      pGVar5 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Uint32Div
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_58 = local_78;
      pGStack_50 = local_68;
      local_48 = local_90;
      uVar3 = Graph::NewNode(pGVar5,pOVar2,3,(Node **)&local_58,false);
      pGVar5 = local_b0;
      pOVar2 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a8,4,2);
      ppGVar4 = &local_58;
      local_48 = local_88;
      local_58 = (Graph *)pCVar1;
      pGStack_50 = (Graph *)uVar3;
    }
    else {
      pOVar2 = (Operator *)MachineOperatorBuilder::Uint32Div(this_00);
      local_a0 = *(undefined8 *)(**(long **)this + 8);
      local_b0 = local_78;
      pCStack_a8 = (CommonOperatorBuilder *)local_68;
    }
    pCVar1 = (CommonOperatorBuilder *)Graph::NewNode(pGVar5,pOVar2,3,(Node **)ppGVar4,false);
  }
  return pCVar1;
}

