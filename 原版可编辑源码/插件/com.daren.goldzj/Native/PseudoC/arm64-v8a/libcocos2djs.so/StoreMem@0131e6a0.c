
/* v8::internal::compiler::WasmGraphBuilder::StoreMem(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, unsigned int, unsigned int, v8::internal::compiler::Node*, int,
   v8::internal::wasm::ValueType) */

undefined8
v8::internal::compiler::WasmGraphBuilder::StoreMem
          (WasmGraphBuilder *param_1,uint param_2,undefined8 param_3,uint param_4,undefined8 param_5
          ,undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  MachineOperatorBuilder *pMVar3;
  Operator *pOVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  long lVar7;
  Graph *pGVar8;
  Node *pNVar9;
  Graph *pGVar10;
  Node *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar7 = 0;
  switch(param_2 & 0xff) {
  case 1:
  case 2:
    break;
  case 3:
    lVar7 = 1;
    break;
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    lVar7 = 2;
    break;
  case 5:
  case 0xc:
    lVar7 = 3;
    break;
  case 0xd:
    param_1[0x60] = (WasmGraphBuilder)0x1;
    lVar7 = 4;
    break;
  default:
    goto switchD_0131e6fc_default;
  }
  uVar2 = BoundsCheckMem(param_1,1 << lVar7,param_3,param_4,param_7,0);
  local_78 = param_6;
  if ((param_2 & 0xff) == 2) {
LAB_0131e798:
    if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(*(long *)(param_1 + 0x10) + 8) != '\0')) {
      pGVar8 = (Graph *)**(undefined8 **)(param_1 + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ProtectedStore
                         ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],param_2);
      pNVar9 = (Node *)**(undefined8 **)(param_1 + 0x28);
      if (param_4 != 0) {
        pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2];
        pGVar10 = (Graph *)**(undefined8 **)(param_1 + 8);
        if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
          pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
        }
        else {
          pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
        }
        uStack_80 = MachineGraph::IntPtrConstant(*(MachineGraph **)(param_1 + 8),(ulong)param_4);
        local_88 = pNVar9;
        pNVar9 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_88,false);
      }
      uStack_70 = **(undefined8 **)(param_1 + 0x20);
      local_68 = **(undefined8 **)(param_1 + 0x18);
      local_88 = pNVar9;
      uStack_80 = uVar2;
      uVar6 = Graph::NewNode(pGVar8,pOVar4,5,&local_88,false);
      if (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0) {
        SourcePositionTable::SetSourcePosition
                  (*(SourcePositionTable **)(param_1 + 0x78),uVar6,
                   (-(ulong)(param_7 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_7 + 1U) << 1
                   ) & 0xffff80007fffffff);
      }
      goto LAB_0131e8b4;
    }
    pGVar8 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)
             MachineOperatorBuilder::Store
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],param_2 & 0xff)
    ;
  }
  else {
    pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2];
    iVar1 = *(int *)(pMVar3 + 0x18);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if ((*(uint *)(pMVar3 + 0x20) >> (ulong)(param_2 & 0x1f) & 1) != 0) goto LAB_0131e788;
      }
      else if (iVar1 != 2) {
switchD_0131e6fc_default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      goto LAB_0131e798;
    }
LAB_0131e788:
    pGVar8 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)MachineOperatorBuilder::UnalignedStore(pMVar3,param_2);
  }
  pNVar9 = (Node *)**(undefined8 **)(param_1 + 0x28);
  if (param_4 != 0) {
    pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2];
    pGVar10 = (Graph *)**(undefined8 **)(param_1 + 8);
    if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar5 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
    }
    else {
      pOVar5 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
    }
    uStack_80 = MachineGraph::IntPtrConstant(*(MachineGraph **)(param_1 + 8),(ulong)param_4);
    local_88 = pNVar9;
    pNVar9 = (Node *)Graph::NewNode(pGVar10,pOVar5,2,&local_88,false);
  }
  uStack_70 = **(undefined8 **)(param_1 + 0x20);
  local_68 = **(undefined8 **)(param_1 + 0x18);
  local_88 = pNVar9;
  uStack_80 = uVar2;
  uVar6 = Graph::NewNode(pGVar8,pOVar4,5,&local_88,false);
LAB_0131e8b4:
  **(undefined8 **)(param_1 + 0x20) = uVar6;
  if (FLAG_trace_wasm_memory != '\0') {
    TraceMemoryOperation(param_1,1,param_2,uVar2,param_4,param_7);
  }
  return uVar6;
}

