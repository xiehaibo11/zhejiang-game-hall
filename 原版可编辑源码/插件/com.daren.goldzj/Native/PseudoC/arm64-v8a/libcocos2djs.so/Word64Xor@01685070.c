
/* v8::internal::compiler::CodeAssembler::Word64Xor(v8::internal::SloppyTNode<v8::internal::Word64T>,
   v8::internal::SloppyTNode<v8::internal::Word64T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Word64Xor(CodeAssembler *this,Node *param_2,long *param_3)

{
  bool bVar1;
  Operator *pOVar2;
  int iVar3;
  Node **ppNVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar4 = &local_40;
  uVar5 = *(ulong *)param_2;
  if (*(short *)(uVar5 + 0x10) == 0x18) {
    uVar5 = *(ulong *)(uVar5 + 0x30);
LAB_016850b0:
    bVar1 = false;
  }
  else {
    if (*(short *)(uVar5 + 0x10) == 0x17) {
      uVar5 = (ulong)*(int *)(uVar5 + 0x2c);
      goto LAB_016850b0;
    }
    bVar1 = true;
  }
  lVar6 = *param_3;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    uVar7 = *(ulong *)(lVar6 + 0x30);
joined_r0x01685108:
    if (!bVar1) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),uVar7 ^ uVar5);
      iVar3 = 0;
      ppNVar4 = (Node **)0x0;
      goto LAB_01685130;
    }
  }
  else if (*(short *)(lVar6 + 0x10) == 0x17) {
    uVar7 = (ulong)*(int *)(lVar6 + 0x2c);
    goto joined_r0x01685108;
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar2 = (Operator *)MachineOperatorBuilder::Word64Xor((MachineOperatorBuilder *)(this_00 + 0x20))
  ;
  iVar3 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_01685130:
  RawMachineAssembler::AddNode(this_00,pOVar2,iVar3,ppNVar4);
  return;
}

