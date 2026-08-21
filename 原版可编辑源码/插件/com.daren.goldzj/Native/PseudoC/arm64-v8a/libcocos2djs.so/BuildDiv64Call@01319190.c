
/* v8::internal::compiler::WasmGraphBuilder::BuildDiv64Call(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::ExternalReference, v8::internal::MachineType,
   v8::internal::wasm::TrapReason, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildDiv64Call
          (WasmGraphBuilder *this,undefined8 param_1,undefined8 param_2,undefined8 param_4,
          undefined2 param_5,undefined4 param_6,int param_7)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  undefined4 uVar6;
  long lVar7;
  Graph *pGVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 *local_a0;
  undefined4 local_90 [2];
  Node *local_88;
  Node *pNStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_48;
  
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  local_48 = param_4;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::StackSlot
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x10,0);
  local_88 = (Node *)0x0;
  pNVar2 = (Node *)Graph::NewNode(pGVar8,pOVar1,0,&local_88,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),5)
  ;
  pGVar8 = *(Graph **)*(MachineGraph **)(this + 8);
  pNStack_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  local_70 = **(undefined8 **)(this + 0x20);
  local_68 = **(undefined8 **)(this + 0x18);
  local_88 = pNVar2;
  local_78 = param_1;
  uVar3 = Graph::NewNode(pGVar8,pOVar1,5,&local_88,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  pGVar8 = *(Graph **)*(MachineGraph **)(this + 8);
  pNStack_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),8);
  local_70 = **(undefined8 **)(this + 0x20);
  local_68 = **(undefined8 **)(this + 0x18);
  local_88 = pNVar2;
  local_78 = param_2;
  uVar3 = Graph::NewNode(pGVar8,pOVar1,5,&local_88,false);
  local_a0 = local_90;
  **(undefined8 **)(this + 0x20) = uVar3;
  local_90[0] = 0x50204;
  uStack_a8 = 1;
  local_b0 = 1;
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],
                      (ExternalReference *)&local_48);
  local_88 = (Node *)0x0;
  local_88 = (Node *)Graph::NewNode(pGVar8,pOVar1,0,&local_88,false);
  local_78 = **(undefined8 **)(this + 0x20);
  local_70 = **(undefined8 **)(this + 0x18);
  pNStack_80 = pNVar2;
  pCVar4 = (CallDescriptor *)
           Linkage::GetSimplifiedCDescriptor(*(undefined8 *)**(undefined8 **)(this + 8),&local_b0,0)
  ;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar4);
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,4,&local_88,false);
  **(undefined8 **)(this + 0x20) = pNVar5;
  lVar7 = *(long *)pNVar5;
  if ((*(short *)(lVar7 + 0x10) == 0x17) && (*(int *)(lVar7 + 0x2c) != 0)) {
LAB_013193ac:
    if (*(int *)(lVar7 + 0x2c) != -1) goto LAB_01319474;
  }
  else {
    TrapIfFalse(this,param_6,pNVar5,param_7);
    lVar7 = *(long *)pNVar5;
    if (*(short *)(lVar7 + 0x10) == 0x17) goto LAB_013193ac;
  }
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Equal
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  pNStack_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-1);
  local_88 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar1,2,&local_88,false);
  uVar6 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar6 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar6 = 4;
  }
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::TrapIf
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar6);
  local_78 = **(undefined8 **)(this + 0x18);
  pNStack_80 = (Node *)**(undefined8 **)(this + 0x20);
  local_88 = pNVar5;
  uVar3 = Graph::NewNode(pGVar8,pOVar1,3,&local_88,false);
  **(undefined8 **)(this + 0x18) = uVar3;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar3,
               (-(ulong)(param_7 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_7 + 1U) << 1) &
               0xffff80007fffffff);
  }
LAB_01319474:
  pGVar8 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_5);
  pNStack_80 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  local_70 = **(undefined8 **)(this + 0x18);
  local_78 = **(undefined8 **)(this + 0x20);
  local_88 = pNVar2;
  uVar3 = Graph::NewNode(pGVar8,pOVar1,4,&local_88,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

