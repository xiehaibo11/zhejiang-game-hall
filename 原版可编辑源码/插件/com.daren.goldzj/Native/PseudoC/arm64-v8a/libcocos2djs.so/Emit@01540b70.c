
/* v8::internal::LoopChoiceNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall
v8::internal::LoopChoiceNode::Emit(LoopChoiceNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  LoopChoiceNode *pLVar4;
  int iVar5;
  LoopChoiceNode *pLVar6;
  int iVar7;
  int iVar8;
  
  pLVar6 = *(LoopChoiceNode **)(param_2 + 0x18);
  if (pLVar6 != this) {
    if (((((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_2 + 8) == 0)) &&
         (*(int *)param_2 == 0)) &&
        ((*(int *)(param_2 + 0x28) == 0 && (*(int *)(param_2 + 0x2c) == 0)))) &&
       ((*(int *)(param_2 + 0x30) == 0 && (*(int *)(param_2 + 0x5c) == -1)))) {
      ChoiceNode::Emit((ChoiceNode *)this,param_1,param_2);
      return;
    }
    Trace::Flush(param_2,param_1,(RegExpNode *)this);
    return;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  pLVar4 = *(LoopChoiceNode **)**(undefined8 **)(this + 0x38);
  if (pLVar4 == pLVar6) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar8 = 0x66;
    do {
      iVar8 = iVar8 + -1;
      iVar5 = -0x80000000;
      if ((iVar8 == 0) ||
         (iVar1 = (**(code **)(*(long *)pLVar4 + 0x38))(pLVar4), iVar1 == -0x80000000))
      goto LAB_01540c6c;
      pLVar4 = *(LoopChoiceNode **)(pLVar4 + 0x38);
      iVar7 = iVar1 + iVar7;
    } while (pLVar4 != pLVar6);
  }
  uVar2 = (**(code **)(*(long *)this + 0x60))(this);
  iVar5 = -iVar7;
  if ((uVar2 & 1) == 0) {
    iVar5 = iVar7;
  }
LAB_01540c6c:
  (**(code **)(*plVar3 + 0x28))(plVar3,iVar5);
                    /* WARNING: Could not recover jumptable at 0x01540ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xe0))(plVar3,*(undefined8 *)(param_2 + 0x20));
  return;
}

