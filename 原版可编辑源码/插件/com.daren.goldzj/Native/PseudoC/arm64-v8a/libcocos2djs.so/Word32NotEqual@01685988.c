
/* v8::internal::compiler::CodeAssembler::Word32NotEqual(v8::internal::TNode<v8::internal::Word32T>,
   v8::internal::TNode<v8::internal::Word32T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Word32NotEqual
          (CodeAssembler *this,Node *param_2,long *param_3)

{
  Node *pNVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  int iVar4;
  Node **ppNVar5;
  long lVar6;
  long lVar7;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar5 = &local_40;
  lVar6 = *(long *)param_2;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 == (int)lVar6) goto LAB_016859d0;
  }
  else if (*(short *)(lVar6 + 0x10) == 0x17) {
    lVar6 = (long)*(int *)(lVar6 + 0x2c);
LAB_016859d0:
    lVar7 = *param_3;
    if (*(short *)(lVar7 + 0x10) == 0x18) {
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 == (int)lVar7) goto LAB_016859fc;
    }
    else if (*(short *)(lVar7 + 0x10) == 0x17) {
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
LAB_016859fc:
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Int32Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),(uint)((int)lVar6 != (int)lVar7)
                         );
      iVar4 = 0;
      ppNVar5 = (Node **)0x0;
      goto LAB_01685aa4;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)(this_00 + 0x20));
  local_40 = param_2;
  plStack_38 = param_3;
  pNVar1 = (Node *)RawMachineAssembler::AddNode(this_00,pOVar3,2,&local_40);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this_00 + 0x48),0);
  uVar2 = RawMachineAssembler::AddNode(this_00,pOVar3,0,(Node **)0x0);
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)(this_00 + 0x20));
  iVar4 = 2;
  local_40 = pNVar1;
  plStack_38 = (long *)uVar2;
LAB_01685aa4:
  RawMachineAssembler::AddNode(this_00,pOVar3,iVar4,ppNVar5);
  return;
}

