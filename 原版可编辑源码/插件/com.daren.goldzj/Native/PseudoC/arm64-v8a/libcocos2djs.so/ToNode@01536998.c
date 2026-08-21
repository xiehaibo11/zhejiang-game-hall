
/* v8::internal::RegExpQuantifier::ToNode(int, int, bool, v8::internal::RegExpTree*,
   v8::internal::RegExpCompiler*, v8::internal::RegExpNode*, bool) */

RegExpNode *
v8::internal::RegExpQuantifier::ToNode
          (int param_1,int param_2,bool param_3,RegExpTree *param_4,RegExpCompiler *param_5,
          RegExpNode *param_6,bool param_7)

{
  bool bVar1;
  int iVar2;
  RegExpCompiler RVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  RegExpNode *pRVar9;
  RegExpNode *pRVar10;
  Zone *this;
  long *plVar11;
  long *plVar12;
  Guard *pGVar13;
  long lVar14;
  int iVar15;
  Zone *this_00;
  int local_b0;
  RegExpNode *local_90;
  undefined8 uStack_88;
  RegExpNode *local_80;
  undefined8 uStack_78;
  
  if (param_2 == 0) {
    return param_6;
  }
  iVar6 = (**(code **)(*(long *)param_4 + 0x38))(param_4);
  uVar8 = (**(code **)(*(long *)param_4 + 0x48))(param_4);
  this_00 = *(Zone **)(param_5 + 0x448);
  if (iVar6 == 0) {
    local_b0 = *(int *)(param_5 + 8);
    if (local_b0 < 0xffff) {
      *(int *)(param_5 + 8) = local_b0 + 1;
    }
    else {
      param_5[0x31] = (RegExpCompiler)0x1;
    }
LAB_01536a80:
    bVar4 = true;
    if ((param_1 < 1) && (param_2 == 0x7fffffff)) {
      bVar4 = false;
      bVar5 = false;
      bVar1 = false;
      iVar15 = -1;
      goto LAB_01536bb0;
    }
  }
  else {
    local_b0 = -1;
    if ((param_5[0x33] == (RegExpCompiler)0x0) || ((int)uVar8 != -1)) goto LAB_01536a80;
    iVar7 = *(int *)(param_5 + 0x38);
    iVar15 = param_1;
    if (param_2 - param_1 != 0) {
      iVar15 = param_1 + 1;
    }
    if (iVar7 < 7) {
      iVar2 = 7;
      if (iVar15 < 7) {
        iVar2 = iVar7 * iVar15;
      }
      bVar4 = iVar7 * iVar15 < 7 && iVar15 < 7;
      *(int *)(param_5 + 0x38) = iVar2;
    }
    else {
      bVar4 = false;
    }
    if (param_1 - 1U < 3) {
      if (bVar4) {
        if (param_2 != 0x7fffffff) {
          param_2 = param_2 - param_1;
        }
        pRVar9 = (RegExpNode *)ToNode(0,param_2,param_3,param_4,param_5,param_6,true);
        do {
          pRVar9 = (RegExpNode *)(**(code **)(*(long *)param_4 + 0x18))(param_4,param_5,pRVar9);
          param_1 = param_1 + -1;
        } while (param_1 != 0);
LAB_01536b2c:
        *(int *)(param_5 + 0x38) = iVar7;
        return pRVar9;
      }
    }
    else {
      local_b0 = -1;
      *(int *)(param_5 + 0x38) = iVar7;
      if ((param_1 != 0) || (3 < param_2)) goto LAB_01536a80;
      if ((iVar7 < 7) && (*(int *)(param_5 + 0x38) = iVar7 * param_2, iVar7 * param_2 < 7)) {
        pRVar10 = param_6;
        pRVar9 = param_6;
        if (0 < param_2) {
          do {
            pRVar9 = *(RegExpNode **)(this_00 + 0x10);
            if ((ulong)(*(long *)(this_00 + 0x18) - (long)pRVar9) < 0x48) {
              pRVar9 = (RegExpNode *)Zone::NewExpand(this_00,0x48);
            }
            else {
              *(RegExpNode **)(this_00 + 0x10) = pRVar9 + 0x48;
            }
            *(undefined ***)pRVar9 = &PTR__RegExpNode_01cc8800;
            *(undefined8 *)(pRVar9 + 8) = 0;
            *(undefined8 *)(pRVar9 + 0x10) = 0;
            *(undefined8 *)(pRVar9 + 0x18) = 0;
            *(undefined8 *)(pRVar9 + 0x28) = 0;
            *(Zone **)(pRVar9 + 0x30) = this_00;
            *(undefined8 *)(pRVar9 + 0x20) = 0;
            plVar11 = *(long **)(this_00 + 0x10);
            lVar14 = *(long *)(this_00 + 0x18);
            if ((ulong)(lVar14 - (long)plVar11) < 0x10) {
              plVar11 = (long *)Zone::NewExpand(this_00,0x10);
              plVar12 = *(long **)(this_00 + 0x10);
              lVar14 = *(long *)(this_00 + 0x18);
            }
            else {
              plVar12 = plVar11 + 2;
              *(long **)(this_00 + 0x10) = plVar12;
            }
            if ((ulong)(lVar14 - (long)plVar12) < 0x20) {
              plVar12 = (long *)Zone::NewExpand(this_00,0x20);
            }
            else {
              *(long **)(this_00 + 0x10) = plVar12 + 4;
            }
            *plVar11 = (long)plVar12;
            plVar11[1] = 2;
            *(long **)(pRVar9 + 0x38) = plVar11;
            *(undefined2 *)(pRVar9 + 0x40) = 0;
            if (param_3) {
              uVar8 = (**(code **)(*(long *)param_4 + 0x18))(param_4,param_5,pRVar10);
              ChoiceNode::AddAlternative(pRVar9,uVar8,0);
              pRVar10 = param_6;
            }
            else {
              ChoiceNode::AddAlternative(pRVar9,param_6,0);
              pRVar10 = (RegExpNode *)
                        (**(code **)(*(long *)param_4 + 0x18))(param_4,param_5,pRVar10);
            }
            ChoiceNode::AddAlternative(pRVar9,pRVar10,0);
            if ((param_7) && (param_5[0x34] == (RegExpCompiler)0x0)) {
              pRVar9[0x40] = (RegExpNode)0x1;
            }
            param_2 = param_2 + -1;
            pRVar10 = pRVar9;
          } while (param_2 != 0);
        }
        goto LAB_01536b2c;
      }
    }
    bVar4 = 0 < param_1 || param_2 != 0x7fffffff;
    *(int *)(param_5 + 0x38) = iVar7;
    local_b0 = -1;
  }
  bVar5 = param_2 != 0x7fffffff;
  bVar1 = 0 < param_1;
  iVar15 = *(int *)(param_5 + 8);
  if (iVar15 < 0xffff) {
    *(int *)(param_5 + 8) = iVar15 + 1;
  }
  else {
    param_5[0x31] = (RegExpCompiler)0x1;
  }
LAB_01536bb0:
  pRVar9 = *(RegExpNode **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pRVar9) < 0x60) {
    pRVar9 = (RegExpNode *)Zone::NewExpand(this_00,0x60);
  }
  else {
    *(RegExpNode **)(this_00 + 0x10) = pRVar9 + 0x60;
  }
  iVar7 = (**(code **)(*(long *)param_4 + 0x38))(param_4);
  RVar3 = param_5[0x34];
  *(undefined8 *)(pRVar9 + 0x10) = 0;
  *(undefined8 *)(pRVar9 + 0x18) = 0;
  *(undefined8 *)(pRVar9 + 0x28) = 0;
  *(Zone **)(pRVar9 + 0x30) = this_00;
  *(undefined8 *)(pRVar9 + 0x20) = 0;
  *(undefined ***)pRVar9 = &PTR__RegExpNode_01cc8800;
  *(undefined8 *)(pRVar9 + 8) = 0;
  plVar11 = *(long **)(this_00 + 0x10);
  lVar14 = *(long *)(this_00 + 0x18);
  if ((ulong)(lVar14 - (long)plVar11) < 0x10) {
    plVar11 = (long *)Zone::NewExpand(this_00,0x10);
    plVar12 = *(long **)(this_00 + 0x10);
    lVar14 = *(long *)(this_00 + 0x18);
  }
  else {
    plVar12 = plVar11 + 2;
    *(long **)(this_00 + 0x10) = plVar12;
  }
  if ((ulong)(lVar14 - (long)plVar12) < 0x20) {
    plVar12 = (long *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar12 + 4;
  }
  *plVar11 = (long)plVar12;
  plVar11[1] = 2;
  *(long **)(pRVar9 + 0x38) = plVar11;
  *(undefined2 *)(pRVar9 + 0x40) = 0;
  *(undefined ***)pRVar9 = &PTR__RegExpNode_01cc88f0;
  *(undefined8 *)(pRVar9 + 0x48) = 0;
  *(undefined8 *)(pRVar9 + 0x50) = 0;
  pRVar9[0x58] = (RegExpNode)(iVar7 == 0);
  *(RegExpCompiler *)(pRVar9 + 0x59) = RVar3;
  pRVar9[0x5a] = (RegExpNode)0x0;
  *(int *)(pRVar9 + 0x5c) = param_1;
  if ((param_7) && (param_5[0x34] == (RegExpCompiler)0x0)) {
    pRVar9[0x40] = (RegExpNode)0x1;
  }
  pRVar10 = pRVar9;
  if (bVar4) {
    pRVar10 = (RegExpNode *)ActionNode::IncrementRegister(iVar15,pRVar9);
  }
  if (iVar6 == 0) {
    pRVar10 = (RegExpNode *)ActionNode::EmptyMatchCheck(local_b0,iVar15,param_1,pRVar10);
  }
  pRVar10 = (RegExpNode *)(**(code **)(*(long *)param_4 + 0x18))(param_4,param_5,pRVar10);
  if (iVar6 == 0) {
    pRVar10 = (RegExpNode *)ActionNode::StorePosition(local_b0,false,pRVar10);
  }
  if ((int)uVar8 != -1) {
    pRVar10 = (RegExpNode *)ActionNode::ClearCaptures(uVar8,pRVar10);
  }
  uStack_78 = 0;
  local_80 = pRVar10;
  if (bVar5) {
    pGVar13 = *(Guard **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pGVar13) < 0x10) {
      pGVar13 = (Guard *)Zone::NewExpand(this_00,0x10);
    }
    else {
      *(Guard **)(this_00 + 0x10) = pGVar13 + 0x10;
    }
    *(int *)pGVar13 = iVar15;
    *(undefined4 *)(pGVar13 + 4) = 0;
    *(int *)(pGVar13 + 8) = param_2;
    GuardedAlternative::AddGuard((GuardedAlternative *)&local_80,pGVar13,this_00);
  }
  uStack_88 = 0;
  local_90 = param_6;
  if (bVar1) {
    this = *(Zone **)(param_5 + 0x448);
    pGVar13 = *(Guard **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)pGVar13) < 0x10) {
      pGVar13 = (Guard *)Zone::NewExpand(this,0x10);
    }
    else {
      *(Guard **)(this + 0x10) = pGVar13 + 0x10;
    }
    *(int *)pGVar13 = iVar15;
    *(undefined4 *)(pGVar13 + 4) = 1;
    *(int *)(pGVar13 + 8) = param_1;
    GuardedAlternative::AddGuard((GuardedAlternative *)&local_90,pGVar13,this_00);
  }
  if (param_3) {
    LoopChoiceNode::AddLoopAlternative((LoopChoiceNode *)pRVar9,local_80,uStack_78);
    LoopChoiceNode::AddContinueAlternative((LoopChoiceNode *)pRVar9,local_90,uStack_88);
  }
  else {
    LoopChoiceNode::AddContinueAlternative((LoopChoiceNode *)pRVar9,local_90,uStack_88);
    LoopChoiceNode::AddLoopAlternative((LoopChoiceNode *)pRVar9,local_80,uStack_78);
  }
  if (bVar4) {
    pRVar9 = (RegExpNode *)ActionNode::SetRegisterForLoop(iVar15,0,pRVar9);
  }
  return pRVar9;
}

