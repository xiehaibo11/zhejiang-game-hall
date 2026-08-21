
/* v8::internal::compiler::WasmGraphBuilder::BuildIntToFloatConversionInstruction(v8::internal::compiler::Node*,
   v8::internal::ExternalReference, v8::internal::MachineRepresentation, v8::internal::MachineType)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildIntToFloatConversionInstruction
          (WasmGraphBuilder *this,undefined8 param_1,undefined8 param_3,char param_4,short param_5)

{
  int iVar1;
  int iVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  CallDescriptor *pCVar6;
  Graph *pGVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 *local_80;
  undefined2 local_74 [2];
  undefined8 local_70;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_70 = param_3;
  if (((byte)(param_4 - 1U) < 0xd) && ((param_5 - 1U & 0xff) < 0xd)) {
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    iVar1 = 1 << (ulong)(*(uint *)(&DAT_01a06384 + (long)(char)(param_4 - 1U) * 4) & 0x1f);
    iVar2 = 1 << (ulong)(*(uint *)(&DAT_01a06384 + (long)(char)(param_5 - 1U) * 4) & 0x1f);
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    pOVar3 = (Operator *)
             MachineOperatorBuilder::StackSlot
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],iVar2,0);
    local_68 = (Node *)0x0;
    pNVar4 = (Node *)Graph::NewNode(pGVar7,pOVar3,0,&local_68,false);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Store
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),param_4);
    pGVar7 = *(Graph **)*(MachineGraph **)(this + 8);
    pNStack_60 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_50 = **(undefined8 **)(this + 0x20);
    local_48 = **(undefined8 **)(this + 0x18);
    local_68 = pNVar4;
    local_58 = param_1;
    uVar5 = Graph::NewNode(pGVar7,pOVar3,5,&local_68,false);
    local_80 = local_74;
    **(undefined8 **)(this + 0x20) = uVar5;
    local_74[0] = 5;
    uStack_88 = 1;
    local_90 = 0;
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::ExternalConstant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],
                        (ExternalReference *)&local_70);
    local_68 = (Node *)0x0;
    local_68 = (Node *)Graph::NewNode(pGVar7,pOVar3,0,&local_68,false);
    local_58 = **(undefined8 **)(this + 0x20);
    local_50 = **(undefined8 **)(this + 0x18);
    pNStack_60 = pNVar4;
    pCVar6 = (CallDescriptor *)
             Linkage::GetSimplifiedCDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_90,0);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Call
                       (*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar6);
    uVar5 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar3,4,&local_68,false);
    **(undefined8 **)(this + 0x20) = uVar5;
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_5);
    pNStack_60 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_50 = **(undefined8 **)(this + 0x18);
    local_58 = **(undefined8 **)(this + 0x20);
    local_68 = pNVar4;
    uVar5 = Graph::NewNode(pGVar7,pOVar3,4,&local_68,false);
    **(undefined8 **)(this + 0x20) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

