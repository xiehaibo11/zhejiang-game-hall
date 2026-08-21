
/* v8::internal::compiler::WasmGraphBuilder::LoadMem(v8::internal::wasm::ValueType,
   v8::internal::MachineType, v8::internal::compiler::Node*, unsigned int, unsigned int, int) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::LoadMem
          (WasmGraphBuilder *this,char param_2,uint param_3,undefined8 param_4,uint param_5,
          undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  MachineOperatorBuilder *pMVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  long lVar6;
  undefined8 *puVar7;
  WasmGraphBuilder *pWVar8;
  Graph *pGVar9;
  uint uVar10;
  Node *pNVar11;
  Graph *pGVar12;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((param_3 & 0xff) == 0xd) {
    this[0x60] = (WasmGraphBuilder)0x1;
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
    switch(param_3 & 0xff) {
    case 1:
    case 2:
      break;
    case 3:
      lVar6 = 1;
      break;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      lVar6 = 2;
      break;
    case 5:
    case 0xc:
      lVar6 = 3;
      break;
    default:
      goto switchD_0131e2fc_default;
    }
  }
  uVar10 = param_3 & 0xffff;
  uVar2 = BoundsCheckMem(this,1 << lVar6,param_4,param_5,param_7,0);
  if ((param_3 & 0xff) == 2) {
LAB_0131e3b8:
    if (*(long *)(this + 0x10) == 0) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
LAB_0131e42c:
      pOVar4 = (Operator *)MachineOperatorBuilder::Load(pMVar3,uVar10);
      pNVar11 = (Node *)**(undefined8 **)(this + 0x28);
      if (param_5 != 0) {
        puVar7 = *(undefined8 **)(this + 8);
        pMVar3 = (MachineOperatorBuilder *)puVar7[2];
        pGVar12 = (Graph *)*puVar7;
        if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
          pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
        }
        else {
          pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
        }
        uStack_78 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),(ulong)param_5);
        local_80 = pNVar11;
        pNVar11 = (Node *)Graph::NewNode(pGVar12,pOVar5,2,&local_80,false);
      }
      goto LAB_0131e584;
    }
    pWVar8 = this + 8;
    pGVar9 = (Graph *)**(undefined8 **)pWVar8;
    pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)pWVar8)[2];
    if (*(char *)(*(long *)(this + 0x10) + 8) == '\0') goto LAB_0131e42c;
    pOVar4 = (Operator *)MachineOperatorBuilder::ProtectedLoad(pMVar3,uVar10);
    pNVar11 = (Node *)**(undefined8 **)(this + 0x28);
    if (param_5 != 0) {
      pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)pWVar8)[2];
      pGVar12 = (Graph *)**(undefined8 **)pWVar8;
      if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
      }
      else {
        pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
      }
      uStack_78 = MachineGraph::IntPtrConstant(*(MachineGraph **)pWVar8,(ulong)param_5);
      local_80 = pNVar11;
      pNVar11 = (Node *)Graph::NewNode(pGVar12,pOVar5,2,&local_80,false);
    }
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar11;
    uStack_78 = uVar2;
    pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar4,4,&local_80,false);
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),pNVar11,
                 (-(ulong)(param_7 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_7 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
  }
  else {
    pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    iVar1 = *(int *)(pMVar3 + 0x18);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if ((*(uint *)(pMVar3 + 0x1c) >> (ulong)(param_3 & 0x1f) & 1) != 0) goto LAB_0131e374;
      }
      else if (iVar1 != 2) goto switchD_0131e2fc_default;
      goto LAB_0131e3b8;
    }
LAB_0131e374:
    pGVar9 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)MachineOperatorBuilder::UnalignedLoad(pMVar3,uVar10);
    pNVar11 = (Node *)**(undefined8 **)(this + 0x28);
    if (param_5 != 0) {
      pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      pGVar12 = (Graph *)**(undefined8 **)(this + 8);
      if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
      }
      else {
        pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
      }
      uStack_78 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),(ulong)param_5);
      local_80 = pNVar11;
      pNVar11 = (Node *)Graph::NewNode(pGVar12,pOVar5,2,&local_80,false);
    }
LAB_0131e584:
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar11;
    uStack_78 = uVar2;
    pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar4,4,&local_80,false);
  }
  **(undefined8 **)(this + 0x20) = pNVar11;
  if (param_2 == '\x02') {
    if (0xc < (param_3 - 1 & 0xff)) {
switchD_0131e2fc_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (1 << (ulong)(*(uint *)(&DAT_01a06384 + (long)(char)(param_3 - 1) * 4) & 0x1f) < 8) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      uVar10 = param_3 >> 8 & 0xff;
      if ((uVar10 == 4) || (uVar10 == 2)) {
        pOVar4 = (Operator *)MachineOperatorBuilder::ChangeInt32ToInt64(pMVar3);
      }
      else {
        pOVar4 = (Operator *)MachineOperatorBuilder::ChangeUint32ToUint64(pMVar3);
      }
      local_80 = pNVar11;
      pNVar11 = (Node *)Graph::NewNode(pGVar9,pOVar4,1,&local_80,false);
    }
  }
  if (FLAG_trace_wasm_memory != '\0') {
    TraceMemoryOperation(this,0,param_3,uVar2,param_5,param_7);
  }
  return pNVar11;
}

