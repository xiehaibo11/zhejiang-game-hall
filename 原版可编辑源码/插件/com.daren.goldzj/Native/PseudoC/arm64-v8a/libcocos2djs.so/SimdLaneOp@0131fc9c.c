
/* v8::internal::compiler::WasmGraphBuilder::SimdLaneOp(v8::internal::wasm::WasmOpcode, unsigned
   char, v8::internal::compiler::Node* const*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::SimdLaneOp
          (WasmGraphBuilder *this,uint param_2,uint param_3,undefined8 *param_4)

{
  Operator *pOVar1;
  undefined8 uVar2;
  int iVar3;
  Graph *this_00;
  Node *local_30;
  undefined8 uStack_28;
  
  this[0x60] = (WasmGraphBuilder)0x1;
  switch(param_2) {
  case 0xfd05:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16ExtractLaneS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd06:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16ExtractLaneU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd07:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16ReplaceLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    goto LAB_0131fe40;
  default:
    uVar2 = wasm::WasmOpcodes::OpcodeName(param_2);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unsupported opcode 0x%x:%s",(ulong)param_2,uVar2);
  case 0xfd09:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8ExtractLaneS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd0a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8ExtractLaneU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd0b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8ReplaceLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    goto LAB_0131fe40;
  case 0xfd0d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4ExtractLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd0e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4ReplaceLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    goto LAB_0131fe40;
  case 0xfd10:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2ExtractLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd11:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2ReplaceLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    goto LAB_0131fe40;
  case 0xfd13:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4ExtractLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd14:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4ReplaceLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    goto LAB_0131fe40;
  case 0xfd16:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2ExtractLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
    break;
  case 0xfd17:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2ReplaceLane
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_3 & 0xff);
LAB_0131fe40:
    local_30 = (Node *)*param_4;
    uStack_28 = param_4[1];
    iVar3 = 2;
    goto LAB_0131fe54;
  }
  local_30 = (Node *)*param_4;
  iVar3 = 1;
LAB_0131fe54:
  Graph::NewNode(this_00,pOVar1,iVar3,&local_30,false);
  return;
}

