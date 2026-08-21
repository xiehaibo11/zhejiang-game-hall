
/* v8::internal::compiler::WasmGraphBuilder::AtomicOp(v8::internal::wasm::WasmOpcode,
   v8::internal::compiler::Node* const*, unsigned int, unsigned int, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::AtomicOp
          (WasmGraphBuilder *this,uint param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
          int param_6)

{
  Operator *pOVar1;
  MachineOperatorBuilder *pMVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  CallDescriptor *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  Graph *pGVar12;
  Node *pNVar13;
  Graph *pGVar14;
  undefined **local_a8;
  undefined8 uStack_a0;
  Node *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (0x4e < param_2 - 0xfe00) {
switchD_0131ff40_caseD_fe03:
    uVar6 = wasm::WasmOpcodes::OpcodeName((ulong)param_2);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unsupported opcode 0x%x:%s",(ulong)param_2,uVar6);
  }
  uVar10 = (ulong)param_5;
  switch(param_2) {
  case 0xfe00:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Int32Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_98 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_5);
    uStack_90 = uVar6;
    uVar6 = Graph::NewNode(pGVar12,pOVar1,2,&local_98,false);
    uStack_a0 = 0x1d2cd00;
    local_a8 = &PTR__CallInterfaceDescriptor_01ca1a10;
    pCVar5 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_a8,
                        CallDescriptors::call_descriptor_data_._2768_4_ -
                        CallDescriptors::call_descriptor_data_._2760_4_,0,0,1);
    pNVar13 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0xd,5);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar5);
    local_88 = param_3[1];
    uStack_80 = **(undefined8 **)(this + 0x20);
    local_78 = **(undefined8 **)(this + 0x18);
    iVar8 = 5;
    local_98 = pNVar13;
    uStack_90 = uVar6;
    goto LAB_01320eac;
  case 0xfe01:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Int32Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_98 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_5);
    uStack_90 = uVar6;
    uVar6 = Graph::NewNode(pGVar12,pOVar1,2,&local_98,false);
    pMVar2 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    if (pMVar2[0x10] == (MachineOperatorBuilder)0x4) {
      uVar11 = param_3[2];
      uVar7 = ExternalReference::wasm_int64_to_float64();
      uVar7 = BuildIntToFloatConversionInstruction(this,uVar11,uVar7,5,0x60c);
    }
    else {
      pGVar12 = (Graph *)**(undefined8 **)(this + 8);
      pOVar1 = (Operator *)MachineOperatorBuilder::RoundInt64ToFloat64(pMVar2);
      local_98 = (Node *)param_3[2];
      uVar7 = Graph::NewNode(pGVar12,pOVar1,1,&local_98,false);
    }
    uStack_a0 = 0x1d2cd28;
    local_a8 = &PTR__CallInterfaceDescriptor_01ca1a40;
    pCVar5 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_a8,
                        CallDescriptors::call_descriptor_data_._2808_4_ -
                        CallDescriptors::call_descriptor_data_._2800_4_,0,0,1);
    pNVar13 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0xe,5);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar5);
    local_88 = param_3[1];
    local_78 = **(undefined8 **)(this + 0x20);
    uStack_70 = **(undefined8 **)(this + 0x18);
    iVar8 = 6;
    local_98 = pNVar13;
    uStack_90 = uVar6;
    uStack_80 = uVar7;
    goto LAB_01320eac;
  case 0xfe02:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Int32Add
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_98 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_5);
    uStack_90 = uVar6;
    uVar6 = Graph::NewNode(pGVar12,pOVar1,2,&local_98,false);
    pMVar2 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    if (pMVar2[0x10] == (MachineOperatorBuilder)0x4) {
      uVar11 = param_3[2];
      uVar7 = ExternalReference::wasm_int64_to_float64();
      uVar7 = BuildIntToFloatConversionInstruction(this,uVar11,uVar7,5,0x60c);
    }
    else {
      pGVar12 = (Graph *)**(undefined8 **)(this + 8);
      pOVar1 = (Operator *)MachineOperatorBuilder::RoundInt64ToFloat64(pMVar2);
      local_98 = (Node *)param_3[2];
      uVar7 = Graph::NewNode(pGVar12,pOVar1,1,&local_98,false);
    }
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::TruncateInt64ToInt32
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_98 = (Node *)param_3[1];
    uVar11 = Graph::NewNode(pGVar12,pOVar1,1,&local_98,false);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64Shr
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    pNVar13 = (Node *)param_3[1];
    uStack_90 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0x20);
    local_98 = pNVar13;
    pNVar13 = (Node *)Graph::NewNode(pGVar12,pOVar1,2,&local_98,false);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::TruncateInt64ToInt32
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_98 = pNVar13;
    uVar4 = Graph::NewNode(pGVar12,pOVar1,1,&local_98,false);
    uStack_a0 = 0x1d2cd50;
    local_a8 = &PTR__CallInterfaceDescriptor_01ca1a70;
    pCVar5 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_a8,
                        CallDescriptors::call_descriptor_data_._2848_4_ -
                        CallDescriptors::call_descriptor_data_._2840_4_,0,0,1);
    pNVar13 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0xf,5);
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar5);
    iVar8 = 7;
    uStack_70 = **(undefined8 **)(this + 0x20);
    local_68 = **(undefined8 **)(this + 0x18);
    local_98 = pNVar13;
    uStack_90 = uVar6;
    local_88 = uVar4;
    uStack_80 = uVar11;
    local_78 = uVar7;
    goto LAB_01320eac;
  default:
    goto switchD_0131ff40_caseD_fe03;
  case 0xfe10:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_0132033c;
  case 0xfe11:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    break;
  case 0xfe12:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_0132033c;
  case 0xfe13:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_0132033c:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicLoad((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_0132078c;
  case 0xfe14:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    break;
  case 0xfe15:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    break;
  case 0xfe16:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    break;
  case 0xfe17:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 4;
    goto LAB_01320864;
  case 0xfe18:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 5;
    goto LAB_013208c4;
  case 0xfe19:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 2;
    goto LAB_01320864;
  case 0xfe1a:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 3;
LAB_01320864:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicStore((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_013208d4;
  case 0xfe1b:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 2;
    goto LAB_013208c4;
  case 0xfe1c:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 3;
    goto LAB_013208c4;
  case 0xfe1d:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 4;
LAB_013208c4:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicStore((MachineOperatorBuilder *)puVar9[2],uVar7);
LAB_013208d4:
    pNVar13 = (Node *)**(undefined8 **)(this + 0x28);
    if (param_5 != 0) {
      pMVar2 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      pGVar14 = (Graph *)**(undefined8 **)(this + 8);
      if (pMVar2[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar3 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar2);
      }
      else {
        pOVar3 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar2);
      }
      uStack_90 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),uVar10);
      local_98 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(pGVar14,pOVar3,2,&local_98,false);
    }
    local_88 = param_3[1];
    iVar8 = 5;
    uStack_80 = **(undefined8 **)(this + 0x20);
    local_78 = **(undefined8 **)(this + 0x18);
    local_98 = pNVar13;
    uStack_90 = uVar6;
    goto LAB_01320eac;
  case 0xfe1e:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_01320984;
  case 0xfe1f:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_013209e4;
  case 0xfe20:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320984;
  case 0xfe21:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_01320984:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicAdd((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe22:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_013209e4;
  case 0xfe23:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_013209e4;
  case 0xfe24:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_013209e4:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicAdd((MachineOperatorBuilder *)puVar9[2],uVar7);
LAB_01320e1c:
    pNVar13 = (Node *)**(undefined8 **)(this + 0x28);
    if (param_5 != 0) {
      pMVar2 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      pGVar14 = (Graph *)**(undefined8 **)(this + 8);
      if (pMVar2[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar3 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar2);
      }
      else {
        pOVar3 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar2);
      }
      uStack_90 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),uVar10);
      local_98 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(pGVar14,pOVar3,2,&local_98,false);
    }
    iVar8 = 5;
    local_98 = pNVar13;
    uStack_90 = uVar6;
    local_88 = param_3[1];
    uStack_80 = **(undefined8 **)(this + 0x20);
    local_78 = **(undefined8 **)(this + 0x18);
    goto LAB_01320eac;
  case 0xfe25:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_01320a44;
  case 0xfe26:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_01320acc;
  case 0xfe27:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320a44;
  case 0xfe28:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_01320a44:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicSub((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe29:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320acc;
  case 0xfe2a:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_01320acc;
  case 0xfe2b:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_01320acc:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicSub((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe2c:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_0132057c;
  case 0xfe2d:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_01320b04;
  case 0xfe2e:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_0132057c;
  case 0xfe2f:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_0132057c:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicAnd((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe30:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320b04;
  case 0xfe31:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_01320b04;
  case 0xfe32:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_01320b04:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicAnd((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe33:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_01320b3c;
  case 0xfe34:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_01320b9c;
  case 0xfe35:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320b3c;
  case 0xfe36:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_01320b3c:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicOr((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe37:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320b9c;
  case 0xfe38:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_01320b9c;
  case 0xfe39:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_01320b9c:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicOr((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe3a:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_01320bd4;
  case 0xfe3b:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_01320dd4;
  case 0xfe3c:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320bd4;
  case 0xfe3d:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_01320bd4:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicXor((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe3e:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320dd4;
  case 0xfe3f:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_01320dd4;
  case 0xfe40:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_01320dd4:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicXor((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320e1c;
  case 0xfe41:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_01320e0c;
  case 0xfe42:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_01320c5c;
  case 0xfe43:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320e0c;
  case 0xfe44:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_01320e0c:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicExchange((MachineOperatorBuilder *)puVar9[2],uVar7)
    ;
    goto LAB_01320e1c;
  case 0xfe45:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320c5c;
  case 0xfe46:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_01320c5c;
  case 0xfe47:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_01320c5c:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicExchange((MachineOperatorBuilder *)puVar9[2],uVar7)
    ;
    goto LAB_01320e1c;
  case 0xfe48:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
    goto LAB_01320cbc;
  case 0xfe49:
    uVar6 = CheckBoundsAndAlignment(this,'\b',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x505;
    goto LAB_01320744;
  case 0xfe4a:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320cbc;
  case 0xfe4b:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
LAB_01320cbc:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32AtomicCompareExchange
                       ((MachineOperatorBuilder *)puVar9[2],uVar7);
    goto LAB_01320ccc;
  case 0xfe4c:
    uVar6 = CheckBoundsAndAlignment(this,'\x01',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x302;
    goto LAB_01320744;
  case 0xfe4d:
    uVar6 = CheckBoundsAndAlignment(this,'\x02',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x303;
    goto LAB_01320744;
  case 0xfe4e:
    uVar6 = CheckBoundsAndAlignment(this,'\x04',(Node *)*param_3,param_5,param_6);
    puVar9 = *(undefined8 **)(this + 8);
    uVar7 = 0x304;
LAB_01320744:
    pGVar12 = (Graph *)*puVar9;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicCompareExchange
                       ((MachineOperatorBuilder *)puVar9[2],uVar7);
LAB_01320ccc:
    pNVar13 = (Node *)**(undefined8 **)(this + 0x28);
    if (param_5 != 0) {
      pMVar2 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
      pGVar14 = (Graph *)**(undefined8 **)(this + 8);
      if (pMVar2[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar3 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar2);
      }
      else {
        pOVar3 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar2);
      }
      uStack_90 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),uVar10);
      local_98 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(pGVar14,pOVar3,2,&local_98,false);
    }
    local_88 = param_3[1];
    uStack_80 = param_3[2];
    iVar8 = 6;
    local_78 = **(undefined8 **)(this + 0x20);
    uStack_70 = **(undefined8 **)(this + 0x18);
    local_98 = pNVar13;
    uStack_90 = uVar6;
    goto LAB_01320eac;
  }
  pGVar12 = (Graph *)*puVar9;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word64AtomicLoad((MachineOperatorBuilder *)puVar9[2],uVar7);
LAB_0132078c:
  pNVar13 = (Node *)**(undefined8 **)(this + 0x28);
  if (param_5 != 0) {
    pMVar2 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    pGVar14 = (Graph *)**(undefined8 **)(this + 8);
    if (pMVar2[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar3 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar2);
    }
    else {
      pOVar3 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar2);
    }
    uStack_90 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),(ulong)param_5);
    local_98 = pNVar13;
    pNVar13 = (Node *)Graph::NewNode(pGVar14,pOVar3,2,&local_98,false);
  }
  iVar8 = 4;
  local_98 = pNVar13;
  uStack_90 = uVar6;
  local_88 = **(undefined8 **)(this + 0x20);
  uStack_80 = **(undefined8 **)(this + 0x18);
LAB_01320eac:
  uVar6 = Graph::NewNode(pGVar12,pOVar1,iVar8,&local_98,false);
  **(undefined8 **)(this + 0x20) = uVar6;
  return;
}

