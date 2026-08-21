
/* v8::internal::compiler::MachineOperatorReducer::ReduceInt64Sub(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceInt64Sub
          (MachineOperatorReducer *this,Node *param_1)

{
  long lVar1;
  Node *this_00;
  Node *this_01;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *pGVar4;
  Use *pUVar5;
  Node *pNVar6;
  Node *local_88;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_80 [8];
  Node *local_78;
  long local_70;
  char local_68;
  Node *local_60;
  long local_58;
  char local_50;
  long local_48;
  CommonOperatorBuilder *this_02;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_80,param_1);
  if ((local_50 == '\0') || (local_58 != 0)) {
    if ((local_68 == '\0') || (local_50 == '\0')) {
      if (local_78 != local_60) {
        if (local_50 == '\0') {
          local_78 = (Node *)0x0;
        }
        else {
          pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar2 = (Operator *)
                   CommonOperatorBuilder::Int64Constant
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],-local_58)
          ;
          local_88 = (Node *)0x0;
          this_00 = (Node *)Graph::NewNode(pGVar4,pOVar2,0,&local_88,false);
          pNVar3 = param_1 + 0x20;
          pNVar6 = pNVar3;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar6 = (Node *)(*(long *)pNVar3 + 0x10);
          }
          this_01 = *(Node **)(pNVar6 + 8);
          if (this_01 != this_00) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar5 = (Use *)(*(long *)pNVar3 + -0x30);
            }
            else {
              pUVar5 = (Use *)(param_1 + -0x30);
            }
            if (this_01 != (Node *)0x0) {
              Node::RemoveUse(this_01,pUVar5);
            }
            *(Node **)(pNVar6 + 8) = this_00;
            if (this_00 != (Node *)0x0) {
              Node::AppendUse(this_00,pUVar5);
            }
          }
          pOVar2 = (Operator *)
                   MachineOperatorBuilder::Int64Add
                             (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          NodeProperties::ChangeOp(param_1,pOVar2);
          pNVar3 = (Node *)ReduceInt64Add(this,param_1);
          local_78 = param_1;
          if (pNVar3 != (Node *)0x0) {
            local_78 = pNVar3;
          }
        }
        goto LAB_0177dad8;
      }
      local_70 = 0;
      pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
      this_02 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
    }
    else {
      pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
      this_02 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
      local_70 = local_70 - local_58;
    }
    pOVar2 = (Operator *)CommonOperatorBuilder::Int64Constant(this_02,local_70);
    local_88 = (Node *)0x0;
    local_78 = (Node *)Graph::NewNode(pGVar4,pOVar2,0,&local_88,false);
  }
LAB_0177dad8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78);
}

