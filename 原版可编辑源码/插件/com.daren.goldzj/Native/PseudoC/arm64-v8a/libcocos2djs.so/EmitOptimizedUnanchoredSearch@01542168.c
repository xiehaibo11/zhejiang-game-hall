
/* v8::internal::ChoiceNode::EmitOptimizedUnanchoredSearch(v8::internal::RegExpCompiler*,
   v8::internal::Trace*) */

uint v8::internal::ChoiceNode::EmitOptimizedUnanchoredSearch(RegExpCompiler *param_1,Trace *param_2)

{
  long *plVar1;
  RegExpCompiler *pRVar2;
  Zone *this;
  uint uVar3;
  long lVar4;
  RegExpMacroAssembler *pRVar5;
  BoyerMooreLookahead *this_00;
  undefined8 uVar6;
  
  if (*(int *)((long)*(long **)(param_1 + 0x38) + 0xc) == 2) {
    lVar4 = **(long **)(param_1 + 0x38);
    plVar1 = *(long **)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
    if (((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) &&
       (pRVar2 = (RegExpCompiler *)(**(code **)(*plVar1 + 0x40))(plVar1,param_2), pRVar2 == param_1)
       ) {
      this_00 = *(BoyerMooreLookahead **)(param_1 + 0x20);
      pRVar5 = *(RegExpMacroAssembler **)(param_2 + 0x28);
      if (this_00 == (BoyerMooreLookahead *)0x0) {
        uVar3 = (uint)(byte)param_1[0x1a];
        if (7 < uVar3) {
          uVar3 = 8;
        }
        if (uVar3 == 0) {
          return 0;
        }
        this = *(Zone **)(param_1 + 0x30);
        uVar6 = *(undefined8 *)(pRVar5 + 0x18);
        this_00 = *(BoyerMooreLookahead **)(this + 0x10);
        if ((ulong)(*(long *)(this + 0x18) - (long)this_00) < 0x20) {
          this_00 = (BoyerMooreLookahead *)Zone::NewExpand(this,0x20);
        }
        else {
          *(BoyerMooreLookahead **)(this + 0x10) = this_00 + 0x20;
        }
        BoyerMooreLookahead::BoyerMooreLookahead
                  (this_00,uVar3,(RegExpCompiler *)param_2,*(Zone **)(param_1 + 0x30));
        (**(code **)(**(long **)**(undefined8 **)(param_1 + 0x38) + 0x48))
                  (*(long **)**(undefined8 **)(param_1 + 0x38),uVar6,0,200,this_00,0);
        if (this_00 == (BoyerMooreLookahead *)0x0) {
          return uVar3;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      BoyerMooreLookahead::EmitSkipInstructions(this_00,pRVar5);
      return uVar3;
    }
  }
  return 0xffffffff;
}

