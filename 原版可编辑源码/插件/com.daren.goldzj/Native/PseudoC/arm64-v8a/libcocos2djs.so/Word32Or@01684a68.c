
/* v8::internal::compiler::CodeAssembler::Word32Or(v8::internal::SloppyTNode<v8::internal::Word32T>,
   v8::internal::SloppyTNode<v8::internal::Word32T>) */

long * __thiscall
v8::internal::compiler::CodeAssembler::Word32Or(CodeAssembler *this,Node *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  Operator *pOVar4;
  long *plVar5;
  int iVar6;
  Node **ppNVar7;
  uint uVar8;
  long lVar9;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar7 = &local_40;
  lVar9 = *(long *)param_2;
  if (*(short *)(lVar9 + 0x10) == 0x18) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (lVar9 == (int)lVar9) goto LAB_01684ab0;
LAB_01684ab8:
    uVar8 = (uint)lVar9;
    bVar1 = false;
  }
  else {
    if (*(short *)(lVar9 + 0x10) != 0x17) goto LAB_01684ab8;
    lVar9 = (long)*(int *)(lVar9 + 0x2c);
LAB_01684ab0:
    uVar8 = (uint)lVar9;
    bVar1 = true;
  }
  lVar9 = *param_3;
  if (*(short *)(lVar9 + 0x10) == 0x18) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (lVar9 != (int)lVar9) goto LAB_01684b0c;
    bVar2 = true;
    bVar3 = 1;
    if (bVar1) goto LAB_01684b14;
LAB_01684af8:
    if ((bool)(bVar3 & (int)lVar9 == 0)) {
      return (long *)param_2;
    }
  }
  else {
    if (*(short *)(lVar9 + 0x10) == 0x17) {
      lVar9 = (long)*(int *)(lVar9 + 0x2c);
      bVar2 = true;
      bVar3 = 1;
    }
    else {
LAB_01684b0c:
      bVar2 = false;
      bVar3 = 0;
    }
    if (!bVar1) goto LAB_01684af8;
LAB_01684b14:
    if (bVar2) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int32Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),(uint)lVar9 | uVar8);
      iVar6 = 0;
      ppNVar7 = (Node **)0x0;
      goto LAB_01684b68;
    }
    if (uVar8 == 0) {
      return param_3;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar4 = (Operator *)MachineOperatorBuilder::Word32Or((MachineOperatorBuilder *)(this_00 + 0x20));
  iVar6 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_01684b68:
  plVar5 = (long *)RawMachineAssembler::AddNode(this_00,pOVar4,iVar6,ppNVar7);
  return plVar5;
}

