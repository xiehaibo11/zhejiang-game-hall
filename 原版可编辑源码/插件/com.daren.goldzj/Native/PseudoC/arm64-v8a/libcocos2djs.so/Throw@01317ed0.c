
/* v8::internal::compiler::WasmGraphBuilder::Throw(unsigned int, v8::internal::wasm::WasmException
   const*, v8::internal::Vector<v8::internal::compiler::Node*>, int) */

undefined8
v8::internal::compiler::WasmGraphBuilder::Throw
          (WasmGraphBuilder *param_1,uint param_2,WasmException *param_3,long param_4,
          undefined8 param_5,int param_6)

{
  int iVar1;
  Node *pNVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  CallDescriptor *pCVar8;
  uint uVar9;
  undefined8 *puVar10;
  MachineOperatorBuilder *this;
  long *plVar11;
  Graph *pGVar12;
  ulong uVar13;
  Node *pNVar14;
  undefined **local_b8;
  undefined8 uStack_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Node *local_88;
  undefined8 uStack_80;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  param_1[0x61] = (WasmGraphBuilder)0x1;
  iVar1 = WasmExceptionPackage::GetEncodedSize(param_3);
  local_98 = LoadExceptionTagFromTable(param_1,param_2);
  pNVar2 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),iVar1);
  pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Word32Shl
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
  uStack_80 = MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),1);
  local_88 = pNVar2;
  local_90 = Graph::NewNode(pGVar12,pOVar3,2,&local_88,false);
  uVar4 = MachineGraph::IntPtrConstant(*(MachineGraph **)(param_1 + 8),0);
  uVar4 = BuildCallToRuntimeWithContext
                    (param_1,0x1ce,uVar4,&local_98,2,*(undefined8 *)(param_1 + 0x20),
                     **(undefined8 **)(param_1 + 0x18));
  local_a0 = uVar4;
  if (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(param_1 + 0x78),uVar4,
               ((long)(param_6 + 1) & 0x7fffc0003fffffffU) << 1);
  }
  uVar5 = MachineGraph::IntPtrConstant(*(MachineGraph **)(param_1 + 8),0);
  pNVar2 = (Node *)BuildCallToRuntimeWithContext
                             (param_1,0x1c9,uVar5,&local_a0,1,*(undefined8 *)(param_1 + 0x20),
                              **(undefined8 **)(param_1 + 0x18));
  local_a4 = 0;
  plVar11 = *(long **)param_3;
  puVar10 = *(undefined8 **)(param_1 + 8);
  if (plVar11[1] != 0) {
    this = (MachineOperatorBuilder *)puVar10[2];
    uVar13 = 0;
    do {
      uVar9 = (uint)*(byte *)(plVar11[2] + *plVar11 + uVar13);
      if (8 < uVar9 - 1) {
switchD_013181a4_caseD_8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pNVar14 = *(Node **)(param_4 + uVar13 * 8);
      switch(uVar9) {
      case 3:
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::BitcastFloat32ToInt32(this);
        local_88 = pNVar14;
        pNVar14 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
      case 1:
        break;
      case 4:
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::BitcastFloat64ToInt64(this);
        local_88 = pNVar14;
        pNVar14 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
      case 2:
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::TruncateInt64ToInt32(this);
        pNVar7 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(param_1 + 8),0x20);
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::Word64Shr
                           (*(MachineOperatorBuilder **)(*(long *)(param_1 + 8) + 0x10));
        uStack_80 = MaskShiftCount64(param_1,pNVar7);
        local_88 = pNVar14;
        local_88 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 8),pOVar6,2,&local_88
                                          ,false);
        pNVar7 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
        BuildEncodeException32BitValue(param_1,pNVar2,&local_a4,pNVar7);
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::TruncateInt64ToInt32(this);
        local_88 = pNVar14;
        pNVar14 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
        break;
      case 5:
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::I32x4ExtractLane(this,0);
        local_88 = pNVar14;
        pNVar7 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
        BuildEncodeException32BitValue(param_1,pNVar2,&local_a4,pNVar7);
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::I32x4ExtractLane(this,1);
        local_88 = pNVar14;
        pNVar7 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
        BuildEncodeException32BitValue(param_1,pNVar2,&local_a4,pNVar7);
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::I32x4ExtractLane(this,2);
        local_88 = pNVar14;
        pNVar7 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
        BuildEncodeException32BitValue(param_1,pNVar2,&local_a4,pNVar7);
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)MachineOperatorBuilder::I32x4ExtractLane(this,3);
        local_88 = pNVar14;
        pNVar14 = (Node *)Graph::NewNode(pGVar12,pOVar3,1,&local_88,false);
        break;
      default:
        pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::Store
                           ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
        uVar9 = local_a4;
        uStack_80 = MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),local_a4 * 4 + 7);
        uStack_70 = **(undefined8 **)(param_1 + 0x20);
        local_68 = **(undefined8 **)(param_1 + 0x18);
        local_88 = pNVar2;
        local_78 = pNVar14;
        uVar5 = Graph::NewNode(pGVar12,pOVar3,5,&local_88,false);
        local_a4 = uVar9 + 1;
        **(undefined8 **)(param_1 + 0x20) = uVar5;
        goto LAB_01318168;
      case 8:
        goto switchD_013181a4_caseD_8;
      }
      BuildEncodeException32BitValue(param_1,pNVar2,&local_a4,pNVar14);
LAB_01318168:
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)plVar11[1]);
    puVar10 = *(undefined8 **)(param_1 + 8);
  }
  uStack_b0 = 0x1d2cdf0;
  local_b8 = &PTR__CallInterfaceDescriptor_01ca1920;
  pCVar8 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)*puVar10,&local_b8,
                      CallDescriptors::call_descriptor_data_._3008_4_ -
                      CallDescriptors::call_descriptor_data_._3000_4_,0,0,1);
  pNVar2 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(param_1 + 8),0x15,5);
  pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],pCVar8);
  uStack_70 = **(undefined8 **)(param_1 + 0x18);
  local_78 = (Node *)**(undefined8 **)(param_1 + 0x20);
  local_88 = pNVar2;
  uStack_80 = uVar4;
  uVar4 = Graph::NewNode(pGVar12,pOVar3,4,&local_88,false);
  **(undefined8 **)(param_1 + 0x18) = uVar4;
  **(undefined8 **)(param_1 + 0x20) = uVar4;
  if (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(param_1 + 0x78),uVar4,
               ((long)(param_6 + 1) & 0x7fffc0003fffffffU) << 1);
  }
  return uVar4;
}

