
/* v8::internal::compiler::WasmGraphBuilder::BuildCFuncInstruction(v8::internal::ExternalReference,
   v8::internal::MachineType, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildCFuncInstruction
          (WasmGraphBuilder *this,undefined8 param_2,ushort param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  CallDescriptor *pCVar7;
  Graph *pGVar8;
  int iVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 *local_a0;
  undefined2 local_94 [2];
  undefined8 local_90;
  Node *local_88;
  Node *pNStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_90 = param_2;
  if ((param_3 - 1 & 0xff) < 0xd) {
    uVar1 = *(uint *)(&DAT_01a06384 + (long)(char)(param_3 - 1) * 4);
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    iVar9 = 1;
    if (param_5 != 0) {
      iVar9 = 2;
    }
    pOVar2 = (Operator *)
             MachineOperatorBuilder::StackSlot
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],
                        iVar9 << (ulong)(uVar1 & 0x1f),0);
    local_88 = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(pGVar8,pOVar2,0,&local_88,false);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Store
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),param_3 & 0xff);
    pGVar8 = *(Graph **)*(MachineGraph **)(this + 8);
    pNStack_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_70 = **(undefined8 **)(this + 0x20);
    local_68 = **(undefined8 **)(this + 0x18);
    local_88 = pNVar3;
    local_78 = param_4;
    uVar4 = Graph::NewNode(pGVar8,pOVar2,5,&local_88,false);
    **(undefined8 **)(this + 0x20) = uVar4;
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::ExternalConstant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],
                        (ExternalReference *)&local_90);
    local_88 = (Node *)0x0;
    pNVar6 = (Node *)Graph::NewNode(pGVar8,pOVar5,0,&local_88,false);
    if (param_5 != 0) {
      pGVar8 = *(Graph **)*(MachineGraph **)(this + 8);
      pNStack_80 = (Node *)MachineGraph::Int32Constant
                                     (*(MachineGraph **)(this + 8),1 << (ulong)(uVar1 & 0x1f));
      local_70 = **(undefined8 **)(this + 0x20);
      local_68 = **(undefined8 **)(this + 0x18);
      local_88 = pNVar3;
      local_78 = param_5;
      uVar4 = Graph::NewNode(pGVar8,pOVar2,5,&local_88,false);
      **(undefined8 **)(this + 0x20) = uVar4;
    }
    local_a0 = local_94;
    local_94[0] = 5;
    uStack_a8 = 1;
    local_b0 = 0;
    local_78 = **(undefined8 **)(this + 0x20);
    local_70 = **(undefined8 **)(this + 0x18);
    local_88 = pNVar6;
    pNStack_80 = pNVar3;
    pCVar7 = (CallDescriptor *)
             Linkage::GetSimplifiedCDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_b0,0);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Call
                       (*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar7);
    uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,4,&local_88,false);
    **(undefined8 **)(this + 0x20) = uVar4;
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3);
    pNStack_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_70 = **(undefined8 **)(this + 0x18);
    local_78 = **(undefined8 **)(this + 0x20);
    local_88 = pNVar3;
    uVar4 = Graph::NewNode(pGVar8,pOVar2,4,&local_88,false);
    **(undefined8 **)(this + 0x20) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

