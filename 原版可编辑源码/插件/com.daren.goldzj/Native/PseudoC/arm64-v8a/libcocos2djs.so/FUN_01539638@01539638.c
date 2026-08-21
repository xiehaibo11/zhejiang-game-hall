
void FUN_01539638(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                 undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  RegExpNode *pRVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  Zone *pZVar7;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x448);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 < 0xffff) {
      *(int *)(param_1 + 8) = iVar5 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0xc) = iVar5;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 < 0xffff) {
      *(int *)(param_1 + 8) = iVar6 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0x10) = iVar6;
  }
  pZVar7 = *(Zone **)(param_4 + 0x30);
  puVar2 = *(undefined8 **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar2) < 0x50) {
    puVar2 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar7,0x50);
  }
  else {
    *(undefined8 **)(pZVar7 + 0x10) = puVar2 + 10;
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[6] = pZVar7;
  puVar2[4] = 0;
  *(undefined4 *)((long)puVar2 + 0x44) = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(int *)((long)puVar2 + 0x3c) = iVar5;
  *(int *)(puVar2 + 8) = iVar6;
  *(undefined4 *)(puVar2 + 7) = 2;
  *puVar2 = &PTR__RegExpNode_01cc8798;
  puVar2[1] = 0;
  uVar1 = v8::internal::TextNode::CreateForCharacterRanges(uVar4,param_3,param_5 & 1,puVar2,param_6)
  ;
  pZVar7 = *(Zone **)(param_4 + 0x30);
  pRVar3 = *(RegExpNode **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pRVar3) < 0x48) {
    pRVar3 = (RegExpNode *)v8::internal::Zone::NewExpand(pZVar7,0x48);
  }
  else {
    *(RegExpNode **)(pZVar7 + 0x10) = pRVar3 + 0x48;
  }
  v8::internal::NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode
            ((NegativeLookaroundChoiceNode *)pRVar3,uVar1,0,param_4,0,pZVar7);
  uVar1 = v8::internal::ActionNode::BeginSubmatch(iVar5,iVar6,pRVar3);
  v8::internal::TextNode::CreateForCharacterRanges(uVar4,param_2,param_5 & 1,uVar1,param_6);
  return;
}

