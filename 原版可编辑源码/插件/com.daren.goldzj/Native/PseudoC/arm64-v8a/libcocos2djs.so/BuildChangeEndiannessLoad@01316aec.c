
/* v8::internal::compiler::WasmGraphBuilder::BuildChangeEndiannessLoad(v8::internal::compiler::Node*,
   v8::internal::MachineType, v8::internal::wasm::ValueType) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildChangeEndiannessLoad
          (WasmGraphBuilder *this,Node *param_1,uint param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  Operator *pOVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  Operator *pOVar9;
  int iVar10;
  MachineGraph *this_00;
  uint uVar11;
  int iVar12;
  Graph *pGVar13;
  MachineOperatorBuilder *this_01;
  ulong uVar14;
  ulong uVar15;
  Graph *this_02;
  Node *unaff_x24;
  ulong uVar16;
  Graph *pGVar17;
  int iVar18;
  int iVar19;
  Node *local_80;
  Node *local_70;
  undefined8 local_68;
  
  this = this + 8;
  this_00 = *(MachineGraph **)this;
  if (0xc < (param_3 & 0xff) - 1) goto switchD_01316cb0_caseD_2;
  this_01 = *(MachineOperatorBuilder **)(this_00 + 0x10);
  uVar11 = 0;
  bVar1 = false;
  iVar10 = 2;
  iVar18 = 0x10;
  iVar19 = iVar18;
  iVar12 = 0x80;
  local_80 = param_1;
  bVar2 = false;
  switch(param_3 & 0xff) {
  case 1:
  case 2:
    break;
  case 3:
    goto switchD_01316b60_caseD_3;
  default:
    uVar11 = 2;
    break;
  case 5:
  case 0xc:
    uVar11 = 3;
    break;
  case 0xd:
    goto switchD_01316b60_caseD_d;
  }
  if (10 < (param_3 & 0xff) - 2) goto switchD_01316cb0_caseD_2;
  iVar10 = 1 << (ulong)uVar11;
  bVar1 = false;
  iVar18 = iVar10 << 3;
  bVar2 = false;
  switch(param_3 & 0xff) {
  case 2:
    goto switchD_01316ba8_caseD_2;
  default:
    goto switchD_01316cb0_caseD_2;
  case 0xb:
    pGVar17 = *(Graph **)this_00;
    pOVar3 = (Operator *)MachineOperatorBuilder::BitcastFloat32ToInt32(this_01);
    local_70 = param_1;
    local_80 = (Node *)Graph::NewNode(pGVar17,pOVar3,1,&local_70,false);
    this_00 = *(MachineGraph **)this;
    bVar2 = true;
  case 4:
switchD_01316b60_caseD_3:
    bVar1 = bVar2;
    unaff_x24 = (Node *)MachineGraph::Int32Constant(this_00,0);
    iVar19 = iVar10;
    iVar12 = iVar18;
    break;
  case 0xc:
    pGVar17 = *(Graph **)this_00;
    pOVar3 = (Operator *)MachineOperatorBuilder::BitcastFloat64ToInt64(this_01);
    bVar1 = true;
    local_70 = param_1;
    local_80 = (Node *)Graph::NewNode(pGVar17,pOVar3,1,&local_70,false);
    this_00 = *(MachineGraph **)this;
  case 5:
    unaff_x24 = (Node *)MachineGraph::Int64Constant(this_00,0);
    iVar19 = iVar10;
    iVar12 = iVar18;
  }
switchD_01316b60_caseD_d:
  iVar10 = iVar19;
  if (iVar19 < 5) {
    iVar10 = 4;
  }
  if (((iVar10 == 4) || (iVar10 == 0x10)) ||
     ((iVar10 == 8 && (this_01[0x10] == (MachineOperatorBuilder)0x5)))) {
    switch(iVar19 - 2U >> 1 | iVar19 << 0x1f) {
    case 0:
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word32ReverseBytes(this_01);
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar8 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
      local_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_70 = local_80;
      local_70 = (Node *)Graph::NewNode(pGVar13,pOVar8,2,&local_70,false);
      goto LAB_01317088;
    case 1:
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word32ReverseBytes(this_01);
      break;
    default:
      goto switchD_01316cb0_caseD_2;
    case 3:
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word64ReverseBytes(this_01);
      break;
    case 7:
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Simd128ReverseBytes(this_01);
    }
    local_70 = local_80;
LAB_01317088:
    unaff_x24 = (Node *)Graph::NewNode(pGVar17,pOVar3,1,&local_70,false);
  }
  else {
    uVar15 = (ulong)(iVar12 - 8);
    uVar14 = 0;
    uVar16 = uVar15;
    do {
      pGVar17 = (Graph *)**(undefined8 **)this;
      iVar10 = (int)uVar16;
      if (iVar19 < 5) {
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
        local_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar10);
        local_70 = local_80;
        pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shr(this_01);
        local_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar10);
        local_70 = local_80;
        pNVar5 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32And(this_01);
        local_68 = MachineGraph::Int32Constant
                             (*(MachineGraph **)this,0xff << (ulong)((uint)uVar15 & 0x1f));
        local_70 = pNVar4;
        uVar6 = Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32And(this_01);
        local_68 = MachineGraph::Int32Constant
                             (*(MachineGraph **)this,0xff << (ulong)((uint)uVar14 & 0x1f));
        local_70 = pNVar5;
        uVar7 = Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Or(this_01);
        local_70 = unaff_x24;
        local_68 = uVar6;
        pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word32Or(this_01);
        local_68 = uVar7;
      }
      else {
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Shl(this_01);
        local_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,uVar16);
        local_70 = local_80;
        pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Shr(this_01);
        local_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,uVar16);
        local_70 = local_80;
        pNVar5 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64And(this_01);
        local_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,0xffL << (uVar15 & 0x3f));
        local_70 = pNVar4;
        uVar6 = Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64And(this_01);
        local_68 = MachineGraph::Int64Constant(*(MachineGraph **)this,0xffL << (uVar14 & 0x3f));
        local_70 = pNVar5;
        uVar7 = Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Or(this_01);
        local_70 = unaff_x24;
        local_68 = uVar6;
        pNVar4 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
        pGVar17 = (Graph *)**(undefined8 **)this;
        pOVar3 = (Operator *)MachineOperatorBuilder::Word64Or(this_01);
        local_68 = uVar7;
      }
      local_70 = pNVar4;
      unaff_x24 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
      uVar14 = uVar14 + 8;
      uVar16 = (ulong)(iVar10 - 0x10);
      uVar15 = (ulong)((uint)uVar15 - 8);
    } while ((long)uVar14 < (long)(iVar19 << 2));
  }
  if (bVar1) {
    if ((param_3 & 0xff) == 0xb) {
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::BitcastInt32ToFloat32(this_01);
    }
    else {
      if ((param_3 & 0xff) != 0xc) {
switchD_01316cb0_caseD_2:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::BitcastInt64ToFloat64(this_01);
    }
    local_70 = unaff_x24;
    unaff_x24 = (Node *)Graph::NewNode(pGVar17,pOVar3,1,&local_70,false);
  }
  uVar11 = param_3 >> 8 & 0xff;
  local_80 = unaff_x24;
  if ((uVar11 == 2 || uVar11 == 4) && (iVar19 < 4)) {
    if (param_4 == '\x01') {
      uVar6 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x20 - iVar12);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word32Sar(this_01);
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar8 = (Operator *)MachineOperatorBuilder::Word32Shl(this_01);
      local_70 = unaff_x24;
      local_68 = uVar6;
      local_70 = (Node *)Graph::NewNode(pGVar13,pOVar8,2,&local_70,false);
      local_68 = uVar6;
    }
    else {
      if (param_4 != '\x02') {
        return unaff_x24;
      }
      uVar6 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x40 - iVar12);
      pGVar17 = (Graph *)**(undefined8 **)this;
      pOVar3 = (Operator *)MachineOperatorBuilder::Word64Sar(this_01);
      this_02 = (Graph *)**(undefined8 **)this;
      pOVar8 = (Operator *)MachineOperatorBuilder::Word64Shl(this_01);
      pGVar13 = (Graph *)**(undefined8 **)this;
      pOVar9 = (Operator *)MachineOperatorBuilder::ChangeInt32ToInt64(this_01);
      local_70 = unaff_x24;
      local_70 = (Node *)Graph::NewNode(pGVar13,pOVar9,1,&local_70,false);
      local_68 = uVar6;
      local_70 = (Node *)Graph::NewNode(this_02,pOVar8,2,&local_70,false);
      local_68 = uVar6;
    }
    local_80 = (Node *)Graph::NewNode(pGVar17,pOVar3,2,&local_70,false);
  }
switchD_01316ba8_caseD_2:
  return local_80;
}

