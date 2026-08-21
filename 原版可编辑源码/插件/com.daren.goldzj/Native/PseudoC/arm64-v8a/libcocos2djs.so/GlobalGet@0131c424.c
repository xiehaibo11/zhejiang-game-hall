
/* v8::internal::compiler::WasmGraphBuilder::GlobalGet(unsigned int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GlobalGet(WasmGraphBuilder *this,uint param_1)

{
  WasmGlobal *pWVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  Graph *pGVar8;
  Node *pNVar9;
  Node *local_68;
  Node *local_60;
  Node *pNStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  Node *local_28;
  
  lVar5 = *(long *)(**(long **)(this + 0x10) + 0x18);
  uVar4 = (ulong)param_1;
  pWVar1 = (WasmGlobal *)(lVar5 + uVar4 * 0x20);
  uVar6 = 4;
  uVar7 = 0x200;
  switch(*pWVar1) {
  case (WasmGlobal)0x0:
    uVar7 = 0;
    uVar6 = 0;
    break;
  case (WasmGlobal)0x1:
    break;
  case (WasmGlobal)0x2:
    uVar6 = 5;
    uVar7 = 0x400;
    break;
  case (WasmGlobal)0x3:
    uVar6 = 0xb;
    uVar7 = 0x600;
    break;
  case (WasmGlobal)0x4:
    uVar6 = 0xc;
    uVar7 = 0x600;
    break;
  case (WasmGlobal)0x5:
    this[0x60] = (WasmGraphBuilder)0x1;
    uVar7 = 0;
    uVar6 = 0xd;
    lVar5 = *(long *)(**(long **)(this + 0x10) + 0x18);
    break;
  case (WasmGlobal)0x6:
  case (WasmGlobal)0x7:
  case (WasmGlobal)0x9:
    lVar5 = lVar5 + uVar4 * 0x20;
    if ((*(char *)(lVar5 + 1) == '\0') || (*(char *)(lVar5 + 0x1c) == '\0')) {
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
      pNVar9 = *(Node **)(this + 0x30);
      pNStack_58 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x83);
      uStack_48 = **(undefined8 **)(this + 0x18);
      local_50 = **(undefined8 **)(this + 0x20);
      local_60 = pNVar9;
      pNVar9 = (Node *)Graph::NewNode(pGVar8,pOVar2,4,&local_60,false);
      **(undefined8 **)(this + 0x20) = pNVar9;
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
      pNStack_58 = (Node *)MachineGraph::Int32Constant
                                     (*(MachineGraph **)(this + 8),*(int *)(lVar5 + 0x18) * 4 + 7);
      uStack_48 = **(undefined8 **)(this + 0x18);
      local_50 = **(undefined8 **)(this + 0x20);
      local_60 = pNVar9;
    }
    else {
      local_28 = (Node *)0x0;
      local_68 = (Node *)0x0;
      GetBaseAndOffsetForImportedMutableAnyRefGlobal(this,pWVar1,&local_28,&local_68);
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
      uStack_48 = **(undefined8 **)(this + 0x18);
      local_50 = **(undefined8 **)(this + 0x20);
      local_60 = local_28;
      pNStack_58 = local_68;
    }
    goto LAB_0131c650;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_28 = (Node *)0x0;
  local_68 = (Node *)0x0;
  GetGlobalBaseAndOffset(this,uVar7 | uVar6,lVar5 + uVar4 * 0x20,&local_28,&local_68);
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],uVar7 | uVar6);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = local_28;
  pNStack_58 = local_68;
LAB_0131c650:
  uVar3 = Graph::NewNode(pGVar8,pOVar2,4,&local_60,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

