
/* v8::internal::compiler::WasmGraphBuilder::LoadTransform(v8::internal::MachineType,
   v8::internal::wasm::LoadTransformationKind, v8::internal::compiler::Node*, unsigned int, unsigned
   int, int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::LoadTransform
          (WasmGraphBuilder *this,uint param_2,char param_3,undefined8 param_4,uint param_5,
          undefined8 param_6,int param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  MachineOperatorBuilder *pMVar5;
  Operator *pOVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  Graph *this_00;
  Node *pNVar11;
  Graph *this_01;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((param_2 & 0xff) == 0xd) {
    this[0x60] = (WasmGraphBuilder)0x1;
    lVar9 = 4;
  }
  else {
    lVar9 = 0;
    switch(param_2 & 0xff) {
    case 1:
    case 2:
      break;
    case 3:
      lVar9 = 1;
      break;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      lVar9 = 2;
      break;
    case 5:
    case 0xc:
      lVar9 = 3;
      break;
    default:
      goto switchD_0131dfd4_default;
    }
  }
  uVar4 = BoundsCheckMem(this,1 << lVar9,param_4,param_5,param_7,0);
  if (param_3 == '\x01') {
    uVar1 = param_2 & 0xff;
    if (uVar1 == 4) {
      uVar1 = param_2 >> 8 & 0xff;
      if (uVar1 == 2) {
        uVar8 = 8;
        puVar2 = *(undefined8 **)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
      else {
        if (uVar1 != 3) goto switchD_0131dfd4_default;
        uVar8 = 9;
        puVar2 = *(undefined8 **)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
    }
    else if (uVar1 == 3) {
      uVar1 = param_2 >> 8 & 0xff;
      if (uVar1 == 2) {
        uVar8 = 6;
        puVar2 = *(undefined8 **)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
      else {
        if (uVar1 != 3) goto switchD_0131dfd4_default;
        uVar8 = 7;
        puVar2 = *(undefined8 **)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
    }
    else {
      if (uVar1 != 2) goto switchD_0131dfd4_default;
      uVar1 = param_2 >> 8 & 0xff;
      if (uVar1 == 2) {
        uVar8 = 4;
        puVar2 = *(undefined8 **)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
      else {
        if (uVar1 != 3) goto switchD_0131dfd4_default;
        uVar8 = 5;
        puVar2 = *(undefined8 **)(this + 8);
        lVar9 = *(long *)(this + 0x10);
      }
    }
  }
  else {
    if (param_3 != '\0') goto switchD_0131dfd4_default;
    switch(param_2 & 0xff) {
    case 2:
      if ((param_2 >> 8 & 0xff) != 2) goto switchD_0131dfd4_default;
      uVar8 = 0;
      puVar2 = *(undefined8 **)(this + 8);
      lVar9 = *(long *)(this + 0x10);
      break;
    case 3:
      if ((param_2 >> 8 & 0xff) != 2) goto switchD_0131dfd4_default;
      uVar8 = 1;
      puVar2 = *(undefined8 **)(this + 8);
      lVar9 = *(long *)(this + 0x10);
      break;
    case 4:
      if ((param_2 >> 8 & 0xff) != 2) goto switchD_0131dfd4_default;
      uVar8 = 2;
      puVar2 = *(undefined8 **)(this + 8);
      lVar9 = *(long *)(this + 0x10);
      break;
    case 5:
      if ((param_2 >> 8 & 0xff) != 4) goto switchD_0131dfd4_default;
      uVar8 = 3;
      puVar2 = *(undefined8 **)(this + 8);
      lVar9 = *(long *)(this + 0x10);
      break;
    default:
      goto switchD_0131dfd4_default;
    }
  }
  if (lVar9 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (uint)*(byte *)(lVar9 + 8) << 1;
  }
  pMVar5 = (MachineOperatorBuilder *)puVar2[2];
  if ((param_2 & 0xff) == 2) goto LAB_0131e0f8;
  iVar3 = *(int *)(pMVar5 + 0x18);
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      if (iVar3 != 2) {
switchD_0131dfd4_default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      goto LAB_0131e0f8;
    }
    if ((*(uint *)(pMVar5 + 0x1c) >> (ulong)(param_2 & 0x1f) & 1) == 0) goto LAB_0131e0f8;
  }
  iVar10 = 1;
LAB_0131e0f8:
  this_00 = (Graph *)*puVar2;
  pOVar6 = (Operator *)MachineOperatorBuilder::LoadTransform(pMVar5,iVar10,uVar8);
  pNVar11 = (Node *)**(undefined8 **)(this + 0x28);
  if (param_5 != 0) {
    pMVar5 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    this_01 = (Graph *)**(undefined8 **)(this + 8);
    if (pMVar5[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar7 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar5);
    }
    else {
      pOVar7 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar5);
    }
    uStack_78 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),(ulong)param_5);
    local_80 = pNVar11;
    pNVar11 = (Node *)Graph::NewNode(this_01,pOVar7,2,&local_80,false);
  }
  uStack_68 = **(undefined8 **)(this + 0x18);
  local_70 = **(undefined8 **)(this + 0x20);
  local_80 = pNVar11;
  uStack_78 = uVar4;
  uVar8 = Graph::NewNode(this_00,pOVar6,4,&local_80,false);
  **(undefined8 **)(this + 0x20) = uVar8;
  if ((iVar10 == 2) && (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0)) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar8,
               (-(ulong)(param_7 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_7 + 1U) << 1) &
               0xffff80007fffffff);
  }
  if (FLAG_trace_wasm_memory != '\0') {
    TraceMemoryOperation(this,0,param_2,uVar4,(ulong)param_5,param_7);
  }
  return uVar8;
}

