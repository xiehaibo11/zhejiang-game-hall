
/* v8::internal::compiler::WasmGraphBuilder::Unop(v8::internal::wasm::WasmOpcode,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Unop
          (WasmGraphBuilder *this,uint param_2,Node *param_3,undefined4 param_4)

{
  char cVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Operator *extraout_x1;
  Operator *extraout_x1_00;
  Operator *extraout_x1_01;
  Operator *extraout_x1_02;
  Operator *extraout_x1_03;
  Operator *extraout_x1_04;
  Operator *extraout_x1_05;
  Operator *extraout_x1_06;
  Operator *extraout_x1_07;
  Operator *extraout_x1_08;
  Operator *extraout_x1_09;
  Operator *extraout_x1_10;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Graph *pGVar7;
  MachineOperatorBuilder *this_00;
  ulong uVar8;
  undefined1 auVar9 [16];
  Node *local_40;
  undefined8 uStack_38;
  
  puVar6 = *(undefined8 **)(this + 8);
  uVar8 = (ulong)param_2;
  this_00 = (MachineOperatorBuilder *)puVar6[2];
  switch(param_2) {
  case 0x45:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    pGVar7 = *(Graph **)*(MachineGraph **)(this + 8);
    uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    goto LAB_01313ea4;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
switchD_01313d50_caseD_46:
    uVar3 = wasm::WasmOpcodes::OpcodeName(uVar8);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unsupported opcode 0x%x:%s",uVar8,uVar3);
  case 0x50:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
    pGVar7 = *(Graph **)*(MachineGraph **)(this + 8);
    uStack_38 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0);
LAB_01313ea4:
    iVar4 = 2;
    local_40 = param_3;
    goto LAB_01314360;
  case 0x67:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Clz(this_00);
    break;
  case 0x68:
    cVar1 = MachineOperatorBuilder::Word32Ctz(this_00);
    if (cVar1 != '\0') {
      MachineOperatorBuilder::Word32Ctz(this_00);
      pOVar2 = extraout_x1;
      break;
    }
    cVar1 = MachineOperatorBuilder::Word32ReverseBits(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_word32_ctz();
      goto LAB_0131444c;
    }
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    MachineOperatorBuilder::Word32ReverseBits(this_00);
    local_40 = param_3;
    param_3 = (Node *)Graph::NewNode(pGVar7,extraout_x1_10,1,&local_40,false);
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Clz(this_00);
    goto LAB_01313d90;
  case 0x69:
    cVar1 = MachineOperatorBuilder::Word32Popcnt(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_word32_popcnt();
LAB_0131444c:
      BuildBitCountingCall(this,param_3,uVar3,4);
      return;
    }
    MachineOperatorBuilder::Word32Popcnt(this_00);
    pOVar2 = extraout_x1_00;
    break;
  case 0x79:
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Clz(this_00);
    break;
  case 0x7a:
    auVar9 = MachineOperatorBuilder::Word64Ctz(this_00);
    pOVar2 = auVar9._8_8_;
    if (((auVar9._0_8_ & 0xff) == 0) &&
       ((this_00[0x10] != (MachineOperatorBuilder)0x4 ||
        (cVar1 = MachineOperatorBuilder::Word32Ctz(this_00), cVar1 == '\0')))) {
      cVar1 = MachineOperatorBuilder::Word64ReverseBits(this_00);
      if (cVar1 == '\0') {
        uVar3 = ExternalReference::wasm_word64_ctz();
        goto LAB_01314474;
      }
      pGVar7 = (Graph *)**(undefined8 **)(this + 8);
      MachineOperatorBuilder::Word64ReverseBits(this_00);
      local_40 = param_3;
      param_3 = (Node *)Graph::NewNode(pGVar7,extraout_x1_08,1,&local_40,false);
      pGVar7 = (Graph *)**(undefined8 **)(this + 8);
      pOVar2 = (Operator *)MachineOperatorBuilder::Word64Clz(this_00);
      goto LAB_01313d90;
    }
    break;
  case 0x7b:
    auVar9 = MachineOperatorBuilder::Word64Popcnt(this_00);
    pOVar2 = auVar9._8_8_;
    if (((auVar9._0_8_ & 0xff) != 0) ||
       ((this_00[0x10] == (MachineOperatorBuilder)0x4 &&
        (cVar1 = MachineOperatorBuilder::Word32Popcnt(this_00), cVar1 != '\0')))) break;
    uVar3 = ExternalReference::wasm_word64_popcnt();
LAB_01314474:
    param_3 = (Node *)BuildBitCountingCall(this,param_3,uVar3,5);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::ChangeUint32ToUint64
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    puVar6 = *(undefined8 **)(this + 8);
    goto LAB_01314358;
  case 0x8b:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Abs(this_00);
    break;
  case 0x8c:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Neg(this_00);
    break;
  case 0x8d:
    cVar1 = MachineOperatorBuilder::Float32RoundUp(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f32_ceil();
LAB_013143f0:
      uVar5 = 0x60b;
      goto LAB_013143f4;
    }
    MachineOperatorBuilder::Float32RoundUp(this_00);
    pOVar2 = extraout_x1_01;
    break;
  case 0x8e:
    cVar1 = MachineOperatorBuilder::Float32RoundDown(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f32_floor();
      goto LAB_013143f0;
    }
    MachineOperatorBuilder::Float32RoundDown(this_00);
    pOVar2 = extraout_x1_02;
    break;
  case 0x8f:
    cVar1 = MachineOperatorBuilder::Float32RoundTruncate(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f32_trunc();
      goto LAB_013143f0;
    }
    MachineOperatorBuilder::Float32RoundTruncate(this_00);
    pOVar2 = extraout_x1_03;
    break;
  case 0x90:
    cVar1 = MachineOperatorBuilder::Float32RoundTiesEven(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f32_nearest_int();
      goto LAB_013143f0;
    }
    MachineOperatorBuilder::Float32RoundTiesEven(this_00);
    pOVar2 = extraout_x1_04;
    break;
  case 0x91:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float32Sqrt(this_00);
    break;
  case 0x99:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Abs(this_00);
    break;
  case 0x9a:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Neg(this_00);
    break;
  case 0x9b:
    cVar1 = MachineOperatorBuilder::Float64RoundUp(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f64_ceil();
      uVar5 = 0x60c;
      goto LAB_013143f4;
    }
    MachineOperatorBuilder::Float64RoundUp(this_00);
    pOVar2 = extraout_x1_09;
    break;
  case 0x9c:
    cVar1 = MachineOperatorBuilder::Float64RoundDown(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f64_floor();
      uVar5 = 0x60c;
      goto LAB_013143f4;
    }
    MachineOperatorBuilder::Float64RoundDown(this_00);
    pOVar2 = extraout_x1_05;
    break;
  case 0x9d:
    cVar1 = MachineOperatorBuilder::Float64RoundTruncate(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f64_trunc();
      uVar5 = 0x60c;
      goto LAB_013143f4;
    }
    MachineOperatorBuilder::Float64RoundTruncate(this_00);
    pOVar2 = extraout_x1_06;
    break;
  case 0x9e:
    cVar1 = MachineOperatorBuilder::Float64RoundTiesEven(this_00);
    if (cVar1 == '\0') {
      uVar3 = ExternalReference::wasm_f64_nearest_int();
      uVar5 = 0x60c;
      goto LAB_013143f4;
    }
    MachineOperatorBuilder::Float64RoundTiesEven(this_00);
    pOVar2 = extraout_x1_07;
    break;
  case 0x9f:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Sqrt(this_00);
    break;
  case 0xa7:
    pOVar2 = (Operator *)MachineOperatorBuilder::TruncateInt64ToInt32(this_00);
    break;
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
    goto switchD_01313d50_caseD_a8;
  case 0xac:
    pOVar2 = (Operator *)MachineOperatorBuilder::ChangeInt32ToInt64(this_00);
    break;
  case 0xad:
    pOVar2 = (Operator *)MachineOperatorBuilder::ChangeUint32ToUint64(this_00);
    break;
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
    goto switchD_01313d50_caseD_ae;
  case 0xb2:
    pOVar2 = (Operator *)MachineOperatorBuilder::RoundInt32ToFloat32(this_00);
    break;
  case 0xb3:
    pOVar2 = (Operator *)MachineOperatorBuilder::RoundUint32ToFloat32(this_00);
    break;
  case 0xb4:
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      uVar3 = ExternalReference::wasm_int64_to_float32();
LAB_0131408c:
      uVar5 = 0x60b;
LAB_0131424c:
      BuildIntToFloatConversionInstruction(this,param_3,uVar3,5,uVar5);
      return;
    }
    pOVar2 = (Operator *)MachineOperatorBuilder::RoundInt64ToFloat32(this_00);
    break;
  case 0xb5:
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      uVar3 = ExternalReference::wasm_uint64_to_float32();
      goto LAB_0131408c;
    }
    pOVar2 = (Operator *)MachineOperatorBuilder::RoundUint64ToFloat32(this_00);
    break;
  case 0xb6:
    pOVar2 = (Operator *)MachineOperatorBuilder::TruncateFloat64ToFloat32(this_00);
    break;
  case 0xb7:
    pOVar2 = (Operator *)MachineOperatorBuilder::ChangeInt32ToFloat64(this_00);
    break;
  case 0xb8:
    pOVar2 = (Operator *)MachineOperatorBuilder::ChangeUint32ToFloat64(this_00);
    break;
  case 0xb9:
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      uVar3 = ExternalReference::wasm_int64_to_float64();
LAB_01314244:
      uVar5 = 0x60c;
      goto LAB_0131424c;
    }
    pOVar2 = (Operator *)MachineOperatorBuilder::RoundInt64ToFloat64(this_00);
    break;
  case 0xba:
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      uVar3 = ExternalReference::wasm_uint64_to_float64();
      goto LAB_01314244;
    }
    pOVar2 = (Operator *)MachineOperatorBuilder::RoundUint64ToFloat64(this_00);
    break;
  case 0xbb:
    pOVar2 = (Operator *)MachineOperatorBuilder::ChangeFloat32ToFloat64(this_00);
    break;
  case 0xbc:
    pOVar2 = (Operator *)MachineOperatorBuilder::BitcastFloat32ToInt32(this_00);
    break;
  case 0xbd:
    pOVar2 = (Operator *)MachineOperatorBuilder::BitcastFloat64ToInt64(this_00);
    break;
  case 0xbe:
    pOVar2 = (Operator *)MachineOperatorBuilder::BitcastInt32ToFloat32(this_00);
    break;
  case 0xbf:
    pOVar2 = (Operator *)MachineOperatorBuilder::BitcastInt64ToFloat64(this_00);
    break;
  case 0xc0:
    pOVar2 = (Operator *)MachineOperatorBuilder::SignExtendWord8ToInt32(this_00);
    break;
  case 0xc1:
    pOVar2 = (Operator *)MachineOperatorBuilder::SignExtendWord16ToInt32(this_00);
    break;
  case 0xc2:
    pOVar2 = (Operator *)MachineOperatorBuilder::SignExtendWord8ToInt64(this_00);
    break;
  case 0xc3:
    pOVar2 = (Operator *)MachineOperatorBuilder::SignExtendWord16ToInt64(this_00);
    break;
  case 0xc4:
    pOVar2 = (Operator *)MachineOperatorBuilder::SignExtendWord32ToInt64(this_00);
    break;
  case 0xc5:
    uVar3 = ExternalReference::f64_acos_wrapper_function();
    uVar5 = 0x60c;
    goto LAB_013143f4;
  case 0xc6:
    uVar3 = ExternalReference::f64_asin_wrapper_function();
    uVar5 = 0x60c;
LAB_013143f4:
    BuildCFuncInstruction(this,uVar3,uVar5,param_3,0);
    return;
  case 199:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Atan(this_00);
    break;
  case 200:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Cos(this_00);
    break;
  case 0xc9:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Sin(this_00);
    break;
  case 0xca:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Tan(this_00);
    break;
  case 0xcb:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Exp(this_00);
    break;
  case 0xcc:
    pOVar2 = (Operator *)MachineOperatorBuilder::Float64Log(this_00);
    break;
  case 0xd1:
    pGVar7 = (Graph *)*puVar6;
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar2 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    }
    else {
      pOVar2 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
    }
    uStack_38 = RefNull(this);
    iVar4 = 2;
    local_40 = param_3;
    goto LAB_01314360;
  case 0xd7:
    uVar3 = 0x202;
    goto LAB_013142c8;
  case 0xd8:
    uVar3 = 0x302;
    goto LAB_013142c8;
  case 0xd9:
    uVar3 = 0x203;
    goto LAB_013142c8;
  case 0xda:
    uVar3 = 0x303;
    goto LAB_013142c8;
  case 0xdb:
    uVar3 = 0x204;
    goto LAB_013142c8;
  case 0xdc:
    uVar3 = 0x60b;
    goto LAB_013142c8;
  case 0xdd:
    uVar3 = 0x60c;
LAB_013142c8:
    BuildAsmjsLoadMem(this,uVar3,param_3);
    return;
  case 0xe3:
  case 0xe4:
    pGVar7 = (Graph *)*puVar6;
    pOVar2 = (Operator *)MachineOperatorBuilder::ChangeFloat32ToFloat64(this_00);
    local_40 = param_3;
    param_3 = (Node *)Graph::NewNode(pGVar7,pOVar2,1,&local_40,false);
    puVar6 = *(undefined8 **)(this + 8);
  case 0xe5:
  case 0xe6:
    pGVar7 = (Graph *)*puVar6;
    pOVar2 = (Operator *)MachineOperatorBuilder::TruncateFloat64ToWord32(this_00);
LAB_01313d90:
    iVar4 = 1;
    local_40 = param_3;
    goto LAB_01314360;
  default:
    if (param_2 - 0xfc00 < 4) goto switchD_01313d50_caseD_a8;
    if (3 < param_2 - 0xfc04) goto switchD_01313d50_caseD_46;
    goto switchD_01313d50_caseD_ae;
  }
  puVar6 = *(undefined8 **)(this + 8);
LAB_01314358:
  iVar4 = 1;
  pGVar7 = (Graph *)*puVar6;
  local_40 = param_3;
LAB_01314360:
  Graph::NewNode(pGVar7,pOVar2,iVar4,&local_40,false);
  return;
switchD_01313d50_caseD_ae:
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    BuildCcallConvertFloat(this,param_3,param_4,uVar8);
    return;
  }
switchD_01313d50_caseD_a8:
  BuildIntConvertFloat(this,param_3,param_4,uVar8);
  return;
}

