
/* v8::internal::compiler::CodeAssembler::Word64NotEqual(v8::internal::TNode<v8::internal::Word64T>,
   v8::internal::TNode<v8::internal::Word64T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Word64NotEqual
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
LAB_01685bd4:
    lVar7 = *param_3;
    if (*(short *)(lVar7 + 0x10) == 0x18) {
      lVar7 = *(long *)(lVar7 + 0x30);
    }
    else {
      if (*(short *)(lVar7 + 0x10) != 0x17) goto LAB_01685bf4;
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
    }
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       ((CommonOperatorBuilder *)(this_00 + 0x48),(uint)(lVar6 != lVar7));
    iVar4 = 0;
    ppNVar5 = (Node **)0x0;
  }
  else {
    if (*(short *)(lVar6 + 0x10) == 0x17) {
      lVar6 = (long)*(int *)(lVar6 + 0x2c);
      goto LAB_01685bd4;
    }
LAB_01685bf4:
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word64Equal((MachineOperatorBuilder *)(this_00 + 0x20));
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
  }
  RawMachineAssembler::AddNode(this_00,pOVar3,iVar4,ppNVar5);
  return;
}

