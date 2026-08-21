
/* v8::internal::compiler::CodeAssembler::WordShr(v8::internal::SloppyTNode<v8::internal::WordT>,
   v8::internal::SloppyTNode<v8::internal::IntegralT>) */

ulong * __thiscall
v8::internal::compiler::CodeAssembler::WordShr(CodeAssembler *this,Node *param_2,ulong *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  Operator *pOVar5;
  ulong *puVar6;
  int iVar7;
  Node **ppNVar8;
  ulong uVar9;
  Node *pNVar10;
  ulong uVar11;
  RawMachineAssembler *this_00;
  Node *local_40;
  ulong *puStack_38;
  
  ppNVar8 = &local_40;
  uVar9 = *(ulong *)param_2;
  uVar1 = *(ushort *)(uVar9 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar10 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(ulong *)pNVar10 + 0x10);
    }
    uVar9 = **(ulong **)pNVar10;
    uVar1 = *(ushort *)(uVar9 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar9 = *(ulong *)(uVar9 + 0x30);
LAB_01684004:
    bVar2 = true;
  }
  else {
    if (uVar1 == 0x17) {
      uVar9 = (ulong)*(int *)(uVar9 + 0x2c);
      goto LAB_01684004;
    }
    bVar2 = false;
  }
  uVar11 = *param_3;
  uVar1 = *(ushort *)(uVar11 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    puVar6 = param_3 + 4;
    if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
      puVar6 = (ulong *)(*puVar6 + 0x10);
    }
    uVar11 = *(ulong *)*puVar6;
    uVar1 = *(ushort *)(uVar11 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar11 = *(ulong *)(uVar11 + 0x30);
    bVar3 = true;
    bVar4 = 1;
joined_r0x01684074:
    if (!bVar2) goto LAB_01684078;
LAB_01684094:
    if (bVar3) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),uVar9 >> (uVar11 & 0x3f));
      iVar7 = 0;
      ppNVar8 = (Node **)0x0;
      goto LAB_016840f8;
    }
  }
  else {
    if (uVar1 != 0x17) {
      bVar3 = false;
      bVar4 = 0;
      goto joined_r0x01684074;
    }
    uVar11 = (ulong)*(int *)(uVar11 + 0x2c);
    bVar3 = true;
    bVar4 = 1;
    if (bVar2) goto LAB_01684094;
LAB_01684078:
    if ((bool)(bVar4 & uVar11 == 0)) {
      return (ulong *)param_2;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x4) {
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32Shr((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  else {
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word64Shr((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  iVar7 = 2;
  local_40 = param_2;
  puStack_38 = param_3;
LAB_016840f8:
  puVar6 = (ulong *)RawMachineAssembler::AddNode(this_00,pOVar5,iVar7,ppNVar8);
  return puVar6;
}

