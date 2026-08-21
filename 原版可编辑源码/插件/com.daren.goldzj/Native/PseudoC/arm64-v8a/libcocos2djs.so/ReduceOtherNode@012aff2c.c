
/* v8::internal::compiler::RedundancyElimination::ReduceOtherNode(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::RedundancyElimination::ReduceOtherNode
          (RedundancyElimination *this,Node *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(long *)param_1 + 0x18) == 1) && (*(char *)(*(long *)param_1 + 0x24) == '\x01')) {
    uVar1 = TakeChecksFromFirstEffect(this,param_1);
    return uVar1;
  }
  return 0;
}

