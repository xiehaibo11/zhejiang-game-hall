
/* v8::internal::compiler::CodeAssembler::Word32Shr(v8::internal::SloppyTNode<v8::internal::Word32T>,
   v8::internal::SloppyTNode<v8::internal::Word32T>) */

long * __thiscall
v8::internal::compiler::CodeAssembler::Word32Shr(CodeAssembler *this,Node *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  Operator *pOVar3;
  long *plVar4;
  int iVar5;
  Node **ppNVar6;
  uint uVar7;
  long lVar8;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar6 = &local_40;
  lVar8 = *(long *)param_2;
  if (*(short *)(lVar8 + 0x10) == 0x18) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if (lVar8 == (int)lVar8) goto LAB_016843d0;
LAB_016843d8:
    uVar7 = (uint)lVar8;
    bVar1 = false;
  }
  else {
    if (*(short *)(lVar8 + 0x10) != 0x17) goto LAB_016843d8;
    lVar8 = (long)*(int *)(lVar8 + 0x2c);
LAB_016843d0:
    uVar7 = (uint)lVar8;
    bVar1 = true;
  }
  lVar8 = *param_3;
  if (*(short *)(lVar8 + 0x10) == 0x18) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if (lVar8 != (int)lVar8) goto LAB_01684444;
    bVar2 = true;
    if (!bVar1) goto LAB_0168444c;
LAB_01684418:
    if (bVar2) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Int32Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),
                          uVar7 >> (ulong)((uint)lVar8 & 0x1f));
      iVar5 = 0;
      ppNVar6 = (Node **)0x0;
      goto LAB_01684480;
    }
  }
  else {
    if (*(short *)(lVar8 + 0x10) == 0x17) {
      lVar8 = (long)*(int *)(lVar8 + 0x2c);
      bVar2 = true;
    }
    else {
LAB_01684444:
      bVar2 = false;
    }
    if (bVar1) goto LAB_01684418;
LAB_0168444c:
    if ((bool)(bVar2 & (int)lVar8 == 0)) {
      return (long *)param_2;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar3 = (Operator *)MachineOperatorBuilder::Word32Shr((MachineOperatorBuilder *)(this_00 + 0x20))
  ;
  iVar5 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_01684480:
  plVar4 = (long *)RawMachineAssembler::AddNode(this_00,pOVar3,iVar5,ppNVar6);
  return plVar4;
}

