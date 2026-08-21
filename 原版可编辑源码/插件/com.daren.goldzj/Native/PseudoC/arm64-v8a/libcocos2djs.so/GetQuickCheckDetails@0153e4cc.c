
/* v8::internal::LoopChoiceNode::GetQuickCheckDetails(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void __thiscall
v8::internal::LoopChoiceNode::GetQuickCheckDetails
          (LoopChoiceNode *this,QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,
          bool param_4)

{
  long lVar1;
  LoopChoiceNode LVar2;
  bool bVar3;
  
  if ((this[0x58] == (LoopChoiceNode)0x0) && (((byte)this[0x19] >> 6 & 1) == 0)) {
    if (param_4) {
      bVar3 = true;
      LVar2 = this[0x5a];
    }
    else {
      bVar3 = this[0x40] != (LoopChoiceNode)0x0;
      LVar2 = this[0x5a];
    }
    if ((LVar2 != (LoopChoiceNode)0x0) && (0 < *(int *)(this + 0x5c))) {
      lVar1 = 0x1a;
      if (bVar3 != false) {
        lVar1 = 0x1b;
      }
      if (*(byte *)(*(long *)(this + 0x50) + 0x1b) <
          *(byte *)((long)*(long **)(this + 0x48) + lVar1)) {
        *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + -1;
        (**(code **)(**(long **)(this + 0x48) + 0x28))();
        *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
        return;
      }
    }
    this[0x19] = (LoopChoiceNode)((byte)this[0x19] | 0x40);
    ChoiceNode::GetQuickCheckDetails((ChoiceNode *)this,param_1,param_2,param_3,bVar3);
    this[0x19] = (LoopChoiceNode)((byte)this[0x19] & 0xbf);
  }
  return;
}

