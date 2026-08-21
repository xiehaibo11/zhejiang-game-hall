
/* v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoEffectPhi(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoEffectPhi
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,Node *param_3)

{
  uint uVar1;
  Graph *this_00;
  long lVar2;
  Node *pNVar3;
  Operator *pOVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  Node **local_b8;
  Node **local_b0;
  long *local_a8;
  Node *local_a0 [9];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((param_2 != (Node *)0x0) && (*(ushort *)(*(long *)param_2 + 0x10) - 0x23 < 2)) &&
     (pNVar3 = (Node *)NodeProperties::GetControlInput(param_2,0), pNVar3 == param_1)) {
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      uVar7 = *(uint *)(*(long *)(param_2 + 0x20) + 8);
    }
    else {
      uVar7 = *(uint *)(param_2 + 0x14) >> 0x18 & 0xf;
    }
    Node::InsertInput(param_2,*(Zone **)**(undefined8 **)(this + 8),uVar7 - 1,param_3);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::ResizeMergeOrPhi
                       (*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),*(Operator **)param_2,
                        uVar7);
    NodeProperties::ChangeOp(param_2,pOVar4);
    goto LAB_0131ba94;
  }
  if (param_2 == param_3) goto LAB_0131ba94;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  uVar1 = uVar7 + 1;
  uVar6 = (ulong)uVar1;
  local_a8 = &local_58;
  local_b8 = local_a0;
  if (uVar1 < 10) {
    local_b0 = local_a0 + uVar6;
    if (uVar7 != 1) goto LAB_0131b9c4;
    uVar6 = 0;
  }
  else {
    local_b0 = local_a0;
    base::SmallVector<v8::internal::compiler::Node*,9ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,9ul> *)&local_b8,uVar6);
    local_b0 = local_b8 + uVar6;
LAB_0131b9c4:
    uVar5 = 0;
    uVar6 = (ulong)(uVar7 - 1);
    do {
      local_b8[uVar5] = param_2;
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  local_b8[uVar6] = param_3;
  local_b8[uVar7] = param_1;
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar7);
  param_2 = (Node *)Graph::NewNode(this_00,pOVar4,uVar1,local_b8,false);
  if (local_b8 != local_a0) {
    free(local_b8);
  }
LAB_0131ba94:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

