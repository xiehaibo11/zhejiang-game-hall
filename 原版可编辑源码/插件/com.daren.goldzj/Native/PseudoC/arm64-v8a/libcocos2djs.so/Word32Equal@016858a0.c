
/* v8::internal::compiler::CodeAssembler::Word32Equal(v8::internal::TNode<v8::internal::Word32T>,
   v8::internal::TNode<v8::internal::Word32T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Word32Equal(CodeAssembler *this,Node *param_2,long *param_3)

{
  Operator *pOVar1;
  int iVar2;
  Node **ppNVar3;
  long lVar4;
  long lVar5;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar3 = &local_40;
  lVar4 = *(long *)param_2;
  if (*(short *)(lVar4 + 0x10) == 0x18) {
    lVar4 = *(long *)(lVar4 + 0x30);
    if (lVar4 == (int)lVar4) goto LAB_016858e8;
  }
  else if (*(short *)(lVar4 + 0x10) == 0x17) {
    lVar4 = (long)*(int *)(lVar4 + 0x2c);
LAB_016858e8:
    lVar5 = *param_3;
    if (*(short *)(lVar5 + 0x10) == 0x18) {
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == (int)lVar5) goto LAB_01685914;
    }
    else if (*(short *)(lVar5 + 0x10) == 0x17) {
      lVar5 = (long)*(int *)(lVar5 + 0x2c);
LAB_01685914:
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               CommonOperatorBuilder::Int32Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),(uint)((int)lVar4 == (int)lVar5)
                         );
      iVar2 = 0;
      ppNVar3 = (Node **)0x0;
      goto LAB_01685970;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)(this_00 + 0x20));
  iVar2 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_01685970:
  RawMachineAssembler::AddNode(this_00,pOVar1,iVar2,ppNVar3);
  return;
}

