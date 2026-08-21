
/* btDbvt::countLeaves(btDbvtNode const*) */

int btDbvt::countLeaves(btDbvtNode *param_1)

{
  btDbvtNode *pbVar1;
  int iVar2;
  btDbvtNode *pbVar3;
  int iVar4;
  
  if (*(btDbvtNode **)(param_1 + 0x30) == (btDbvtNode *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 1;
    pbVar3 = *(btDbvtNode **)(param_1 + 0x30);
    do {
      iVar2 = countLeaves(*(btDbvtNode **)(param_1 + 0x28));
      pbVar1 = pbVar3 + 0x30;
      iVar4 = iVar2 + iVar4;
      param_1 = pbVar3;
      pbVar3 = *(btDbvtNode **)pbVar1;
    } while (*(btDbvtNode **)pbVar1 != (btDbvtNode *)0x0);
  }
  return iVar4;
}

