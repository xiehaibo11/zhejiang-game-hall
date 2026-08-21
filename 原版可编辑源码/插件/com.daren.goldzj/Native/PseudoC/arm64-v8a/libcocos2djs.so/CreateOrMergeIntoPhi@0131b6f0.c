
/* v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
          (WasmGraphBuilder *this,undefined4 param_2,Node *param_3,Node *param_4,Node *param_5)

{
  uint uVar1;
  Graph *this_00;
  long lVar2;
  Node *pNVar3;
  Operator *pOVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  Node **local_c8;
  Node **local_c0;
  long *local_b8;
  Node *local_b0 [9];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((param_4 != (Node *)0x0) && (*(ushort *)(*(long *)param_4 + 0x10) - 0x23 < 2)) &&
     (pNVar3 = (Node *)NodeProperties::GetControlInput(param_4,0), pNVar3 == param_3)) {
    if ((~*(uint *)(param_4 + 0x14) & 0xf000000) == 0) {
      uVar6 = *(uint *)(*(long *)(param_4 + 0x20) + 8);
    }
    else {
      uVar6 = *(uint *)(param_4 + 0x14) >> 0x18 & 0xf;
    }
    Node::InsertInput(param_4,*(Zone **)**(undefined8 **)(this + 8),uVar6 - 1,param_5);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::ResizeMergeOrPhi
                       (*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),*(Operator **)param_4,
                        uVar6);
    NodeProperties::ChangeOp(param_4,pOVar4);
    goto LAB_0131b8ac;
  }
  if (param_4 == param_5) goto LAB_0131b8ac;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    uVar6 = *(uint *)(*(long *)(param_3 + 0x20) + 8);
  }
  else {
    uVar6 = *(uint *)(param_3 + 0x14) >> 0x18 & 0xf;
  }
  uVar1 = uVar6 + 1;
  uVar7 = (ulong)uVar1;
  local_b8 = &local_68;
  local_c8 = local_b0;
  if (uVar1 < 10) {
    local_c0 = local_b0 + uVar7;
    if (uVar6 != 1) goto LAB_0131b7d8;
    uVar7 = 0;
  }
  else {
    local_c0 = local_b0;
    base::SmallVector<v8::internal::compiler::Node*,9ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,9ul> *)&local_c8,uVar7);
    local_c0 = local_c8 + uVar7;
LAB_0131b7d8:
    uVar5 = 0;
    uVar7 = (ulong)(uVar6 - 1);
    do {
      local_c8[uVar5] = param_4;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  local_c8[uVar7] = param_5;
  local_c8[uVar6] = param_3;
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Phi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],param_2,uVar6);
  param_4 = (Node *)Graph::NewNode(this_00,pOVar4,uVar1,local_c8,false);
  if (local_c8 != local_b0) {
    free(local_c8);
  }
LAB_0131b8ac:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

