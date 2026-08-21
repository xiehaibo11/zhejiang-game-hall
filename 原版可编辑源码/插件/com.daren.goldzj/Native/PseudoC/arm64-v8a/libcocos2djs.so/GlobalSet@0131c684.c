
/* v8::internal::compiler::WasmGraphBuilder::GlobalSet(unsigned int, v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GlobalSet
          (WasmGraphBuilder *this,uint param_1,Node *param_2)

{
  WasmGlobal *pWVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  Graph *pGVar7;
  Node *pNVar8;
  ulong uVar9;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  Node *pNStack_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar9 = (ulong)param_1;
  lVar4 = *(long *)(**(long **)(this + 0x10) + 0x18);
  pWVar1 = (WasmGlobal *)(lVar4 + uVar9 * 0x20);
  uVar6 = 4;
  uVar5 = 0x200;
  switch(*pWVar1) {
  case (WasmGlobal)0x0:
    uVar5 = 0;
    uVar6 = 0;
    break;
  case (WasmGlobal)0x1:
    break;
  case (WasmGlobal)0x2:
    uVar6 = 5;
    uVar5 = 0x400;
    break;
  case (WasmGlobal)0x3:
    uVar6 = 0xb;
    uVar5 = 0x600;
    break;
  case (WasmGlobal)0x4:
    uVar6 = 0xc;
    uVar5 = 0x600;
    break;
  case (WasmGlobal)0x5:
    this[0x60] = (WasmGraphBuilder)0x1;
    uVar5 = 0;
    uVar6 = 0xd;
    lVar4 = *(long *)(**(long **)(this + 0x10) + 0x18);
    break;
  case (WasmGlobal)0x6:
  case (WasmGlobal)0x7:
  case (WasmGlobal)0x9:
    lVar4 = lVar4 + uVar9 * 0x20;
    if ((*(char *)(lVar4 + 1) == '\0') || (*(char *)(lVar4 + 0x1c) == '\0')) {
      pGVar7 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
      pNVar8 = *(Node **)(this + 0x30);
      pNStack_60 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x83);
      uStack_50 = **(undefined8 **)(this + 0x18);
      local_58 = (Node *)**(undefined8 **)(this + 0x20);
      local_68 = pNVar8;
      pNVar8 = (Node *)Graph::NewNode(pGVar7,pOVar2,4,&local_68,false);
      **(undefined8 **)(this + 0x20) = pNVar8;
      pGVar7 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Store
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x508);
      pNStack_60 = (Node *)MachineGraph::Int32Constant
                                     (*(MachineGraph **)(this + 8),
                                      *(int *)(*(long *)(**(long **)(this + 0x10) + 0x18) +
                                               uVar9 * 0x20 + 0x18) * 4 + 7);
      uStack_50 = **(undefined8 **)(this + 0x20);
      local_48 = **(undefined8 **)(this + 0x18);
      local_68 = pNVar8;
    }
    else {
      local_78 = (Node *)0x0;
      pNStack_70 = (Node *)0x0;
      GetBaseAndOffsetForImportedMutableAnyRefGlobal(this,pWVar1,&pNStack_70,&local_78);
      pGVar7 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Store
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x508);
      uStack_50 = **(undefined8 **)(this + 0x20);
      local_48 = **(undefined8 **)(this + 0x18);
      local_68 = pNStack_70;
      pNStack_60 = local_78;
    }
    goto LAB_0131c8b4;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_78 = (Node *)0x0;
  pNStack_70 = (Node *)0x0;
  GetGlobalBaseAndOffset(this,uVar5 | uVar6,lVar4 + uVar9 * 0x20,&pNStack_70,&local_78);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),uVar6);
  pGVar7 = (Graph *)**(undefined8 **)(this + 8);
  uStack_50 = **(undefined8 **)(this + 0x20);
  local_48 = **(undefined8 **)(this + 0x18);
  local_68 = pNStack_70;
  pNStack_60 = local_78;
LAB_0131c8b4:
  local_58 = param_2;
  uVar3 = Graph::NewNode(pGVar7,pOVar2,5,&local_68,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

