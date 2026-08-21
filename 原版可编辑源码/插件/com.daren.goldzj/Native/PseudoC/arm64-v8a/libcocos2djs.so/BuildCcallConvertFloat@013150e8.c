
/* v8::internal::compiler::WasmGraphBuilder::BuildCcallConvertFloat(v8::internal::compiler::Node*,
   int, v8::internal::wasm::WasmOpcode) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildCcallConvertFloat
          (WasmGraphBuilder *this,undefined8 param_1,int param_2,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  Graph *this_00;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  ushort uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  undefined8 uVar10;
  CallDescriptor *pCVar11;
  ulong uVar12;
  CommonOperatorBuilder *pCVar13;
  Node *this_01;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  MachineGraph *pMVar18;
  Graph *pGVar19;
  Node *pNVar20;
  long *plVar21;
  Graph *local_140;
  CommonOperatorBuilder *pCStack_138;
  undefined8 local_118;
  Graph *local_110;
  CommonOperatorBuilder *pCStack_108;
  undefined8 local_e8;
  Node *local_e0;
  Node *pNStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 *local_a0;
  undefined4 local_90 [2];
  undefined8 local_88;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ushort local_48 [2];
  undefined2 local_44;
  
  sVar6 = FUN_0131728c(param_4);
  local_44 = sVar6;
  uVar7 = FUN_0131730c(param_4);
  local_48[0] = uVar7;
  switch(param_4) {
  case 0xae:
switchD_01315168_caseD_fc04:
    local_88 = ExternalReference::wasm_float32_to_int64();
    break;
  case 0xaf:
switchD_01315168_caseD_fc05:
    local_88 = ExternalReference::wasm_float32_to_uint64();
    break;
  case 0xb0:
switchD_01315168_caseD_fc06:
    local_88 = ExternalReference::wasm_float64_to_int64();
    break;
  case 0xb1:
switchD_01315168_caseD_fc07:
    local_88 = ExternalReference::wasm_float64_to_uint64();
    break;
  default:
    switch(param_4) {
    case 0xfc04:
      goto switchD_01315168_caseD_fc04;
    case 0xfc05:
      goto switchD_01315168_caseD_fc05;
    case 0xfc06:
      goto switchD_01315168_caseD_fc06;
    case 0xfc07:
      goto switchD_01315168_caseD_fc07;
    default:
      goto switchD_01315168_default;
    }
  }
  if ((0xc < (sVar6 - 1U & 0xff)) || (0xc < (uVar7 - 1 & 0xff))) {
switchD_01315168_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pGVar19 = (Graph *)**(undefined8 **)(this + 8);
  iVar3 = 1 << (ulong)(*(uint *)(&DAT_01a06384 + (long)(char)(sVar6 - 1U) * 4) & 0x1f);
  iVar16 = 1 << (ulong)(*(uint *)(&DAT_01a06384 + (long)(char)(uVar7 - 1) * 4) & 0x1f);
  if (iVar16 <= iVar3) {
    iVar16 = iVar3;
  }
  pOVar8 = (Operator *)
           MachineOperatorBuilder::StackSlot
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],iVar16,0);
  local_e0 = (Node *)0x0;
  pNVar9 = (Node *)Graph::NewNode(pGVar19,pOVar8,0,&local_e0,false);
  pOVar8 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),uVar7 & 0xff);
  pGVar19 = *(Graph **)*(MachineGraph **)(this + 8);
  pNStack_d8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  local_c8 = **(undefined8 **)(this + 0x20);
  local_c0 = **(undefined8 **)(this + 0x18);
  local_e0 = pNVar9;
  local_d0 = param_1;
  uVar10 = Graph::NewNode(pGVar19,pOVar8,5,&local_e0,false);
  local_a0 = local_90;
  **(undefined8 **)(this + 0x20) = uVar10;
  local_90[0] = 0x50204;
  uStack_a8 = 1;
  local_b0 = 1;
  pGVar19 = (Graph *)**(undefined8 **)(this + 8);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],
                      (ExternalReference *)&local_88);
  local_e0 = (Node *)0x0;
  local_e0 = (Node *)Graph::NewNode(pGVar19,pOVar8,0,&local_e0,false);
  local_d0 = **(long **)(this + 0x20);
  local_c8 = **(undefined8 **)(this + 0x18);
  pNStack_d8 = pNVar9;
  pCVar11 = (CallDescriptor *)
            Linkage::GetSimplifiedCDescriptor
                      (*(undefined8 *)**(undefined8 **)(this + 8),&local_b0,0);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar11)
  ;
  pGVar19 = (Graph *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar8,4,&local_e0,false);
  **(undefined8 **)(this + 0x20) = pGVar19;
  uVar12 = FUN_01317384(param_4);
  if ((uVar12 & 1) != 0) {
    if ((*(short *)(*(long *)pGVar19 + 0x10) != 0x17) || (*(int *)(*(long *)pGVar19 + 0x2c) == 0)) {
      uVar15 = 0xc;
      if ((*(long *)(this + 0x10) != 0) &&
         (uVar15 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
        uVar15 = 6;
      }
      this_00 = (Graph *)**(undefined8 **)(this + 8);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::TrapUnless
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar15);
      local_d0 = **(long **)(this + 0x18);
      pNStack_d8 = (Node *)**(undefined8 **)(this + 0x20);
      local_e0 = (Node *)pGVar19;
      uVar10 = Graph::NewNode(this_00,pOVar8,3,&local_e0,false);
      **(undefined8 **)(this + 0x18) = uVar10;
      if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
        SourcePositionTable::SetSourcePosition
                  (*(SourcePositionTable **)(this + 0x78),uVar10,
                   (-(ulong)(param_2 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_2 + 1U) << 1
                   ) & 0xffff80007fffffff);
      }
    }
    pGVar19 = (Graph *)**(undefined8 **)(this + 8);
    pOVar8 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],local_44);
    pNStack_d8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_c8 = **(undefined8 **)(this + 0x18);
    local_d0 = **(undefined8 **)(this + 0x20);
    local_e0 = pNVar9;
    uVar10 = Graph::NewNode(pGVar19,pOVar8,4,&local_e0,false);
    **(undefined8 **)(this + 0x20) = uVar10;
    return;
  }
  pCVar13 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  pOVar8 = (Operator *)
           MachineOperatorBuilder::Word32Equal
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_e0 = (Node *)pGVar19;
  pNStack_d8 = (Node *)pCVar13;
  uVar10 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar8,2,&local_e0,false);
  Diamond::Diamond((Diamond *)&local_e0,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1],
                   uVar10,2);
  pNVar20 = (Node *)**(undefined8 **)(this + 0x18);
  plVar1 = (long *)(local_d0 + 0x20);
  uVar2 = *(uint *)(local_d0 + 0x14) & 0xf000000;
  plVar21 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar21 = (long *)(*plVar1 + 0x10);
  }
  this_01 = (Node *)plVar21[1];
  if (this_01 != pNVar20) {
    lVar17 = local_d0;
    if (uVar2 == 0xf000000) {
      lVar17 = *plVar1;
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,(Use *)(lVar17 + -0x30));
    }
    plVar21[1] = (long)pNVar20;
    if (pNVar20 != (Node *)0x0) {
      Node::AppendUse(pNVar20,(Use *)(lVar17 + -0x30));
    }
  }
  cVar4 = (char)local_48[0];
  if ((char)local_48[0] == '\v') {
    uVar10 = 0x5c;
  }
  else {
    if ((char)local_48[0] != '\f') goto switchD_01315168_default;
    uVar10 = 0x62;
  }
  uVar10 = Binop(this,uVar10,param_1,param_1,0xffffffff);
  Diamond::Diamond((Diamond *)&local_110,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1]
                   ,uVar10,2);
  Diamond::Nest((Diamond *)&local_110,(Diamond *)&local_e0,true);
  if (cVar4 == '\v') {
    uVar10 = 0x5d;
  }
  else {
    if (cVar4 != '\f') goto switchD_01315168_default;
    uVar10 = 99;
  }
  uVar14 = FUN_01317700(this,local_48);
  uVar10 = Binop(this,uVar10,param_1,uVar14,0xffffffff);
  Diamond::Diamond((Diamond *)&local_140,**(undefined8 **)(this + 8),(*(undefined8 **)(this + 8))[1]
                   ,uVar10,0);
  Diamond::Nest((Diamond *)&local_140,(Diamond *)&local_110,false);
  uVar5 = (undefined1)local_44;
  switch(local_44._1_1_) {
  case 2:
    pNVar20 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-0x80000000);
    pMVar18 = *(MachineGraph **)(this + 8);
    iVar16 = 0x7fffffff;
    break;
  case 3:
    pNVar20 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    pMVar18 = *(MachineGraph **)(this + 8);
    iVar16 = -1;
    break;
  case 4:
    pNVar20 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),-0x8000000000000000);
    pMVar18 = *(MachineGraph **)(this + 8);
    lVar17 = 0x7fffffffffffffff;
    goto LAB_01315668;
  case 5:
    pNVar20 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0);
    pMVar18 = *(MachineGraph **)(this + 8);
    lVar17 = -1;
LAB_01315668:
    uStack_78 = MachineGraph::Int64Constant(pMVar18,lVar17);
    goto LAB_01315670;
  default:
    goto switchD_01315168_default;
  }
  uStack_78 = MachineGraph::Int32Constant(pMVar18,iVar16);
LAB_01315670:
  pOVar8 = (Operator *)CommonOperatorBuilder::Phi(pCStack_138,uVar5,2);
  local_70 = local_118;
  local_80 = pNVar20;
  uVar10 = Graph::NewNode(local_140,pOVar8,3,&local_80,false);
  pGVar19 = (Graph *)**(undefined8 **)(this + 8);
  pOVar8 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],local_44);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  uStack_68 = **(undefined8 **)(this + 0x18);
  local_70 = **(undefined8 **)(this + 0x20);
  local_80 = pNVar9;
  uVar14 = Graph::NewNode(pGVar19,pOVar8,4,&local_80,false);
  **(undefined8 **)(this + 0x20) = uVar14;
  pNVar9 = (Node *)FUN_01317700(this,&local_44);
  pOVar8 = (Operator *)CommonOperatorBuilder::Phi(pCStack_108,uVar5,2);
  local_70 = local_e8;
  local_80 = pNVar9;
  uStack_78 = uVar10;
  pNVar20 = (Node *)Graph::NewNode(local_110,pOVar8,3,&local_80,false);
  pNVar9 = local_e0;
  pOVar8 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)pNStack_d8,uVar5,2);
  local_70 = local_b8;
  local_80 = pNVar20;
  uStack_78 = uVar14;
  Graph::NewNode((Graph *)pNVar9,pOVar8,3,&local_80,false);
  return;
}

