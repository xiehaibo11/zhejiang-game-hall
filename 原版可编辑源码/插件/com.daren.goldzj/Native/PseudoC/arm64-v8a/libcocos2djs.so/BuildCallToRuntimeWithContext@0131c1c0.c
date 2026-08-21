
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntimeWithContext(v8::internal::Runtime::FunctionId,
   v8::internal::compiler::Node*, v8::internal::compiler::Node**, int,
   v8::internal::compiler::Node**, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntimeWithContext
          (WasmGraphBuilder *this,undefined4 param_2,Node *param_3,void *param_4,ulong param_5,
          undefined8 *param_6,Node *param_7)

{
  long lVar1;
  CallDescriptor *pCVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  MachineGraph *pMVar7;
  uint uVar8;
  ulong uVar9;
  Node *pNVar10;
  Graph *pGVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  Node *local_b8 [11];
  
  uVar9 = param_5 & 0xffffffff;
  lVar1 = Runtime::FunctionForId(param_2);
  pCVar2 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 8),param_2,
                      (long)*(char *)(lVar1 + 0x18),0,0);
  pNVar10 = *(Node **)(this + 0x50);
  if (pNVar10 == (Node *)0x0) {
    pGVar11 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    pNVar10 = *(Node **)(this + 0x30);
    local_b8[1] = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x5f);
    local_b8[3] = (Node *)**(undefined8 **)(this + 0x18);
    local_b8[2] = (Node *)**(undefined8 **)(this + 0x20);
    local_b8[0] = pNVar10;
    pNVar10 = (Node *)Graph::NewNode(pGVar11,pOVar3,4,local_b8,false);
    **(long **)(this + 0x20) = (long)pNVar10;
  }
  pGVar11 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  local_b8[1] = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x6e00);
  local_b8[3] = (Node *)**(undefined8 **)(this + 0x18);
  local_b8[2] = (Node *)**(undefined8 **)(this + 0x20);
  local_b8[0] = pNVar10;
  local_b8[0] = (Node *)Graph::NewNode(pGVar11,pOVar3,4,local_b8,false);
  **(undefined8 **)(this + 0x20) = local_b8[0];
  if ((int)(uint)param_5 < 1) {
    uVar8 = 1;
  }
  else {
    memcpy(local_b8 + 1,param_4,uVar9 << 3);
    if ((uint)param_5 < 4) {
      param_5 = 0;
      uVar8 = 1;
    }
    else {
      iVar13 = 0;
      iVar12 = 1;
      param_5 = param_5 & 0xfffffffc;
      iVar14 = 0;
      iVar15 = 0;
      uVar6 = param_5;
      do {
        iVar12 = iVar12 + 1;
        iVar13 = iVar13 + 1;
        uVar6 = uVar6 - 4;
        iVar14 = iVar14 + 1;
        iVar15 = iVar15 + 1;
      } while (uVar6 != 0);
      uVar8 = iVar14 + iVar12 + iVar15 + iVar13;
      if (param_5 == uVar9) goto LAB_0131c380;
    }
    lVar5 = uVar9 - param_5;
    do {
      lVar5 = lVar5 + -1;
      uVar8 = uVar8 + 1;
    } while (lVar5 != 0);
  }
LAB_0131c380:
  pMVar7 = *(MachineGraph **)(this + 8);
  uVar4 = ExternalReference::Create(param_2);
  pNVar10 = (Node *)MachineGraph::ExternalConstant(pMVar7,uVar4);
  local_b8[uVar8] = pNVar10;
  pNVar10 = (Node *)MachineGraph::Int32Constant
                              (*(MachineGraph **)(this + 8),(int)*(char *)(lVar1 + 0x18));
  local_b8[uVar8 + 1] = pNVar10;
  local_b8[uVar8 + 2] = param_3;
  local_b8[uVar8 + 3] = (Node *)*param_6;
  local_b8[uVar8 + 4] = param_7;
  pGVar11 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar2);
  uVar4 = Graph::NewNode(pGVar11,pOVar3,uVar8 + 5,local_b8,false);
  *param_6 = uVar4;
  return;
}

