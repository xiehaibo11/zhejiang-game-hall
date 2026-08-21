
void FUN_015394a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,undefined4 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  RegExpNode *pRVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Zone *pZVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x448);
  lVar1 = v8::internal::TextNode::CreateForCharacterRanges
                    (uVar6,param_3,param_5 & 1,param_4,param_6);
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == -1) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 < 0xffff) {
      *(int *)(param_1 + 8) = iVar4 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0xc) = iVar4;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 < 0xffff) {
      *(int *)(param_1 + 8) = iVar5 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0x10) = iVar5;
  }
  pZVar7 = *(Zone **)(lVar1 + 0x30);
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
  *(undefined4 *)(puVar2 + 7) = 2;
  *(undefined4 *)((long)puVar2 + 0x44) = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(int *)((long)puVar2 + 0x3c) = iVar4;
  *(int *)(puVar2 + 8) = iVar5;
  *puVar2 = &PTR__RegExpNode_01cc8798;
  puVar2[1] = 0;
  uVar6 = v8::internal::TextNode::CreateForCharacterRanges
                    (uVar6,param_2,~param_5 & 1,puVar2,param_6);
  pZVar7 = *(Zone **)(lVar1 + 0x30);
  pRVar3 = *(RegExpNode **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pRVar3) < 0x48) {
    pRVar3 = (RegExpNode *)v8::internal::Zone::NewExpand(pZVar7,0x48);
  }
  else {
    *(RegExpNode **)(pZVar7 + 0x10) = pRVar3 + 0x48;
  }
  v8::internal::NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode
            ((NegativeLookaroundChoiceNode *)pRVar3,uVar6,0,lVar1,0,pZVar7);
  v8::internal::ActionNode::BeginSubmatch(iVar4,iVar5,pRVar3);
  return;
}

