
/* v8::internal::compiler::WasmGraphBuilder::BuildIndirectCall(unsigned int, unsigned int,
   v8::internal::Vector<v8::internal::compiler::Node*>,
   v8::internal::Vector<v8::internal::compiler::Node*>, int,
   v8::internal::compiler::WasmGraphBuilder::IsReturnCall) */

void v8::internal::compiler::WasmGraphBuilder::BuildIndirectCall
               (WasmGraphBuilder *param_1,uint param_2,uint param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,byte param_9)

{
  int iVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  MachineGraph *this;
  Graph *pGVar9;
  Graph *pGVar10;
  MachineOperatorBuilder *this_00;
  Node *pNVar11;
  Node *local_a0;
  Node *local_98;
  Node *local_90;
  Node *local_88;
  Node *local_80;
  Node *pNStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  LoadIndirectFunctionTable(param_1,param_2,&local_88,&local_90,&local_98,&local_a0);
  pNVar11 = (Node *)*param_4;
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2];
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  uVar8 = *(undefined8 *)(*(long *)(**(long **)(param_1 + 0x10) + 0x58) + (ulong)param_3 * 8);
  pOVar2 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_00);
  pNStack_78 = local_88;
  local_80 = pNVar11;
  pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  uVar7 = 0xc;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar7 = 0xc, *(char *)(*(long *)(param_1 + 0x10) + 9) != '\0')) {
    uVar7 = 7;
  }
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::TrapUnless
                     ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],uVar7);
  local_70 = **(undefined8 **)(param_1 + 0x18);
  pNStack_78 = (Node *)**(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar3;
  uVar4 = Graph::NewNode(pGVar9,pOVar2,3,&local_80,false);
  **(undefined8 **)(param_1 + 0x18) = uVar4;
  if (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(param_1 + 0x78),uVar4,
               ((long)(param_8 + 1) & 0x7fffc0003fffffffU) << 1);
  }
  if (param_1[0x62] != (WasmGraphBuilder)0x0) {
    pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Xor(this_00);
    pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),-1);
    local_80 = pNVar11;
    uVar4 = Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
    pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32And(this_00);
    pGVar10 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar5 = (Operator *)MachineOperatorBuilder::Int32Sub(this_00);
    pNStack_78 = local_88;
    local_80 = pNVar11;
    local_80 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_80,false);
    pNStack_78 = (Node *)uVar4;
    pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
    pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Sar(this_00);
    pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0x1f);
    local_80 = pNVar3;
    uVar4 = Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
    pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32And(this_00);
    local_80 = pNVar11;
    pNStack_78 = (Node *)uVar4;
    pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  }
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  iVar1 = *(int *)(*(long *)(**(long **)(param_1 + 0x10) + 0x70) + (ulong)param_3 * 4);
  pOVar2 = (Operator *)MachineOperatorBuilder::Word32Shl(this_00);
  pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),2);
  local_80 = pNVar11;
  pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  this = *(MachineGraph **)(param_1 + 8);
  if ((*(MachineOperatorBuilder **)(this + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)pNVar3 + 0x10) == 0x17) {
      pNVar3 = (Node *)MachineGraph::IntPtrConstant(this,(ulong)*(uint *)(*(long *)pNVar3 + 0x2c));
    }
    else {
      pGVar9 = *(Graph **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this + 0x10));
      local_80 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar2,1,&local_80,false);
    }
  }
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)MachineOperatorBuilder::Load(this_00,0x204);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = local_90;
  pNStack_78 = pNVar3;
  pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = pNVar11;
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
  }
  pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),iVar1);
  local_80 = pNVar11;
  pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  uVar7 = 0xc;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar7 = 0xc, *(char *)(*(long *)(param_1 + 0x10) + 9) != '\0')) {
    uVar7 = 8;
  }
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::TrapUnless
                     ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],uVar7);
  local_70 = **(undefined8 **)(param_1 + 0x18);
  pNStack_78 = (Node *)**(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar11;
  uVar4 = Graph::NewNode(pGVar9,pOVar2,3,&local_80,false);
  **(undefined8 **)(param_1 + 0x18) = uVar4;
  if (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(param_1 + 0x78),uVar4,
               ((long)(param_8 + 1) & 0x7fffc0003fffffffU) << 1);
  }
  pGVar10 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(this_00);
  }
  else {
    pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(this_00);
  }
  local_80 = local_a0;
  pNStack_78 = pNVar3;
  pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_80,false);
  pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),7);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar11;
  uVar4 = Graph::NewNode(pGVar10,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar4;
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)MachineOperatorBuilder::Int32Add(this_00);
  local_80 = pNVar3;
  pNStack_78 = pNVar3;
  uVar6 = Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)MachineOperatorBuilder::Load(this_00,5);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = local_98;
  pNStack_78 = (Node *)uVar6;
  uVar6 = Graph::NewNode(pGVar9,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar6;
  *param_4 = uVar6;
  if ((param_9 & 1) == 0) {
    BuildWasmCall(param_1,uVar8,param_4,param_5,param_6,param_7,param_8,uVar4,
                  param_1[0x62] != (WasmGraphBuilder)0x0);
  }
  else {
    BuildWasmReturnCall(param_1,uVar8,param_4,param_5,param_8,uVar4,
                        param_1[0x62] != (WasmGraphBuilder)0x0);
  }
  return;
}

