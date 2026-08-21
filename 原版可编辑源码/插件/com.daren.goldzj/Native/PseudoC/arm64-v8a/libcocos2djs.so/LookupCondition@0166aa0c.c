
/* v8::internal::compiler::BranchElimination::ControlPathConditions::LookupCondition(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, bool*) const */

undefined8 __thiscall
v8::internal::compiler::BranchElimination::ControlPathConditions::LookupCondition
          (ControlPathConditions *this,Node *param_1,Node **param_2,bool *param_3)

{
  undefined8 *puVar1;
  Node *pNVar2;
  
  puVar1 = *(undefined8 **)this;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if ((Node *)*puVar1 == param_1) break;
    puVar1 = (undefined8 *)puVar1[3];
  }
  pNVar2 = (Node *)puVar1[1];
  *param_3 = (bool)(*(byte *)(puVar1 + 2) & 1);
  *param_2 = pNVar2;
  return 1;
}

