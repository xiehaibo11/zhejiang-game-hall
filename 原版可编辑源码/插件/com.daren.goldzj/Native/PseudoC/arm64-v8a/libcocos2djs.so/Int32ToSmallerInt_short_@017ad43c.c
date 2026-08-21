
/* void 
   v8::internal::compiler::SimdScalarLowering::Int32ToSmallerInt<short>(v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::Int32ToSmallerInt<short>
          (SimdScalarLowering *this,Node **param_1,Node **param_2)

{
  Operator *pOVar1;
  Operator *pOVar2;
  Graph *pGVar3;
  long lVar4;
  Node *pNVar5;
  Node *local_60;
  undefined8 uStack_58;
  
  pOVar1 = (Operator *)
           MachineOperatorBuilder::SignExtendWord16ToInt32
                     (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  lVar4 = 0;
  if (*param_1 != (Node *)0x0) goto LAB_017ad49c;
  do {
    *param_2 = (Node *)0x0;
    param_2[1] = (Node *)0x0;
    while( true ) {
      lVar4 = lVar4 + 8;
      param_2 = param_2 + 2;
      if (lVar4 == 0x20) {
        return;
      }
      if (*(long *)((long)param_1 + lVar4) == 0) break;
LAB_017ad49c:
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pNVar5 = *(Node **)((long)param_1 + lVar4);
      uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
      local_60 = pNVar5;
      local_60 = (Node *)Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      pNVar5 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_60,false);
      *param_2 = pNVar5;
      pGVar3 = (Graph *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Sar
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      pNVar5 = *(Node **)((long)param_1 + lVar4);
      uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
      local_60 = pNVar5;
      local_60 = (Node *)Graph::NewNode(pGVar3,pOVar2,2,&local_60,false);
      pNVar5 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_60,false);
      param_2[1] = pNVar5;
    }
  } while( true );
}

