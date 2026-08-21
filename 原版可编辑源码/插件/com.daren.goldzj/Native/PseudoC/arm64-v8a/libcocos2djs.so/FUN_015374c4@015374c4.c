
undefined8 * FUN_015374c4(long param_1,RegExpNode *param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  NegativeLookaroundChoiceNode *pNVar2;
  RegExpNode *pRVar3;
  undefined8 *puVar4;
  ZoneList *pZVar5;
  ZoneList *pZVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  Zone *this;
  int iVar11;
  int iVar12;
  int iVar13;
  Zone *pZVar14;
  
  this = *(Zone **)(param_1 + 0x448);
  pZVar5 = *(ZoneList **)(this + 0x10);
  lVar10 = *(long *)(this + 0x18);
  if ((ulong)(lVar10 - (long)pZVar5) < 0x10) {
    pZVar5 = (ZoneList *)v8::internal::Zone::NewExpand(this,0x10);
    pZVar6 = *(ZoneList **)(this + 0x10);
    lVar10 = *(long *)(this + 0x18);
  }
  else {
    pZVar6 = pZVar5 + 0x10;
    *(ZoneList **)(this + 0x10) = pZVar6;
  }
  if ((ulong)(lVar10 - (long)pZVar6) < 0x10) {
    pZVar6 = (ZoneList *)v8::internal::Zone::NewExpand(this,0x10);
  }
  else {
    *(ZoneList **)(this + 0x10) = pZVar6 + 0x10;
  }
  *(ZoneList **)pZVar5 = pZVar6;
  *(undefined8 *)(pZVar5 + 8) = 2;
  v8::internal::CharacterRange::AddClassEscape('w',pZVar5,true,this);
  iVar12 = *(int *)(param_1 + 0xc);
  if (iVar12 == -1) {
    iVar12 = *(int *)(param_1 + 8);
    if (iVar12 < 0xffff) {
      *(int *)(param_1 + 8) = iVar12 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0xc) = iVar12;
  }
  iVar13 = *(int *)(param_1 + 0x10);
  if (iVar13 == -1) {
    iVar13 = *(int *)(param_1 + 8);
    if (iVar13 < 0xffff) {
      *(int *)(param_1 + 8) = iVar13 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0x10) = iVar13;
  }
  puVar7 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar7) < 0x48) {
    puVar7 = (undefined8 *)v8::internal::Zone::NewExpand(this,0x48);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar7 + 9;
  }
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[5] = 0;
  puVar7[6] = this;
  puVar7[4] = 0;
  *puVar7 = &PTR__RegExpNode_01cc8800;
  puVar7[1] = 0;
  plVar8 = *(long **)(this + 0x10);
  lVar10 = *(long *)(this + 0x18);
  if ((ulong)(lVar10 - (long)plVar8) < 0x10) {
    plVar8 = (long *)v8::internal::Zone::NewExpand(this,0x10);
    plVar9 = *(long **)(this + 0x10);
    lVar10 = *(long *)(this + 0x18);
  }
  else {
    plVar9 = plVar8 + 2;
    *(long **)(this + 0x10) = plVar9;
  }
  if ((ulong)(lVar10 - (long)plVar9) < 0x20) {
    plVar9 = (long *)v8::internal::Zone::NewExpand(this,0x20);
  }
  else {
    *(long **)(this + 0x10) = plVar9 + 4;
  }
  *plVar8 = (long)plVar9;
  plVar8[1] = 2;
  puVar7[7] = plVar8;
  *(undefined2 *)(puVar7 + 8) = 0;
  iVar11 = 2;
  do {
    if (iVar11 == 2) {
      uVar1 = v8::internal::ActionNode::PositiveSubmatchSuccess(iVar12,iVar13,0,0,param_2);
      pNVar2 = (NegativeLookaroundChoiceNode *)
               v8::internal::TextNode::CreateForCharacterRanges(this,pZVar5,1,uVar1,param_4);
    }
    else {
      pZVar14 = *(Zone **)(param_2 + 0x30);
      puVar4 = *(undefined8 **)(pZVar14 + 0x10);
      if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar4) < 0x50) {
        puVar4 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar14,0x50);
      }
      else {
        *(undefined8 **)(pZVar14 + 0x10) = puVar4 + 10;
      }
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[5] = 0;
      puVar4[6] = pZVar14;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 7) = 2;
      *(int *)((long)puVar4 + 0x3c) = iVar12;
      *(undefined4 *)((long)puVar4 + 0x44) = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      *puVar4 = &PTR__RegExpNode_01cc8798;
      puVar4[1] = 0;
      *(int *)(puVar4 + 8) = iVar13;
      uVar1 = v8::internal::TextNode::CreateForCharacterRanges(this,pZVar5,1,puVar4,param_4);
      pZVar14 = *(Zone **)(param_2 + 0x30);
      pNVar2 = *(NegativeLookaroundChoiceNode **)(pZVar14 + 0x10);
      if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pNVar2) < 0x48) {
        pNVar2 = (NegativeLookaroundChoiceNode *)v8::internal::Zone::NewExpand(pZVar14,0x48);
      }
      else {
        *(NegativeLookaroundChoiceNode **)(pZVar14 + 0x10) = pNVar2 + 0x48;
      }
      v8::internal::NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode
                (pNVar2,uVar1,0,param_2,0,pZVar14);
    }
    pRVar3 = (RegExpNode *)
             v8::internal::ActionNode::BeginSubmatch(iVar12,iVar13,(RegExpNode *)pNVar2);
    if ((param_3 == 4) == (iVar11 == 2)) {
      pZVar14 = *(Zone **)(pRVar3 + 0x30);
      puVar4 = *(undefined8 **)(pZVar14 + 0x10);
      if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar4) < 0x50) {
        puVar4 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar14,0x50);
      }
      else {
        *(undefined8 **)(pZVar14 + 0x10) = puVar4 + 10;
      }
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[5] = 0;
      puVar4[6] = pZVar14;
      *(undefined4 *)((long)puVar4 + 0x44) = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      *puVar4 = &PTR__RegExpNode_01cc8798;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 7) = 2;
      *(int *)((long)puVar4 + 0x3c) = iVar12;
      puVar4[4] = 0;
      *(int *)(puVar4 + 8) = iVar13;
      uVar1 = v8::internal::TextNode::CreateForCharacterRanges(this,pZVar5,0,puVar4,param_4);
      pZVar14 = *(Zone **)(pRVar3 + 0x30);
      pNVar2 = *(NegativeLookaroundChoiceNode **)(pZVar14 + 0x10);
      if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pNVar2) < 0x48) {
        pNVar2 = (NegativeLookaroundChoiceNode *)v8::internal::Zone::NewExpand(pZVar14,0x48);
      }
      else {
        *(NegativeLookaroundChoiceNode **)(pZVar14 + 0x10) = pNVar2 + 0x48;
      }
      v8::internal::NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode
                (pNVar2,uVar1,0,pRVar3,0,pZVar14);
    }
    else {
      uVar1 = v8::internal::ActionNode::PositiveSubmatchSuccess(iVar12,iVar13,0,0,pRVar3);
      pNVar2 = (NegativeLookaroundChoiceNode *)
               v8::internal::TextNode::CreateForCharacterRanges(this,pZVar5,0,uVar1,param_4);
    }
    uVar1 = v8::internal::ActionNode::BeginSubmatch(iVar12,iVar13,(RegExpNode *)pNVar2);
    v8::internal::ChoiceNode::AddAlternative(puVar7,uVar1,0);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return puVar7;
}

