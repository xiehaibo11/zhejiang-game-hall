
/* v8::internal::ChoiceNode::GreedyLoopTextLengthForAlternative(v8::internal::GuardedAlternative*)
    */

int __thiscall
v8::internal::ChoiceNode::GreedyLoopTextLengthForAlternative
          (ChoiceNode *this,GuardedAlternative *param_1)

{
  int iVar1;
  ulong uVar2;
  ChoiceNode *pCVar3;
  int iVar4;
  int iVar5;
  
  pCVar3 = *(ChoiceNode **)param_1;
  if (pCVar3 == this) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0x66;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return -0x80000000;
      }
      iVar1 = (**(code **)(*(long *)pCVar3 + 0x38))(pCVar3);
      if (iVar1 == -0x80000000) {
        return -0x80000000;
      }
      pCVar3 = *(ChoiceNode **)(pCVar3 + 0x38);
      iVar4 = iVar1 + iVar4;
    } while (pCVar3 != this);
  }
  uVar2 = (**(code **)(*(long *)this + 0x60))(this);
  iVar5 = -iVar4;
  if ((uVar2 & 1) == 0) {
    iVar5 = iVar4;
  }
  return iVar5;
}

