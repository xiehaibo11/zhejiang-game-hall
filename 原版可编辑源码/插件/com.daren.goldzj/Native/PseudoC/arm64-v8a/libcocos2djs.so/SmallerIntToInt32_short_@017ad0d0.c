
/* void 
   v8::internal::compiler::SimdScalarLowering::SmallerIntToInt32<short>(v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::SmallerIntToInt32<short>
          (SimdScalarLowering *this,Node **param_1,Node **param_2)

{
  undefined8 uVar1;
  Operator *pOVar2;
  Graph *pGVar3;
  Node *pNVar4;
  long lVar5;
  Node **ppNVar6;
  Node *local_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  ppNVar6 = param_1 + 1;
  do {
    uVar1 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    *(undefined8 *)((long)param_2 + lVar5) = uVar1;
    if (ppNVar6[-1] != (Node *)0x0) {
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pNVar4 = ppNVar6[-1];
      uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0xffff);
      local_60 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
      local_60 = pNVar4;
      uVar1 = Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Or((MachineOperatorBuilder *)(*(undefined8 **)this)[2])
      ;
      local_60 = *(Node **)((long)param_2 + lVar5);
      uStack_58 = uVar1;
      uVar1 = Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      *(undefined8 *)((long)param_2 + lVar5) = uVar1;
    }
    if (*ppNVar6 != (Node *)0x0) {
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pNVar4 = *ppNVar6;
      uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0xffff);
      local_60 = pNVar4;
      pNVar4 = (Node *)Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Shl
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_60 = pNVar4;
      uVar1 = Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Or((MachineOperatorBuilder *)(*(undefined8 **)this)[2])
      ;
      local_60 = *(Node **)((long)param_2 + lVar5);
      uStack_58 = uVar1;
      uVar1 = Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      *(undefined8 *)((long)param_2 + lVar5) = uVar1;
    }
    lVar5 = lVar5 + 8;
    ppNVar6 = ppNVar6 + 2;
  } while (lVar5 != 0x20);
  return;
}

