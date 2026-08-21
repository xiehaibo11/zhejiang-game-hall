
/* v8::internal::RegExpCompiler::OptionallyStepBackToLeadSurrogate(v8::internal::RegExpCompiler*,
   v8::internal::RegExpNode*, v8::base::Flags<v8::internal::JSRegExp::Flag, int>) */

undefined8 *
v8::internal::RegExpCompiler::OptionallyStepBackToLeadSurrogate
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  RegExpNode *pRVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  Zone *this;
  int iVar9;
  int iVar10;
  Builder aBStack_80 [8];
  undefined8 local_78;
  
  this = *(Zone **)(param_1 + 0x448);
  puVar3 = *(undefined8 **)(this + 0x10);
  lVar8 = *(long *)(this + 0x18);
  if ((ulong)(lVar8 - (long)puVar3) < 0x10) {
    puVar3 = (undefined8 *)Zone::NewExpand(this,0x10);
    puVar4 = *(undefined8 **)(this + 0x10);
    lVar8 = *(long *)(this + 0x18);
  }
  else {
    puVar4 = puVar3 + 2;
    *(undefined8 **)(this + 0x10) = puVar4;
  }
  if ((ulong)(lVar8 - (long)puVar4) < 8) {
    puVar4 = (undefined8 *)Zone::NewExpand(this,8);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar4 + 1;
  }
  *puVar3 = puVar4;
  puVar3[1] = 0x100000001;
  *puVar4 = 0xdbff0000d800;
  puVar4 = *(undefined8 **)(this + 0x10);
  lVar8 = *(long *)(this + 0x18);
  if ((ulong)(lVar8 - (long)puVar4) < 0x10) {
    puVar4 = (undefined8 *)Zone::NewExpand(this,0x10);
    puVar5 = *(undefined8 **)(this + 0x10);
    lVar8 = *(long *)(this + 0x18);
  }
  else {
    puVar5 = puVar4 + 2;
    *(undefined8 **)(this + 0x10) = puVar5;
  }
  if ((ulong)(lVar8 - (long)puVar5) < 8) {
    puVar5 = (undefined8 *)Zone::NewExpand(this,8);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar5 + 1;
  }
  *puVar4 = puVar5;
  puVar4[1] = 0x100000001;
  *puVar5 = 0xdfff0000dc00;
  puVar5 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar5) < 0x48) {
    puVar5 = (undefined8 *)Zone::NewExpand(this,0x48);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar5 + 9;
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[5] = 0;
  puVar5[6] = this;
  puVar5[4] = 0;
  *puVar5 = &PTR__RegExpNode_01cc8800;
  puVar5[1] = 0;
  plVar6 = *(long **)(this + 0x10);
  lVar8 = *(long *)(this + 0x18);
  if ((ulong)(lVar8 - (long)plVar6) < 0x10) {
    plVar6 = (long *)Zone::NewExpand(this,0x10);
    plVar7 = *(long **)(this + 0x10);
    lVar8 = *(long *)(this + 0x18);
  }
  else {
    plVar7 = plVar6 + 2;
    *(long **)(this + 0x10) = plVar7;
  }
  if ((ulong)(lVar8 - (long)plVar7) < 0x20) {
    plVar7 = (long *)Zone::NewExpand(this,0x20);
  }
  else {
    *(long **)(this + 0x10) = plVar7 + 4;
  }
  *plVar6 = (long)plVar7;
  plVar6[1] = 2;
  puVar5[7] = plVar6;
  *(undefined2 *)(puVar5 + 8) = 0;
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 == -1) {
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 < 0xffff) {
      *(int *)(param_1 + 8) = iVar9 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0xc) = iVar9;
  }
  iVar10 = *(int *)(param_1 + 0x10);
  if (iVar10 == -1) {
    iVar10 = *(int *)(param_1 + 8);
    if (iVar10 < 0xffff) {
      *(int *)(param_1 + 8) = iVar10 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(int *)(param_1 + 0x10) = iVar10;
  }
  pRVar1 = (RegExpNode *)TextNode::CreateForCharacterRanges(this,puVar3,1,param_2,param_3);
  RegExpLookaround::Builder::Builder(aBStack_80,true,pRVar1,iVar9,iVar10,0,0);
  pRVar1 = (RegExpNode *)TextNode::CreateForCharacterRanges(this,puVar4,0,local_78,param_3);
  uVar2 = RegExpLookaround::Builder::ForMatch(aBStack_80,pRVar1);
  ChoiceNode::AddAlternative(puVar5,uVar2,0);
  ChoiceNode::AddAlternative(puVar5,param_2,0);
  return puVar5;
}

