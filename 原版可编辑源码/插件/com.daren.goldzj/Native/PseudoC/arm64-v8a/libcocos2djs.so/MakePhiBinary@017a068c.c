
/* v8::internal::compiler::RawMachineAssembler::MakePhiBinary(v8::internal::compiler::Node*, int,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::MakePhiBinary
          (RawMachineAssembler *this,Node *param_1,int param_2,Node *param_3,Node *param_4)

{
  Node *pNVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Node *pNVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Node *this_00;
  Node *this_01;
  Node *pNVar8;
  int iVar9;
  Graph *pGVar10;
  Use *pUVar11;
  Node *local_88;
  Node **local_80;
  Node **local_78;
  Node **ppNStack_70;
  Node *local_68;
  Node *local_48;
  
  iVar2 = *(int *)(*(Operator **)param_1 + 0x14);
  if (iVar2 == 2) {
    return;
  }
  local_68 = param_4;
  local_48 = param_3;
  uVar4 = PhiRepresentationOf(*(Operator **)param_1);
  iVar3 = iVar2 - param_2;
  if (param_2 == 1) {
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,0);
  }
  else {
    local_78 = (Node **)0x0;
    ppNStack_70 = (Node **)0x0;
    local_80 = (Node **)0x0;
    if (param_2 < 1) {
LAB_017a0798:
      std::__ndk1::
      vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>::
      __push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                  *)&local_80,&local_48);
    }
    else {
      iVar9 = 0;
      do {
        local_88 = (Node *)NodeProperties::GetValueInput(param_1,iVar9);
        if (local_78 < ppNStack_70) {
          *local_78 = local_88;
          local_78 = local_78 + 1;
        }
        else {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
          ::__push_back_slow_path<v8::internal::compiler::Node*>
                    ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                      *)&local_80,&local_88);
        }
        iVar9 = iVar9 + 1;
      } while (param_2 != iVar9);
      if (local_78 == ppNStack_70) goto LAB_017a0798;
      *local_78 = local_48;
      local_78 = local_78 + 1;
    }
    pGVar10 = *(Graph **)(this + 8);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(this + 0x48),uVar4,param_2);
    pNVar5 = (Node *)Graph::NewNode(pGVar10,pOVar6,
                                    (int)((ulong)((long)local_78 - (long)local_80) >> 3),local_80,
                                    false);
    if (local_80 != (Node **)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  if (iVar3 == 1) {
    pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,param_2);
    goto LAB_017a08f4;
  }
  local_78 = (Node **)0x0;
  ppNStack_70 = (Node **)0x0;
  local_80 = (Node **)0x0;
  if (param_2 < iVar2) {
    do {
      local_88 = (Node *)NodeProperties::GetValueInput(param_1,param_2);
      if (local_78 < ppNStack_70) {
        *local_78 = local_88;
        local_78 = local_78 + 1;
      }
      else {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*>
                  ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                    *)&local_80,&local_88);
      }
      param_2 = param_2 + 1;
    } while (iVar2 != param_2);
    if (local_78 == ppNStack_70) goto LAB_017a089c;
    *local_78 = local_68;
    local_78 = local_78 + 1;
  }
  else {
LAB_017a089c:
    std::__ndk1::
    vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>::
    __push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                *)&local_80,&local_68);
  }
  pGVar10 = *(Graph **)(this + 8);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(this + 0x48),uVar4,iVar3);
  pNVar7 = (Node *)Graph::NewNode(pGVar10,pOVar6,
                                  (int)((ulong)((long)local_78 - (long)local_80) >> 3),local_80,
                                  false);
  if (local_80 != (Node **)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_017a08f4:
  this_00 = (Node *)NodeProperties::GetControlInput(param_1,0);
  Node::TrimInputCount(param_1,3);
  pNVar1 = param_1 + 0x20;
  pNVar8 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar8;
  if (this_01 != pNVar5) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar11 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar11 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar11);
    }
    *(Node **)pNVar8 = pNVar5;
    if (pNVar5 != (Node *)0x0) {
      Node::AppendUse(pNVar5,pUVar11);
    }
  }
  pNVar5 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar8 = *(Node **)(pNVar5 + 8);
  if (pNVar8 != pNVar7) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar11 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar11 = (Use *)(param_1 + -0x30);
    }
    if (pNVar8 != (Node *)0x0) {
      Node::RemoveUse(pNVar8,pUVar11);
    }
    *(Node **)(pNVar5 + 8) = pNVar7;
    if (pNVar7 != (Node *)0x0) {
      Node::AppendUse(pNVar7,pUVar11);
    }
  }
  pNVar5 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar7 = *(Node **)(pNVar5 + 0x10);
  if (pNVar7 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar11 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar11 = (Use *)(param_1 + -0x48);
    }
    if (pNVar7 != (Node *)0x0) {
      Node::RemoveUse(pNVar7,pUVar11);
    }
    *(Node **)(pNVar5 + 0x10) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar11);
    }
  }
  pOVar6 = (Operator *)CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(this + 0x48),uVar4,2);
  NodeProperties::ChangeOp(param_1,pOVar6);
  return;
}

