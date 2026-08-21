
/* v8::internal::compiler::CodeAssembler::WordAnd(v8::internal::SloppyTNode<v8::internal::WordT>,
   v8::internal::SloppyTNode<v8::internal::WordT>) */

void __thiscall
v8::internal::compiler::CodeAssembler::WordAnd(CodeAssembler *this,Node *param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  Operator *pOVar3;
  int iVar4;
  Node **ppNVar5;
  ulong uVar6;
  Node *pNVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar5 = &local_40;
  uVar6 = *(ulong *)param_2;
  uVar1 = *(ushort *)(uVar6 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar7 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(ulong *)pNVar7 + 0x10);
    }
    uVar6 = **(ulong **)pNVar7;
    uVar1 = *(ushort *)(uVar6 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar6 = *(ulong *)(uVar6 + 0x30);
LAB_01684834:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x17) {
      uVar6 = (ulong)*(int *)(uVar6 + 0x2c);
      goto LAB_01684834;
    }
    bVar2 = true;
  }
  lVar8 = *param_3;
  uVar1 = *(ushort *)(lVar8 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    plVar9 = param_3 + 4;
    if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
      plVar9 = (long *)(*plVar9 + 0x10);
    }
    lVar8 = *(long *)*plVar9;
    uVar1 = *(ushort *)(lVar8 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar10 = *(ulong *)(lVar8 + 0x30);
joined_r0x016848c0:
    if (!bVar2) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),uVar10 & uVar6);
      iVar4 = 0;
      ppNVar5 = (Node **)0x0;
      goto LAB_016848fc;
    }
  }
  else if (uVar1 == 0x17) {
    uVar10 = (ulong)*(int *)(lVar8 + 0x2c);
    goto joined_r0x016848c0;
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x4) {
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word32And((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  else {
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word64And((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  iVar4 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_016848fc:
  RawMachineAssembler::AddNode(this_00,pOVar3,iVar4,ppNVar5);
  return;
}

