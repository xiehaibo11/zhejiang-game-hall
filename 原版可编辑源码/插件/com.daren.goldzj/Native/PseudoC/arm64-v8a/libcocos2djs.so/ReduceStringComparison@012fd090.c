
/* v8::internal::compiler::TypedOptimization::ReduceStringComparison(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceStringComparison
          (TypedOptimization *this,Node *param_1)

{
  short sVar1;
  Node *pNVar2;
  Node *pNVar3;
  ulong uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  Graph *pGVar9;
  long local_60;
  long lStack_58;
  Node *local_50;
  Node *pNStack_48;
  
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(short *)(*(long *)pNVar2 + 0x10) == 0xcc) {
    if (*(short *)(*(long *)pNVar3 + 0x10) != 0xcc) {
      uVar6 = *(undefined8 *)(pNVar3 + 8);
      uVar7 = 0;
      pNVar3 = pNVar2;
LAB_012fd2c0:
      uVar6 = TryReduceStringComparisonOfStringFromSingleCharCode(this,param_1,pNVar3,uVar6,uVar7);
      return uVar6;
    }
    pNVar2 = (Node *)NodeProperties::GetValueInput(pNVar2,0);
    pNVar3 = (Node *)NodeProperties::GetValueInput(pNVar3,0);
    lStack_58 = *(long *)(pNVar2 + 8);
    local_60 = *(long *)(pNVar3 + 8);
    if ((lStack_58 != *(long *)(*(long *)(this + 0x38) + 0x80)) &&
       (uVar4 = Type::SlowIs((Type *)&lStack_58), (uVar4 & 1) == 0)) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberToInt32
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      local_50 = pNVar2;
      pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar5,1,&local_50,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberBitwiseAnd
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      pNStack_48 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x18),65535.0);
      local_50 = pNVar2;
      pNVar2 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_50,false);
    }
    if ((local_60 != *(long *)(*(long *)(this + 0x38) + 0x80)) &&
       (uVar4 = Type::SlowIs((Type *)&local_60), (uVar4 & 1) == 0)) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberToInt32
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      local_50 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar5,1,&local_50,false);
      pGVar9 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberBitwiseAnd
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      pNStack_48 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x18),65535.0);
      local_50 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(pGVar9,pOVar5,2,&local_50,false);
    }
    puVar8 = *(undefined8 **)(this + 0x18);
    sVar1 = *(short *)(*(long *)param_1 + 0x10);
    pGVar9 = (Graph *)*puVar8;
    if (sVar1 == 0x7b) {
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberLessThanOrEqual
                         ((SimplifiedOperatorBuilder *)puVar8[0x2f]);
    }
    else if (sVar1 == 0x7a) {
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberLessThan((SimplifiedOperatorBuilder *)puVar8[0x2f]);
    }
    else {
      if (sVar1 != 0x79) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual((SimplifiedOperatorBuilder *)puVar8[0x2f]);
    }
    local_50 = pNVar2;
    pNStack_48 = pNVar3;
    uVar6 = Graph::NewNode(pGVar9,pOVar5,2,&local_50,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,0,0);
  }
  else {
    if (*(short *)(*(long *)pNVar3 + 0x10) == 0xcc) {
      uVar6 = *(undefined8 *)(pNVar2 + 8);
      uVar7 = 1;
      goto LAB_012fd2c0;
    }
    uVar6 = 0;
  }
  return uVar6;
}

