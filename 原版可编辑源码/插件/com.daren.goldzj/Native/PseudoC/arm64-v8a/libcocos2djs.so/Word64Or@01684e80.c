
/* v8::internal::compiler::CodeAssembler::Word64Or(v8::internal::SloppyTNode<v8::internal::Word64T>,
   v8::internal::SloppyTNode<v8::internal::Word64T>) */

ulong * __thiscall
v8::internal::compiler::CodeAssembler::Word64Or(CodeAssembler *this,Node *param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  Operator *pOVar4;
  ulong *puVar5;
  int iVar6;
  Node **ppNVar7;
  ulong uVar8;
  ulong uVar9;
  RawMachineAssembler *this_00;
  Node *local_40;
  ulong *puStack_38;
  
  ppNVar7 = &local_40;
  uVar8 = *(ulong *)param_2;
  if (*(short *)(uVar8 + 0x10) == 0x18) {
    uVar8 = *(ulong *)(uVar8 + 0x30);
LAB_01684ec0:
    bVar1 = true;
  }
  else {
    if (*(short *)(uVar8 + 0x10) == 0x17) {
      uVar8 = (ulong)*(int *)(uVar8 + 0x2c);
      goto LAB_01684ec0;
    }
    bVar1 = false;
  }
  uVar9 = *param_3;
  if (*(short *)(uVar9 + 0x10) == 0x18) {
    uVar9 = *(ulong *)(uVar9 + 0x30);
    bVar2 = true;
    bVar3 = 1;
joined_r0x01684efc:
    if (!bVar1) goto LAB_01684f00;
LAB_01684f1c:
    if (bVar2) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),uVar9 | uVar8);
      iVar6 = 0;
      ppNVar7 = (Node **)0x0;
      goto LAB_01684f70;
    }
    if (uVar8 == 0) {
      return param_3;
    }
  }
  else {
    if (*(short *)(uVar9 + 0x10) != 0x17) {
      bVar2 = false;
      bVar3 = 0;
      goto joined_r0x01684efc;
    }
    uVar9 = (ulong)*(int *)(uVar9 + 0x2c);
    bVar2 = true;
    bVar3 = 1;
    if (bVar1) goto LAB_01684f1c;
LAB_01684f00:
    if ((bool)(bVar3 & uVar9 == 0)) {
      return (ulong *)param_2;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar4 = (Operator *)MachineOperatorBuilder::Word64Or((MachineOperatorBuilder *)(this_00 + 0x20));
  iVar6 = 2;
  local_40 = param_2;
  puStack_38 = param_3;
LAB_01684f70:
  puVar5 = (ulong *)RawMachineAssembler::AddNode(this_00,pOVar4,iVar6,ppNVar7);
  return puVar5;
}

