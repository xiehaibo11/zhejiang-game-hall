
/* v8::internal::compiler::WasmGraphBuilder::Binop(v8::internal::wasm::WasmOpcode,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Binop
          (WasmGraphBuilder *this,uint param_2,Node *param_3,Node *param_4,int param_5)

{
  MachineOperatorBuilder *this_00;
  Node *pNVar1;
  Operator *pOVar2;
  Graph *this_01;
  undefined8 uVar3;
  Node *local_50;
  Node *pNStack_48;
  
  if (0x9c < param_2 - 0x46) {
switchD_013113b4_caseD_50:
    uVar3 = wasm::WasmOpcodes::OpcodeName((ulong)param_2);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unsupported opcode 0x%x:%s",(ulong)param_2,uVar3);
  }
  this_00 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
  pNStack_48 = param_4;
  switch(param_2) {
  case 0x46:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    break;
  case 0x47:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    goto LAB_013116c0;
  case 0x48:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32LessThan(this_00);
    break;
  case 0x49:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_00);
    break;
  case 0x4a:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32LessThan(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x4b:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint32LessThan(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x4c:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32LessThanOrEqual(this_00);
    break;
  case 0x4d:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint32LessThanOrEqual(this_00);
    break;
  case 0x4e:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32LessThanOrEqual(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x4f:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint32LessThanOrEqual(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  default:
    goto switchD_013113b4_caseD_50;
  case 0x51:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
    break;
  case 0x52:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
    goto LAB_013116c0;
  case 0x53:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64LessThan(this_00);
    break;
  case 0x54:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint64LessThan(this_00);
    break;
  case 0x55:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64LessThan(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x56:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint64LessThan(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x57:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64LessThanOrEqual(this_00);
    break;
  case 0x58:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint64LessThanOrEqual(this_00);
    break;
  case 0x59:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64LessThanOrEqual(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x5a:
    pOVar2 = (Operator *)MachineOperatorBuilder::Uint64LessThanOrEqual(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x5b:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Equal(this_00);
    break;
  case 0x5c:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Equal(this_00);
    goto LAB_013116c0;
  case 0x5d:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32LessThan(this_00);
    break;
  case 0x5e:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32LessThan(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x5f:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32LessThanOrEqual(this_00);
    break;
  case 0x60:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32LessThanOrEqual(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x61:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Equal(this_00);
    break;
  case 0x62:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Equal(this_00);
LAB_013116c0:
    local_50 = param_3;
    pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_50,false);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    this_01 = *(Graph **)*(MachineGraph **)(this + 8);
    pNStack_48 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_50 = pNVar1;
    goto LAB_01311928;
  case 99:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64LessThan(this_00);
    break;
  case 100:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64LessThan(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x65:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64LessThanOrEqual(this_00);
    break;
  case 0x66:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64LessThanOrEqual(this_00);
    pNStack_48 = param_3;
    param_3 = param_4;
    break;
  case 0x6a:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Add(this_00);
    break;
  case 0x6b:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Sub(this_00);
    break;
  case 0x6c:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Mul(this_00);
    break;
  case 0x6d:
    BuildI32DivS(this,param_3,param_4,param_5);
    return;
  case 0x6e:
    BuildI32DivU(this,param_3,param_4,param_5);
    return;
  case 0x6f:
    BuildI32RemS(this,param_3,param_4,param_5);
    return;
  case 0x70:
    BuildI32RemU(this,param_3,param_4,param_5);
    return;
  case 0x71:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32And(this_00);
    break;
  case 0x72:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Or(this_00);
    break;
  case 0x73:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Xor(this_00);
    break;
  case 0x74:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Shl(this_00);
    goto LAB_013117e0;
  case 0x75:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Sar(this_00);
    goto LAB_013117e0;
  case 0x76:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Shr(this_00);
    goto LAB_013117e0;
  case 0x77:
    pNVar1 = (Node *)MaskShiftCount32(this,param_4);
    BuildI32Rol(this,param_3,pNVar1);
    return;
  case 0x78:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Ror(this_00);
LAB_013117e0:
    pNStack_48 = (Node *)MaskShiftCount32(this,param_4);
    break;
  case 0x7c:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Add(this_00);
    break;
  case 0x7d:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Sub(this_00);
    break;
  case 0x7e:
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Mul(this_00);
    break;
  case 0x7f:
    BuildI64DivS(this,param_3,param_4,param_5);
    return;
  case 0x80:
    BuildI64DivU(this,param_3,param_4,param_5);
    return;
  case 0x81:
    BuildI64RemS(this,param_3,param_4,param_5);
    return;
  case 0x82:
    BuildI64RemU(this,param_3,param_4,param_5);
    return;
  case 0x83:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64And(this_00);
    break;
  case 0x84:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Or(this_00);
    break;
  case 0x85:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Xor(this_00);
    break;
  case 0x86:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Shl(this_00);
    goto LAB_01311844;
  case 0x87:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Sar(this_00);
    goto LAB_01311844;
  case 0x88:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Shr(this_00);
    goto LAB_01311844;
  case 0x89:
    BuildI64Rol(this,param_3,param_4);
    return;
  case 0x8a:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Ror(this_00);
LAB_01311844:
    pNStack_48 = (Node *)MaskShiftCount64(this,param_4);
    break;
  case 0x92:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Add(this_00);
    break;
  case 0x93:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Sub(this_00);
    break;
  case 0x94:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Mul(this_00);
    break;
  case 0x95:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Div(this_00);
    break;
  case 0x96:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Min(this_00);
    break;
  case 0x97:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Max(this_00);
    break;
  case 0x98:
    BuildF32CopySign(this,param_3,param_4);
    return;
  case 0xa0:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Add(this_00);
    break;
  case 0xa1:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Sub(this_00);
    break;
  case 0xa2:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Mul(this_00);
    break;
  case 0xa3:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Div(this_00);
    break;
  case 0xa4:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Min(this_00);
    break;
  case 0xa5:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Max(this_00);
    break;
  case 0xa6:
    BuildF64CopySign(this,param_3,param_4);
    return;
  case 0xcd:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Atan2(this_00);
    break;
  case 0xce:
    uVar3 = ExternalReference::wasm_float64_pow();
    goto LAB_0131194c;
  case 0xcf:
    uVar3 = ExternalReference::f64_mod_wrapper_function();
LAB_0131194c:
    BuildCFuncInstruction(this,uVar3,0x60c,param_3,param_4);
    return;
  case 0xd3:
    BuildI32AsmjsDivS(this,param_3,param_4);
    return;
  case 0xd4:
    BuildI32AsmjsDivU(this,param_3,param_4);
    return;
  case 0xd5:
    BuildI32AsmjsRemS(this,param_3,param_4);
    return;
  case 0xd6:
    BuildI32AsmjsRemU(this,param_3,param_4);
    return;
  case 0xde:
    uVar3 = 0x202;
    goto LAB_01311984;
  case 0xdf:
    uVar3 = 0x203;
    goto LAB_01311984;
  case 0xe0:
    uVar3 = 0x204;
    goto LAB_01311984;
  case 0xe1:
    uVar3 = 0x60b;
    goto LAB_01311984;
  case 0xe2:
    uVar3 = 0x60c;
LAB_01311984:
    BuildAsmjsStoreMem(this,uVar3,param_3,param_4);
    return;
  }
  this_01 = (Graph *)**(undefined8 **)(this + 8);
  local_50 = param_3;
LAB_01311928:
  Graph::NewNode(this_01,pOVar2,2,&local_50,false);
  return;
}

