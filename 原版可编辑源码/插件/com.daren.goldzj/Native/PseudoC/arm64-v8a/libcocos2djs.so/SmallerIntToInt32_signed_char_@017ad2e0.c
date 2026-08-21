
/* void v8::internal::compiler::SimdScalarLowering::SmallerIntToInt32<signed
   char>(v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::SmallerIntToInt32<signed_char>
          (SimdScalarLowering *this,Node **param_1,Node **param_2)

{
  Node *pNVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  long lVar4;
  Graph *pGVar5;
  long lVar6;
  Node *local_60;
  undefined8 uStack_58;
  
  lVar6 = 0;
  do {
    pNVar1 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    lVar4 = 0;
    param_2[lVar6] = pNVar1;
    pNVar1 = *param_1;
    while( true ) {
      if (pNVar1 != (Node *)0x0) {
        pGVar5 = (Graph *)**(undefined8 **)this;
        pOVar2 = (Operator *)
                 MachineOperatorBuilder::Word32And
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        pNVar1 = *(Node **)((long)param_1 + lVar4);
        uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0xff);
        local_60 = pNVar1;
        pNVar1 = (Node *)Graph::NewNode(pGVar5,pOVar2,2,&local_60,false);
        pGVar5 = (Graph *)**(undefined8 **)this;
        pOVar2 = (Operator *)
                 MachineOperatorBuilder::Word32Shl
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,(int)lVar4);
        local_60 = pNVar1;
        uVar3 = Graph::NewNode(pGVar5,pOVar2,2,&local_60,false);
        pGVar5 = (Graph *)**(undefined8 **)this;
        pOVar2 = (Operator *)
                 MachineOperatorBuilder::Word32Or
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        local_60 = param_2[lVar6];
        uStack_58 = uVar3;
        pNVar1 = (Node *)Graph::NewNode(pGVar5,pOVar2,2,&local_60,false);
        param_2[lVar6] = pNVar1;
      }
      lVar4 = lVar4 + 8;
      if (lVar4 == 0x20) break;
      pNVar1 = *(Node **)((long)param_1 + lVar4);
    }
    lVar6 = lVar6 + 1;
    param_1 = param_1 + 4;
  } while (lVar6 != 4);
  return;
}

