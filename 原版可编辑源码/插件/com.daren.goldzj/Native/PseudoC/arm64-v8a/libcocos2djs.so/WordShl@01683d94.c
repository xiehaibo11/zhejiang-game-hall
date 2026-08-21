
/* v8::internal::compiler::CodeAssembler::WordShl(v8::internal::SloppyTNode<v8::internal::WordT>,
   v8::internal::SloppyTNode<v8::internal::IntegralT>) */

long * __thiscall
v8::internal::compiler::CodeAssembler::WordShl(CodeAssembler *this,Node *param_2,ulong *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  Operator *pOVar5;
  long *plVar6;
  int iVar7;
  Node **ppNVar8;
  long lVar9;
  Node *pNVar10;
  ulong uVar11;
  ulong *puVar12;
  RawMachineAssembler *this_00;
  Node *local_40;
  ulong *puStack_38;
  
  ppNVar8 = &local_40;
  lVar9 = *(long *)param_2;
  uVar1 = *(ushort *)(lVar9 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar10 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
    }
    lVar9 = **(long **)pNVar10;
    uVar1 = *(ushort *)(lVar9 + 0x10);
  }
  if (uVar1 == 0x18) {
    lVar9 = *(long *)(lVar9 + 0x30);
LAB_01683e08:
    bVar2 = true;
  }
  else {
    if (uVar1 == 0x17) {
      lVar9 = (long)*(int *)(lVar9 + 0x2c);
      goto LAB_01683e08;
    }
    bVar2 = false;
  }
  uVar11 = *param_3;
  uVar1 = *(ushort *)(uVar11 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    puVar12 = param_3 + 4;
    if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
      puVar12 = (ulong *)(*puVar12 + 0x10);
    }
    uVar11 = *(ulong *)*puVar12;
    uVar1 = *(ushort *)(uVar11 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar11 = *(ulong *)(uVar11 + 0x30);
    bVar3 = true;
    bVar4 = 1;
joined_r0x01683e78:
    if (!bVar2) goto LAB_01683e7c;
LAB_01683e98:
    if (bVar3) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),lVar9 << (uVar11 & 0x3f));
      iVar7 = 0;
      ppNVar8 = (Node **)0x0;
      goto LAB_01683efc;
    }
  }
  else {
    if (uVar1 != 0x17) {
      bVar3 = false;
      bVar4 = 0;
      goto joined_r0x01683e78;
    }
    uVar11 = (ulong)*(int *)(uVar11 + 0x2c);
    bVar3 = true;
    bVar4 = 1;
    if (bVar2) goto LAB_01683e98;
LAB_01683e7c:
    if ((bool)(bVar4 & uVar11 == 0)) {
      return (long *)param_2;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x4) {
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word32Shl((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  else {
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Word64Shl((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  iVar7 = 2;
  local_40 = param_2;
  puStack_38 = param_3;
LAB_01683efc:
  plVar6 = (long *)RawMachineAssembler::AddNode(this_00,pOVar5,iVar7,ppNVar8);
  return plVar6;
}

