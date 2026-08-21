
undefined8 FUN_0174107c(long *param_1,Node *param_2,long param_3,ulong *param_4)

{
  Node *pNVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  Node *pNVar8;
  long lVar9;
  
  iVar5 = v8::internal::compiler::Node::UseCount(param_2);
  if (1 < iVar5) {
    return 1;
  }
  lVar9 = 0;
  pNVar1 = param_2 + 0x20;
  while( true ) {
    uVar3 = *(uint *)(param_2 + 0x14) & 0xf000000;
    if (uVar3 == 0xf000000) {
      uVar4 = *(uint *)(*(long *)pNVar1 + 8);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar4 <= lVar9) break;
    pNVar8 = pNVar1;
    if (uVar3 == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    plVar7 = *(long **)(pNVar8 + lVar9 * 8);
    if (*(short *)(*plVar7 + 0x10) == 0x2a) {
      uVar6 = FUN_0174107c(param_1,plVar7,param_3,param_4);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
    else if (plVar7 == param_1) {
      if (7 < *param_4) {
        return 0;
      }
      puVar2 = (undefined8 *)(param_3 + *param_4 * 0x10);
      *puVar2 = param_2;
      *(int *)(puVar2 + 1) = (int)lVar9;
      *param_4 = *param_4 + 1;
    }
    lVar9 = lVar9 + 1;
  }
  return 1;
}

