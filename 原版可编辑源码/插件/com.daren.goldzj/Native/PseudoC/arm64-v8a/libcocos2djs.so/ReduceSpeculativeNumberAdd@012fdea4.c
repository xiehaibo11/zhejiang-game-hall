
/* v8::internal::compiler::TypedOptimization::ReduceSpeculativeNumberAdd(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceSpeculativeNumberAdd
          (TypedOptimization *this,Node *param_1)

{
  char cVar1;
  Node *pNVar2;
  Node *pNVar3;
  ulong uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  Graph *pGVar7;
  Node *pNVar8;
  long lVar9;
  Node *local_58;
  Node *pNStack_50;
  long local_48;
  
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
  lVar9 = *(long *)(pNVar3 + 8);
  pNVar8 = *(Node **)(pNVar2 + 8);
  cVar1 = NumberOperationHintOf(*(Operator **)param_1);
  if (((((byte)(cVar1 - 3U) < 2) &&
       ((local_58 = pNVar8, local_48 = lVar9, pNVar8 == (Node *)0x5fff ||
        (uVar4 = Type::SlowIs((Type *)&local_58,0x5fff), (uVar4 & 1) != 0)))) &&
      ((local_48 == 0x5fff || (uVar4 = Type::SlowIs((Type *)&local_48,0x5fff), (uVar4 & 1) != 0))))
     && ((local_58 = pNVar8, local_48 = lVar9, uVar4 = Type::Maybe((Type *)&local_58,0x47f4021),
         (uVar4 & 1) == 0 && (uVar4 = Type::Maybe((Type *)&local_48,0x47f4021), (uVar4 & 1) == 0))))
  {
    pNVar8 = (Node *)ReduceJSToNumberInput(this,pNVar2);
    if ((pNVar8 == (Node *)0x0) &&
       ((local_58 = *(Node **)(pNVar2 + 8), pNVar8 = pNVar2, local_58 != (Node *)0x1c5f &&
        (uVar4 = Type::SlowIs((Type *)&local_58,0x1c5f), (uVar4 & 1) == 0)))) {
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::PlainPrimitiveToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      local_58 = pNVar2;
      pNVar8 = (Node *)Graph::NewNode(pGVar7,pOVar5,1,&local_58,false);
    }
    pNStack_50 = (Node *)ReduceJSToNumberInput(this,pNVar3);
    if (((pNStack_50 == (Node *)0x0) &&
        (local_58 = *(Node **)(pNVar3 + 8), pNStack_50 = pNVar3, local_58 != (Node *)0x1c5f)) &&
       (uVar4 = Type::SlowIs((Type *)&local_58,0x1c5f), (uVar4 & 1) == 0)) {
      pGVar7 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::PlainPrimitiveToNumber
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      local_58 = pNVar3;
      pNStack_50 = (Node *)Graph::NewNode(pGVar7,pOVar5,1,&local_58,false);
    }
    pGVar7 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::NumberAdd
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
    local_58 = pNVar8;
    uVar6 = Graph::NewNode(pGVar7,pOVar5,2,&local_58,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,0,0);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

