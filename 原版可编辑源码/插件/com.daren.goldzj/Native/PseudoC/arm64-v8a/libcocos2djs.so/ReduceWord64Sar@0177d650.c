
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord64Sar(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord64Sar
          (MachineOperatorReducer *this,Node *param_1)

{
  Graph *this_00;
  long lVar1;
  Operator *pOVar2;
  Node *local_68;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_60 [8];
  undefined8 local_58;
  long local_50;
  char local_48;
  ulong local_38;
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_60,param_1);
  if ((((local_30 == '\0') || (local_38 != 0)) && (local_58 = 0, local_48 != '\0')) &&
     (local_30 != '\0')) {
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Int64Constant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                        local_50 >> (local_38 & 0x3f));
    local_68 = (Node *)0x0;
    local_58 = Graph::NewNode(this_00,pOVar2,0,&local_68,false);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_58);
  }
  return;
}

