
/* v8::internal::compiler::WasmGraphBuilder::SimdOp(v8::internal::wasm::WasmOpcode,
   v8::internal::compiler::Node* const*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::SimdOp
          (WasmGraphBuilder *this,uint param_2,undefined8 *param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  int iVar3;
  Graph *this_00;
  Node *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  this[0x60] = (WasmGraphBuilder)0x1;
  switch(param_2) {
  case 0xfd04:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Splat
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  default:
    uVar2 = wasm::WasmOpcodes::OpcodeName(param_2);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unsupported opcode 0x%x:%s",(ulong)param_2,uVar2);
  case 0xfd08:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Splat
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd0c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Splat
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd0f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Splat
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd12:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Splat
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd15:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Splat
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd18:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Eq
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd19:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Ne
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd1a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd1b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd1c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd1d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd1e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd1f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd20:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd21:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd22:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Eq
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd23:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Ne
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd24:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd25:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd26:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd27:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd28:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd29:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd2a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd2b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd2c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Eq
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd2d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Ne
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd2e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd2f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd30:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd31:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd32:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd33:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd34:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd35:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd36:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Eq
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd37:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Ne
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd38:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd39:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd3a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GtS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd3b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GtU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd3c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd3d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd3e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GeS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd3f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2GeU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd40:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Eq
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd41:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Ne
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd42:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Lt
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd43:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Lt
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd44:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Le
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd45:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Le
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd46:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Eq
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd47:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Ne
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd48:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Lt
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd49:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Lt
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc74;
  case 0xfd4a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Le
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd4b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Le
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_0131fc74:
    uStack_30 = *param_3;
    local_38 = (Node *)param_3[1];
    goto LAB_0131fc38;
  case 0xfd4c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S128Not
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd4d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S128And
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd4e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S128Or
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd4f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S128Xor
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd50:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S128Select
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_28 = param_3[1];
    local_38 = (Node *)param_3[2];
    uStack_30 = *param_3;
    goto LAB_0131f6dc;
  case 0xfd51:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Neg
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd52:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x16AnyTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd53:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x16AllTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd54:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Shl
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd55:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16ShrS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd56:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16ShrU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd57:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd58:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16AddSaturateS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd59:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16AddSaturateU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd5a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd5b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16SubSaturateS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd5c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16SubSaturateU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd5d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16Mul
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd5e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16MinS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd5f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16MinU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd60:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16MaxS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd61:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16MaxU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd62:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Neg
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd63:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x8AnyTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd64:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x8AllTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd65:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Shl
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd66:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8ShrS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd67:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8ShrU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd68:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd69:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8AddSaturateS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd6a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8AddSaturateU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd6b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd6c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8SubSaturateS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd6d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8SubSaturateU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd6e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8Mul
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd6f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8MinS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd70:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8MinU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd71:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8MaxS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd72:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8MaxU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd73:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Neg
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd74:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x4AnyTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd75:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x4AllTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd76:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Shl
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd77:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4ShrS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd78:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4ShrU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd79:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd7c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd7f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4Mul
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd80:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4MinS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd81:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4MinU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd82:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4MaxS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd83:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4MaxU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd84:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Neg
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd85:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x2AnyTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd86:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S1x2AllTrue
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd87:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Shl
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd88:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2ShrS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd89:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2ShrU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd8a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd8c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Mul
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd8d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd8e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2MinS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd8f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2MinU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd90:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2MaxS
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd91:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I64x2MaxU
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd95:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Abs
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd96:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Neg
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd97:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Sqrt
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfd98:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Qfma
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131f6c8;
  case 0xfd99:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Qfms
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131f6c8;
  case 0xfd9a:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd9b:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd9c:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Mul
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd9d:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Div
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd9e:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Min
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfd9f:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4Max
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfda0:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Abs
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfda1:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Neg
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfda2:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Sqrt
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfda3:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Qfma
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131f6c8;
  case 0xfda4:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Qfms
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_0131f6c8:
    uStack_30 = param_3[1];
    local_38 = (Node *)*param_3;
    local_28 = param_3[2];
LAB_0131f6dc:
    iVar3 = 3;
    goto LAB_0131fc48;
  case 0xfda5:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfda6:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Sub
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfda7:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Mul
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfda8:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Div
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfda9:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Min
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdaa:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2Max
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdab:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4SConvertF32x4
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdac:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4UConvertF32x4
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdaf:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4SConvertI32x4
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdb0:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4UConvertI32x4
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdb1:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2SConvertI64x2
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdb2:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F64x2UConvertI64x2
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdbd:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8AddHoriz
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdbe:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4AddHoriz
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdbf:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4AddHoriz
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdc0:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::S8x16Swizzle
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdc6:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16SConvertI16x8
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdc7:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I8x16UConvertI16x8
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdc8:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8SConvertI32x4
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdc9:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8UConvertI32x4
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  case 0xfdca:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8SConvertI8x16Low
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdcb:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8SConvertI8x16High
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdcc:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8UConvertI8x16Low
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdcd:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I16x8UConvertI8x16High
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdce:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4SConvertI16x8Low
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdcf:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4SConvertI16x8High
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdd0:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4UConvertI16x8Low
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfdd1:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::I32x4UConvertI16x8High
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfde0:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4RecipApprox
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    goto LAB_0131fc0c;
  case 0xfde1:
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::F32x4RecipSqrtApprox
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_0131fc0c:
    local_38 = (Node *)*param_3;
    iVar3 = 1;
    goto LAB_0131fc48;
  }
  local_38 = (Node *)*param_3;
  uStack_30 = param_3[1];
LAB_0131fc38:
  iVar3 = 2;
LAB_0131fc48:
  Graph::NewNode(this_00,pOVar1,iVar3,&local_38,false);
  return;
}

