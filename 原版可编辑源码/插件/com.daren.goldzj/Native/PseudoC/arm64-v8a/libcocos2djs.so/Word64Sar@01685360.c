
/* v8::internal::compiler::CodeAssembler::Word64Sar(v8::internal::SloppyTNode<v8::internal::Word64T>,
   v8::internal::SloppyTNode<v8::internal::Word64T>) */

long * __thiscall
v8::internal::compiler::CodeAssembler::Word64Sar(CodeAssembler *this,Node *param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  Operator *pOVar4;
  long *plVar5;
  int iVar6;
  Node **ppNVar7;
  long lVar8;
  ulong uVar9;
  RawMachineAssembler *this_00;
  Node *local_40;
  ulong *puStack_38;
  
  ppNVar7 = &local_40;
  lVar8 = *(long *)param_2;
  if (*(short *)(lVar8 + 0x10) == 0x18) {
    lVar8 = *(long *)(lVar8 + 0x30);
LAB_016853a0:
    bVar1 = true;
  }
  else {
    if (*(short *)(lVar8 + 0x10) == 0x17) {
      lVar8 = (long)*(int *)(lVar8 + 0x2c);
      goto LAB_016853a0;
    }
    bVar1 = false;
  }
  uVar9 = *param_3;
  if (*(short *)(uVar9 + 0x10) == 0x18) {
    uVar9 = *(ulong *)(uVar9 + 0x30);
    bVar2 = true;
    bVar3 = 1;
joined_r0x016853dc:
    if (!bVar1) goto LAB_016853e0;
LAB_016853fc:
    if (bVar2) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),lVar8 >> (uVar9 & 0x3f));
      iVar6 = 0;
      ppNVar7 = (Node **)0x0;
      goto LAB_0168544c;
    }
  }
  else {
    if (*(short *)(uVar9 + 0x10) != 0x17) {
      bVar2 = false;
      bVar3 = 0;
      goto joined_r0x016853dc;
    }
    uVar9 = (ulong)*(int *)(uVar9 + 0x2c);
    bVar2 = true;
    bVar3 = 1;
    if (bVar1) goto LAB_016853fc;
LAB_016853e0:
    if ((bool)(bVar3 & uVar9 == 0)) {
      return (long *)param_2;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar4 = (Operator *)MachineOperatorBuilder::Word64Sar((MachineOperatorBuilder *)(this_00 + 0x20))
  ;
  iVar6 = 2;
  local_40 = param_2;
  puStack_38 = param_3;
LAB_0168544c:
  plVar5 = (long *)RawMachineAssembler::AddNode(this_00,pOVar4,iVar6,ppNVar7);
  return plVar5;
}

