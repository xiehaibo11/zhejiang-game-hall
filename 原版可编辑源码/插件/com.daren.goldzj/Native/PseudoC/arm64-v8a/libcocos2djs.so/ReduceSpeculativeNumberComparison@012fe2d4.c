
/* v8::internal::compiler::TypedOptimization::ReduceSpeculativeNumberComparison(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceSpeculativeNumberComparison
          (TypedOptimization *this,Node *param_1)

{
  Node *pNVar1;
  long lVar2;
  ulong uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  long lVar6;
  Graph *this_00;
  Node *pNVar7;
  Node *local_58;
  long lStack_50;
  long local_48;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar2 = NodeProperties::GetValueInput(param_1,1);
  pNVar7 = *(Node **)(pNVar1 + 8);
  lVar6 = *(long *)(lVar2 + 8);
  local_58 = pNVar7;
  local_48 = lVar6;
  if ((((pNVar7 == (Node *)0x44b) ||
       (uVar3 = Type::SlowIs((Type *)&local_58,1099), (uVar3 & 1) != 0)) &&
      ((local_48 == 1099 || (uVar3 = Type::SlowIs((Type *)&local_48,1099), (uVar3 & 1) != 0)))) ||
     (((local_58 = pNVar7, local_48 = lVar6, pNVar7 == (Node *)0x407 ||
       (uVar3 = Type::SlowIs((Type *)&local_58,0x407), (uVar3 & 1) != 0)) &&
      ((local_48 == 0x407 || (uVar3 = Type::SlowIs((Type *)&local_48,0x407), (uVar3 & 1) != 0))))))
  {
    this_00 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar4 = (Operator *)FUN_012fe9dc((*(undefined8 **)(this + 0x18))[0x2f],*(undefined8 *)param_1);
    local_58 = pNVar1;
    lStack_50 = lVar2;
    uVar5 = Graph::NewNode(this_00,pOVar4,2,&local_58,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar5,0,0);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

