
/* v8::internal::compiler::CodeAssembler::Word32Xor(v8::internal::SloppyTNode<v8::internal::Word32T>,
   v8::internal::SloppyTNode<v8::internal::Word32T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Word32Xor(CodeAssembler *this,Node *param_2,long *param_3)

{
  bool bVar1;
  Operator *pOVar2;
  int iVar3;
  Node **ppNVar4;
  uint uVar5;
  long lVar6;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar4 = &local_40;
  lVar6 = *(long *)param_2;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 == (int)lVar6) goto LAB_01684cc4;
LAB_01684ccc:
    uVar5 = (uint)lVar6;
    bVar1 = true;
  }
  else {
    if (*(short *)(lVar6 + 0x10) != 0x17) goto LAB_01684ccc;
    lVar6 = (long)*(int *)(lVar6 + 0x2c);
LAB_01684cc4:
    uVar5 = (uint)lVar6;
    bVar1 = false;
  }
  lVar6 = *param_3;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 == (int)lVar6) goto joined_r0x01684d00;
  }
  else if (*(short *)(lVar6 + 0x10) == 0x17) {
    lVar6 = (long)*(int *)(lVar6 + 0x2c);
joined_r0x01684d00:
    if (!bVar1) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               CommonOperatorBuilder::Int32Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),uVar5 ^ (uint)lVar6);
      iVar3 = 0;
      ppNVar4 = (Node **)0x0;
      goto LAB_01684d50;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar2 = (Operator *)MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(this_00 + 0x20))
  ;
  iVar3 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_01684d50:
  RawMachineAssembler::AddNode(this_00,pOVar2,iVar3,ppNVar4);
  return;
}

