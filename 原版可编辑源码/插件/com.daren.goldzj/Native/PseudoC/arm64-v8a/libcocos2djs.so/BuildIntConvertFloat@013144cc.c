
/* v8::internal::compiler::WasmGraphBuilder::BuildIntConvertFloat(v8::internal::compiler::Node*,
   int, v8::internal::wasm::WasmOpcode) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildIntConvertFloat
          (WasmGraphBuilder *this,Node *param_1,int param_2,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  Operator *pOVar5;
  Graph *pGVar6;
  ulong uVar7;
  Node *pNVar8;
  undefined8 uVar9;
  CommonOperatorBuilder *pCVar10;
  Node *pNVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  Graph *pGVar17;
  MachineGraph *pMVar18;
  long *plVar19;
  Graph *local_100;
  CommonOperatorBuilder *pCStack_f8;
  undefined8 local_d8;
  Graph *local_d0;
  CommonOperatorBuilder *pCStack_c8;
  undefined8 local_a8;
  Node *local_a0;
  CommonOperatorBuilder *pCStack_98;
  long local_90;
  undefined8 local_78;
  ushort local_70 [2];
  undefined2 local_6c [2];
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar4 = FUN_0131728c(param_4);
  local_6c[0] = (undefined2)uVar4;
  uVar3 = FUN_0131730c(param_4);
  local_70[0] = uVar3;
  switch(param_4) {
  case 0xa8:
switchD_01314548_caseD_fc00:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TruncateFloat32ToInt32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xa9:
switchD_01314548_caseD_fc01:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TruncateFloat32ToUint32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xaa:
switchD_01314548_caseD_fc02:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::ChangeFloat64ToInt32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xab:
switchD_01314548_caseD_fc03:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TruncateFloat64ToUint32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xac:
  case 0xad:
    goto switchD_01314548_default;
  case 0xae:
switchD_01314548_caseD_fc04:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TryTruncateFloat32ToInt64
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xaf:
switchD_01314548_caseD_fc05:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TryTruncateFloat32ToUint64
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xb0:
switchD_01314548_caseD_fc06:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TryTruncateFloat64ToInt64
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  case 0xb1:
switchD_01314548_caseD_fc07:
    pOVar5 = (Operator *)
             MachineOperatorBuilder::TryTruncateFloat64ToUint64
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    break;
  default:
    switch(param_4) {
    case 0xfc00:
      goto switchD_01314548_caseD_fc00;
    case 0xfc01:
      goto switchD_01314548_caseD_fc01;
    case 0xfc02:
      goto switchD_01314548_caseD_fc02;
    case 0xfc03:
      goto switchD_01314548_caseD_fc03;
    case 0xfc04:
      goto switchD_01314548_caseD_fc04;
    case 0xfc05:
      goto switchD_01314548_caseD_fc05;
    case 0xfc06:
      goto switchD_01314548_caseD_fc06;
    case 0xfc07:
      goto switchD_01314548_caseD_fc07;
    default:
      goto switchD_01314548_default;
    }
  }
  if ((uVar4 & 0xff) == 4) {
    if ((uVar3 & 0xff) == 0xb) {
      uVar14 = 0x8f;
    }
    else {
      if ((uVar3 & 0xff) != 0xc) goto switchD_01314548_default;
      uVar14 = 0x9d;
    }
    pGVar6 = (Graph *)Unop(this,uVar14,param_1,0xffffffff);
    iVar16 = 1;
    pGVar17 = (Graph *)**(undefined8 **)(this + 8);
  }
  else {
    local_a0 = param_1;
    pGVar6 = (Graph *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar5,1,&local_a0,false);
    pGVar17 = (Graph *)**(undefined8 **)(this + 8);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Projection
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],0);
    iVar16 = 2;
    pCStack_98 = *(CommonOperatorBuilder **)(**(long **)(this + 8) + 8);
  }
  local_a0 = (Node *)pGVar6;
  uVar14 = Graph::NewNode(pGVar17,pOVar5,iVar16,&local_a0,false);
  uVar7 = FUN_01317384(param_4);
  if ((uVar7 & 1) != 0) {
    pNVar8 = (Node *)FUN_013173d8(this,param_4,local_6c,local_70,pGVar6,uVar14);
    if ((uVar4 & 0xff) != 4) {
      TrapIfEq64(this,6,pNVar8,0,param_2);
      return uVar14;
    }
    uVar13 = 0xc;
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar13 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
      uVar13 = 6;
    }
    pGVar17 = (Graph *)**(undefined8 **)(this + 8);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::TrapIf
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar13);
    local_90 = **(undefined8 **)(this + 0x18);
    pCStack_98 = (CommonOperatorBuilder *)**(undefined8 **)(this + 0x20);
    local_a0 = pNVar8;
    uVar9 = Graph::NewNode(pGVar17,pOVar5,3,&local_a0,false);
    **(undefined8 **)(this + 0x18) = uVar9;
    if (*(SourcePositionTable **)(this + 0x78) == (SourcePositionTable *)0x0) {
      return uVar14;
    }
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar9,
               (-(ulong)(param_2 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_2 + 1U) << 1) &
               0xffff80007fffffff);
    return uVar14;
  }
  pGVar17 = (Graph *)FUN_013173d8(this,param_4,local_6c,local_70,pGVar6,uVar14);
  if ((uVar4 & 0xff) == 5) {
    pCVar10 = (CommonOperatorBuilder *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0);
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word64Equal
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    local_a0 = (Node *)pGVar17;
    pCStack_98 = pCVar10;
    pGVar17 = (Graph *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar5,2,&local_a0,false)
    ;
  }
  Diamond::Diamond((Diamond *)&local_a0,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1],
                   pGVar17,2);
  pNVar8 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_90 + 0x20);
  uVar2 = *(uint *)(local_90 + 0x14) & 0xf000000;
  plVar19 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar19 = (long *)(*plVar1 + 0x10);
  }
  pNVar11 = (Node *)plVar19[1];
  if (pNVar11 != pNVar8) {
    if (uVar2 == 0xf000000) {
      local_90 = *plVar1;
    }
    if (pNVar11 != (Node *)0x0) {
      Node::RemoveUse(pNVar11,(Use *)(local_90 + -0x30));
    }
    plVar19[1] = (long)pNVar8;
    if (pNVar8 != (Node *)0x0) {
      Node::AppendUse(pNVar8,(Use *)(local_90 + -0x30));
    }
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 0xb) {
    uVar9 = 0x5c;
  }
  else {
    if (uVar3 != 0xc) goto switchD_01314548_default;
    uVar9 = 0x62;
  }
  uVar9 = Binop(this,uVar9,param_1,param_1,0xffffffff);
  Diamond::Diamond((Diamond *)&local_d0,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1],
                   uVar9,2);
  Diamond::Nest((Diamond *)&local_d0,(Diamond *)&local_a0,true);
  if (uVar3 == 0xb) {
    uVar9 = 0x5d;
  }
  else {
    if (uVar3 != 0xc) goto switchD_01314548_default;
    uVar9 = 99;
  }
  uVar12 = FUN_01317700(this,local_70);
  uVar9 = Binop(this,uVar9,param_1,uVar12,0xffffffff);
  Diamond::Diamond((Diamond *)&local_100,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1]
                   ,uVar9,0);
  Diamond::Nest((Diamond *)&local_100,(Diamond *)&local_d0,false);
  switch(uVar4 >> 8 & 0xff) {
  case 2:
    pNVar8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-0x80000000);
    pMVar18 = *(MachineGraph **)(this + 8);
    iVar16 = 0x7fffffff;
    break;
  case 3:
    pNVar8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    pMVar18 = *(MachineGraph **)(this + 8);
    iVar16 = -1;
    break;
  case 4:
    pNVar8 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),-0x8000000000000000);
    pMVar18 = *(MachineGraph **)(this + 8);
    lVar15 = 0x7fffffffffffffff;
    goto LAB_013149d0;
  case 5:
    pNVar8 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0);
    pMVar18 = *(MachineGraph **)(this + 8);
    lVar15 = -1;
LAB_013149d0:
    uStack_60 = MachineGraph::Int64Constant(pMVar18,lVar15);
    goto LAB_013149d8;
  default:
switchD_01314548_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uStack_60 = MachineGraph::Int32Constant(pMVar18,iVar16);
LAB_013149d8:
  pOVar5 = (Operator *)CommonOperatorBuilder::Phi(pCStack_f8,uVar4,2);
  local_58 = local_d8;
  local_68 = pNVar8;
  uVar9 = Graph::NewNode(local_100,pOVar5,3,&local_68,false);
  pNVar8 = (Node *)FUN_01317700(this,local_6c);
  pOVar5 = (Operator *)CommonOperatorBuilder::Phi(pCStack_c8,uVar4,2);
  local_58 = local_a8;
  local_68 = pNVar8;
  uStack_60 = uVar9;
  pNVar11 = (Node *)Graph::NewNode(local_d0,pOVar5,3,&local_68,false);
  pNVar8 = local_a0;
  pOVar5 = (Operator *)CommonOperatorBuilder::Phi(pCStack_98,uVar4,2);
  local_58 = local_78;
  local_68 = pNVar11;
  uStack_60 = uVar14;
  uVar14 = Graph::NewNode((Graph *)pNVar8,pOVar5,3,&local_68,false);
  return uVar14;
}

