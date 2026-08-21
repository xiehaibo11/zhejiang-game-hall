
/* v8::internal::compiler::TypedOptimization::ConvertPlainPrimitiveToNumber(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::TypedOptimization::ConvertPlainPrimitiveToNumber
          (TypedOptimization *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  Operator *pOVar3;
  Graph *this_00;
  Node *local_28;
  
  pNVar1 = (Node *)ReduceJSToNumberInput(this,param_1);
  if (((pNVar1 == (Node *)0x0) &&
      (local_28 = *(Node **)(param_1 + 8), pNVar1 = param_1, local_28 != (Node *)0x1c5f)) &&
     (uVar2 = Type::SlowIs((Type *)&local_28,0x1c5f), (uVar2 & 1) == 0)) {
    this_00 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::PlainPrimitiveToNumber
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
    local_28 = param_1;
    pNVar1 = (Node *)Graph::NewNode(this_00,pOVar3,1,&local_28,false);
  }
  return pNVar1;
}

