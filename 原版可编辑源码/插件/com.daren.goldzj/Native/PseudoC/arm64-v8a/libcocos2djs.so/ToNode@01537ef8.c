
/* v8::internal::RegExpLookaround::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*)
    */

void __thiscall
v8::internal::RegExpLookaround::ToNode
          (RegExpLookaround *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RegExpCompiler RVar4;
  RegExpLookaround RVar5;
  undefined8 *puVar6;
  RegExpNode *pRVar7;
  NegativeLookaroundChoiceNode *pNVar8;
  int iVar9;
  Zone *pZVar10;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xffff) {
    iVar9 = iVar2 + 1;
    *(int *)(param_1 + 8) = iVar9;
    if (iVar2 != 0xfffe) {
      *(int *)(param_1 + 8) = iVar2 + 2;
      goto LAB_01537f6c;
    }
    iVar9 = 0xffff;
  }
  else {
    param_1[0x31] = (RegExpCompiler)0x1;
    iVar9 = iVar2;
  }
  param_1[0x31] = (RegExpCompiler)0x1;
LAB_01537f6c:
  iVar1 = *(int *)(this + 0x18);
  iVar3 = *(int *)(this + 0x14);
  RVar4 = param_1[0x34];
  param_1[0x34] = (RegExpCompiler)(*(int *)(this + 0x1c) == 1);
  RVar5 = this[0x10];
  iVar1 = iVar1 * 2 + 2;
  if (RVar5 == (RegExpLookaround)0x0) {
    pZVar10 = *(Zone **)(param_2 + 0x30);
    puVar6 = *(undefined8 **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar6) < 0x50) {
      puVar6 = (undefined8 *)Zone::NewExpand(pZVar10,0x50);
    }
    else {
      *(undefined8 **)(pZVar10 + 0x10) = puVar6 + 10;
    }
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[5] = 0;
    puVar6[6] = pZVar10;
    puVar6[4] = 0;
    *(int *)(puVar6 + 8) = iVar9;
    *(int *)((long)puVar6 + 0x44) = iVar3 << 1;
    *(undefined4 *)(puVar6 + 7) = 2;
    *(int *)((long)puVar6 + 0x3c) = iVar2;
    *(int *)(puVar6 + 9) = iVar1;
    *puVar6 = &PTR__RegExpNode_01cc8798;
    puVar6[1] = 0;
  }
  else {
    puVar6 = (undefined8 *)ActionNode::PositiveSubmatchSuccess(iVar2,iVar9,iVar3 << 1,iVar1,param_2)
    ;
  }
  pRVar7 = (RegExpNode *)
           (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_1,puVar6);
  pNVar8 = (NegativeLookaroundChoiceNode *)pRVar7;
  if (RVar5 == (RegExpLookaround)0x0) {
    pZVar10 = *(Zone **)(param_2 + 0x30);
    pNVar8 = *(NegativeLookaroundChoiceNode **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pNVar8) < 0x48) {
      pNVar8 = (NegativeLookaroundChoiceNode *)Zone::NewExpand(pZVar10,0x48);
    }
    else {
      *(NegativeLookaroundChoiceNode **)(pZVar10 + 0x10) = pNVar8 + 0x48;
    }
    NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode(pNVar8,pRVar7,0,param_2,0,pZVar10);
  }
  ActionNode::BeginSubmatch(iVar2,iVar9,(RegExpNode *)pNVar8);
  param_1[0x34] = RVar4;
  return;
}

