
/* v8::internal::compiler::JSTypedLowering::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::Reduce(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  SimplifiedOperatorBuilder *pSVar3;
  AccessBuilder *pAVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  long lVar8;
  ulong uVar9;
  Operator *pOVar10;
  Graph *this_00;
  AccessBuilder *local_a8;
  AccessBuilder *pAStack_a0;
  undefined8 local_98;
  long local_90 [7];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar7 = (Node *)0x0;
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x2b1:
    pNVar7 = (Node *)ReduceJSEqual(this,param_1);
    break;
  case 0x2b2:
    pNVar7 = (Node *)ReduceJSStrictEqual(this,param_1);
    break;
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
    pNVar7 = (Node *)ReduceJSComparison(this,param_1);
    break;
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
    pNVar7 = (Node *)ReduceInt32Binop(this,param_1);
    break;
  case 0x2ba:
  case 699:
    pNVar7 = (Node *)ReduceUI32Shift(this,param_1,0);
    break;
  case 700:
    pNVar7 = (Node *)ReduceUI32Shift(this,param_1,1);
    break;
  case 0x2bd:
    pNVar7 = (Node *)ReduceJSAdd(this,param_1);
    break;
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
    pNVar7 = (Node *)ReduceNumberBinop(this,param_1);
    break;
  case 0x2c3:
    pNVar7 = (Node *)ReduceJSHasInPrototypeChain(this,param_1);
    break;
  default:
    goto switchD_0176702c_caseD_2c4;
  case 0x2c5:
    pNVar7 = (Node *)ReduceJSOrdinaryHasInstance(this,param_1);
    break;
  case 0x2c6:
    pNVar7 = (Node *)ReduceJSToLength(this,param_1);
    break;
  case 0x2c7:
    pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,0);
    local_90[0] = *(long *)(pNVar7 + 8);
    if ((local_90[0] == 0x6021) || (uVar9 = Type::SlowIs((Type *)local_90,0x6021), (uVar9 & 1) != 0)
       ) {
LAB_017673c4:
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar7,0,0);
    }
    else {
LAB_017674f8:
      pNVar7 = (Node *)0x0;
    }
    goto switchD_0176702c_caseD_2c4;
  case 0x2c8:
  case 0x2c9:
    pNVar7 = (Node *)ReduceJSToNumber(this,param_1);
    break;
  case 0x2ca:
    lVar8 = NodeProperties::GetValueInput(param_1,0);
    local_90[0] = *(long *)(lVar8 + 8);
    if ((local_90[0] != 0x7fff) && (uVar9 = Type::SlowIs((Type *)local_90,0x7fff), (uVar9 & 1) == 0)
       ) goto LAB_017674f8;
    pOVar10 = (Operator *)
              JSOperatorBuilder::ToNumber(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar10);
    pNVar6 = (Node *)ReduceJSToNumber(this,param_1);
    pNVar7 = param_1;
    if (pNVar6 != (Node *)0x0) {
      pNVar7 = pNVar6;
    }
    goto switchD_0176702c_caseD_2c4;
  case 0x2cb:
    pNVar7 = (Node *)ReduceJSToObject(this,param_1);
    break;
  case 0x2cc:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    pNVar7 = (Node *)ReduceJSToStringInput(this,*(Node **)pNVar7);
    if (pNVar7 != (Node *)0x0) goto LAB_017673c4;
    goto switchD_0176702c_caseD_2c4;
  case 0x2cd:
    pNVar7 = (Node *)ReduceJSParseInt(this,param_1);
    break;
  case 0x2ce:
    pNVar7 = (Node *)ReduceJSBitwiseNot(this,param_1);
    break;
  case 0x2cf:
    pNVar7 = (Node *)ReduceJSDecrement(this,param_1);
    break;
  case 0x2d0:
    pNVar7 = (Node *)ReduceJSIncrement(this,param_1);
    break;
  case 0x2d1:
    pNVar7 = (Node *)ReduceJSNegate(this,param_1);
    break;
  case 0x2ea:
    pNVar7 = (Node *)ReduceJSLoadNamed(this,param_1);
    break;
  case 0x2f5:
    pNVar7 = (Node *)ReduceJSHasContextExtension(this,param_1);
    break;
  case 0x2f6:
    pNVar7 = (Node *)ReduceJSLoadContext(this,param_1);
    break;
  case 0x2f7:
    pNVar7 = (Node *)ReduceJSStoreContext(this,param_1);
    break;
  case 0x2fc:
    pNVar7 = (Node *)ReduceJSCall(this,param_1);
    break;
  case 0x2fd:
    pNVar7 = (Node *)ReduceJSCallForwardVarargs(this,param_1);
    break;
  case 0x300:
    pNVar7 = (Node *)ReduceJSConstructForwardVarargs(this,param_1);
    break;
  case 0x301:
    pNVar7 = (Node *)ReduceJSConstruct(this,param_1);
    break;
  case 0x309:
    pNVar7 = (Node *)ReduceJSForInNext(this,param_1);
    break;
  case 0x30a:
    pNVar7 = (Node *)ReduceJSForInPrepare(this,param_1);
    break;
  case 0x30c:
    pNVar7 = (Node *)ReduceJSLoadMessage(this,param_1);
    break;
  case 0x30d:
    pNVar7 = (Node *)ReduceJSStoreMessage(this,param_1);
    break;
  case 0x30e:
    pAVar4 = (AccessBuilder *)NodeProperties::GetEffectInput(param_1,0);
    uVar5 = NodeProperties::GetControlInput(param_1,0);
    local_a8 = (AccessBuilder *)BuildGetModuleCell(this,param_1);
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar3 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    pAStack_a0 = pAVar4;
    if (*(char *)(*(long *)local_a8 + 0x24) != '\0') {
      pAStack_a0 = local_a8;
    }
    AccessBuilder::ForCellValue(local_a8);
    pOVar10 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar3,(FieldAccess *)local_90);
    local_98 = uVar5;
    pNVar7 = (Node *)Graph::NewNode(this_00,pOVar10,3,(Node **)&local_a8,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar7,pNVar7,uVar5);
    goto switchD_0176702c_caseD_2c4;
  case 0x30f:
    pNVar7 = (Node *)ReduceJSStoreModule(this,param_1);
    break;
  case 0x310:
    pNVar7 = (Node *)ReduceJSGeneratorStore(this,param_1);
    break;
  case 0x311:
    pNVar7 = (Node *)ReduceJSGeneratorRestoreContinuation(this,param_1);
    break;
  case 0x312:
    pSVar3 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
    AccessBuilder::ForJSGeneratorObjectContext((AccessBuilder *)this);
    goto LAB_0176735c;
  case 0x313:
    pNVar7 = (Node *)ReduceJSGeneratorRestoreRegister(this,param_1);
    break;
  case 0x314:
    AccessBuilder::ForJSGeneratorObjectInputOrDebugPos((AccessBuilder *)this);
    pSVar3 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
LAB_0176735c:
    pOVar10 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar3,(FieldAccess *)local_90);
    iVar2 = NodeProperties::PastValueIndex(param_1);
    Node::RemoveInput(param_1,iVar2);
LAB_017674d8:
    NodeProperties::ChangeOp(param_1,pOVar10);
    pNVar7 = param_1;
switchD_0176702c_caseD_2c4:
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return pNVar7;
    }
    goto LAB_01767508;
  case 0x319:
    lVar8 = NodeProperties::GetValueInput(param_1,1);
    local_90[0] = *(long *)(lVar8 + 8);
    if ((local_90[0] != 0x8007fff) &&
       (uVar9 = Type::SlowIs((Type *)local_90,0x8007fff), (uVar9 & 1) == 0)) {
      pNVar7 = (Node *)0x0;
      goto switchD_0176702c_caseD_2c4;
    }
    Node::RemoveInput(param_1,3);
    pOVar10 = (Operator *)
              JSOperatorBuilder::FulfillPromise
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_017674d8;
  case 0x31b:
    pNVar7 = (Node *)ReduceObjectIsArray(this,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pNVar7;
  }
LAB_01767508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

