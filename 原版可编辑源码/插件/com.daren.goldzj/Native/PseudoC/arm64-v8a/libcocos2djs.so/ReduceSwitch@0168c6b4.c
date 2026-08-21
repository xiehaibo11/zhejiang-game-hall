
/* v8::internal::compiler::CommonOperatorReducer::ReduceSwitch(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceSwitch
          (CommonOperatorReducer *this,Node *param_1)

{
  Node **ppNVar1;
  int iVar2;
  long lVar3;
  Zone *this_00;
  int *piVar4;
  long *plVar5;
  Node **ppNVar6;
  ulong uVar7;
  undefined8 uVar8;
  Node *pNVar9;
  ulong uVar10;
  
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  if (*(short *)(**(long **)pNVar9 + 0x10) == 0x17) {
    this_00 = *(Zone **)(this + 0x38);
    uVar8 = *(undefined8 *)(pNVar9 + 8);
    iVar2 = *(int *)(**(long **)pNVar9 + 0x2c);
    uVar10 = (ulong)*(int *)(*(long *)param_1 + 0x28);
    ppNVar6 = *(Node ***)(this_00 + 0x10);
    uVar7 = uVar10 * 8;
    if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar6) ||
        uVar7 - (*(long *)(this_00 + 0x18) - (long)ppNVar6) == 0) {
      *(Node ***)(this_00 + 0x10) = ppNVar6 + uVar10;
    }
    else {
      ppNVar6 = (Node **)Zone::NewExpand(this_00,uVar7);
    }
    NodeProperties::CollectControlProjections(param_1,ppNVar6,uVar10);
    ppNVar1 = ppNVar6;
    for (lVar3 = uVar10 - 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      pNVar9 = *ppNVar1;
      piVar4 = (int *)IfValueParametersOf(*(Operator **)pNVar9);
      if (*piVar4 == iVar2) {
        plVar5 = *(long **)(this + 8);
        goto LAB_0168c794;
      }
      ppNVar1 = ppNVar1 + 1;
    }
    plVar5 = *(long **)(this + 8);
    pNVar9 = ppNVar6[uVar10 - 1];
LAB_0168c794:
    (**(code **)(*plVar5 + 0x10))(plVar5,pNVar9,uVar8);
    uVar8 = *(undefined8 *)(this + 0x30);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

