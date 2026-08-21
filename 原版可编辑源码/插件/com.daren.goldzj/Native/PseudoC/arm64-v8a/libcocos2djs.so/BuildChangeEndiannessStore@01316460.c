
/* v8::internal::compiler::WasmGraphBuilder::BuildChangeEndiannessStore(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::wasm::ValueType) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildChangeEndiannessStore
          (WasmGraphBuilder *this,Node *param_1,byte param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  Operator *pOVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  MachineGraph *this_00;
  MachineOperatorBuilder *this_01;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  Graph *pGVar13;
  ulong uVar14;
  uint local_84;
  Node *local_78;
  Node *local_70;
  undefined8 uStack_68;
  
  this = this + 8;
  this_00 = *(MachineGraph **)this;
  if (8 < param_4 - 1) goto switchD_013164d8_caseD_8;
  this_01 = *(MachineOperatorBuilder **)(this_00 + 0x10);
  bVar1 = false;
  local_84 = 0x80;
  iVar9 = 4;
  pNVar4 = param_1;
  iVar11 = 0x10;
  switch((uint)param_4) {
  case 1:
  case 3:
    break;
  default:
    iVar9 = 8;
    break;
  case 5:
    goto switchD_013164d8_caseD_5;
  case 8:
    goto switchD_013164d8_caseD_8;
  }
  if (3 < param_4 - 1) goto switchD_013164d8_caseD_8;
  local_84 = iVar9 << 3;
  bVar1 = false;
  bVar2 = false;
  iVar11 = iVar9;
  switch((uint)param_4) {
  case 3:
    pGVar13 = *(Graph **)this_00;
    pOVar3 = (Operator *)MachineOperatorBuilder::BitcastFloat32ToInt32(this_01);
    bVar1 = true;
    local_70 = param_1;
    pNVar4 = (Node *)Graph::NewNode(pGVar13,pOVar3,1,&local_70,false);
    this_00 = *(MachineGraph **)this;
  case 1:
    local_78 = (Node *)MachineGraph::Int32Constant(this_00,0);
    break;
  case 4:
    pGVar13 = *(Graph **)this_00;
    pOVar3 = (Operator *)MachineOperatorBuilder::BitcastFloat64ToInt64(this_01);
    local_70 = param_1;
    pNVar4 = (Node *)Graph::NewNode(pGVar13,pOVar3,1,&local_70,false);
    this_00 = *(MachineGraph **)this;
    bVar2 = true;
  case 2:
    bVar1 = bVar2;
    local_78 = (Node *)MachineGraph::Int64Constant(this_00,0);
  }
switchD_013164d8_caseD_5:
  if (param_3 == 2) {
    return param_1;
  }
  if ((param_3 < 5) && (param_4 == 2)) {
    pGVar13 = (Graph *)**(undefined8 **)this;
    pOVar3 = (Operator *)MachineOperatorBuilder::TruncateInt64ToInt32(this_01);
    local_70 = pNVar4;
    pNVar4 = (Node *)Graph::NewNode(pGVar13,pOVar3,1,&local_70,false);
    if (param_3 == 3) {
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_70 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
    }
LAB_01316700:
    pGVar13 = (Graph *)**(undefined8 **)this;
    pOVar3 = (Operator *)MachineOperatorBuilder::Word32ReverseBytes(this_01);
LAB_01316710:
    local_70 = pNVar4;
    local_78 = (Node *)Graph::NewNode(pGVar13,pOVar3,1,&local_70,false);
  }
  else {
    if ((param_3 == 3) && (param_4 == 1)) {
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_70 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
    }
    if (iVar11 == 4) goto LAB_01316700;
    if (iVar11 == 0x10) {
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Simd128ReverseBytes(this_01);
      goto LAB_01316710;
    }
    if ((iVar11 == 8) && (this_01[0x10] == (MachineOperatorBuilder)0x5)) {
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word64ReverseBytes(this_01);
      goto LAB_01316710;
    }
    uVar10 = 0;
    uVar12 = (ulong)(local_84 - 8);
    uVar14 = uVar12;
    do {
      pGVar13 = (Graph *)**(undefined8 **)this;
      iVar11 = (int)uVar14;
      if (local_84 < 0x21) {
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
        uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
        local_70 = pNVar4;
        pNVar5 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shr(this_01);
        uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar11);
        local_70 = pNVar4;
        pNVar6 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32And(this_01);
        uStack_68 = MachineGraph::Int32Constant
                              (*(MachineGraph **)this,0xff << (ulong)((uint)uVar12 & 0x1f));
        local_70 = pNVar5;
        uVar7 = Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32And(this_01);
        uStack_68 = MachineGraph::Int32Constant
                              (*(MachineGraph **)this,0xff << (ulong)((uint)uVar10 & 0x1f));
        local_70 = pNVar6;
        uVar8 = Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Or(this_01);
        local_70 = local_78;
        uStack_68 = uVar7;
        pNVar5 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Or(this_01);
      }
      else {
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Shl(this_01);
        uStack_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,uVar14);
        local_70 = pNVar4;
        pNVar5 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Shr(this_01);
        uStack_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,uVar14);
        local_70 = pNVar4;
        pNVar6 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64And(this_01);
        uStack_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,0xffL << (uVar12 & 0x3f));
        local_70 = pNVar5;
        uVar7 = Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64And(this_01);
        uStack_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,0xffL << (uVar10 & 0x3f));
        local_70 = pNVar6;
        uVar8 = Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Or(this_01);
        local_70 = local_78;
        uStack_68 = uVar7;
        pNVar5 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
        pGVar13 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Or(this_01);
      }
      local_70 = pNVar5;
      uStack_68 = uVar8;
      local_78 = (Node *)Graph::NewNode(pGVar13,pOVar3,2,&local_70,false);
      uVar10 = uVar10 + 8;
      uVar14 = (ulong)(iVar11 - 0x10);
      uVar12 = (ulong)((uint)uVar12 - 8);
    } while (uVar10 < local_84 >> 1);
  }
  if (bVar1) {
    if (param_4 == 3) {
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::BitcastInt32ToFloat32(this_01);
    }
    else {
      if (param_4 != 4) {
switchD_013164d8_caseD_8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::BitcastInt64ToFloat64(this_01);
    }
    local_70 = local_78;
    local_78 = (Node *)Graph::NewNode(pGVar13,pOVar3,1,&local_70,false);
  }
  return local_78;
}

