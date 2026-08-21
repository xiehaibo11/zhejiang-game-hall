
/* v8::internal::compiler::WasmGraphBuilder::GetExceptionValues(v8::internal::compiler::Node*,
   v8::internal::wasm::WasmException const*, v8::internal::Vector<v8::internal::compiler::Node*>) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::GetExceptionValues
          (WasmGraphBuilder *this,undefined8 param_1,undefined8 *param_2,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Node *pNVar5;
  int iVar6;
  ulong unaff_x22;
  Graph *pGVar7;
  long *plVar8;
  ulong uVar9;
  uint local_8c;
  undefined8 local_88;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_88 = param_1;
  uVar2 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
  pNVar3 = (Node *)BuildCallToRuntimeWithContext
                             (this,0x1c9,uVar2,&local_88,1,*(undefined8 *)(this + 0x20),
                              **(undefined8 **)(this + 0x18));
  local_8c = 0;
  plVar8 = (long *)*param_2;
  if (plVar8[1] != 0) {
    uVar9 = 0;
    do {
      switch(*(undefined1 *)(plVar8[2] + *plVar8 + uVar9)) {
      case 1:
        uVar2 = BuildDecodeException32BitValue(this,pNVar3,&local_8c);
        break;
      case 2:
        uVar2 = BuildDecodeException64BitValue(this,pNVar3,&local_8c);
        break;
      case 3:
        pNVar5 = (Node *)BuildDecodeException32BitValue(this,pNVar3,&local_8c);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::BitcastInt32ToFloat32
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
        goto LAB_0131901c;
      case 4:
        pNVar5 = (Node *)BuildDecodeException64BitValue(this,pNVar3,&local_8c);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::BitcastInt64ToFloat64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
LAB_0131901c:
        iVar6 = 1;
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        local_80 = pNVar5;
LAB_01319154:
        uVar2 = Graph::NewNode(pGVar7,pOVar4,iVar6,&local_80,false);
        break;
      case 5:
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::I32x4Splat
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
        local_80 = (Node *)BuildDecodeException32BitValue(this,pNVar3,&local_8c);
        pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,1,&local_80,false);
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::I32x4ReplaceLane
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],1);
        uStack_78 = BuildDecodeException32BitValue(this,pNVar3,&local_8c);
        local_80 = pNVar5;
        pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,2,&local_80,false);
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::I32x4ReplaceLane
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],2);
        uStack_78 = BuildDecodeException32BitValue(this,pNVar3,&local_8c);
        local_80 = pNVar5;
        pNVar5 = (Node *)Graph::NewNode(pGVar7,pOVar4,2,&local_80,false);
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::I32x4ReplaceLane
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],3);
        uStack_78 = BuildDecodeException32BitValue(this,pNVar3,&local_8c);
        iVar6 = 2;
        local_80 = pNVar5;
        goto LAB_01319154;
      case 6:
      case 7:
      case 9:
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        unaff_x22 = unaff_x22 & 0xffffffffffff0000 | 0x708;
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::Load
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],unaff_x22);
        uVar1 = local_8c;
        uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),local_8c * 4 + 7);
        uStack_68 = **(undefined8 **)(this + 0x18);
        local_70 = **(undefined8 **)(this + 0x20);
        local_80 = pNVar3;
        uVar2 = Graph::NewNode(pGVar7,pOVar4,4,&local_80,false);
        local_8c = uVar1 + 1;
        **(undefined8 **)(this + 0x20) = uVar2;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      *(undefined8 *)(param_4 + uVar9 * 8) = uVar2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)plVar8[1]);
  }
  return pNVar3;
}

