
/* v8::internal::compiler::MachineOperatorReducer::ReduceStore(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceStore
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  char cVar2;
  Operator *pOVar3;
  char *pcVar4;
  Node *this_00;
  Node *pNVar5;
  uint uVar6;
  Use *pUVar7;
  Node *pNVar8;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_80 [8];
  Node *local_78;
  int local_60;
  char local_5c;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_58 [8];
  Node *local_50;
  int local_38;
  char local_34;
  
  pOVar3 = *(Operator **)param_1;
  if (*(short *)(pOVar3 + 0x10) == 0x1ac) {
    pcVar4 = (char *)StoreRepresentationOf(pOVar3);
  }
  else {
    pcVar4 = (char *)UnalignedStoreRepresentationOf(pOVar3);
  }
  cVar2 = *pcVar4;
  pNVar1 = param_1 + 0x20;
  pNVar5 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar5 = *(Node **)(pNVar5 + 0x10);
  if (*(short *)(*(long *)pNVar5 + 0x10) == 0x12d) {
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)aBStack_58,pNVar5);
    if (*(short *)(*(long *)local_50 + 0x10) == 299) {
      if (cVar2 == '\x03') {
        if (local_34 == '\0') {
          return (Node *)0x0;
        }
        if (0xf < local_38 - 1U) {
          return (Node *)0x0;
        }
      }
      else {
        if (cVar2 != '\x02') {
          return (Node *)0x0;
        }
        if (local_34 == '\0') {
          return (Node *)0x0;
        }
        if (0x17 < local_38 - 1U) {
          return (Node *)0x0;
        }
      }
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher(aBStack_80,local_50);
      if ((local_5c != '\0') && (local_60 == local_38)) {
        uVar6 = *(uint *)(param_1 + 0x14);
        pNVar5 = local_78;
        goto LAB_0177ee34;
      }
    }
  }
  else if ((*(short *)(*(long *)pNVar5 + 0x10) == 0x128) &&
          (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
           ::BinopMatcher(aBStack_58,pNVar5), local_34 != '\0')) {
    if (cVar2 == '\x03') {
      if ((short)local_38 != -1) {
        return (Node *)0x0;
      }
    }
    else {
      if (cVar2 != '\x02') {
        return (Node *)0x0;
      }
      if ((char)local_38 != -1) {
        return (Node *)0x0;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x14);
    pNVar5 = local_50;
LAB_0177ee34:
    pNVar8 = pNVar1;
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_00 = *(Node **)(pNVar8 + 0x10);
    if (this_00 == pNVar5) {
      return param_1;
    }
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pUVar7 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar7 = (Use *)(param_1 + -0x48);
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,pUVar7);
    }
    *(Node **)(pNVar8 + 0x10) = pNVar5;
    if (pNVar5 != (Node *)0x0) {
      Node::AppendUse(pNVar5,pUVar7);
      return param_1;
    }
    return param_1;
  }
  return (Node *)0x0;
}

