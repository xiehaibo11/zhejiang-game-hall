
/* v8::internal::compiler::WasmGraphBuilder::BuildAsmjsLoadMem(v8::internal::MachineType,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildAsmjsLoadMem
          (WasmGraphBuilder *this,uint param_2,Graph *param_3)

{
  long *plVar1;
  uint uVar2;
  CommonOperatorBuilder *pCVar3;
  MachineGraph *pMVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  Node *this_00;
  MachineOperatorBuilder *pMVar7;
  Node *pNVar8;
  undefined8 *puVar9;
  Node *this_01;
  Graph *pGVar10;
  undefined8 uVar11;
  long *plVar12;
  Graph *local_a0;
  CommonOperatorBuilder *pCStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_78;
  Graph *local_70;
  Graph *pGStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pMVar4 = *(MachineGraph **)(this + 8);
  pNVar8 = (Node *)**(undefined8 **)(this + 0x28);
  pCVar3 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x28))[1];
  if ((*(MachineOperatorBuilder **)(pMVar4 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_3 + 0x10) == 0x17) {
      param_3 = (Graph *)MachineGraph::IntPtrConstant
                                   (pMVar4,(ulong)*(uint *)(*(long *)param_3 + 0x2c));
    }
    else {
      pGVar10 = *(Graph **)pMVar4;
      pOVar5 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(pMVar4 + 0x10));
      local_a0 = param_3;
      param_3 = (Graph *)Graph::NewNode(pGVar10,pOVar5,1,(Node **)&local_a0,false);
    }
  }
  puVar9 = *(undefined8 **)(this + 8);
  uVar11 = puVar9[1];
  pMVar7 = (MachineOperatorBuilder *)puVar9[2];
  pGVar10 = (Graph *)*puVar9;
  if (pMVar7[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar5 = (Operator *)MachineOperatorBuilder::Uint32LessThan(pMVar7);
  }
  else {
    pOVar5 = (Operator *)MachineOperatorBuilder::Uint64LessThan(pMVar7);
  }
  local_a0 = param_3;
  pCStack_98 = pCVar3;
  uVar6 = Graph::NewNode(pGVar10,pOVar5,2,(Node **)&local_a0,false);
  Diamond::Diamond((Diamond *)&local_a0,pGVar10,uVar11,uVar6,1);
  this_01 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_90 + 0x20);
  uVar2 = *(uint *)(local_90 + 0x14) & 0xf000000;
  plVar12 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar12 = (long *)(*plVar1 + 0x10);
  }
  this_00 = (Node *)plVar12[1];
  if (this_00 != this_01) {
    if (uVar2 == 0xf000000) {
      local_90 = *plVar1;
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,(Use *)(local_90 + -0x30));
    }
    plVar12[1] = (long)this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,(Use *)(local_90 + -0x30));
    }
  }
  if (this[0x62] != (WasmGraphBuilder)0x0) {
    pMVar7 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    uVar11 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
    pGVar10 = (Graph *)**(undefined8 **)(this + 8);
    if (pMVar7[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar5 = (Operator *)MachineOperatorBuilder::Word32And(pMVar7);
    }
    else {
      pOVar5 = (Operator *)MachineOperatorBuilder::Word64And(pMVar7);
    }
    local_70 = param_3;
    pGStack_68 = (Graph *)uVar11;
    param_3 = (Graph *)Graph::NewNode(pGVar10,pOVar5,2,(Node **)&local_70,false);
  }
  pGVar10 = (Graph *)**(undefined8 **)(this + 8);
  pOVar5 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_2 & 0xffff);
  local_60 = **(undefined8 **)(this + 0x20);
  uStack_58 = local_88;
  local_70 = (Graph *)pNVar8;
  pGStack_68 = param_3;
  pNVar8 = (Node *)Graph::NewNode(pGVar10,pOVar5,4,(Node **)&local_70,false);
  pGVar10 = local_a0;
  uVar11 = **(undefined8 **)(this + 0x20);
  pOVar5 = (Operator *)CommonOperatorBuilder::EffectPhi(pCStack_98,2);
  local_60 = local_78;
  local_70 = (Graph *)pNVar8;
  pGStack_68 = (Graph *)uVar11;
  uVar11 = Graph::NewNode(pGVar10,pOVar5,3,(Node **)&local_70,false);
  **(undefined8 **)(this + 0x20) = uVar11;
  **(undefined8 **)(this + 0x18) = local_78;
  if (10 < (param_2 & 0xff) - 2) {
switchD_01315a24_caseD_6:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pMVar4 = *(MachineGraph **)(this + 8);
  switch(param_2 & 0xff) {
  case 2:
  case 3:
  case 4:
    uVar11 = MachineGraph::Int32Constant(pMVar4,0);
    break;
  case 5:
    uVar11 = MachineGraph::Int64Constant(pMVar4,0);
    break;
  default:
    goto switchD_01315a24_caseD_6;
  case 0xb:
    uVar11 = MachineGraph::Float32Constant(pMVar4,NAN);
    break;
  case 0xc:
    uVar11 = MachineGraph::Float64Constant(pMVar4,NAN);
  }
  pGVar10 = local_a0;
  pOVar5 = (Operator *)CommonOperatorBuilder::Phi(pCStack_98,param_2,2);
  local_60 = local_78;
  local_70 = (Graph *)pNVar8;
  pGStack_68 = (Graph *)uVar11;
  Graph::NewNode(pGVar10,pOVar5,3,(Node **)&local_70,false);
  return;
}

