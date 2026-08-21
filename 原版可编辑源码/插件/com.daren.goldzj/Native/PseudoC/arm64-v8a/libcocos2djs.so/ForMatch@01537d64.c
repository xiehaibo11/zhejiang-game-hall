
/* v8::internal::RegExpLookaround::Builder::ForMatch(v8::internal::RegExpNode*) */

void __thiscall v8::internal::RegExpLookaround::Builder::ForMatch(Builder *this,RegExpNode *param_1)

{
  int iVar1;
  NegativeLookaroundChoiceNode *pNVar2;
  int iVar3;
  Zone *this_00;
  
  if (*this == (Builder)0x0) {
    this_00 = *(Zone **)(*(long *)(this + 0x10) + 0x30);
    pNVar2 = *(NegativeLookaroundChoiceNode **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pNVar2) < 0x48) {
      pNVar2 = (NegativeLookaroundChoiceNode *)Zone::NewExpand(this_00,0x48);
    }
    else {
      *(NegativeLookaroundChoiceNode **)(this_00 + 0x10) = pNVar2 + 0x48;
    }
    NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode
              (pNVar2,param_1,0,*(undefined8 *)(this + 0x10),0,this_00);
    iVar1 = *(int *)(this + 0x18);
    iVar3 = *(int *)(this + 0x1c);
  }
  else {
    iVar1 = *(int *)(this + 0x18);
    iVar3 = *(int *)(this + 0x1c);
    pNVar2 = (NegativeLookaroundChoiceNode *)param_1;
  }
  ActionNode::BeginSubmatch(iVar1,iVar3,(RegExpNode *)pNVar2);
  return;
}

