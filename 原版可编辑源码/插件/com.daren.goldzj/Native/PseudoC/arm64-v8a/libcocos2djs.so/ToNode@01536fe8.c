
/* v8::internal::RegExpAssertion::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*)
    */

undefined8 * __thiscall
v8::internal::RegExpAssertion::ToNode
          (RegExpAssertion *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  RegExpNode *pRVar4;
  long *plVar5;
  long *plVar6;
  ZoneList *pZVar7;
  ZoneList *pZVar8;
  RegExpCharacterClass *pRVar9;
  TextNode *this_00;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  int iVar14;
  
  switch(*(undefined4 *)(this + 8)) {
  case 0:
    pZVar3 = *(Zone **)(param_2 + 0x30);
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar13 = 4;
    break;
  case 1:
    pZVar3 = *(Zone **)(param_2 + 0x30);
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar13 = 1;
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 8);
    pZVar3 = *(Zone **)(param_1 + 0x448);
    if (iVar1 < 0xffff) {
      iVar14 = iVar1 + 1;
      *(int *)(param_1 + 8) = iVar14;
      if (iVar1 != 0xfffe) {
        *(int *)(param_1 + 8) = iVar1 + 2;
        goto LAB_01537200;
      }
      iVar14 = 0xffff;
    }
    else {
      param_1[0x31] = (RegExpCompiler)0x1;
      iVar14 = iVar1;
    }
    param_1[0x31] = (RegExpCompiler)0x1;
LAB_01537200:
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
    }
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[6] = pZVar3;
    puVar2[4] = 0;
    *puVar2 = &PTR__RegExpNode_01cc8800;
    puVar2[1] = 0;
    plVar5 = *(long **)(pZVar3 + 0x10);
    lVar12 = *(long *)(pZVar3 + 0x18);
    if ((ulong)(lVar12 - (long)plVar5) < 0x10) {
      plVar5 = (long *)Zone::NewExpand(pZVar3,0x10);
      plVar6 = *(long **)(pZVar3 + 0x10);
      lVar12 = *(long *)(pZVar3 + 0x18);
    }
    else {
      plVar6 = plVar5 + 2;
      *(long **)(pZVar3 + 0x10) = plVar6;
    }
    if ((ulong)(lVar12 - (long)plVar6) < 0x20) {
      plVar6 = (long *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(long **)(pZVar3 + 0x10) = plVar6 + 4;
    }
    *plVar5 = (long)plVar6;
    plVar5[1] = 2;
    puVar2[7] = plVar5;
    *(undefined2 *)(puVar2 + 8) = 0;
    pZVar7 = *(ZoneList **)(pZVar3 + 0x10);
    lVar12 = *(long *)(pZVar3 + 0x18);
    if ((ulong)(lVar12 - (long)pZVar7) < 0x10) {
      pZVar7 = (ZoneList *)Zone::NewExpand(pZVar3,0x10);
      pZVar8 = *(ZoneList **)(pZVar3 + 0x10);
      lVar12 = *(long *)(pZVar3 + 0x18);
    }
    else {
      pZVar8 = pZVar7 + 0x10;
      *(ZoneList **)(pZVar3 + 0x10) = pZVar8;
    }
    if ((ulong)(lVar12 - (long)pZVar8) < 0x18) {
      pZVar8 = (ZoneList *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(ZoneList **)(pZVar3 + 0x10) = pZVar8 + 0x18;
    }
    *(ZoneList **)pZVar7 = pZVar8;
    *(undefined8 *)(pZVar7 + 8) = 3;
    CharacterRange::AddClassEscape('n',pZVar7,pZVar3);
    pRVar9 = *(RegExpCharacterClass **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pRVar9) < 0x20) {
      pRVar9 = (RegExpCharacterClass *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(RegExpCharacterClass **)(pZVar3 + 0x10) = pRVar9 + 0x20;
    }
    *(undefined8 *)(pRVar9 + 0x18) = 0;
    *(undefined2 *)(pRVar9 + 0x10) = 0x6e;
    *(undefined ***)pRVar9 = &PTR__RegExpTree_01cc7550;
    *(undefined8 *)(pRVar9 + 8) = 0;
    this_00 = *(TextNode **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < 0x50) {
      this_00 = (TextNode *)Zone::NewExpand(pZVar3,0x50);
    }
    else {
      *(TextNode **)(pZVar3 + 0x10) = this_00 + 0x50;
    }
    pRVar4 = (RegExpNode *)ActionNode::PositiveSubmatchSuccess(iVar1,iVar14,0,-1,param_2);
    TextNode::TextNode(this_00,pRVar9,false,pRVar4);
    uVar11 = ActionNode::BeginSubmatch(iVar1,iVar14,(RegExpNode *)this_00);
    ChoiceNode::AddAlternative(puVar2,uVar11,0);
    pZVar3 = *(Zone **)(param_2 + 0x30);
    puVar10 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar10) < 0x48) {
      puVar10 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar10 + 9;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = uVar11;
    puVar10[7] = param_2;
    *puVar10 = &PTR__RegExpNode_01cc8660;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 8) = 0;
    ChoiceNode::AddAlternative(puVar2,puVar10,0);
    return puVar2;
  case 3:
    pZVar3 = *(Zone **)(param_2 + 0x30);
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = uVar11;
    puVar2[7] = param_2;
    *(undefined4 *)(puVar2 + 8) = 0;
    *puVar2 = &PTR__RegExpNode_01cc8660;
    puVar2[1] = 0;
    return puVar2;
  case 4:
    if ((~*(uint *)(this + 0xc) & 0x12) == 0) {
      uVar11 = 4;
LAB_01537134:
      puVar2 = (undefined8 *)FUN_015374c4(param_1,param_2,uVar11);
      return puVar2;
    }
    pZVar3 = *(Zone **)(param_2 + 0x30);
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar13 = 2;
    break;
  case 5:
    if ((~*(uint *)(this + 0xc) & 0x12) == 0) {
      uVar11 = 5;
      goto LAB_01537134;
    }
    pZVar3 = *(Zone **)(param_2 + 0x30);
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x48) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x48);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 9;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar13 = 3;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *puVar2 = &PTR__RegExpNode_01cc8660;
  puVar2[1] = 0;
  puVar2[6] = uVar11;
  puVar2[7] = param_2;
  *(undefined4 *)(puVar2 + 8) = uVar13;
  return puVar2;
}

