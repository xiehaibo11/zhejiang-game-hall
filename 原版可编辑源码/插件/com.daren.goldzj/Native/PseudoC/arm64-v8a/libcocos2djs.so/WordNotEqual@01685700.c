
/* v8::internal::compiler::CodeAssembler::WordNotEqual(v8::internal::TNode<v8::internal::WordT>,
   v8::internal::TNode<v8::internal::WordT>) */

void __thiscall
v8::internal::compiler::CodeAssembler::WordNotEqual(CodeAssembler *this,Node *param_2,long *param_3)

{
  MachineOperatorBuilder *this_00;
  ushort uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  int iVar5;
  Node **ppNVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  RawMachineAssembler *this_01;
  Node *local_40;
  long *plStack_38;
  
  ppNVar6 = &local_40;
  lVar7 = *(long *)param_2;
  uVar1 = *(ushort *)(lVar7 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar2 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar7 = **(long **)pNVar2;
    uVar1 = *(ushort *)(lVar7 + 0x10);
  }
  if (uVar1 == 0x18) {
    lVar7 = *(long *)(lVar7 + 0x30);
LAB_01685774:
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
      lVar8 = *(long *)(lVar8 + 0x30);
    }
    else {
      if (uVar1 != 0x17) goto LAB_016857c8;
      lVar8 = (long)*(int *)(lVar8 + 0x2c);
    }
    this_01 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       ((CommonOperatorBuilder *)(this_01 + 0x48),(uint)(lVar7 != lVar8));
    iVar5 = 0;
    ppNVar6 = (Node **)0x0;
  }
  else {
    if (uVar1 == 0x17) {
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
      goto LAB_01685774;
    }
LAB_016857c8:
    this_01 = (RawMachineAssembler *)**(undefined8 **)this;
    this_00 = (MachineOperatorBuilder *)(this_01 + 0x20);
    if (this_01[0x30] == (RawMachineAssembler)0x4) {
      pOVar4 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    }
    else {
      pOVar4 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
    }
    local_40 = param_2;
    plStack_38 = param_3;
    pNVar2 = (Node *)RawMachineAssembler::AddNode(this_01,pOVar4,2,&local_40);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this_01 + 0x48),0);
    uVar3 = RawMachineAssembler::AddNode(this_01,pOVar4,0,(Node **)0x0);
    pOVar4 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
    iVar5 = 2;
    local_40 = pNVar2;
    plStack_38 = (long *)uVar3;
  }
  RawMachineAssembler::AddNode(this_01,pOVar4,iVar5,ppNVar6);
  return;
}

