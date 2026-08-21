
/* v8::internal::compiler::WasmGraphBuilder::GetGlobalBaseAndOffset(v8::internal::MachineType,
   v8::internal::wasm::WasmGlobal const&, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GetGlobalBaseAndOffset
          (WasmGraphBuilder *this,ushort param_2,long param_3,long *param_4,undefined8 *param_5)

{
  Operator *pOVar1;
  Operator *pOVar2;
  long lVar3;
  MachineOperatorBuilder *this_00;
  undefined8 uVar4;
  Graph *pGVar5;
  Node *pNVar6;
  Graph *this_01;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(char *)(param_3 + 1) == '\0') || (*(char *)(param_3 + 0x1c) == '\0')) {
    lVar3 = *(long *)(this + 0x38);
    if (lVar3 == 0) {
      pGVar5 = (Graph *)**(undefined8 **)(this + 8);
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x505);
      pNVar6 = *(Node **)(this + 0x30);
      uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x4f);
      local_70 = *(undefined8 *)(**(long **)(this + 8) + 8);
      local_80 = pNVar6;
      uStack_68 = local_70;
      lVar3 = Graph::NewNode(pGVar5,pOVar1,4,&local_80,false);
      *(long *)(this + 0x38) = lVar3;
    }
    *param_4 = lVar3;
    uVar4 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),*(int *)(param_3 + 0x18));
    *param_5 = uVar4;
    if ((param_2 & 0xff) != 0xd) {
      return;
    }
    if (0xff < param_2) {
      return;
    }
    if (*(int *)(param_3 + 0x18) == 0) {
      return;
    }
    this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar1 = (Operator *)MachineOperatorBuilder::Int32Add(this_00);
    }
    else {
      pOVar1 = (Operator *)MachineOperatorBuilder::Int64Add(this_00);
    }
    uStack_78 = *param_5;
    local_80 = (Node *)*param_4;
    lVar3 = Graph::NewNode(pGVar5,pOVar1,2,&local_80,false);
  }
  else {
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x505);
    pNVar6 = *(Node **)(this + 0x40);
    if (pNVar6 == (Node *)0x0) {
      this_01 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x505);
      pNVar6 = *(Node **)(this + 0x30);
      uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x57);
      local_70 = *(undefined8 *)(**(long **)(this + 8) + 8);
      local_80 = pNVar6;
      uStack_68 = local_70;
      pNVar6 = (Node *)Graph::NewNode(this_01,pOVar2,4,&local_80,false);
      *(Node **)(this + 0x40) = pNVar6;
    }
    uStack_78 = MachineGraph::Int32Constant
                          (*(MachineGraph **)(this + 8),*(int *)(param_3 + 0x18) << 3);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar6;
    lVar3 = Graph::NewNode(pGVar5,pOVar1,4,&local_80,false);
    **(long **)(this + 0x20) = lVar3;
  }
  *param_4 = lVar3;
  uVar4 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  *param_5 = uVar4;
  return;
}

