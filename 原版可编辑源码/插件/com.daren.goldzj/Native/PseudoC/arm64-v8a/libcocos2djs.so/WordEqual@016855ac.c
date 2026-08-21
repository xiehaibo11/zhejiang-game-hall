
/* v8::internal::compiler::CodeAssembler::WordEqual(v8::internal::TNode<v8::internal::WordT>,
   v8::internal::TNode<v8::internal::WordT>) */

void __thiscall
v8::internal::compiler::CodeAssembler::WordEqual(CodeAssembler *this,Node *param_2,long *param_3)

{
  ushort uVar1;
  Operator *pOVar2;
  int iVar3;
  Node **ppNVar4;
  long lVar5;
  Node *pNVar6;
  long lVar7;
  long *plVar8;
  RawMachineAssembler *this_00;
  Node *local_40;
  long *plStack_38;
  
  ppNVar4 = &local_40;
  lVar5 = *(long *)param_2;
  uVar1 = *(ushort *)(lVar5 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar6 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    lVar5 = **(long **)pNVar6;
    uVar1 = *(ushort *)(lVar5 + 0x10);
  }
  if (uVar1 == 0x18) {
    lVar5 = *(long *)(lVar5 + 0x30);
LAB_01685620:
    lVar7 = *param_3;
    uVar1 = *(ushort *)(lVar7 + 0x10);
    if ((uVar1 & 0xfffe) == 0x1b8) {
      plVar8 = param_3 + 4;
      if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
        plVar8 = (long *)(*plVar8 + 0x10);
      }
      lVar7 = *(long *)*plVar8;
      uVar1 = *(ushort *)(lVar7 + 0x10);
    }
    if (uVar1 == 0x18) {
      lVar7 = *(long *)(lVar7 + 0x30);
    }
    else {
      if (uVar1 != 0x17) goto LAB_01685674;
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
    }
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       ((CommonOperatorBuilder *)(this_00 + 0x48),(uint)(lVar5 == lVar7));
    iVar3 = 0;
    ppNVar4 = (Node **)0x0;
  }
  else {
    if (uVar1 == 0x17) {
      lVar5 = (long)*(int *)(lVar5 + 0x2c);
      goto LAB_01685620;
    }
LAB_01685674:
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    if (this_00[0x30] == (RawMachineAssembler)0x4) {
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)(this_00 + 0x20));
    }
    else {
      pOVar2 = (Operator *)
               MachineOperatorBuilder::Word64Equal((MachineOperatorBuilder *)(this_00 + 0x20));
    }
    iVar3 = 2;
    local_40 = param_2;
    plStack_38 = param_3;
  }
  RawMachineAssembler::AddNode(this_00,pOVar2,iVar3,ppNVar4);
  return;
}

