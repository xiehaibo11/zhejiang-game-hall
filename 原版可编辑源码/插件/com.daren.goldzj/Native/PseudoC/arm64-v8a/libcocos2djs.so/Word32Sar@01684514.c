
/* v8::internal::compiler::CodeAssembler::Word32Sar(v8::internal::SloppyTNode<v8::internal::Word32T>,
   v8::internal::SloppyTNode<v8::internal::Word32T>) */

long * __thiscall
v8::internal::compiler::CodeAssembler::Word32Sar(CodeAssembler *this,Node *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  Operator *pOVar3;
  long *plVar4;
  Node **ppNVar5;
  int iVar6;
  long lVar7;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar5 = &local_40;
  lVar7 = *(long *)param_2;
  if (*(short *)(lVar7 + 0x10) == 0x18) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (lVar7 == (int)lVar7) goto LAB_0168455c;
LAB_01684564:
    iVar6 = (int)lVar7;
    bVar1 = false;
  }
  else {
    if (*(short *)(lVar7 + 0x10) != 0x17) goto LAB_01684564;
    lVar7 = (long)*(int *)(lVar7 + 0x2c);
LAB_0168455c:
    iVar6 = (int)lVar7;
    bVar1 = true;
  }
  lVar7 = *param_3;
  if (*(short *)(lVar7 + 0x10) == 0x18) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (lVar7 != (int)lVar7) goto LAB_016845d0;
    bVar2 = true;
    if (!bVar1) goto LAB_016845d8;
LAB_016845a4:
    if (bVar2) {
      this_00 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Int32Constant
                         ((CommonOperatorBuilder *)(this_00 + 0x48),iVar6 >> ((uint)lVar7 & 0x1f));
      iVar6 = 0;
      ppNVar5 = (Node **)0x0;
      goto LAB_0168460c;
    }
  }
  else {
    if (*(short *)(lVar7 + 0x10) == 0x17) {
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
      bVar2 = true;
    }
    else {
LAB_016845d0:
      bVar2 = false;
    }
    if (bVar1) goto LAB_016845a4;
LAB_016845d8:
    if ((bool)(bVar2 & (int)lVar7 == 0)) {
      return (long *)param_2;
    }
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar3 = (Operator *)MachineOperatorBuilder::Word32Sar((MachineOperatorBuilder *)(this_00 + 0x20))
  ;
  iVar6 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_0168460c:
  plVar4 = (long *)RawMachineAssembler::AddNode(this_00,pOVar3,iVar6,ppNVar5);
  return plVar4;
}

